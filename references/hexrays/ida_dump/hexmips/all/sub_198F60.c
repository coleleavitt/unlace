__int64 __fastcall sub_198F60(__int64 *a1)
{
  unsigned int v1; // r13d
  __int64 v2; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  char **v9; // r14
  char **v10; // r15
  unsigned __int64 v11; // r8
  char *v12; // rdi
  __int64 v13; // rax
  char *v14; // rcx
  __int64 *v15; // r13
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 *v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rbx
  void *v22; // rax
  char *v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdi
  __m128i v26; // xmm2
  __int64 v27; // rsi
  __int64 v28; // rax
  __m128i v29; // [rsp+0h] [rbp-C8h] BYREF
  size_t n; // [rsp+10h] [rbp-B8h]
  _QWORD *v31; // [rsp+18h] [rbp-B0h]
  _QWORD v32[2]; // [rsp+20h] [rbp-A8h] BYREF
  void *dest; // [rsp+30h] [rbp-98h]
  __int64 v34; // [rsp+38h] [rbp-90h]
  __int64 v35; // [rsp+40h] [rbp-88h]
  __int128 v36; // [rsp+48h] [rbp-80h]
  __int64 *v37; // [rsp+58h] [rbp-70h]
  char **v38; // [rsp+60h] [rbp-68h]
  __int128 v39; // [rsp+68h] [rbp-60h]
  __int64 v40; // [rsp+78h] [rbp-50h]
  int v41; // [rsp+80h] [rbp-48h]
  unsigned __int64 v42; // [rsp+88h] [rbp-40h]

  v1 = 0;
  v42 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1[3] + 8);
  if ( (_DWORD)v2 )
  {
    v4 = (int)v2;
    v5 = a1[1];
    if ( v5 < v4 )
    {
      v27 = *a1;
      if ( a1[2] < v4 )
      {
        v28 = qvector_reserve(a1, v27, v4, 8);
        *a1 = v28;
        v27 = v28;
        v5 = a1[1];
      }
      memset((void *)(v27 + 8 * v5), 0, 8 * (v4 - v5));
      a1[1] = v4;
    }
    else if ( v4 != v5 )
    {
      a1[1] = v4;
    }
    v7 = a1[4];
    dest = nullptr;
    v8 = *(_QWORD *)(v7 + 480);
    v32[0] = &off_4BEA08;
    v34 = 0;
    v32[1] = v8;
    v35 = 0;
    v37 = a1;
    v38 = nullptr;
    v40 = -1;
    v41 = -1;
    v31 = v32;
    v36 = 0;
    v39 = 0;
    sub_32CDC0(v32, v7);
    v37[1] = 0;
    v9 = v38;
    v10 = &v38[7 * v39];
    if ( v38 != v10 )
    {
      do
      {
        v11 = (unsigned __int64)v9[1];
        v12 = *v9;
        if ( *(_QWORD *)&(*v9)[8 * v11 - 8] )
        {
          v13 = (int)v11;
          v14 = &v12[8 * (int)v11 - 8];
          while ( 1 )
          {
            if ( (int)v13 <= 0 )
            {
              v15 = v37;
              if ( v37[1] >= v11 )
                goto LABEL_13;
              goto LABEL_28;
            }
            v14 -= 8;
            if ( !*((_QWORD *)v14 + 1) )
              break;
            v13 = (int)v13 - 1;
          }
          v21 = (8 * v13) >> 3;
          memmove(v12, &v12[8 * v13], 8 * v11 - 8 * v13);
          v11 = (unsigned __int64)&v9[1][-v21];
          v9[1] = (char *)v11;
          v15 = v37;
          if ( v37[1] >= v11 )
            goto LABEL_13;
LABEL_28:
          v29.m128i_i64[0] = v11;
          n = 8 * v11;
          v22 = (void *)qalloc_or_throw(8 * v11);
          v23 = *v9;
          v24 = (__int64)v22;
          v29 = _mm_unpacklo_epi64((__m128i)v29.m128i_u64[0], (__m128i)v29.m128i_u64[0]);
          memcpy(v22, v23, n);
          v25 = *v15;
          if ( *v15 )
          {
            v15[1] = 0;
            qfree(v25);
          }
          v26 = _mm_load_si128(&v29);
          *v15 = v24;
          *(__m128i *)(v15 + 1) = v26;
          v15[3] = (__int64)v9[3];
          v15[4] = (__int64)v9[4];
          *((_DWORD *)v15 + 10) = *((_DWORD *)v9 + 10);
          *((_DWORD *)v15 + 11) = *((_DWORD *)v9 + 11);
          *((_DWORD *)v15 + 12) = *((_DWORD *)v9 + 12);
        }
LABEL_13:
        v9 += 7;
      }
      while ( v10 != v9 );
      v10 = v38;
      v9 = v38;
    }
    v1 = 1;
    if ( !v37[1] )
    {
      *((_DWORD *)a1 + 11) = -1;
      v1 = 0;
    }
    v32[0] = &off_4BEA08;
    if ( v10 )
    {
      v16 = v39;
      if ( (_QWORD)v39 )
      {
        v17 = 0;
        v18 = 0;
        do
        {
          v19 = (__int64 *)&v10[v17];
          v20 = *v19;
          if ( *v19 )
          {
            v19[1] = 0;
            qfree(v20);
            v9 = v38;
          }
          ++v18;
          v10 = v9;
          v17 += 7;
        }
        while ( v16 != v18 );
      }
      *(_QWORD *)&v39 = 0;
      qfree(v10);
    }
    v32[0] = &unk_4CBD60;
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree(v35);
    }
    qfree(dest);
  }
  return v1;
}
