__int64 __fastcall sub_5B1080(
        _QWORD *a1,
        __int64 a2,
        __int64 (__fastcall **a3)(_QWORD, _QWORD *, __int64),
        __int64 (__fastcall **a4)(_QWORD, _QWORD *, __int64))
{
  int v6; // r15d
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v13; // rax

  sub_5ACDD0(a1, *(_QWORD *)a2, 1);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 24);
  do
  {
    v8 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      v9 = *(int *)(a2 + 8);
      if ( (int)v9 >= 0 && (int)v9 < *(_DWORD *)(v8 + 104) )
        v8 = *(_QWORD *)(v8 + 112) + 8 * v9;
    }
    else
    {
      v8 = a2 + 12;
    }
    v7 = sub_3BC980(a1, v7, *(_DWORD *)(v8 + 4), a3, a4);
    if ( v7 != -1 )
      break;
    v10 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      v11 = *(_DWORD *)(a2 + 8) + 1;
      if ( v11 < *(_DWORD *)(v10 + 104) )
        goto LABEL_19;
    }
    *(_DWORD *)(a2 + 8) = v6;
    return 0;
    *(_DWORD *)(a2 + 8) = v11;
    if ( v11 >= 0 && v11 < *(_DWORD *)(v10 + 104) )
      v10 = *(_QWORD *)(v10 + 112) + 8LL * v11;
LABEL_19:
    v7 = *(_DWORD *)v10;
    if ( !a3 )
      break;
    v13 = sub_3B9AA0((__int64)a1, v7, 1);
  }
  while ( !((unsigned __int8 (__fastcall *)(unsigned __int64, __int64 (__fastcall **)(_QWORD, _QWORD *, __int64)))a3)(
             v13,
             a4) );
  *(_DWORD *)(a2 + 24) = v7;
  return 1;
}

