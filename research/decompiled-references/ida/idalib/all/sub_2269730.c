char __fastcall sub_2269730(__int64 a1, const __m128i **a2, const __m128i **a3)
{
  const __m128i *v4; // r13
  const __m128i *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r14
  const __m128i *v14; // r15
  int v15; // ebp
  int v16; // eax
  const void *v17; // r10
  size_t v18; // r11
  unsigned int v19; // r8d
  __int64 v20; // r13
  __int64 v21; // r9
  char *v22; // rsi
  char v23; // al
  int v24; // esi
  int v25; // eax
  bool v26; // zf
  int v27; // r11d
  char v28; // al
  int v29; // eax
  bool v31; // [rsp+8h] [rbp-80h]
  __int64 v32; // [rsp+8h] [rbp-80h]
  int v33; // [rsp+14h] [rbp-74h]
  unsigned int v34; // [rsp+14h] [rbp-74h]
  size_t v35; // [rsp+20h] [rbp-68h]
  int v36; // [rsp+20h] [rbp-68h]
  const void *v37; // [rsp+20h] [rbp-68h]
  unsigned int v38; // [rsp+28h] [rbp-60h]
  const void *v39; // [rsp+28h] [rbp-60h]
  size_t v40; // [rsp+28h] [rbp-60h]
  const void *v41; // [rsp+30h] [rbp-58h]
  unsigned int v42; // [rsp+30h] [rbp-58h]
  __int64 v43; // [rsp+38h] [rbp-50h]
  __int64 v44; // [rsp+38h] [rbp-50h]
  __int64 v45[8]; // [rsp+48h] [rbp-40h] BYREF

  v4 = *a3;
  v5 = *a2;
  v6 = 0xAAAAAAAAAAAAAAABLL * (((char *)*a3 - (char *)*a2) >> 3);
  if ( !(_DWORD)v6 )
  {
    LODWORD(v11) = 0;
    *(_QWORD *)a1 = 0;
    v10 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v5 == v4 )
      return v6;
    goto LABEL_8;
  }
  v7 = (4 * (int)v6 / 3u + 1) | ((unsigned __int64)(4 * (int)v6 / 3u + 1) >> 1);
  v8 = (((v7 >> 2) | v7) >> 4) | (v7 >> 2) | v7;
  v9 = ((((v8 >> 8) | v8) >> 16) | (v8 >> 8) | v8) + 1;
  *(_DWORD *)(a1 + 16) = v9;
  v6 = sub_22300B0(24 * v9, 8);
  *(_QWORD *)(a1 + 8) = 0;
  v10 = v6;
  *(_QWORD *)a1 = v6;
  v11 = *(unsigned int *)(a1 + 16);
  LOBYTE(v6) = 3 * v11;
  v12 = v10 + 24 * v11;
  if ( v10 != v12 )
  {
    v6 = v10;
    do
    {
      *(_QWORD *)v6 = -1;
      v6 += 24;
      *(_QWORD *)(v6 - 16) = 0;
    }
    while ( v12 != v6 );
  }
  v4 = *a3;
  v5 = *a2;
  if ( *a2 != *a3 )
  {
LABEL_8:
    v13 = v10;
    v14 = v4;
    while ( (_DWORD)v11 )
    {
      v15 = v11 - 1;
      v16 = sub_2248890(v5->m128i_i64[0], v5->m128i_i64[1]);
      v17 = (const void *)v5->m128i_i64[0];
      v18 = v5->m128i_u64[1];
      v19 = v15 & v16;
      v31 = v5->m128i_i64[0] == -2;
      if ( v18 )
      {
        v33 = 1;
        v20 = 0;
        while ( 1 )
        {
          LOBYTE(v6) = 3 * v19;
          v21 = v13 + 24LL * v19;
          v22 = *(char **)v21;
          if ( *(_QWORD *)v21 == -1 )
            goto LABEL_33;
          if ( v22 == (char *)-2LL )
          {
            LOBYTE(v6) = v31;
          }
          else
          {
            if ( v18 != *(_QWORD *)(v21 + 8) )
              goto LABEL_15;
            v44 = v13 + 24LL * v19;
            v42 = v19;
            v40 = v18;
            v37 = v17;
            LODWORD(v6) = memcmp(v17, v22, v18);
            v17 = v37;
            v18 = v40;
            v19 = v42;
            v21 = v44;
            LOBYTE(v6) = (_DWORD)v6 == 0;
          }
          if ( (_BYTE)v6 )
            goto LABEL_34;
LABEL_15:
          v41 = v17;
          v38 = v19;
          v35 = v18;
          v43 = v21;
          v23 = sub_E39ED0(*(char **)v21, *(_QWORD *)(v21 + 8), (const void *)0xFFFFFFFFFFFFFFFELL, 0);
          v18 = v35;
          v17 = v41;
          if ( !v20 && v23 )
            v20 = v43;
          v19 = v15 & (v33 + v38);
          ++v33;
        }
      }
      v27 = 1;
      v20 = 0;
      while ( 1 )
      {
        v21 = v13 + 24LL * v19;
        v6 = *(_QWORD *)v21;
        if ( *(_QWORD *)v21 == -1 )
          break;
        if ( v6 == -2 )
        {
          if ( v17 == (const void *)-2LL )
            goto LABEL_34;
        }
        else if ( !*(_QWORD *)(v21 + 8) )
        {
          goto LABEL_34;
        }
        v39 = v17;
        v36 = v27;
        v34 = v19;
        v32 = v13 + 24LL * v19;
        v28 = sub_E39ED0(*(char **)v21, *(_QWORD *)(v21 + 8), (const void *)0xFFFFFFFFFFFFFFFELL, 0);
        v17 = v39;
        if ( !v20 && v28 )
          v20 = v32;
        v27 = v36 + 1;
        v19 = v15 & (v36 + v34);
      }
LABEL_33:
      if ( v17 != (const void *)-1LL )
      {
        LODWORD(v11) = *(_DWORD *)(a1 + 16);
        if ( !v20 )
          v20 = v21;
        v29 = *(_DWORD *)(a1 + 8);
        v45[0] = v20;
        v25 = v29 + 1;
        if ( 4 * v25 < (unsigned int)(3 * v11) )
        {
          if ( (int)v11 - (v25 + *(_DWORD *)(a1 + 12)) <= (unsigned int)v11 >> 3 )
          {
            v24 = v11;
LABEL_21:
            sub_22694E0(a1, v24);
            sub_22604A0((__int64 *)a1, (__int64)v5, v45);
            v20 = v45[0];
            v25 = *(_DWORD *)(a1 + 8) + 1;
          }
          v26 = *(_QWORD *)v20 == -1;
          *(_DWORD *)(a1 + 8) = v25;
          if ( !v26 )
            --*(_DWORD *)(a1 + 12);
          LOWORD(v6) = v5[1].m128i_i16[0];
          *(__m128i *)v20 = _mm_loadu_si128(v5);
          *(_WORD *)(v20 + 16) = v6;
          goto LABEL_34;
        }
LABEL_20:
        v24 = 2 * v11;
        goto LABEL_21;
      }
LABEL_34:
      v5 = (const __m128i *)((char *)v5 + 24);
      if ( v5 == v14 )
        return v6;
      v13 = *(_QWORD *)a1;
      LODWORD(v11) = *(_DWORD *)(a1 + 16);
    }
    v45[0] = 0;
    goto LABEL_20;
  }
  return v6;
}
