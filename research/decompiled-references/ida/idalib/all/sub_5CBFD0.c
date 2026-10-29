__int64 __fastcall sub_5CBFD0(
        _QWORD *a1,
        __int64 a2,
        __int64 (__fastcall **a3)(_QWORD, __int128 *, __int64),
        __int64 (__fastcall **a4)(_QWORD, __int128 *, __int64))
{
  int v6; // r15d
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // rax

  sub_5C7820(a1, *(_QWORD *)a2, 1);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 32);
  do
  {
    v8 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      v9 = *(int *)(a2 + 8);
      if ( (int)v9 >= 0 && (int)v9 < *(_DWORD *)(v8 + 128) )
        v8 = *(_QWORD *)(v8 + 136) + 16 * v9;
    }
    else
    {
      v8 = a2 + 16;
    }
    v7 = sub_3C19F0((__int64 (__fastcall **)(_QWORD, __int128 *, __int64))a1, v7, *(_QWORD *)v8, a3, a4);
    if ( v7 != -1 )
      break;
    v10 = *(_DWORD *)(a2 + 8);
    if ( v10 < 0 )
    {
      *(_DWORD *)(a2 + 8) = v6;
      return 0;
    }
    v12 = *(_QWORD *)a2;
    v13 = v10 - 1;
    *(_DWORD *)(a2 + 8) = v13;
    if ( v12 )
    {
      if ( v13 != -1 && v13 < *(_DWORD *)(v12 + 128) )
        v12 = *(_QWORD *)(v12 + 136) + 16LL * v13;
      v7 = *(_QWORD *)(v12 + 8) - 1LL;
      if ( !a3 )
        break;
    }
    else
    {
      v7 = *(_QWORD *)(a2 + 24) - 1LL;
      if ( !a3 )
        break;
    }
    v14 = sub_3BE900(a1, v7, 1);
  }
  while ( !((unsigned __int8 (__fastcall *)(unsigned __int64, __int64 (__fastcall **)(_QWORD, __int128 *, __int64)))a3)(
             v14,
             a4) );
  *(_QWORD *)(a2 + 32) = v7;
  return 1;
}
