_QWORD *__fastcall sub_F60E70(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned int v9; // eax
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 *v12; // rbp
  _QWORD *i; // rdx
  __int64 *v14; // r12
  __int64 *v15; // rax
  __int64 v16; // rdx
  void *v17; // r14
  __int64 v18; // rdx
  _QWORD *j; // rdx
  __int64 *v20; // [rsp+18h] [rbp-40h] BYREF

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
  result = (_QWORD *)sub_220C370(24LL * v9, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    v11 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v12 = (__int64 *)(v8 + 24 * v7);
    for ( i = &result[3 * v11]; i != result; *(result - 2) = 0x7FFFFFFFFFFFFFFFLL )
    {
      *result = -4096;
      result += 3;
    }
    if ( v12 != (__int64 *)v8 )
    {
      v14 = (__int64 *)v8;
      while ( *v14 == -4096 )
      {
        if ( v14[1] == 0x7FFFFFFFFFFFFFFFLL )
        {
          v14 += 3;
          if ( v12 == v14 )
            return (_QWORD *)operator delete();
        }
        else
        {
LABEL_9:
          sub_F5B3D0((__int64 *)a1, v14, &v20);
          v15 = v20;
          *v20 = *v14;
          v15[1] = v14[1];
          v16 = v14[2];
          v14[2] = 0;
          v15[2] = v16;
          v17 = (void *)v14[2];
          ++*(_DWORD *)(a1 + 8);
          if ( v17 )
          {
            sub_F59490((__int64)v17);
            operator delete(v17, 0x68u);
          }
LABEL_11:
          v14 += 3;
          if ( v12 == v14 )
            return (_QWORD *)operator delete();
        }
      }
      if ( *v14 == -8192 && v14[1] == 0x7FFFFFFFFFFFFFFELL )
        goto LABEL_11;
      goto LABEL_9;
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    v18 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[3 * v18]; j != result; *(result - 2) = 0x7FFFFFFFFFFFFFFFLL )
    {
      *result = -4096;
      result += 3;
    }
  }
  return result;
}

