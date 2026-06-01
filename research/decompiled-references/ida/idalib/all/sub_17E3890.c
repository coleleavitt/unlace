__int64 __fastcall sub_17E3890(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r12
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // r8
  int v15; // r10d
  __int64 v16; // r11
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  int v25; // r9d
  unsigned int v26; // r8d
  int v27; // eax
  int v28; // r9d
  unsigned int v29; // r8d
  unsigned __int64 v30; // rdx
  __int64 v31; // r13
  __int64 v32; // rbp
  __int64 *v33; // rax
  __int64 *v34; // r10
  int v35; // r11d
  int v36; // r11d
  __m128 v37[3]; // [rsp+0h] [rbp-38h] BYREF

  v6 = (_DWORD *)a3;
  v9 = *(_DWORD *)(a1 + 16);
  if ( v9 )
  {
    a3 = *a2;
    v10 = *(_QWORD *)a1;
    v11 = (v9 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
    v12 = v10 + 16LL * v11;
    v13 = *(_QWORD *)v12;
    if ( a3 == *(_QWORD *)v12 )
    {
LABEL_3:
      sub_17AC880(v37, (_QWORD *)v12, (_QWORD *)(v10 + 16LL * v9), a1, 1);
      return *(_QWORD *)(a1 + 24) + 16LL * *(unsigned int *)(v37[0].m128_u64[0] + 8);
    }
    v15 = 1;
    v16 = 0;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !v16 && v13 == -8192 )
          v16 = v12;
        v11 = (v9 - 1) & (v15 + v11);
        v12 = v10 + 16LL * v11;
        v13 = *(_QWORD *)v12;
        if ( a3 == *(_QWORD *)v12 )
          goto LABEL_3;
        if ( v13 == -4096 )
          break;
        ++v15;
      }
      if ( v16 )
        v12 = v16;
    }
    a5 = 3 * v9;
    a4 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    a6 = (unsigned int)(4 * a4);
    if ( (unsigned int)a6 < (unsigned int)a5 )
    {
      v17 = v9 - *(_DWORD *)(a1 + 12) - (unsigned int)a4;
      v18 = v9 >> 3;
      if ( (unsigned int)v17 > (unsigned int)v18 )
      {
LABEL_7:
        v19 = *(_QWORD *)v12;
        goto LABEL_8;
      }
      sub_17E3690((__int64 *)a1, v9, a3, a4, v17, v18);
      v27 = *(_DWORD *)(a1 + 16);
      if ( v27 )
      {
        a3 = *a2;
        v28 = v27 - 1;
        v10 = *(_QWORD *)a1;
        LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
        v29 = (v27 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
        v12 = *(_QWORD *)a1 + 16LL * v29;
        v19 = *(_QWORD *)v12;
        if ( *(_QWORD *)v12 == *a2 )
        {
          v19 = *a2;
          goto LABEL_8;
        }
        if ( v19 != -4096 )
        {
          v34 = (__int64 *)(*(_QWORD *)a1 + 16LL * (v28 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))));
          v35 = 1;
          v12 = 0;
          while ( 1 )
          {
            if ( v19 == -8192 && !v12 )
              v12 = (__int64)v34;
            v29 = v28 & (v35 + v29);
            v34 = (__int64 *)(v10 + 16LL * v29);
            v19 = *v34;
            if ( a3 == *v34 )
              break;
            if ( v19 == -4096 )
              goto LABEL_45;
            ++v35;
          }
LABEL_38:
          v12 = (__int64)v34;
LABEL_8:
          *(_DWORD *)(a1 + 8) = a4;
          if ( v19 != -4096 )
            --*(_DWORD *)(a1 + 12);
          goto LABEL_10;
        }
        goto LABEL_16;
      }
LABEL_50:
      ++*(_DWORD *)(a1 + 8);
      BUG();
    }
  }
  sub_17E3690((__int64 *)a1, 2 * v9, a3, a4, a5, a6);
  v24 = *(_DWORD *)(a1 + 16);
  if ( !v24 )
    goto LABEL_50;
  a3 = *a2;
  v25 = v24 - 1;
  v10 = *(_QWORD *)a1;
  LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
  v26 = (v24 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v12 = *(_QWORD *)a1 + 16LL * v26;
  v19 = *(_QWORD *)v12;
  if ( *(_QWORD *)v12 == *a2 )
    goto LABEL_8;
  if ( v19 != -4096 )
  {
    v34 = (__int64 *)(*(_QWORD *)a1 + 16LL * (v25 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))));
    v36 = 1;
    v12 = 0;
    while ( 1 )
    {
      if ( !v12 && v19 == -8192 )
        v12 = (__int64)v34;
      v26 = v25 & (v36 + v26);
      v34 = (__int64 *)(v10 + 16LL * v26);
      v19 = *v34;
      if ( a3 == *v34 )
        goto LABEL_38;
      if ( v19 == -4096 )
      {
LABEL_45:
        if ( v12 )
          goto LABEL_7;
        v12 = (__int64)v34;
        break;
      }
      ++v36;
    }
  }
LABEL_16:
  *(_DWORD *)(a1 + 8) = a4;
LABEL_10:
  *(_QWORD *)v12 = a3;
  *(_DWORD *)(v12 + 8) = 0;
  sub_17AC880(v37, (_QWORD *)v12, (_QWORD *)(v10 + 16LL * *(unsigned int *)(a1 + 16)), a1, 1);
  v20 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(v37[0].m128_u64[0] + 8) = v20;
  v21 = *(unsigned int *)(a1 + 36);
  if ( v20 >= v21 )
  {
    v30 = v20 + 1;
    v31 = *a2;
    v32 = (unsigned int)*v6;
    if ( v21 < v30 )
      sub_2237220(a1 + 24, a1 + 40, v30, 16);
    v33 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * *(unsigned int *)(a1 + 32));
    *v33 = v31;
    v33[1] = v32;
    v23 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
    *(_DWORD *)(a1 + 32) = v23;
  }
  else
  {
    v22 = *(_QWORD *)(a1 + 24) + 16 * v20;
    *(_QWORD *)v22 = *a2;
    *(_DWORD *)(v22 + 8) = *v6;
    v23 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
    *(_DWORD *)(a1 + 32) = v23;
  }
  return *(_QWORD *)(a1 + 24) + 16 * v23 - 16;
}
