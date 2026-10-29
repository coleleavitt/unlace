char __fastcall sub_11355C0(__int64 a1, __m128i **a2, __int64 a3, __int64 a4, __m128i *a5, const void *a6)
{
  __m128i *v7; // r14
  __m128i *v8; // rbx
  __int64 v9; // rax
  __m128i **v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r11
  unsigned int v17; // ebp
  __int64 v18; // r15
  unsigned int v19; // ebp
  size_t v20; // r10
  unsigned int v21; // r11d
  __int64 v22; // r13
  char *v23; // rsi
  char v24; // al
  int v25; // esi
  bool v26; // zf
  int v27; // r10d
  char v28; // al
  int v29; // eax
  bool v31; // [rsp+8h] [rbp-80h]
  __m128i *v32; // [rsp+8h] [rbp-80h]
  int v33; // [rsp+14h] [rbp-74h]
  unsigned int v34; // [rsp+14h] [rbp-74h]
  __m128i *v35; // [rsp+20h] [rbp-68h]
  int v36; // [rsp+20h] [rbp-68h]
  const void *v37; // [rsp+20h] [rbp-68h]
  size_t v38; // [rsp+28h] [rbp-60h]
  const void *v39; // [rsp+28h] [rbp-60h]
  size_t v40; // [rsp+28h] [rbp-60h]
  unsigned int v41; // [rsp+30h] [rbp-58h]
  __m128i *v42; // [rsp+30h] [rbp-58h]
  const void *v43; // [rsp+38h] [rbp-50h]
  unsigned int v44; // [rsp+38h] [rbp-50h]
  __m128i *v45; // [rsp+48h] [rbp-40h] BYREF

  v7 = *(__m128i **)a3;
  v8 = *a2;
  v9 = *(_QWORD *)a3 - (_QWORD)*a2;
  if ( v9 <= 0 )
    goto LABEL_10;
  v10 = (__m128i **)a3;
  v11 = (v9 >> 4) - 1;
  if ( v11 )
  {
    _BitScanReverse64(&v11, v11);
    a4 = 64 - ((unsigned int)v11 ^ 0x3F);
    v9 = 1LL << (64 - ((unsigned __int8)v11 ^ 0x3Fu));
    if ( (_DWORD)v9 )
    {
      a3 = 4 * (int)v9 / 3u;
      v12 = ((((((unsigned int)(a3 + 1) | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)) >> 2)
             | (unsigned int)(a3 + 1)
             | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)
             | (((((unsigned int)(a3 + 1) | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)) >> 2)
               | (unsigned int)(a3 + 1)
               | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)) >> 4)) >> 8)
           | (((unsigned int)(a3 + 1) | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)) >> 2)
           | (unsigned int)(a3 + 1)
           | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)
           | (((((unsigned int)(a3 + 1) | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)) >> 2)
             | (unsigned int)(a3 + 1)
             | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)) >> 4)
           | (((((((unsigned int)(a3 + 1) | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)) >> 2)
               | (unsigned int)(a3 + 1)
               | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)
               | (((((unsigned int)(a3 + 1) | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)) >> 2)
                 | (unsigned int)(a3 + 1)
                 | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)) >> 4)) >> 8)
             | (((unsigned int)(a3 + 1) | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)) >> 2)
             | (unsigned int)(a3 + 1)
             | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)
             | (((((unsigned int)(a3 + 1) | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)) >> 2)
               | (unsigned int)(a3 + 1)
               | ((unsigned __int64)(unsigned int)(a3 + 1) >> 1)) >> 4)) >> 16))
          + 1;
      v13 = v12;
      v14 = 16 * v12;
      goto LABEL_5;
    }
LABEL_10:
    *(_QWORD *)a1 = 0;
    v17 = 0;
    v16 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v7 == v8 )
      return v9;
    goto LABEL_11;
  }
  v14 = 64;
  v13 = 4;
