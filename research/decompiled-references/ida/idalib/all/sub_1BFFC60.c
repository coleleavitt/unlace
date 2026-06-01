unsigned __int64 __fastcall sub_1BFFC60(
        __m128 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v12; // rdi
  unsigned int i; // edx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  _WORD *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // r12
  char v21; // r14
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned int v24; // r12d
  _BOOL4 v25; // r11d
  unsigned int v26; // ebx
  unsigned __int64 v27; // rsi
  int v28; // r15d
  int v29; // r10d
  _BOOL4 v30; // r13d
  unsigned __int64 v31; // r11
  __int64 v32; // r14
  __int64 v33; // rdi
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // r14
  char v40; // al
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *v45; // r12
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r14
  int v49; // r15d
  __int64 v50; // rbx
  void *v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // r14
  __int64 v54; // r15
  char v55; // bp
  void *v56; // rdi
  __int64 v57; // rax
  unsigned __int64 v58; // [rsp+0h] [rbp-138h]
  __int64 v59; // [rsp+0h] [rbp-138h]
  __int64 v62; // [rsp+18h] [rbp-120h]
  unsigned __int64 v63; // [rsp+18h] [rbp-120h]
  char v64; // [rsp+28h] [rbp-110h]
  int v65; // [rsp+28h] [rbp-110h]
  __int64 v66; // [rsp+28h] [rbp-110h]
  int v67; // [rsp+30h] [rbp-108h]
  unsigned __int64 v68; // [rsp+30h] [rbp-108h]
  int v69; // [rsp+30h] [rbp-108h]
  unsigned __int64 v70; // [rsp+38h] [rbp-100h]
  unsigned __int64 v71; // [rsp+38h] [rbp-100h]
  __int64 v72; // [rsp+48h] [rbp-F0h]
  int v73; // [rsp+50h] [rbp-E8h]
  int v74; // [rsp+54h] [rbp-E4h]
  __m128i v75[2]; // [rsp+60h] [rbp-D8h] BYREF
  void *ptr; // [rsp+80h] [rbp-B8h]
  char v77; // [rsp+90h] [rbp-A8h] BYREF

  result = *(_DWORD *)(a2 + 104) & 0x3FC00;
  if ( (_DWORD)result != 2048 )
    return result;
  v8 = *(_QWORD *)(a2 + 56);
  v9 = a2;
  *(_QWORD *)(a2 + 96) = sub_1BEC610;
  v73 = v8;
  v12 = *(_QWORD *)(a2 + 48);
  for ( i = (*(_BYTE *)(a2 + 104) & 0x18) == 8; ; ++i )
  {
    v14 = v12 + 152LL * i;
    if ( (*(_DWORD *)v14 & 0x7FFFFFFF) == 5 )
      break;
  }
  v15 = *(_QWORD *)(v14 + 40);
  v16 = *(_QWORD *)(v14 + 32);
  v17 = *(_WORD **)(v14 + 16);
  v72 = v9 + 64;
  v20 = sub_19E7980(v9 + 64, v17, v16, v15, (__int64)a1, (__m128i)a6, *(double *)a7.m128_u64);
  if ( !v20 )
  {
    v19 = *(_QWORD *)(v9 + 64);
    v59 = v19;
    if ( v19 != *(_QWORD *)(v9 + 72) )
    {
      v63 = a4;
      v48 = *(_QWORD *)(v9 + 64);
      v49 = v8;
      v50 = *(_QWORD *)(v9 + 72);
      do
      {
        while ( 1 )
        {
          v51 = *(void **)(v48 + 24);
          v18 = v48 + 40;
          if ( v51 == (void *)(v48 + 40) )
            break;
          operator delete(v51);
          v48 += 64;
          if ( v50 == v48 )
            goto LABEL_42;
        }
        v48 += 64;
      }
      while ( v50 != v48 );
LABEL_42:
      LODWORD(v8) = v49;
      a4 = v63;
      *(_QWORD *)(v9 + 72) = v59;
    }
    *(_DWORD *)(v9 + 88) = 0;
  }
  v64 = v20 ^ 1;
  v21 = *(_BYTE *)(v9 + 105) & 2;
  if ( (*(_BYTE *)(v9 + 104) & 4) != 0 )
  {
    v75[0].m128i_i64[0] = sub_AED600(*(_QWORD *)(v9 + 40), (__int64)v17, v18, v19);
    v45 = (__int64 *)(sub_C1BEF0((__int64)v75, (__int64)v17, v41, v42) & 0xFFFFFFFFFFFFFFF0LL);
    v46 = *v45;
    if ( *(_BYTE *)(*v45 + 16) == 42 || (v46 = sub_1BC7590(v46, (__int64)v17, v43, v44)) != 0 )
      v45 = (__int64 *)(*(_QWORD *)(v46 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v47 = *v45;
    if ( *(_BYTE *)(*v45 + 16) != 26 )
      v47 = sub_F63050(*v45, v17, v43, v44);
    a5 = 1;
    v62 = v47 + 48;
    v58 = *(unsigned __int16 *)(v47 + 22);
LABEL_12:
    if ( !v21 )
    {
      result = 0;
      v24 = 0;
      v25 = 0;
      goto LABEL_14;
    }
LABEL_26:
    v25 = 0;
    v24 = v58 - 1;
    result = 0;
    goto LABEL_14;
  }
  v22 = *(_QWORD *)v9;
  if ( !*(_QWORD *)v9 )
  {
    v58 = 3;
    a5 = 0;
    v62 = v9 + 16;
    goto LABEL_12;
  }
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v23 + 16) != 26 )
  {
    v23 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL), v17, v18, v19);
    v22 = *(_QWORD *)v9;
  }
  v62 = v23 + 48;
  v58 = *(unsigned __int16 *)(v23 + 22);
  if ( ((*(_BYTE *)(v22 + 28) + 93) & 0x7Fu) > 2 )
  {
    a5 = 0;
    goto LABEL_12;
  }
  if ( v21 )
  {
    a5 = 0;
    goto LABEL_26;
  }
  if ( (unsigned __int8)sub_B771C0(v22, v23 + 48, v18, v19) )
  {
    result = 0;
    v24 = 0;
    v25 = 0;
    a5 = 0;
  }
  else if ( a5 == 1 )
  {
    v57 = *(_QWORD *)(*(_QWORD *)v9 + 40LL);
    if ( (*(_DWORD *)(*(_QWORD *)v9 + 40LL) & 7) == 6 )
    {
      v25 = (unsigned int)(*(_DWORD *)(v57 & 0xFFFFFFFFFFFFFFF8LL) - 42) >= 2;
      v24 = 0;
      result = (unsigned int)(*(_DWORD *)(v57 & 0xFFFFFFFFFFFFFFF8LL) - 42) >= 2;
    }
    else
    {
      v25 = 1;
      result = 1;
      v24 = 0;
    }
  }
  else
  {
    result = 0;
    v24 = 0;
    v25 = 0;
    a5 = 1;
  }
