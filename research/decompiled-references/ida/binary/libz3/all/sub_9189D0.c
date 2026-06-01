__int64 __fastcall sub_9189D0(__int64 a1, __int64 *a2)
{
  _DWORD *v3; // r12
  __int64 (__fastcall *v4)(); // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned int *v8; // r13
  unsigned int *v9; // rbp
  __int64 *v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rsi

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
  v7 = *(_QWORD *)(a1 + 8);
  result = sub_8E8110((_QWORD *)a2[1], (unsigned int *)v7);
  if ( !(_DWORD)result )
    goto LABEL_9;
  if ( (_DWORD)result != -1 )
  {
    if ( (_DWORD)result != 1 )
      return result;
LABEL_9:
    v8 = *(unsigned int **)(v7 + 32);
    v9 = *(unsigned int **)(v7 + 40);
    if ( (unsigned int)sub_8E8110((_QWORD *)a2[1], v8) == -1 )
    {
      result = a2[5];
      v13 = *v8 >> 5;
      if ( !result || (unsigned int)v13 >= *(_DWORD *)(result - 4) || (*(_DWORD *)(result + 4 * v13) & (1 << *v8)) == 0 )
        return (*(__int64 (__fastcall **)(__int64 *, unsigned int *, __int64))(*a2 + 48))(a2, v8, v13);
    }
    else
    {
      result = sub_8E8110((_QWORD *)a2[1], v9);
      if ( (_DWORD)result == 1 )
      {
        v14 = a2[5];
        v15 = *v9 >> 5;
        if ( !v14 )
          return (*(__int64 (__fastcall **)(__int64 *, unsigned int *, __int64))(*a2 + 48))(a2, v9, v14);
        if ( (unsigned int)v15 >= *(_DWORD *)(v14 - 4) )
          return (*(__int64 (__fastcall **)(__int64 *, unsigned int *, __int64))(*a2 + 48))(a2, v9, v14);
        result = *(_DWORD *)(v14 + 4 * v15) & (unsigned int)(1 << *v9);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(__int64 *, unsigned int *, __int64))(*a2 + 48))(a2, v9, v14);
      }
    }
    return result;
  }
  result = *(unsigned int *)(v7 + 24);
  if ( (_DWORD)result )
  {
    v10 = (__int64 *)(v7 + 8LL * (unsigned int)(result - 1) + 32);
    v11 = (__int64 *)(v7 + 24);
    do
    {
      v12 = *v10--;
      result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 48))(a2, v12);
    }
    while ( v10 != v11 );
  }
  return result;
}

