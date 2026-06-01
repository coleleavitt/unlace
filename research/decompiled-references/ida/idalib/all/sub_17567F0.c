__int64 __fastcall sub_17567F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  char v7; // cl
  int v8; // ecx
  __int64 v9; // rdx
  int v10; // edi
  int v11; // r9d
  unsigned int i; // eax
  _QWORD *v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  char v23; // bl
  char v24; // di
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // ebp
  unsigned __int64 v29; // r11
  unsigned int j; // eax
  unsigned __int64 v31; // rsi
  __int64 v32; // r10
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rdx
  unsigned int v39; // edi
  unsigned __int64 v40; // rax
  unsigned int v41; // esi
  __int64 v42; // [rsp+8h] [rbp-60h] BYREF
  __m128 v43; // [rsp+10h] [rbp-58h] BYREF
  __m128 v44[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1 + 96;
  v7 = *(_BYTE *)(a1 + 96);
  v42 = a3;
  v43 = _mm_loadh_ps((const double *)&v42);
  v8 = v7 & 1;
  if ( v8 )
  {
    v9 = a1 + 104;
    v10 = 3;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(a1 + 104);
  v15 = *(unsigned int *)(a1 + 112);
  if ( (_DWORD)v15 )
  {
    v10 = v15 - 1;
LABEL_3:
    v11 = 1;
    for ( i = v10
            & (((0xBF58476D1CE4E5B9LL
               * (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4)
                | ((unsigned __int64)(((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)) << 32))) >> 31)
             ^ (484763065 * (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4)))); ; i = v10 & v14 )
    {
      v13 = (_QWORD *)(v9 + 24LL * i);
      if ( a2 == *v13 && a3 == v13[1] )
      {
        v16 = 96;
        if ( !(_BYTE)v8 )
          v16 = 24LL * *(unsigned int *)(a1 + 112);
        sub_17461D0(v44, v13, (_QWORD *)(v16 + v9), v4, 1);
        v17 = v44[0].m128_u64[0];
        goto LABEL_13;
      }
      if ( *v13 == -4096 && v13[1] == -4096 )
        break;
      v14 = v11 + i;
      ++v11;
    }
    if ( !(_BYTE)v8 )
    {
      v15 = *(unsigned int *)(a1 + 112);
      goto LABEL_35;
    }
    v35 = 96;
    goto LABEL_36;
  }
LABEL_35:
  v35 = 24 * v15;
LABEL_36:
  sub_17461D0(v44, (_QWORD *)(v9 + v35), (_QWORD *)(v9 + v35), v4, 1);
  v17 = v44[0].m128_u64[0];
LABEL_13:
  if ( (*(_BYTE *)(a1 + 96) & 1) != 0 )
  {
    v18 = a1 + 104;
    v19 = 96;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 104);
    v19 = 24LL * *(unsigned int *)(a1 + 112);
  }
  sub_17461D0(v44, (_QWORD *)(v19 + v18), (_QWORD *)(v19 + v18), v4, 1);
  if ( v44[0].m128_u64[0] != v17 )
    return *(unsigned __int8 *)(v17 + 16);
  if ( *(_DWORD *)a2 == *(_DWORD *)a3 && (unsigned __int8)sub_1742260(a2, a3) )
    v23 = sub_17565E0((__int64 *)a1, (__int64 *)(a2 + 8), (__int64 *)(a3 + 8), v34, v20, v21);
  else
    v23 = 0;
  v24 = *(_BYTE *)(a1 + 96) & 1;
  if ( v24 )
  {
    v26 = a1 + 104;
    v27 = 3;
  }
  else
  {
    v25 = *(unsigned int *)(a1 + 112);
    v26 = *(_QWORD *)(a1 + 104);
    if ( !(_DWORD)v25 )
    {
      v44[0].m128_u64[0] = 0;
      v37 = *(_DWORD *)(a1 + 96);
      v38 = (v37 >> 1) + 1;
      goto LABEL_40;
    }
    v27 = v25 - 1;
  }
  v21 = v43.m128_i64[1];
  v20 = v43.m128_u64[0];
  v28 = 1;
  v29 = 0;
  for ( j = v27
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned __int32)v43.m128_i32[2] >> 9) ^ ((unsigned __int32)v43.m128_i32[2] >> 4)
              | ((unsigned __int64)(((unsigned __int32)v43.m128_i32[0] >> 9) ^ ((unsigned __int32)v43.m128_i32[0] >> 4)) << 32))) >> 31)
           ^ (484763065 * (((unsigned __int32)v43.m128_i32[2] >> 9) ^ ((unsigned __int32)v43.m128_i32[2] >> 4))));
        ;
        j = v27 & v33 )
  {
    v31 = v26 + 24LL * j;
    v32 = *(_QWORD *)v31;
    if ( *(_OWORD *)&v43 == *(_OWORD *)v31 )
    {
      v36 = 96;
      if ( v24 )
        goto LABEL_48;
      goto LABEL_47;
    }
    if ( v32 == -4096 )
      break;
    if ( v32 == -8192 && *(_QWORD *)(v31 + 8) == -8192 && !v29 )
      v29 = v26 + 24LL * j;
LABEL_30:
    v33 = v28 + j;
    ++v28;
  }
  if ( *(_QWORD *)(v31 + 8) != -4096 )
    goto LABEL_30;
  v37 = *(_DWORD *)(a1 + 96);
  if ( !v29 )
    v29 = v31;
  v44[0].m128_u64[0] = v29;
  v38 = (v37 >> 1) + 1;
  if ( v24 )
  {
    v39 = 12;
    v25 = 4;
    goto LABEL_41;
  }
  v25 = *(unsigned int *)(a1 + 112);
LABEL_40:
  v39 = 3 * v25;
LABEL_41:
  if ( 4 * (int)v38 >= v39 )
  {
    v41 = 2 * v25;
LABEL_61:
    sub_1749DF0(v4, v41, v38, v25, v20, v21);
    sub_1744D40(v4, (__int64 *)&v43, (__int64 **)v44);
    v37 = *(_DWORD *)(a1 + 96);
    goto LABEL_43;
  }
  v38 = (unsigned int)(v25 - *(_DWORD *)(a1 + 100) - v38);
  if ( (unsigned int)v38 <= (unsigned int)v25 >> 3 )
  {
    v41 = v25;
    goto LABEL_61;
  }
LABEL_43:
  v31 = v44[0].m128_u64[0];
  *(_DWORD *)(a1 + 96) = (2 * (v37 >> 1) + 2) | v37 & 1;
  if ( *(_QWORD *)v31 != -4096 || *(_QWORD *)(v31 + 8) != -4096 )
    --*(_DWORD *)(a1 + 100);
  v40 = v43.m128_u64[0];
  *(_BYTE *)(v31 + 16) = v23;
  *(_OWORD *)v31 = __PAIR128__(v43.m128_u64[1], v40);
  if ( (*(_BYTE *)(a1 + 96) & 1) != 0 )
  {
    v26 = a1 + 104;
    v36 = 96;
  }
  else
  {
    v26 = *(_QWORD *)(a1 + 104);
LABEL_47:
    v36 = 24LL * *(unsigned int *)(a1 + 112);
  }
LABEL_48:
  sub_17461D0(v44, (_QWORD *)v31, (_QWORD *)(v36 + v26), v4, 1);
  v17 = v44[0].m128_u64[0];
  return *(unsigned __int8 *)(v17 + 16);
}
