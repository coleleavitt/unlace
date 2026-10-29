__int64 __fastcall sub_5CBCB0(
        _QWORD *a1,
        __int64 a2,
        __int64 (__fastcall **a3)(_QWORD, __int128 *, __int64),
        __int64 (__fastcall **a4)(_QWORD, __int128 *, __int64))
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // rcx
  int v15; // [rsp+4h] [rbp-44h]

  sub_5C7820(a1, *(_QWORD *)a2, 1);
  v6 = *(_QWORD *)(a2 + 32);
  v15 = *(_DWORD *)(a2 + 8);
  v7 = v6;
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
    v6 = sub_3C1900(a1, v6, *(_QWORD *)(v8 + 8), a3, a4);
    if ( v6 != -1 )
      break;
    v10 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      do
      {
        v11 = *(_DWORD *)(a2 + 8) + 1;
        if ( *(_DWORD *)(v10 + 128) <= v11 )
        {
          if ( *(_QWORD *)v10 != -1 && v7 < *(_QWORD *)v10 )
            goto LABEL_14;
          goto LABEL_11;
        }
        *(_DWORD *)(a2 + 8) = v11;
        v14 = (unsigned __int64 *)v10;
        if ( v11 >= 0 && v11 < *(_DWORD *)(v10 + 128) )
          v14 = (unsigned __int64 *)(*(_QWORD *)(v10 + 136) + 16LL * v11);
      }
      while ( v7 >= v14[1] );
      v6 = *v14;
      if ( v7 >= *(_QWORD *)v10 || *(_QWORD *)v10 >= v6 )
        goto LABEL_15;
    }
    else
    {
      if ( v7 >= 0x10102464C457FLL )
        goto LABEL_11;
      v10 = a2 + 16;
    }
LABEL_14:
    *(_DWORD *)(a2 + 8) = -1;
    v6 = *(_QWORD *)v10;
    v7 = *(_QWORD *)v10;
LABEL_15:
    if ( v6 == -1 )
    {
LABEL_11:
      *(_DWORD *)(a2 + 8) = v15;
      return 0;
    }
    if ( !a3 )
      break;
    v13 = sub_3BE900(a1, v6, 1);
  }
  while ( !((unsigned __int8 (__fastcall *)(unsigned __int64, __int64 (__fastcall **)(_QWORD, __int128 *, __int64)))a3)(
             v13,
             a4) );
  *(_QWORD *)(a2 + 32) = v6;
  return 1;
}