LABEL_5:
  *(_DWORD *)(a1 + 16) = v13;
  v9 = sub_22300B0(v14, 8, a3, a4, a5, a6);
  v15 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  v16 = v9;
  *(_QWORD *)a1 = v9;
  v17 = v15;
  a3 = v9 + 16 * v15;
  if ( v9 != a3 )
  {
    a4 = -1;
    do
    {
      *(_QWORD *)v9 = -1;
      v9 += 16;
      *(_QWORD *)(v9 - 8) = 0;
    }
    while ( a3 != v9 );
  }
  v7 = *v10;
  v8 = *a2;
  if ( *v10 != *a2 )
  {
LABEL_11:
    v18 = v16;
    while ( v17 )
    {
      v19 = v17 - 1;
      LODWORD(v9) = sub_2248890(v8->m128i_i64[0], v8->m128i_i64[1]);
      a6 = (const void *)v8->m128i_i64[0];
      v20 = v8->m128i_u64[1];
      LODWORD(v9) = v19 & v9;
      v21 = v9;
      v31 = v8->m128i_i64[0] == -2;
      if ( v20 )
      {
        v33 = 1;
        a5 = nullptr;
        while ( 1 )
        {
          v22 = v18 + 16LL * v21;
          v23 = *(char **)v22;
          if ( *(_QWORD *)v22 == -1 )
            goto LABEL_36;
          if ( v23 == (char *)-2LL )
          {
            LOBYTE(v9) = v31;
          }
          else
          {
            if ( v20 != *(_QWORD *)(v22 + 8) )
              goto LABEL_18;
            v44 = v21;
            v42 = a5;
            v40 = v20;
            v37 = a6;
            LODWORD(v9) = memcmp(a6, v23, v20);
            a6 = v37;
            v20 = v40;
            a5 = v42;
            v21 = v44;
            LOBYTE(v9) = (_DWORD)v9 == 0;
          }
          if ( (_BYTE)v9 )
            goto LABEL_37;
LABEL_18:
          v43 = a6;
          v41 = v21;
          v38 = v20;
          v35 = a5;
          v24 = sub_E39ED0(*(char **)v22, *(_QWORD *)(v22 + 8), (const void *)0xFFFFFFFFFFFFFFFELL, 0);
          a5 = v35;
          v20 = v38;
          a6 = v43;
          if ( !v35 && v24 )
            a5 = (__m128i *)v22;
          LOBYTE(v9) = v33 + 1;
          v21 = v19 & (v33 + v41);
          ++v33;
        }
      }
      v27 = 1;
      a5 = nullptr;
      while ( 1 )
      {
        v22 = v18 + 16LL * v21;
        v9 = *(_QWORD *)v22;
        if ( *(_QWORD *)v22 == -1 )
          break;
        if ( v9 == -2 )
        {
          if ( a6 == (const void *)-2LL )
            goto LABEL_37;
        }
        else if ( !*(_QWORD *)(v22 + 8) )
        {
          goto LABEL_37;
        }
        v39 = a6;
        v36 = v27;
        v34 = v21;
        v32 = a5;
        v28 = sub_E39ED0(*(char **)v22, *(_QWORD *)(v22 + 8), (const void *)0xFFFFFFFFFFFFFFFELL, 0);
        a5 = v32;
        a6 = v39;
        if ( !v32 && v28 )
          a5 = (__m128i *)v22;
        v27 = v36 + 1;
        v21 = v19 & (v36 + v34);
      }
LABEL_36:
      if ( a6 != (const void *)-1LL )
      {
        v17 = *(_DWORD *)(a1 + 16);
        if ( !a5 )
          a5 = (__m128i *)v22;
        v29 = *(_DWORD *)(a1 + 8);
        a3 = 3 * v17;
        v45 = a5;
        LODWORD(v9) = v29 + 1;
        a4 = (unsigned int)(4 * v9);
        if ( (unsigned int)a4 < (unsigned int)a3 )
        {
          a4 = v17 - ((_DWORD)v9 + *(_DWORD *)(a1 + 12));
          a3 = v17 >> 3;
          if ( (unsigned int)a4 <= (unsigned int)a3 )
          {
            v25 = v17;
LABEL_24:
            sub_10FCC90(a1, v25, a3, a4, (__int64)a5, (__int64)a6);
            sub_10E92B0((__int64 *)a1, v8, &v45);
            a5 = v45;
            LODWORD(v9) = *(_DWORD *)(a1 + 8) + 1;
          }
          v26 = a5->m128i_i64[0] == -1;
          *(_DWORD *)(a1 + 8) = v9;
          if ( !v26 )
            --*(_DWORD *)(a1 + 12);
          *a5 = _mm_loadu_si128(v8);
          goto LABEL_37;
        }
LABEL_23:
        v25 = 2 * v17;
        goto LABEL_24;
      }
LABEL_37:
      if ( ++v8 == v7 )
        return v9;
      v18 = *(_QWORD *)a1;
      v17 = *(_DWORD *)(a1 + 16);
    }
    v45 = nullptr;
    goto LABEL_23;
  }
  return v9;
}
