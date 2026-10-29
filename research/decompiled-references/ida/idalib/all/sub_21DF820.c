__int64 __fastcall sub_21DF820(__int64 a1)
{
  char *v2; // rax
  char *v3; // rsi
  int v4; // ebp
  __int64 v5; // r15
  __int64 v7; // rax
  void *v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  const void *v12; // rdx
  const void *v13; // r12
  size_t v14; // rax
  bool v15; // al
  __int64 v16; // r8
  void *v17; // r9
  char *v18; // rdx
  __int64 v19; // rcx
  void *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rsi
  char v23; // al
  __int64 v24; // rax
  __m128 v25; // xmm0
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  unsigned __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // r12
  unsigned __int64 v33; // rdx
  __int8 v34; // al
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int16 v37; // si
  __int16 v38; // cx
  unsigned __int64 v39; // rax
  __int64 v40; // r10
  __int64 v41; // rdi
  char v42; // dl
  unsigned __int64 v43; // rax
  __int64 v44; // rdi
  char v45; // dl
  __m128i v46; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+10h] [rbp-E8h]
  __int64 v48; // [rsp+18h] [rbp-E0h]
  __int64 v49; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+38h] [rbp-C0h]
  _BYTE v52[184]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = *(char **)a1;
  v3 = *(char **)(a1 + 8);
  if ( v3 != *(char **)a1 && *v2 == 85 )
  {
    *(_QWORD *)a1 = v2 + 1;
    v11 = sub_21D0000((char **)a1);
    v13 = v12;
    if ( v11 )
    {
      v14 = j__strlen("objcproto");
      v15 = sub_20D1BF0(v11, v13, v14, "objcproto");
      v18 = *(char **)a1;
      v19 = *(_QWORD *)(a1 + 8);
      if ( v15 )
      {
        v46.m128i_i64[0] = *(_QWORD *)(a1 + 8);
        v25 = _mm_loadh_ps((const double *)v46.m128i_i64);
        v46.m128i_i64[0] = v11;
        v26 = (__m128i)_mm_loadh_ps((const double *)v46.m128i_i64);
        v46.m128i_i64[0] = (__int64)v13;
        v27 = _mm_loadl_epi64(&v46);
        *(__m128i *)a1 = _mm_add_epi64(v26, _mm_unpacklo_epi64(v27, v27));
        v28 = sub_21D0000((char **)a1);
        v30 = v29;
        *(__m128 *)a1 = v25;
        if ( v28 )
        {
          v31 = ((__int64 (*)(void))sub_21DF820)();
          v32 = v31;
          if ( v31 )
          {
            v33 = v31;
            v34 = *(_BYTE *)(a1 + 937);
            ptr = v52;
            v46.m128i_i8[8] = v34;
            v46.m128i_i64[0] = (__int64)v52;
            v51 = 0x2000000000LL;
            sub_21D0350((__int64)&ptr, 0xBu, v33, v28, v30);
            v47 = a1 + 904;
            v35 = sub_2223360(a1 + 904, &ptr, &v49, off_2BE9FD0);
            v5 = v35;
            if ( !v35 )
            {
              if ( v46.m128i_i8[8] )
              {
                v43 = sub_21D40A0((__int64 *)(a1 + 808), 48, 3u);
                v44 = v47;
                v45 = *(_BYTE *)(v43 + 18);
                *(_QWORD *)(v43 + 24) = v32;
                v5 = v43 + 8;
                *(_QWORD *)v43 = 0;
                *(_WORD *)(v43 + 16) = 16395;
                *(_QWORD *)(v43 + 32) = v28;
                *(_BYTE *)(v43 + 18) = v45 & 0xF0 | 5;
                *(_QWORD *)(v43 + 40) = v30;
                *(_QWORD *)(v43 + 8) = off_2BE6AE0;
                sub_2223210(v44, v43, v49, off_2BE9FD0);
              }
              goto LABEL_17;
            }
            v8 = ptr;
            v5 = v35 + 8;
            if ( ptr == (void *)v46.m128i_i64[0] )
              goto LABEL_9;
            goto LABEL_8;
          }
        }
      }
      else
      {
        v20 = nullptr;
        if ( (char *)v19 == v18
          || *v18 != 73
          || (v20 = sub_21DEC40(a1, nullptr, (__int64)v18, v19, v16, v17)) != nullptr )
        {
          v21 = sub_21DF820(a1);
          if ( v21 )
          {
            v22 = v21;
            v46.m128i_i64[0] = v21;
            v23 = *(_BYTE *)(a1 + 937);
            ptr = v52;
            v46.m128i_i64[1] = (__int64)v52;
            LOBYTE(v47) = v23;
            v51 = 0x2000000000LL;
            sub_21D0980((__int64)&ptr, v22, v11, (__int64)v13, (unsigned __int64)v20);
            v48 = a1 + 904;
            v24 = sub_2223360(a1 + 904, &ptr, &v49, off_2BE9FD0);
            v5 = v24;
            if ( !v24 )
            {
              if ( (_BYTE)v47 )
              {
                v39 = sub_21D40A0((__int64 *)(a1 + 808), 56, 3u);
                v40 = v46.m128i_i64[0];
                v41 = v48;
                *(_WORD *)(v39 + 16) = 16386;
                v42 = *(_BYTE *)(v39 + 18);
                v5 = v39 + 8;
                *(_QWORD *)v39 = 0;
                *(_QWORD *)(v39 + 24) = v40;
                *(_QWORD *)(v39 + 32) = v11;
                *(_BYTE *)(v39 + 18) = v42 & 0xF0 | 5;
                *(_QWORD *)(v39 + 40) = v13;
                *(_QWORD *)(v39 + 48) = v20;
                *(_QWORD *)(v39 + 8) = off_2BE6720;
                sub_2223210(v41, v39, v49, off_2BE9FD0);
              }
              goto LABEL_17;
            }
            v8 = ptr;
            v5 = v24 + 8;
            if ( ptr == (void *)v46.m128i_i64[1] )
            {
LABEL_9:
              if ( v5 )
              {
                ptr = (void *)v5;
                v9 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
                if ( v9 )
                {
                  v10 = v9[1];
                  if ( v10 )
                    v5 = v10;
                }
                if ( *(_QWORD *)(a1 + 928) == v5 )
                  *(_BYTE *)(a1 + 936) = 1;
              }
              return v5;
            }
LABEL_8:
            free(v8);
            goto LABEL_9;
          }
        }
      }
    }
    return 0;
  }
  v4 = sub_21CFF20((char **)a1, v3);
  v5 = sub_21DFD40(a1);
  if ( !v5 || !v4 )
    return v5;
  v46.m128i_i8[0] = *(_BYTE *)(a1 + 937);
  v51 = 0x2000000000LL;
  ptr = v52;
  sub_9B7040((__int64)&ptr, 3);
  sub_21CFFC0((__int64)&ptr);
  sub_9B7040((__int64)&ptr, v5);
  sub_9B7040((__int64)&ptr, SHIDWORD(v5));
  sub_9B7040((__int64)&ptr, v4);
  sub_21CFFC0((__int64)&ptr);
  v7 = sub_2223360(a1 + 904, &ptr, &v49, off_2BE9FD0);
  if ( v7 )
  {
    v8 = ptr;
    v5 = v7 + 8;
    if ( ptr == v52 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( v46.m128i_i8[0] )
  {
    v36 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
    v37 = *(_WORD *)(v5 + 9);
    v38 = *(_WORD *)(v36 + 16);
    *(_QWORD *)(v36 + 24) = v5;
    *(_QWORD *)v36 = 0;
    v5 = v36 + 8;
    *(_DWORD *)(v36 + 20) = v4;
    *(_WORD *)(v36 + 16) = v38 & 0xC000 | 3;
    *(_WORD *)(v36 + 17) = v37 & 0xFC0 | *(_WORD *)(v36 + 17) & 0xF03F;
    *(_QWORD *)(v36 + 8) = off_2BE6780;
    sub_2223210(a1 + 904, v36, v49, off_2BE9FD0);
  }
  else
  {
    v5 = 0;
  }
LABEL_17:
  if ( ptr != v52 )
    free(ptr);
  *(_QWORD *)(a1 + 920) = v5;
  return v5;
}
