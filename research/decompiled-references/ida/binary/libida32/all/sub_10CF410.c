__int64 *__fastcall sub_10CF410(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // esi
  __int64 *v9; // r8
  unsigned int v10; // edx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 *result; // rax
  int v14; // r10d
  __int64 *v15; // r11
  __int64 v16; // r8
  __int64 v17; // rsi
  _QWORD *v18; // rdx
  int v19; // eax
  int v20; // r8d
  unsigned int v21; // edi
  int v22; // eax
  int v23; // r8d
  unsigned int v24; // edi
  __int64 *v25; // r10
  int v26; // r11d
  int v27; // r11d

  v7 = *(_DWORD *)(a1 + 16);
  if ( v7 )
  {
    a4 = *a2;
    a6 = v7 - 1;
    v9 = *(__int64 **)a1;
    v10 = a6 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
    v11 = (__int64 *)(*(_QWORD *)a1 + 72LL * v10);
    v12 = *v11;
    if ( *a2 == *v11 )
      return v11 + 1;
    v14 = 1;
    v15 = nullptr;
    if ( v12 != -4096 )
    {
      while ( 1 )
      {
        if ( !v15 && v12 == -8192 )
          v15 = v11;
        v10 = a6 & (v14 + v10);
        v11 = &v9[9 * v10];
        v12 = *v11;
        if ( a4 == *v11 )
          return v11 + 1;
        if ( v12 == -4096 )
          break;
        ++v14;
      }
      if ( v15 )
        v11 = v15;
    }
    a3 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    a5 = (unsigned int)(4 * a3);
    if ( (unsigned int)a5 < 3 * v7 )
    {
      v16 = v7 >> 3;
      if ( v7 - *(_DWORD *)(a1 + 12) - (unsigned int)a3 > (unsigned int)v16 )
      {
LABEL_7:
        v17 = *v11;
        goto LABEL_8;
      }
      sub_10CF1C0((__int64 **)a1, v7, a3, a4, v16, a6);
      v22 = *(_DWORD *)(a1 + 16);
      if ( v22 )
      {
        a4 = *a2;
        v23 = v22 - 1;
        LODWORD(a3) = *(_DWORD *)(a1 + 8) + 1;
        v24 = (v22 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
        v11 = (__int64 *)(*(_QWORD *)a1 + 72LL * v24);
        v17 = *v11;
        if ( *v11 == *a2 )
        {
          v17 = *a2;
          goto LABEL_8;
        }
        if ( v17 != -4096 )
        {
          v25 = (__int64 *)(*(_QWORD *)a1 + 72LL * (v23 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))));
          v26 = 1;
          v11 = nullptr;
          while ( 1 )
          {
            if ( v17 == -8192 && !v11 )
              v11 = v25;
            v24 = v23 & (v26 + v24);
            v25 = (__int64 *)(*(_QWORD *)a1 + 72LL * v24);
            v17 = *v25;
            if ( a4 == *v25 )
              break;
            if ( v17 == -4096 )
              goto LABEL_40;
            ++v26;
          }
LABEL_33:
          v11 = v25;
LABEL_8:
          *(_DWORD *)(a1 + 8) = a3;
          if ( v17 != -4096 )
            --*(_DWORD *)(a1 + 12);
          goto LABEL_10;
        }
        goto LABEL_23;
      }
LABEL_45:
      ++*(_DWORD *)(a1 + 8);
      BUG();
    }
  }
  sub_10CF1C0((__int64 **)a1, 2 * v7, a3, a4, a5, a6);
  v19 = *(_DWORD *)(a1 + 16);
  if ( !v19 )
    goto LABEL_45;
  a4 = *a2;
  v20 = v19 - 1;
  LODWORD(a3) = *(_DWORD *)(a1 + 8) + 1;
  v21 = (v19 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v11 = (__int64 *)(*(_QWORD *)a1 + 72LL * v21);
  v17 = *v11;
  if ( *v11 == *a2 )
    goto LABEL_8;
  if ( v17 != -4096 )
  {
    v25 = (__int64 *)(*(_QWORD *)a1 + 72LL * (v20 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))));
    v27 = 1;
    v11 = nullptr;
    while ( 1 )
    {
      if ( !v11 && v17 == -8192 )
        v11 = v25;
      v21 = v20 & (v27 + v21);
      v25 = (__int64 *)(*(_QWORD *)a1 + 72LL * v21);
      v17 = *v25;
      if ( a4 == *v25 )
        goto LABEL_33;
      if ( v17 == -4096 )
      {
LABEL_40:
        if ( v11 )
          goto LABEL_7;
        v11 = v25;
        break;
      }
      ++v27;
    }
  }
LABEL_23:
  *(_DWORD *)(a1 + 8) = a3;
LABEL_10:
  *v11 = a4;
  v18 = v11 + 3;
  result = v11 + 1;
  *result = (__int64)v18;
  result[1] = 0x300000000LL;
  return result;
}

