_QWORD *__fastcall sub_F82B90(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned int v9; // eax
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // r13
  _QWORD *i; // rdx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *j; // rdx
  _QWORD *v19; // [rsp+8h] [rbp-40h] BYREF

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
    for ( i = &result[3 * v11]; i != result; *((_DWORD *)result - 4) = -1 )
    {
      *result = -4096;
      result += 3;
    }
    if ( v13 != v8 )
    {
      v15 = v8;
      while ( *(_QWORD *)v15 == -4096 )
      {
        if ( *(_DWORD *)(v15 + 8) == -1 )
        {
          v15 += 24;
          if ( v13 == v15 )
            return (_QWORD *)operator delete(v8, v12, 8);
        }
        else
        {
LABEL_9:
          sub_F7E560((__int64 *)a1, (__int64 *)v15, &v19);
          v16 = v19;
          *v19 = *(_QWORD *)v15;
          *((_DWORD *)v16 + 2) = *(_DWORD *)(v15 + 8);
          v16[2] = *(_QWORD *)(v15 + 16);
          ++*(_DWORD *)(a1 + 8);
LABEL_10:
          v15 += 24;
          if ( v13 == v15 )
            return (_QWORD *)operator delete(v8, v12, 8);
        }
      }
      if ( *(_QWORD *)v15 == -8192 && *(_DWORD *)(v15 + 8) == -2 )
        goto LABEL_10;
      goto LABEL_9;
    }
    return (_QWORD *)operator delete(v8, v12, 8);
  }
  else
  {
    v17 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[3 * v17]; j != result; *((_DWORD *)result - 4) = -1 )
    {
      *result = -4096;
      result += 3;
    }
  }
  return result;
}
