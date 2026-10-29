bool __fastcall sub_41F060(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rdx
  bool result; // al
  _DWORD *v8; // rbp
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d

  v6 = *(unsigned int *)(a2 + 96);
  result = 1;
  if ( *(_DWORD *)(a1 + 96) >= (unsigned int)v6 )
  {
    result = 0;
    if ( *(_DWORD *)(a1 + 96) == (_DWORD)v6 )
    {
      sub_407990((_QWORD *)a2, a2, v6, a4, a5, a6);
      v8 = *(_DWORD **)(a2 + 16);
      sub_407990((_QWORD *)a1, a2, v9, v10, v11, v12);
      return **(_DWORD **)(a1 + 16) < *v8;
    }
  }
  return result;
}

