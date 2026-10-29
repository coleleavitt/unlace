__int64 __fastcall sub_9186D0(__int64 a1, __int64 *a2)
{
  _DWORD *v3; // r12
  __int64 (__fastcall *v4)(); // rax
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned int *v7; // r12
  unsigned int *v8; // rbp
  unsigned int *v9; // r12
  __int64 v10; // rsi
  unsigned int **v11; // rbp
  unsigned int **v12; // r13
  unsigned int *v13; // r14
  unsigned int *v14; // r12
  __int64 v15; // rdx

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
  if ( (_DWORD)result == -1 )
  {
    v11 = (unsigned int **)(v7 + 8);
    result = 8LL * v7[6];
    v12 = (unsigned int **)((char *)v7 + result + 32);
    if ( result )
    {
      v13 = nullptr;
      do
      {
        v14 = *v11;
        result = sub_8E8110((_QWORD *)a2[1], *v11);
        if ( (_DWORD)result == -1 )
        {
          result = a2[5];
          v15 = *v14 >> 5;
          if ( result
            && (unsigned int)v15 < *(_DWORD *)(result - 4)
            && (*(_DWORD *)(result + 4 * v15) & (1 << *v14)) != 0 )
          {
            return result;
          }
          if ( !v13 )
            v13 = v14;
        }
        ++v11;
      }
      while ( v12 != v11 );
      if ( v13 )
        return (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*a2 + 48))(a2, v13);
    }
  }
  else if ( (_DWORD)result == 1 )
  {
    result = v7[6];
    if ( (_DWORD)result )
    {
      v8 = &v7[2 * (unsigned int)(result - 1) + 8];
      v9 = v7 + 6;
      do
      {
        v10 = *(_QWORD *)v8;
        v8 -= 2;
        result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 48))(a2, v10);
      }
      while ( v8 != v9 );
    }
  }
  return result;
}

