__int64 __fastcall sub_5CBE80(
        _QWORD *a1,
        __int64 a2,
        __int64 (__fastcall **a3)(_QWORD, __int128 *, __int64),
        __int64 (__fastcall **a4)(_QWORD, __int128 *, __int64))
{
  int v6; // r15d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v13; // rax

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
    v7 = sub_3C1900(a1, v7, *(_QWORD *)(v8 + 8), a3, a4);
    if ( v7 != -1 )
      break;
    v10 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      v11 = *(_DWORD *)(a2 + 8) + 1;
      if ( v11 < *(_DWORD *)(v10 + 128) )
        goto LABEL_19;
    }
    *(_DWORD *)(a2 + 8) = v6;
    return 0;
    *(_DWORD *)(a2 + 8) = v11;
    if ( v11 >= 0 && v11 < *(_DWORD *)(v10 + 128) )
      v10 = *(_QWORD *)(v10 + 136) + 16LL * v11;
LABEL_19:
    v7 = *(_QWORD *)v10;
    if ( !a3 )
      break;
    v13 = sub_3BE900(a1, *(_QWORD *)v10, 1);
  }
  while ( !((unsigned __int8 (__fastcall *)(unsigned __int64, __int64 (__fastcall **)(_QWORD, __int128 *, __int64)))a3)(
             v13,
             a4) );
  *(_QWORD *)(a2 + 32) = v7;
  return 1;
}
