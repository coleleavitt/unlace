__int64 __fastcall sub_381E80(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi

  if ( !a2 || *a3 )
    return 0xFFFFFFFFLL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, 0);
  v6 = *(_QWORD *)(a4 + 152);
  v7 = v5 + 1;
  if ( v6 )
  {
    v8 = a4 + 144;
    do
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v6 + 16);
        v10 = *(_QWORD *)(v6 + 24);
        if ( v7 <= *(_DWORD *)(v6 + 32) )
          break;
        v6 = *(_QWORD *)(v6 + 24);
        if ( !v10 )
          goto LABEL_8;
      }
      v8 = v6;
      v6 = *(_QWORD *)(v6 + 16);
    }
    while ( v9 );
LABEL_8:
    if ( a4 + 144 != v8 && v7 >= *(_DWORD *)(v8 + 32) )
      return (unsigned int)((*(_BYTE *)(*(_QWORD *)(v8 + 40) + 72LL) & 8) == 0) + 177;
  }
  v11 = *(_QWORD *)(a4 + 104);
  v12 = a4 + 96;
  if ( !v11 )
    return 0xFFFFFFFFLL;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_QWORD *)(v11 + 24);
      if ( v7 <= *(_DWORD *)(v11 + 32) )
        break;
      v11 = *(_QWORD *)(v11 + 24);
      if ( !v14 )
        goto LABEL_15;
    }
    v12 = v11;
    v11 = *(_QWORD *)(v11 + 16);
  }
  while ( v13 );
LABEL_15:
  if ( a4 + 96 != v12 && v7 >= *(_DWORD *)(v12 + 32) )
    return 179;
  else
    return 0xFFFFFFFFLL;
}
