__int64 __fastcall sub_7D1F0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  size_t v4; // r13
  __int64 v5; // r12
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v10; // r14
  __int64 v11; // r12
  const char *v12; // rbp
  size_t v13; // rax
  __int64 v14; // rbx
  size_t v15; // r15
  unsigned __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-C8h]
  __int64 (__fastcall ***v24)(); // [rsp+8h] [rbp-C0h]
  __int64 v25; // [rsp+10h] [rbp-B8h]
  __int64 *v26; // [rsp+18h] [rbp-B0h]
  __int64 (__fastcall **v27)(); // [rsp+20h] [rbp-A8h] BYREF
  int v28; // [rsp+28h] [rbp-A0h]
  __int64 v29; // [rsp+30h] [rbp-98h]
  __int128 v30; // [rsp+38h] [rbp-90h]
  __int64 v31; // [rsp+48h] [rbp-80h]
  __int128 v32; // [rsp+50h] [rbp-78h]
  __int64 v33; // [rsp+60h] [rbp-68h]
  __int64 v34; // [rsp+68h] [rbp-60h] BYREF
  __m128i v35; // [rsp+70h] [rbp-58h] BYREF
  _BYTE src[5]; // [rsp+83h] [rbp-45h] BYREF
  unsigned __int64 v37[8]; // [rsp+88h] [rbp-40h] BYREF

  v25 = a2;
  v37[0] = __readfsqword(0x28u);
  v2 = *a1;
  v28 = 4;
  v29 = 0;
  v31 = 0;
  v27 = off_4BC530;
  v34 = 0;
  v30 = 0;
  v33 = v2;
  v24 = &v27;
  v32 = 0;
  v35 = 0;
  v3 = pack_dd(src, v37, 5) - (_QWORD)src;
  v4 = v3;
  if ( v3 )
  {
    v5 = v35.m128i_i64[0];
    v6 = v35.m128i_i64[0] + v3;
    if ( __CFADD__(v35.m128i_i64[0], v3) )
    {
      if ( v35.m128i_i64[0] > 0x7FFFFFFFFFFFFFFEuLL )
      {
        if ( v35.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
          v35.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v5 + v34), src, v4);
        goto LABEL_7;
      }
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 = v34;
    v22 = v35.m128i_i64[0];
    if ( v35.m128i_i64[1] < v6 )
    {
      v24 = &v27;
      v34 = qvector_reserve(&v34, v34, v6, 1);
      v21 = v34;
      v22 = v35.m128i_i64[0];
    }
    memset((void *)(v21 + v22), 0, v6 - v22);
    v35.m128i_i64[0] = v6;
    goto LABEL_6;
  }
LABEL_7:
  v24 = &v27;
  if ( (unsigned int)sub_251200(&v27, a1 + 2, 0) )
  {
    v7 = v34;
    v8 = 0;
    goto LABEL_9;
  }
  v26 = &v34;
  sub_785F0(&v34, *((_DWORD *)a1 + 14));
  sub_785F0(&v34, *((_DWORD *)a1 + 27));
  sub_785F0(&v34, *((_DWORD *)a1 + 48));
  v10 = a1[23];
  v11 = v10 + 24 * a1[24];
  if ( v10 != v11 )
  {
    while ( 1 )
    {
      v12 = s1;
      if ( *(_QWORD *)(v10 + 8) )
        v12 = *(const char **)v10;
      if ( !v12 )
        break;
      v13 = strlen(v12);
      v14 = v35.m128i_i64[0];
      v15 = v13 + 1;
      v16 = v13 + 1 + v35.m128i_i64[0];
      if ( !__CFADD__(v13 + 1, v35.m128i_i64[0]) )
        goto LABEL_26;
      if ( v35.m128i_i64[0] <= 0x7FFFFFFFFFFFFFFEuLL )
      {
        v17 = v34;
        v18 = v35.m128i_i64[0];
        v16 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v35.m128i_i64[1] < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_31:
          v23 = v16;
          v34 = qvector_reserve(v26, v17, v16, 1);
          v17 = v34;
          v16 = v23;
          v18 = v35.m128i_i64[0];
        }
LABEL_27:
        v23 = v16;
        memset((void *)(v17 + v18), 0, v16 - v18);
        v35.m128i_i64[0] = v23;
        goto LABEL_21;
      }
      if ( v35.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_20;
LABEL_21:
      v10 += 24;
      memcpy((void *)(v34 + v14), v12, v15);
      if ( v11 == v10 )
        goto LABEL_32;
    }
    v14 = v35.m128i_i64[0];
    v15 = 1;
    v12 = (const char *)&unk_3FC793;
    v16 = v35.m128i_i64[0] + 1;
    if ( v35.m128i_i64[0] != -1 )
    {
LABEL_26:
      v17 = v34;
      v18 = v14;
      if ( v35.m128i_i64[1] < v16 )
        goto LABEL_31;
      goto LABEL_27;
    }
    v14 = -1;
    v12 = (const char *)&unk_3FC793;
LABEL_20:
    v35.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_21;
  }
LABEL_32:
  v8 = 1;
  v19 = _mm_load_si128(&v35);
  v7 = *(_QWORD *)v25;
  v20 = *(_QWORD *)(v25 + 16);
  *(_QWORD *)v25 = v34;
  *(__m128i *)(v25 + 8) = v19;
  v34 = v7;
  v35.m128i_i64[1] = v20;
LABEL_9:
  v27 = off_4BC530;
  if ( v7 )
  {
    v35.m128i_i64[0] = 0;
    qfree(v7);
  }
  v27 = off_4BC478;
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  return v8;
}
