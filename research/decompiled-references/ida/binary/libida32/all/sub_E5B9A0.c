__int64 *__fastcall sub_E5B9A0(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 *result; // rax
  int v14; // eax
  int v15; // r8d
  unsigned int v16; // edi
  int v17; // eax
  int v18; // r8d
  unsigned int v19; // edi
  __int64 *v20; // rdx
  int v21; // r11d
  int v22; // r11d

  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_DWORD *)(a1 + 16);
  v10 = (unsigned int)(v8 + 1);
  v11 = (unsigned int)(4 * v10);
  if ( (unsigned int)v11 >= 3 * v9 )
  {
    sub_E5B7C0((__int64 *)a1, 2 * v9, (__int64)a3, v10, v11, a6);
    v14 = *(_DWORD *)(a1 + 16);
    if ( v14 )
    {
      v15 = v14 - 1;
      LODWORD(v10) = *(_DWORD *)(a1 + 8) + 1;
      v16 = (v14 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
      result = (__int64 *)(*(_QWORD *)a1 + 16LL * v16);
      v12 = *result;
      if ( *a2 == *result )
        goto LABEL_4;
      if ( v12 != -4096 )
      {
        v20 = (__int64 *)(*(_QWORD *)a1 + 16LL * (v15 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))));
        v22 = 1;
        result = nullptr;
        while ( 1 )
        {
          if ( v12 == -8192 && !result )
            result = v20;
          v16 = v15 & (v22 + v16);
          v20 = (__int64 *)(*(_QWORD *)a1 + 16LL * v16);
          v12 = *v20;
          if ( *a2 == *v20 )
            goto LABEL_19;
          if ( v12 == -4096 )
          {
LABEL_26:
            if ( result )
            {
              v12 = *result;
              goto LABEL_4;
            }
            result = v20;
            break;
          }
          ++v22;
        }
      }
LABEL_10:
      *(_DWORD *)(a1 + 8) = v10;
      return result;
    }
LABEL_32:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
  if ( v9 - *(_DWORD *)(a1 + 12) - (unsigned int)v10 > v9 >> 3 )
  {
    v12 = *a3;
    result = a3;
    goto LABEL_4;
  }
  sub_E5B7C0((__int64 *)a1, v9, (__int64)a3, v10, v11, a6);
  v17 = *(_DWORD *)(a1 + 16);
  if ( !v17 )
    goto LABEL_32;
  v18 = v17 - 1;
  LODWORD(v10) = *(_DWORD *)(a1 + 8) + 1;
  v19 = (v17 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  result = (__int64 *)(*(_QWORD *)a1 + 16LL * v19);
  v12 = *result;
  if ( *a2 == *result )
    goto LABEL_4;
  if ( v12 == -4096 )
    goto LABEL_10;
  v20 = (__int64 *)(*(_QWORD *)a1 + 16LL * (v18 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))));
  v21 = 1;
  result = nullptr;
  while ( 1 )
  {
    if ( v12 == -8192 && !result )
      result = v20;
    v19 = v18 & (v21 + v19);
    v20 = (__int64 *)(*(_QWORD *)a1 + 16LL * v19);
    v12 = *v20;
    if ( *a2 == *v20 )
      break;
    if ( v12 == -4096 )
      goto LABEL_26;
    ++v21;
  }
LABEL_19:
  result = v20;
LABEL_4:
  *(_DWORD *)(a1 + 8) = v10;
  if ( v12 != -4096 )
    --*(_DWORD *)(a1 + 12);
  return result;
}

