__int64 __fastcall sub_194C300(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 *v9; // r15
  __int64 v10; // rax
  _DWORD *v11; // rax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __m128i *v21; // rbp
  __m128i *v22; // rbx
  unsigned __int64 v23; // rdx
  const __m128i *v24; // r14
  __m128i *v25; // rcx
  __int64 v26; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // ecx
  __int64 v41; // [rsp+8h] [rbp-220h]
  __int64 v43; // [rsp+20h] [rbp-208h]
  __int64 v44; // [rsp+28h] [rbp-200h]
  __int64 v45; // [rsp+30h] [rbp-1F8h]
  __int64 v46; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-1E0h]
  __int64 v48; // [rsp+58h] [rbp-1D0h] BYREF
  __int128 ptr; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v50[12]; // [rsp+70h] [rbp-1B8h] BYREF
  void *v51; // [rsp+D0h] [rbp-158h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-150h]
  _BYTE v53[256]; // [rsp+E0h] [rbp-148h] BYREF
  __int64 v54; // [rsp+1E0h] [rbp-48h]

  v7 = a3;
  v8 = *(_QWORD *)(a3 + 24);
  v46 = a3;
  v47 = a4;
  v41 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v26 = 0;
    v41 = (__int64)sub_1946CC0(a1, v8, a5, a6);
    if ( (v41 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return v26;
  }
  v54 = 0;
  v9 = *(__int64 **)(v7 + 32);
  v44 = 0;
  v51 = v53;
  v52 = 0x800000000LL;
  if ( !v9 )
  {
    v43 = 0;
    v18 = 0;
    v17 = v50;
    *((_QWORD *)&ptr + 1) = 0x400000000LL;
    *(_QWORD *)&ptr = v50;
LABEL_20:
    v26 = sub_AB5840(*(_QWORD *)(*a1 + 248), v41, (*(_BYTE *)(v7 + 18) >> 3) & 3, 0, 0, v9, (__int64)v17, v18);
    if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( (__int64 *)ptr != v50 )
        free((void *)ptr);
      sub_1EA6140(a2, v26, 16, 8);
      v28 = v47;
      v30 = v29;
      *(_DWORD *)v29 = *(_DWORD *)v47;
      LODWORD(v28) = *(_DWORD *)(v28 + 4);
      *(_QWORD *)(v29 + 8) = 0;
      *(_DWORD *)(v29 + 4) = v28;
      if ( *(_QWORD *)(v7 + 32) )
      {
        sub_B85890(&v48, *(_QWORD *)(*(_QWORD *)(v46 + 32) + 40LL));
        v34 = *(_QWORD *)(v47 + 8);
        v35 = 0;
        if ( v34 )
          v35 = *(_DWORD *)(v34 + 32);
        v36 = *(_QWORD *)(*(_QWORD *)(v46 + 32) + 40LL);
        DWORD2(ptr) = v35;
        *(_QWORD *)&ptr = v36;
        v50[0] = v48;
        v37 = sub_F1ED40(*(_QWORD **)(*a1 + 248), (__int64 *)&v51, v36, v31, v32, v33);
        v38 = *(_QWORD *)(v47 + 8);
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 48);
          v40 = *(_DWORD *)(v38 + 16);
        }
        else
        {
          v39 = 0;
          v40 = 0;
        }
        *(_QWORD *)(v30 + 8) = sub_A55700(
                                 *(_QWORD **)(*a1 + 248),
                                 v43,
                                 v44,
                                 v40,
                                 v39,
                                 *(_QWORD *)(v46 + 32),
                                 ptr,
                                 v50[0],
                                 v37);
      }
    }
    else
    {
      v26 = 0;
      if ( (__int64 *)ptr != v50 )
        free((void *)ptr);
    }
    goto LABEL_23;
  }
  v9 = (__int64 *)sub_18CBA40((__int64)a1, (__int64)v9);
  v10 = *(_QWORD *)(v47 + 8);
  if ( v10 && (v11 = *(_DWORD **)(v10 + 64)) != nullptr )
  {
    LODWORD(v54) = *v11;
    v12 = v11[1];
  }
  else
  {
    LODWORD(v54) = 0;
    v12 = 0;
  }
  HIDWORD(v54) = v12;
  if ( !(unsigned __int8)sub_194A6C0(a1, (__int64)&v46, 0, (__int64)&v46, *(_DWORD *)(v46 + 20), (__int64)&v51, 0) )
  {
    v13 = *(_QWORD *)(v47 + 8);
    v43 = v13;
    if ( !v13 )
      goto LABEL_10;
    if ( !*(_QWORD *)v13 )
    {
      v43 = 0;
      v16 = (unsigned int)v52;
LABEL_11:
      v17 = v50;
      *((_QWORD *)&ptr + 1) = 0x400000000LL;
      *(_QWORD *)&ptr = v50;
      if ( v16 <= 4 )
      {
        v18 = 0;
        v19 = 0;
      }
      else
      {
        sub_2237220(&ptr, v50, v16, 24);
        v18 = DWORD2(ptr);
        v17 = (__int64 *)ptr;
        v16 = (unsigned int)v52;
        v19 = DWORD2(ptr);
      }
      v20 = 32 * v16;
      if ( (char *)v51 + v20 != v51 )
      {
        v45 = v7;
        v21 = (__m128i *)v51;
        v22 = (__m128i *)((char *)v51 + v20);
        while ( 1 )
        {
          v23 = v19 + 1;
          v24 = v21;
          v25 = (__m128i *)&v17[3 * v19];
          if ( v23 > HIDWORD(ptr) )
          {
            if ( v17 > (__int64 *)v21 || v25 <= v21 )
            {
              sub_2237220(&ptr, v50, v23, 24);
              v25 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
            }
            else
            {
              sub_2237220(&ptr, v50, v23, 24);
              v24 = (const __m128i *)(ptr + (char *)v21 - (char *)v17);
              v25 = (__m128i *)(ptr + 24LL * DWORD2(ptr));
            }
          }
          v21 += 2;
          *v25 = _mm_loadu_si128(v24);
          v25[1].m128i_i64[0] = v24[1].m128i_i64[0];
          v19 = (unsigned int)++DWORD2(ptr);
          if ( v22 == v21 )
            break;
          v17 = (__int64 *)ptr;
        }
        v7 = v45;
        v18 = (unsigned int)v19;
        v17 = (__int64 *)ptr;
      }
      goto LABEL_20;
    }
    v14 = sub_1949260((__int64)a1, *(_QWORD *)v13, *(void **)(v13 + 8), 0, 0);
    v44 = v15;
    v43 = v14;
    if ( v14 )
    {
LABEL_10:
      v16 = (unsigned int)v52;
      goto LABEL_11;
    }
  }
  v26 = 0;
LABEL_23:
  if ( v51 != v53 )
    free(v51);
  return v26;
}
