unsigned __int64 __fastcall sub_2CE670(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __m128i v4; // xmm0
  unsigned int default_encoding_idx; // r14d
  unsigned int v6; // r15d
  unsigned int i; // ebp
  const char *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r15
  const char *v13; // rax
  const char *v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  const char *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rbx
  const char *encoding_name; // rax
  const char *v23; // r15
  size_t v24; // rax
  size_t v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // rdi
  void *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rax
  __m128i v35; // [rsp+0h] [rbp-138h] BYREF
  __int64 v36; // [rsp+10h] [rbp-128h]
  _BYTE *v37; // [rsp+18h] [rbp-120h]
  __int64 v38; // [rsp+20h] [rbp-118h]
  size_t v39; // [rsp+28h] [rbp-110h]
  __m128i v40; // [rsp+30h] [rbp-108h] BYREF
  __int64 v41; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v42; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v43; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v44; // [rsp+68h] [rbp-D0h]
  _BYTE v45[48]; // [rsp+80h] [rbp-B8h] BYREF
  _DWORD v46[9]; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v47; // [rsp+D4h] [rbp-64h]
  int v48; // [rsp+E4h] [rbp-54h]
  __int64 v49; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v50; // [rsp+F8h] [rbp-40h]

  v2 = *(_BYTE *)(a1 + 1032) == 0;
  v38 = a1;
  v50 = __readfsqword(0x28u);
  if ( !v2 )
  {
    sub_534680(&qword_8CCB30, &off_861860, 4, 0);
    sub_539A10(a2, &qword_8CCB30);
  }
  sub_534680(&qword_8CCB10, &off_861620, 24, 0);
  sub_539A10(a2, &qword_8CCB10);
  v37 = v45;
  sub_531CA0(v45, a2, "Text/", 1);
  v4.m128i_i64[0] = 0;
  v41 = 0;
  v43 = 0;
  v42 = 0;
  v44 = 0;
  HIDWORD(v36) = get_encoding_qty();
  if ( SHIDWORD(v36) > 0 )
  {
    default_encoding_idx = get_default_encoding_idx(1);
    v6 = default_encoding_idx;
    for ( i = 0; ; i = v6 )
    {
      v20 = qalloc_or_throw(48);
      *(_DWORD *)(v20 + 8) = 1;
      v21 = (__int64 *)v20;
      *(_QWORD *)v20 = text_enc_ah_t___vtable;
      *(_QWORD *)(v20 + 16) = 0;
      *(_DWORD *)(v20 + 40) = i;
      *(_DWORD *)(v20 + 44) = v6;
      *(_OWORD *)(v20 + 24) = 0;
      if ( i )
      {
        encoding_name = (const char *)get_encoding_name(i);
        v23 = encoding_name;
        if ( encoding_name && (v24 = strlen(encoding_name), (v25 = v24) != 0) )
        {
          v32 = (void *)v21[2];
          v33 = v24 + 1;
          if ( v21[4] < v24 + 1 )
          {
            v39 = v24;
            v35.m128i_i64[0] = v24 + 1;
            v34 = qvector_reserve(v21 + 2, v32, v33, 1);
            v25 = v39;
            v33 = v35.m128i_i64[0];
            v21[2] = v34;
            v32 = (void *)v34;
          }
          v21[3] = v33;
          v35.m128i_i64[0] = v25;
          memmove(v32, v23, v25);
          *(_BYTE *)(v21[2] + v35.m128i_i64[0]) = 0;
        }
        else
        {
          v21[3] = 0;
        }
      }
      else
      {
        v35.m128i_i64[0] = v20 + 16;
        v8 = (const char *)get_encoding_name(v6);
        sub_169A50(v21 + 2, (__int64)"Database default (%s)", v8);
      }
      v10 = v42;
      v11 = v41;
      if ( *((_QWORD *)&v42 + 1) < (unsigned __int64)(v42 + 1) )
      {
        v41 = qvector_reserve(&v41, v41, v42 + 1, 24);
        v10 = v42;
        v11 = v41;
      }
      v12 = v11 + 24 * v10;
      *(_OWORD *)(v12 + 8) = 0;
      *(_QWORD *)v12 = 0;
      v49 = 0x1FFFFFFFFLL;
      v13 = &s1;
      *(_QWORD *)&v42 = v42 + 1;
      v48 = 0;
      memset(&v46[1], 0, 32);
      v47 = 0;
      v2 = v21[3] == 0;
      v46[0] = 64;
      if ( !v2 )
        v13 = (const char *)v21[2];
      *(_QWORD *)&v46[4] = v13;
      *(_QWORD *)&v46[6] = v21;
      sub_539470(
        a2,
        v46,
        "Text/",
        0,
        v12,
        v9,
        v35.m128i_i64[0],
        v35.m128i_i64[1],
        v36,
        v37,
        v38,
        v39,
        v40.m128i_i64[0],
        v40.m128i_i64[1]);
      v14 = &s1;
      if ( *(_QWORD *)(v12 + 8) )
        v14 = *(const char **)v12;
      v40.m128i_i64[0] = (__int64)v14;
      v15 = v43;
      v16 = v44;
      v40.m128i_i8[8] = 1;
      v17 = v44 + 1;
      if ( (unsigned __int64)&v40 < v43 || (unsigned __int64)&v40 >= v43 + 16LL * *((_QWORD *)&v44 + 1) )
      {
        if ( *((_QWORD *)&v44 + 1) < v17 )
        {
          v43 = qvector_reserve(&v43, v43, v44 + 1, 16);
          v15 = v43;
          v16 = v44;
        }
        v4 = _mm_load_si128(&v40);
        *(__m128i *)(v15 + 16 * v16) = v4;
      }
      else
      {
        v4 = _mm_load_si128(&v40);
        if ( *((_QWORD *)&v44 + 1) < v17 )
        {
          v35 = v4;
          v43 = qvector_reserve(&v43, v43, v44 + 1, 16);
          v15 = v43;
          v4 = _mm_load_si128(&v35);
          v16 = v44;
        }
        *(__m128i *)(v15 + 16 * v16) = v4;
      }
      *(_QWORD *)&v44 = v44 + 1;
      v18 = &s1;
      if ( *(_QWORD *)(v12 + 8) )
        v18 = *(const char **)v12;
      v40.m128i_i8[0] = 1;
      v19 = sub_534430(v18);
      if ( v19 )
        sub_537630(v19, 6, &v40);
      v6 = i + 1;
      if ( HIDWORD(v36) == i + 1 )
        break;
      while ( default_encoding_idx == v6 )
      {
        v6 = default_encoding_idx + 1;
        if ( HIDWORD(v36) == default_encoding_idx + 1 )
          goto LABEL_32;
      }
    }
  }
LABEL_32:
  sub_531B30(1, *(_QWORD *)(a2 + 8), &v43);
  sub_5392E0(a2, 0, 1);
  sub_5392A0(a2, "hexview:TextAddEnc", 0, 1);
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    *(double *)v4.m128i_i64 = qfree(v43, "hexview:TextAddEnc");
  }
  v26 = v41;
  if ( v41 )
  {
    v27 = v42;
    if ( (_QWORD)v42 )
    {
      v28 = 0;
      do
      {
        v29 = (__int64 *)(v26 + 24 * v28);
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v30, "hexview:TextAddEnc");
          v26 = v41;
        }
        ++v28;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v42 = 0;
    *(double *)v4.m128i_i64 = qfree(v26, "hexview:TextAddEnc");
  }
  sub_531D60(v37);
  sub_5392A0(a2, "hexview:EditOrApplyChanges", 0, 1);
  sub_5392E0(a2, 0, 1);
  sub_5392A0(a2, "hexview:Save", 0, 1);
  return sub_206150(v38, (QT::QWidget **)a2, *(double *)v4.m128i_i64);
}
