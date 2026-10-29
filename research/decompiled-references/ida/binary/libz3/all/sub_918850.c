__int64 __fastcall sub_918850(__int64 a1, __int64 *a2)
{
  _DWORD *v3; // r12
  __int64 (__fastcall *v4)(); // rax
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rbp
  unsigned int **v8; // r13
  unsigned int **v9; // rbp
  unsigned int *v10; // r12
  unsigned int *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int *v14; // r12
  unsigned int *v15; // rbp
  __int64 v16; // rsi

  v3 = *(_DWORD **)(a1 + 8);
  v4 = *(__int64 (__fastcall **)())(*a2 + 56);
  if ( v4 == sub_919010 )
  {
    if ( (unsigned int)sub_8E7030(a2[1]) )
    {
      result = a2[5];
      v6 = *v3 >> 5;
      if ( !result || (unsigned int)v6 >= *(_DWORD *)(result - 4) || (*(_DWORD *)(result + 4 * v6) & (1 << *v3)) == 0 )
        return result;
    }
  }
  else
  {
    result = ((__int64 (__fastcall *)(__int64 *, _QWORD))v4)(a2, *(_QWORD *)(a1 + 8));
    if ( !(_BYTE)result )
      return result;
  }
  v7 = *(unsigned int **)(a1 + 8);
  result = sub_8E8110((_QWORD *)a2[1], v7);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == -1 )
    {
      result = v7[6];
      if ( (_DWORD)result )
      {
        v14 = &v7[2 * (unsigned int)(result - 1) + 8];
        v15 = v7 + 6;
        do
        {
          v16 = *(_QWORD *)v14;
          v14 -= 2;
          result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 48))(a2, v16);
        }
        while ( v14 != v15 );
      }
      return result;
    }
    if ( (_DWORD)result != 1 )
      return result;
  }
  v8 = (unsigned int **)(v7 + 8);
  result = 8LL * v7[6];
  v9 = (unsigned int **)((char *)v7 + result + 32);
  if ( result )
  {
    v10 = nullptr;
    do
    {
      v11 = *v8;
      result = sub_8E8110((_QWORD *)a2[1], *v8);
      if ( (_DWORD)result == 1 )
      {
        v12 = a2[5];
        v13 = *v11 >> 5;
        if ( v12 )
        {
          if ( (unsigned int)v13 < *(_DWORD *)(v12 - 4) )
          {
            result = *(_DWORD *)(v12 + 4 * v13) & (unsigned int)(1 << *v11);
            if ( (_DWORD)result )
              return result;
          }
        }
        if ( !v10 )
          v10 = v11;
      }
      ++v8;
    }
    while ( v9 != v8 );
    if ( v10 )
      return (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*a2 + 48))(a2, v10);
  }
  return result;
}

