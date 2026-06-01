__int64 __fastcall sub_1B199B0(_QWORD *a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // r15
  _QWORD *v5; // rbp
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  char *v9; // rdi
  unsigned int v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // r13
  __int64 v19; // rax
  int v20; // r10d
  __int64 v21; // r8
  char v22; // dl
  __int64 v23; // rdx
  __m128i *v24; // rcx
  __int64 *v25; // r13
  __m128i *v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // r12
  __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+0h] [rbp-148h]
  unsigned __int64 v38; // [rsp+0h] [rbp-148h]
  __int64 v39; // [rsp+18h] [rbp-130h]
  __int64 v40; // [rsp+20h] [rbp-128h]
  _QWORD *v41; // [rsp+30h] [rbp-118h]
  char v43; // [rsp+4Bh] [rbp-FDh]
  bool v45; // [rsp+5Bh] [rbp-EDh] BYREF
  int v46; // [rsp+5Ch] [rbp-ECh] BYREF
  __int64 v47; // [rsp+60h] [rbp-E8h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-E0h] BYREF
  __m128i v49; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v50[25]; // [rsp+80h] [rbp-C8h] BYREF

  v4 = a4;
  v5 = (_QWORD *)(a2 + 80);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
    v5 = (_QWORD *)(a2 + 64);
  v43 = 1;
  v41 = &v5[*(unsigned int *)(a2 + 4)];
  if ( v41 != v5 )
  {
    v39 = a4 + 24;
    v40 = a4 + 8;
    while ( 1 )
    {
      v7 = *v5 & 0xFFFFFFFFFFFFFFF8LL;
      v8 = sub_1B04070((__int64)a1, v7);
      if ( v8 )
      {
        v49.m128i_i64[0] = v8;
        v22 = *(_BYTE *)(v8 + 28) & 0x7F;
        if ( v22 != 55 )
        {
          v24 = &v49;
          v43 = 0;
          v25 = &v49.m128i_i64[1];
          goto LABEL_26;
        }
        v23 = *(unsigned int *)(v8 + 56);
        v24 = (__m128i *)(v8 + 64);
        v25 = (__int64 *)(v8 + 64 + 8 * v23);
        v43 &= v23 == 0;
        if ( (__int64 *)(v8 + 64) != v25 )
        {
          v22 = *(_BYTE *)(*(_QWORD *)(v8 + 64) + 28LL) & 0x7F;
LABEL_26:
          v26 = v24;
          v27 = v24->m128i_i64[0];
          if ( v22 == 81 )
          {
LABEL_27:
            v28 = *(_QWORD *)(v27 + 48) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v28 )
            {
              v29 = *(unsigned int *)(a4 + 16);
              do
              {
                v30 = *(unsigned int *)(a4 + 20);
                v31 = v28 | (*(_BYTE *)(v28 + 29) >> 5) & 3;
                v50[0] = v31;
                if ( v29 + 1 > v30 )
                {
                  v37 = v31;
                  sub_2237220(v40, v39, v29 + 1, 8);
                  v29 = *(unsigned int *)(a4 + 16);
                  v31 = v37;
                }
                *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v29) = v31;
                v32 = *(_DWORD *)(a4 + 16);
                *(_DWORD *)a4 = 2;
                v29 = (unsigned int)(v32 + 1);
                *(_DWORD *)(a4 + 16) = v29;
                v28 = *(_QWORD *)(v28 + 72);
              }
              while ( v28 && (*(_BYTE *)(v28 + 28) & 0x7Fu) - 53 <= 1 );
            }
            goto LABEL_33;
          }
          while ( 1 )
          {
            v33 = *(unsigned int *)(a4 + 16);
            v34 = *(unsigned int *)(a4 + 20);
            v35 = (*(_BYTE *)(v27 + 29) >> 5) & 3 | (unsigned __int64)v27;
            v50[0] = v35;
            if ( v33 + 1 > v34 )
            {
              v38 = v35;
              sub_2237220(v40, v39, v33 + 1, 8);
              v33 = *(unsigned int *)(a4 + 16);
              v35 = v38;
            }
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v33) = v35;
            *(_DWORD *)a4 = 2;
            ++*(_DWORD *)(a4 + 16);
LABEL_33:
            v26 = (__m128i *)((char *)v26 + 8);
            if ( v25 == (__int64 *)v26 )
              break;
            v27 = v26->m128i_i64[0];
            if ( (*(_BYTE *)(v26->m128i_i64[0] + 28) & 0x7F) == 0x51 )
              goto LABEL_27;
          }
        }
      }
      else if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 53 > 1 )
      {
        v9 = *(char **)(a4 + 88);
        *(_DWORD *)a4 = 0;
        *(_DWORD *)(a4 + 16) = 0;
        if ( v9 )
          sub_1A39780(v9);
        *(_BYTE *)(a4 + 166) = 0;
        v10 = 1;
        *(_OWORD *)(a4 + 88) = 0;
        return v10;
      }
      if ( v41 == ++v5 )
      {
        v4 = a4;
        break;
      }
    }
  }
  v10 = a3 ^ 1;
  LOBYTE(v10) = v43 & (a3 ^ 1);
  if ( (_BYTE)v10 )
  {
    sub_168B9F0((__int64)v50, (__int64 *)(*a1 + 8LL), *(_DWORD *)(a2 + 24), 0x1527u, 0);
    LOBYTE(v48) = (*(_WORD *)a2 & 0x1FF) == 23;
    v36 = sub_1588420((__int64)v50, (unsigned __int8 *)&v48);
    v49.m128i_i64[0] = *(_QWORD *)(a2 + 16);
    sub_15894B0(v36, v49.m128i_i64);
    sub_15F7200(v50);
  }
  else
  {
    sub_1A43500(v4);
    if ( (*(_QWORD *)a2 & 0x80000) != 0 )
    {
      v12 = 8LL * *(unsigned int *)(a2 + 4);
      v13 = a2 + v12 + 64;
      v14 = a2 + v12 + 80;
      v15 = v13;
      if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
        v15 = v14;
      if ( *(_DWORD *)(v15 + 8) )
      {
        if ( *(_DWORD *)(v4 + 16) )
        {
          v16 = sub_16C47B0(**(_QWORD **)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL);
          sub_1CB3F20(*a1, v4, 1, 1);
          if ( !*(_DWORD *)(v4 + 16) )
          {
            sub_168B9F0((__int64)v50, (__int64 *)(*a1 + 8LL), *(_DWORD *)(v4 + 128), 0x1406u, 0);
            v47 = *(_QWORD *)(v4 + 120);
            v17 = sub_15894B0((__int64)v50, &v47);
            v49 = _mm_loadu_si128((const __m128i *)(a2 + 40));
            v48 = sub_183A570(&v49);
            v18 = sub_1587DB0(v17, (__int64 *)&v48);
            v45 = sub_18C0AA0(a2);
            v19 = sub_1588420(v18, (unsigned __int8 *)&v45);
            v20 = 0;
            v21 = v19;
            if ( (*(_QWORD *)a2 & 0x80000) != 0 )
              v20 = sub_1AE87B0(a2);
            v46 = v20;
            sub_180D980(v21, &v46);
            sub_15F7200(v50);
            sub_168B9F0((__int64)v50, (__int64 *)(*a1 + 8LL), *(_DWORD *)(v16 + 24), 0x18FAu, 0);
            v49.m128i_i64[0] = *(_QWORD *)(v4 + 120);
            sub_15894B0((__int64)v50, v49.m128i_i64);
            v10 = 1;
            sub_15F7200(v50);
          }
        }
      }
    }
  }
  return v10;
}
