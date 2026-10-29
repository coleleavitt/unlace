_QWORD *__fastcall sub_F842B0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned int v9; // eax
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // r15
  _QWORD *i; // rdx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  int v17; // edx
  __int64 v18; // rdx
  _QWORD *j; // rdx
  _QWORD *v20; // [rsp+8h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v7 = *(unsigned int *)(a1 + 16);
  v8 = *(_QWORD *)a1;
  v9 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
        | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
        | ((v6 | (v6 >> 1)) >> 2)
        | v6
        | (v6 >> 1)) >> 16)
      | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
      | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
      | ((v6 | (v6 >> 1)) >> 2)
      | v6
      | (v6 >> 1))
     + 1;
  if ( v9 < 0x40 )
    v9 = 64;
  *(_DWORD *)(a1 + 16) = v9;
  result = (_QWORD *)sub_22300B0(24LL * v9, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    v11 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v12 = 24 * v7;
    v13 = v8 + 24 * v7;
    for ( i = &result[3 * v11]; i != result; *(result - 2) = 0 )
    {
      *result = 0;
      result += 3;
    }
    if ( v13 != v8 )
    {
      v15 = v8;
      while ( 1 )
      {
        v17 = *(_DWORD *)(v15 + 8);
        if ( *(_QWORD *)v15 )
          break;
        if ( v17 )
        {
LABEL_10:
          sub_F7E8E0((__int64 *)a1, (__int64 *)v15, &v20);
          v16 = v20;
          *v20 = *(_QWORD *)v15;
          *((_DWORD *)v16 + 2) = *(_DWORD *)(v15 + 8);
          v20[2] = *(_QWORD *)(v15 + 16);
          ++*(_DWORD *)(a1 + 8);
LABEL_11:
          v15 += 24;
          if ( v13 == v15 )
            return (_QWORD *)operator delete(v8, v12, 8);
        }
        else
        {
          v15 += 24;
          if ( v13 == v15 )
            return (_QWORD *)operator delete(v8, v12, 8);
        }
      }
      if ( !v17 && *(_QWORD *)v15 == -1 )
        goto LABEL_11;
      goto LABEL_10;
    }
    return (_QWORD *)operator delete(v8, v12, 8);
  }
  else
  {
    v18 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[3 * v18]; j != result; *(result - 2) = 0 )
    {
      *result = 0;
      result += 3;
    }
  }
  return result;
}
