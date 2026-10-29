_DWORD *__fastcall sub_210A330(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // r13
  __int64 v9; // rbp
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // r14
  _DWORD *i; // rdx
  __int64 v16; // rbx
  int *v17; // rax
  _DWORD *j; // rdx
  int *v19; // [rsp+8h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
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
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (_DWORD *)sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = 16 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = v9 + v13;
    for ( i = &result[4 * v12]; i != result; *(result - 3) = -1 )
    {
      *result = -1;
      result += 4;
    }
    if ( v14 != v9 )
    {
      v16 = v9;
      while ( *(_DWORD *)v16 == -1 )
      {
        if ( *(_DWORD *)(v16 + 4) == -1 )
        {
          v16 += 16;
          if ( v14 == v16 )
            return (_DWORD *)operator delete(v9, v13, 8);
        }
        else
        {
LABEL_9:
          sub_2105C10((__int64 *)a1, (int *)v16, &v19);
          v17 = v19;
          *v19 = *(_DWORD *)v16;
          v17[1] = *(_DWORD *)(v16 + 4);
          *((_QWORD *)v17 + 1) = *(_QWORD *)(v16 + 8);
          ++*(_DWORD *)(a1 + 8);
LABEL_10:
          v16 += 16;
          if ( v14 == v16 )
            return (_DWORD *)operator delete(v9, v13, 8);
        }
      }
      if ( *(_DWORD *)v16 == -2 && *(_DWORD *)(v16 + 4) == -2 )
        goto LABEL_10;
      goto LABEL_9;
    }
    return (_DWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[4 * *(unsigned int *)(a1 + 16)]; j != result; *(result - 3) = -1 )
    {
      *result = -1;
      result += 4;
    }
  }
  return result;
}
