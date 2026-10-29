__int64 __fastcall sub_1D1B490(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r14
  _QWORD *v9; // r12
  __int16 v10; // ax
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  char *v17; // rdi
  unsigned int v18; // r12d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r15
  int v25; // r13d
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // r13
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rax
  int v35; // eax
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // [rsp+8h] [rbp-140h]
  unsigned __int64 v42; // [rsp+8h] [rbp-140h]
  unsigned __int64 v43; // [rsp+8h] [rbp-140h]
  __m128i v44; // [rsp+10h] [rbp-138h] BYREF
  __int64 v45; // [rsp+20h] [rbp-128h]
  __int64 v46; // [rsp+28h] [rbp-120h]
  _QWORD *v47; // [rsp+30h] [rbp-118h]
  __m128 *v48; // [rsp+38h] [rbp-110h]
  __int64 v49; // [rsp+40h] [rbp-108h]
  char v50; // [rsp+4Bh] [rbp-FDh]
  int v51; // [rsp+4Ch] [rbp-FCh]
  bool v52; // [rsp+53h] [rbp-F5h] BYREF
  int v53; // [rsp+54h] [rbp-F4h] BYREF
  __int64 v54; // [rsp+58h] [rbp-F0h] BYREF
  __m128i v55; // [rsp+60h] [rbp-E8h] BYREF
  __m128 v56; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v57[25]; // [rsp+80h] [rbp-C8h] BYREF

  v8 = a4;
  v9 = (_QWORD *)(a2 + 80);
  v10 = *(_WORD *)a2;
  v51 = a3;
  v11 = a2 + 64;
  v12 = (v10 & 0x1FF) == 24;
  v13 = *(unsigned int *)(a2 + 4);
  v46 = a1;
  if ( v12 )
    v9 = (_QWORD *)(a2 + 64);
  v49 = a2;
  v50 = 1;
  v47 = &v9[v13];
  if ( v47 != v9 )
  {
    v14 = a4;
    v44.m128i_i64[0] = a4 + 24;
    v45 = a4 + 8;
    v48 = &v56;
    while ( 1 )
    {
      v15 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
      v16 = sub_1D1B120(v46, v15, a7, a8, v11, a4, a5, a6);
      if ( v16 )
      {
        v56.m128_u64[0] = v16;
        v11 = *(_BYTE *)(v16 + 28) & 0x7F;
        if ( (_BYTE)v11 != 55 )
        {
          a4 = (__int64)v48;
          v50 = 0;
          v29 = (__int64)&v48->m128_i64[1];
          goto LABEL_31;
        }
        v11 = *(unsigned int *)(v16 + 56);
        a4 = v16 + 64;
        v29 = v16 + 64 + 8 * v11;
        LOBYTE(v11) = v11 == 0;
        v50 &= v11;
        if ( v16 + 64 != v29 )
        {
          v11 = *(_BYTE *)(*(_QWORD *)(v16 + 64) + 28LL) & 0x7F;
LABEL_31:
          v30 = a4;
          v31 = *(_QWORD *)a4;
          if ( (_BYTE)v11 == 81 )
          {
LABEL_32:
            v32 = *(_QWORD *)(v31 + 48) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v32 )
            {
              a4 = *(unsigned int *)(v14 + 16);
              do
              {
                v33 = *(unsigned int *)(v14 + 20);
                v34 = v32 | (*(_BYTE *)(v32 + 29) >> 5) & 3;
                v57[0] = v34;
                if ( a4 + 1 > v33 )
                {
                  v42 = v34;
                  sub_2237220(v45, v44.m128i_i64[0], a4 + 1, 8);
                  a4 = *(unsigned int *)(v14 + 16);
                  v34 = v42;
                }
                v11 = *(_QWORD *)(v14 + 8);
                *(_QWORD *)(v11 + 8 * a4) = v34;
                v35 = *(_DWORD *)(v14 + 16);
                *(_DWORD *)v14 = 2;
                a4 = (unsigned int)(v35 + 1);
                *(_DWORD *)(v14 + 16) = a4;
                v32 = *(_QWORD *)(v32 + 72);
              }
              while ( v32 && (*(_BYTE *)(v32 + 28) & 0x7Fu) - 53 <= 1 );
            }
            goto LABEL_38;
          }
          while ( 1 )
          {
            a4 = *(unsigned int *)(v14 + 16);
            v36 = *(unsigned int *)(v14 + 20);
            v37 = (*(_BYTE *)(v31 + 29) >> 5) & 3 | v31;
            v57[0] = v37;
            if ( a4 + 1 > v36 )
            {
              v43 = v37;
              sub_2237220(v45, v44.m128i_i64[0], a4 + 1, 8);
              a4 = *(unsigned int *)(v14 + 16);
              v37 = v43;
            }
            v11 = *(_QWORD *)(v14 + 8);
            *(_QWORD *)(v11 + 8 * a4) = v37;
            *(_DWORD *)v14 = 2;
            ++*(_DWORD *)(v14 + 16);
LABEL_38:
            v30 += 8;
            if ( v30 == v29 )
              break;
            v31 = *(_QWORD *)v30;
            v11 = *(_BYTE *)(*(_QWORD *)v30 + 28LL) & 0x7F;
            if ( (_BYTE)v11 == 81 )
              goto LABEL_32;
          }
        }
      }
      else if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 53 > 1 )
      {
        v17 = *(char **)(v14 + 88);
        *(_DWORD *)v14 = 0;
        *(_DWORD *)(v14 + 16) = 0;
        if ( v17 )
          sub_1A39780(v17);
        *(_BYTE *)(v14 + 166) = 0;
        v18 = 1;
        *(_OWORD *)(v14 + 88) = 0;
        return v18;
      }
      if ( v47 == ++v9 )
      {
        v8 = v14;
        break;
      }
    }
  }
  v18 = (unsigned __int8)v51 ^ 1;
  LOBYTE(v18) = v50 & (v51 ^ 1);
  if ( (_BYTE)v18 )
  {
    sub_168B9F0((__int64)v57, (__int64 *)(*(_QWORD *)v46 + 8LL), *(_DWORD *)(v49 + 24), 0x1527u, 0);
    v55.m128i_i8[0] = (*(_WORD *)v49 & 0x1FF) == 23;
    v38 = sub_1588420((__int64)v57, (unsigned __int8 *)&v55);
    v56.m128_u64[0] = *(_QWORD *)(v49 + 16);
    sub_15894B0(v38, (__int64 *)&v56);
    sub_15F7200(v57);
  }
  else
  {
    sub_1A43500(v8);
    if ( (*(_QWORD *)v49 & 0x80000) != 0 )
    {
      v20 = 8LL * *(unsigned int *)(v49 + 4);
      v21 = v49 + v20 + 64;
      v22 = v49 + v20 + 80;
      v23 = v21;
      if ( (*(_WORD *)v49 & 0x1FF) != 0x18 )
        v23 = v22;
      if ( *(_DWORD *)(v23 + 8) )
      {
        if ( *(_DWORD *)(v8 + 16) )
        {
          v24 = sub_16C47B0(**(_QWORD **)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL);
          sub_1CB13F0(v8, 1);
          v25 = *(_DWORD *)(v8 + 16);
          if ( !v25 )
          {
            sub_168B9F0((__int64)v57, (__int64 *)(*(_QWORD *)v46 + 8LL), *(_DWORD *)(v8 + 128), 0x1406u, 0);
            v54 = *(_QWORD *)(v8 + 120);
            v41 = sub_15894B0((__int64)v57, &v54);
            v44 = _mm_loadu_si128((const __m128i *)(v49 + 40));
            v55 = v44;
            v26 = sub_E90530(v55.m128i_i64) >> 32;
            if ( v55.m128i_i64[0] )
            {
              v56 = (__m128)_mm_load_si128(&v55);
              v27 = *(_QWORD *)(v55.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v27 )
              {
                v44.m128i_i64[0] = v56.m128_i64[1];
                v56 = _mm_loadh_ps((const double *)v44.m128i_i64);
                while ( (*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                {
                  LOBYTE(v18) = 1;
                  v27 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                }
                if ( (_BYTE)v18 )
                  v56.m128_u64[0] = v27;
              }
              v28 = sub_E90530((__int64 *)&v56);
            }
            else
            {
              v28 = 0;
            }
            v56.m128_u64[0] = __PAIR64__(v26, v28);
            v39 = sub_1587DB0(v41, (__int64 *)&v56);
            v52 = sub_18C0AA0(v49);
            v40 = sub_1588420(v39, (unsigned __int8 *)&v52);
            if ( (*(_QWORD *)v49 & 0x80000) != 0 )
              v25 = sub_1CB01F0(v49);
            v53 = v25;
            sub_180D980(v40, &v53);
            sub_15F7200(v57);
            sub_168B9F0((__int64)v57, (__int64 *)(*(_QWORD *)v46 + 8LL), *(_DWORD *)(v24 + 24), 0x18FAu, 0);
            v18 = 1;
            v56.m128_u64[0] = *(_QWORD *)(v8 + 120);
            sub_15894B0((__int64)v57, (__int64 *)&v56);
            sub_15F7200(v57);
          }
        }
      }
    }
  }
  return v18;
}
