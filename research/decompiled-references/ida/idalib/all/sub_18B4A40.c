__int64 __fastcall sub_18B4A40(
        _QWORD *a1,
        __int64 a2,
        __int8 **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        unsigned __int8 a9,
        unsigned int a10,
        __int64 a11,
        unsigned __int8 a12,
        unsigned int a13)
{
  unsigned int v13; // r14d
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // rsi
  bool v21; // di
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // r14
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r8
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  __int64 *v36; // r12
  __int64 *v37; // r15
  __int64 *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rdx
  int v45; // [rsp+28h] [rbp-E0h]
  __int64 *v46; // [rsp+28h] [rbp-E0h]
  int v47; // [rsp+30h] [rbp-D8h]
  __int64 v48; // [rsp+30h] [rbp-D8h]
  unsigned int v49; // [rsp+38h] [rbp-D0h]
  unsigned int v50; // [rsp+3Ch] [rbp-CCh]
  _BYTE v51[200]; // [rsp+40h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(a1[29] + 13LL) & 0x20) == 0 )
    return 0;
  v13 = a13;
  if ( !a13 )
    v13 = a10;
  v49 = v13;
  v16 = sub_18B0530((__int64)a1, a10, a6, *(double *)a7.m128i_i64, a8);
  if ( !v16 )
    return 0;
  v17 = sub_18B0530((__int64)a1, v13, a11, *(double *)a7.m128i_i64, a8);
  v18 = v17;
  if ( !v17 )
    return 0;
  v45 = (*(_BYTE *)(v16 + 19) >> 1) & 0xF;
  if ( v45 == 6 )
    return 0;
  v47 = (*(_BYTE *)(v17 + 19) >> 1) & 0xF;
  if ( v47 == 6 )
    return 0;
  v50 = sub_F63060(v16);
  v19 = sub_F63060(v18);
  v20 = v50;
  if ( v45 != 2 && v50 == 2 || !v19 )
    return sub_18B3330((__int64)a1, a3, v16, a9, a10, v18, a7, a8, a12, v49);
  v21 = v19 == 2;
  LOBYTE(v20) = v50 == 0;
  if ( !*(_DWORD *)(a5 + 16) || ((unsigned __int8)v20 & v21) == 0 )
  {
    if ( (!v21 || v47 == 2) && v50 )
    {
      v22 = sub_6F33F0(v18);
      v24 = v22 + 8 * v23;
      v46 = (__int64 *)v24;
      if ( v22 == v24 )
        return sub_18B3330((__int64)a1, a3, v16, a9, a10, v18, a7, a8, a9, v49);
      v48 = v18;
      v25 = (__int64 *)v22;
      while ( 1 )
      {
        v26 = *v25;
        v27 = *(_QWORD *)(*v25 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v27 + 16) - 43 <= 1
          || (v41 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                  - 43,
              (unsigned int)v41 <= 1)
          && (v27 = sub_F63050(*(_QWORD *)(*v25 & 0xFFFFFFFFFFFFFFF0LL), v20, v41, v24)) != 0 )
        {
          while ( 1 )
          {
            v26 = *(_QWORD *)(v27 + 32);
            if ( (*(_BYTE *)(v27 + 18) & 0x10) == 0 )
              break;
            while ( 1 )
            {
              v27 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
              v28 = (unsigned int)*(unsigned __int8 *)(v27 + 16) - 43;
              if ( (unsigned int)v28 <= 1 )
                break;
              v29 = sub_F63050(v27, v20, v28, v24);
              v26 = *(_QWORD *)(v29 + 32);
              if ( (*(_BYTE *)(v29 + 18) & 0x10) == 0 )
                goto LABEL_19;
            }
          }
        }
LABEL_19:
        v30 = *(_QWORD *)(v16 + 16);
        v31 = 8LL * *(unsigned __int16 *)(v16 + 22) + 48;
        v32 = (v30 & 0x40000000) != 0;
        v33 = *(_BYTE *)(v16 + 19);
        if ( (v33 & 0x40) != 0 )
          v32 += (*(_BYTE *)(((v16 + v31 + ((v33 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v24 = ((v16 + v31 + ((SBYTE3(v30) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v32;
        v34 = (v30 & 0x40000000) != 0;
        v35 = (v16 + v31 + ((SBYTE3(v30) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v16 + 19) & 0x40) != 0 )
          v34 += (*(_BYTE *)(((v16 + v31 + ((v33 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v36 = (__int64 *)(v35 + 8 * v34);
        if ( (((unsigned __int8)v33 >> 1) & 0xF) == 2 )
          v36 = (__int64 *)(v35
                          + 8
                          * ((*(_WORD *)((v16 + ((SBYTE3(v30) >> 5) & 4) + v31 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF)
                           + v34));
        if ( (__int64 *)v24 == v36 )
          break;
        v37 = (__int64 *)v24;
        while ( 1 )
        {
          v20 = *v37;
          if ( (unsigned __int8)sub_18B16B0(a1, *v37, v26, v24) )
            break;
          if ( v36 == ++v37 )
            goto LABEL_38;
        }
        if ( v46 == ++v25 )
        {
          v18 = v48;
          return sub_18B3330((__int64)a1, a3, v16, a9, a10, v18, a7, a8, a9, v49);
        }
      }
LABEL_38:
      v39 = a1 + 1;
      sub_168CDE0((__int64)v51, v39, v49, a2, 0);
      sub_15F7200(v51);
      if ( !*(_DWORD *)(a4 + 16) )
        return 1;
      v40 = a4;
      goto LABEL_40;
    }
    v39 = a1 + 1;
LABEL_36:
    sub_168CDE0((__int64)v51, v39, v49, a2, 0);
    sub_15F7200(v51);
    v40 = a4;
    if ( !*(_DWORD *)(a4 + 16) )
      return 1;
LABEL_40:
    sub_168CDE0((__int64)v51, v39, a10, v40, 0);
    sub_15F7200(v51);
    return 1;
  }
  v39 = a1 + 1;
  if ( v45 != 4 )
    goto LABEL_36;
  sub_168CDE0((__int64)v51, v39, v49, a5, 0);
  sub_15F7200(v51);
  if ( !*(_DWORD *)(a4 + 16) )
    return 1;
  sub_168CDE0((__int64)v51, v39, a10, a4, 0);
  sub_15F7200(v51);
  return (unsigned __int8)v20 & v21;
}