LABEL_14:
  if ( a5 != (_DWORD)v8 && a4 > result )
  {
    v26 = a5;
    v27 = a4;
    v28 = a5;
    v29 = v21 == 0 ? 1 : -1;
    v30 = v25;
    v31 = v27;
    do
    {
      v32 = 152LL * v26;
      v33 = v32 + *(_QWORD *)(v9 + 48);
      v34 = *(_DWORD *)v33;
      if ( (*(_DWORD *)v33 & 0x7FFFFFFF) == 6 )
      {
        if ( v24 >= v58 )
        {
          *(_DWORD *)v33 = v34 & 0x80000000 | 4;
        }
        else
        {
          v35 = *(_QWORD *)(a3 + 8 * result);
          v36 = *(_QWORD *)(v62 + 8LL * v24);
          if ( (*(_BYTE *)(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
          {
            v37 = *(_QWORD *)(v35 + 8);
            v38 = *(_QWORD *)(v33 + 16) & 0xFFFFF80400000000LL;
            *(_DWORD *)v33 = v34 & 0x80000000;
            *(_QWORD *)(v33 + 56) = 0;
            *(_QWORD *)(v33 + 16) = v38 | 0x2000000000LL;
            *(_QWORD *)(v33 + 24) = v37;
            *(_QWORD *)(v33 + 32) = v37;
            *(_QWORD *)(v33 + 40) = v37;
            *(_QWORD *)(v33 + 48) = v37;
          }
          else
          {
            v70 = v31;
            v67 = v29;
            sub_1BFFB80(v75, a1, (_WORD *)v35, v36, 1u, (*(_BYTE *)(a1[14].m128_u64[1] + 107) & 4) != 0, a6, a7);
            sub_1BD9390((__m128i *)(v32 + *(_QWORD *)(v9 + 48)), v75);
            v29 = v67;
            v31 = v70;
            if ( (v75[0].m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v77 )
            {
              free(ptr);
              v31 = v70;
              v29 = v67;
            }
            if ( !v64 )
            {
              v39 = *(_QWORD *)(v9 + 48) + v32;
              if ( (*(_DWORD *)v39 & 0x7FFFFFFF) == 5 )
              {
                v68 = v31;
                v65 = v29;
                v40 = sub_19E7980(
                        v72,
                        *(_WORD **)(v39 + 16),
                        *(_QWORD *)(v39 + 32),
                        *(_QWORD *)(v39 + 40),
                        (__int64)a1,
                        (__m128i)a6,
                        *(double *)a7.m128_u64);
                v29 = v65;
                v31 = v68;
                if ( !v40 )
                {
                  v52 = *(_QWORD *)(v9 + 64);
                  v66 = *(_QWORD *)(v9 + 72);
                  if ( v52 != v66 )
                  {
                    v74 = v28;
                    v53 = *(_QWORD *)(v9 + 64);
                    v54 = v9;
                    v55 = v40;
                    do
                    {
                      while ( 1 )
                      {
                        v56 = *(void **)(v53 + 24);
                        if ( v56 == (void *)(v53 + 40) )
                          break;
                        v71 = v31;
                        v53 += 64;
                        v69 = v29;
                        operator delete(v56);
                        v29 = v69;
                        v31 = v71;
                        if ( v66 == v53 )
                          goto LABEL_59;
                      }
                      v53 += 64;
                    }
                    while ( v66 != v53 );
LABEL_59:
                    v40 = v55;
                    v9 = v54;
                    v28 = v74;
                    *(_QWORD *)(v9 + 72) = v52;
                  }
                  *(_DWORD *)(v9 + 88) = 0;
                }
                v64 = v40 ^ 1;
              }
            }
          }
        }
      }
      ++v26;
      v24 += v29;
      result = v26 + v30 - v28;
    }
    while ( v73 != v26 && result < v31 );
  }
  return result;
}
