__int64 *__fastcall sub_99C770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  unsigned int v9; // esi
  __int64 v10; // rdi
  unsigned int v11; // ecx
  __int64 *result; // rax
  __int64 v13; // r8
  unsigned int v14; // r11d
  int v15; // r10d
  int v16; // edi
  bool v17; // zf
  int v18; // r13d
  __int64 *v19; // r10
  __int64 v20; // r14
  __int64 *v21; // r10
  int v22; // r11d
  __int64 *v23; // r13
  __int64 v24; // [rsp+8h] [rbp-40h] BYREF
  __int64 *v25; // [rsp+18h] [rbp-30h] BYREF

  v6 = (__int64 *)(a1 + 296);
  v9 = *(_DWORD *)(a1 + 312);
  v10 = *(_QWORD *)(a1 + 296);
  v24 = a3;
  if ( !v9 )
  {
    v25 = nullptr;
    goto LABEL_22;
  }
  a6 = v9 - 1;
  v11 = a6 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  result = (__int64 *)(v10 + 16LL * v11);
  v13 = *result;
  if ( a3 == *result )
  {
    if ( result[1] )
      return result;
LABEL_11:
    *++result = a2;
    return result;
  }
  v14 = a6 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v15 = 1;
  if ( v13 == -4096 )
  {
LABEL_6:
    v16 = *(_DWORD *)(a1 + 304);
    v25 = result;
    a4 = (unsigned int)(v16 + 1);
    a5 = (unsigned int)(4 * a4);
    if ( (unsigned int)a5 < 3 * v9 )
    {
      a5 = v9 >> 3;
      if ( v9 - *(_DWORD *)(a1 + 308) - (unsigned int)a4 > (unsigned int)a5 )
      {
LABEL_8:
        v17 = *result == -4096;
        *(_DWORD *)(a1 + 304) = a4;
        if ( !v17 )
          --*(_DWORD *)(a1 + 308);
        *result = a3;
        result[1] = 0;
        goto LABEL_11;
      }
LABEL_23:
      sub_99C560((__int64)v6, v9, a3, a4, a5, a6);
      sub_9984A0(v6, &v24, &v25);
      a3 = v24;
      LODWORD(a4) = *(_DWORD *)(a1 + 304) + 1;
      result = v25;
      goto LABEL_8;
    }
LABEL_22:
    v9 *= 2;
    goto LABEL_23;
  }
  while ( 1 )
  {
    v18 = v15 + 1;
    v14 = a6 & (v15 + v14);
    v19 = (__int64 *)(v10 + 16LL * v14);
    v20 = *v19;
    if ( a3 == *v19 )
      break;
    v15 = v18;
    if ( v20 == -4096 )
    {
      v22 = 1;
      v21 = nullptr;
      goto LABEL_14;
    }
  }
  v21 = (__int64 *)v19[1];
  v22 = 1;
  if ( !v21 )
  {
    while ( 1 )
    {
LABEL_14:
      v23 = result;
      if ( v21 || v13 != -8192 )
        v23 = v21;
      v11 = a6 & (v22 + v11);
      result = (__int64 *)(v10 + 16LL * v11);
      v13 = *result;
      if ( a3 == *result )
        goto LABEL_11;
      if ( v13 == -4096 )
      {
        if ( v23 )
          result = v23;
        goto LABEL_6;
      }
      ++v22;
      v21 = v23;
    }
  }
  return result;
}
