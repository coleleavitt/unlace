__int64 __fastcall sub_5B0ED0(
        _QWORD *a1,
        __int64 a2,
        __int64 (__fastcall **a3)(_QWORD, _QWORD *, __int64),
        __int64 (__fastcall **a4)(_QWORD, _QWORD *, __int64))
{
  unsigned int v6; // r14d
  unsigned int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v13; // rax
  unsigned int *v14; // rcx
  int v15; // [rsp+4h] [rbp-44h]

  sub_5ACDD0(a1, *(_QWORD *)a2, 1);
  v6 = *(_DWORD *)(a2 + 24);
  v15 = *(_DWORD *)(a2 + 8);
  v7 = v6;
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
    v6 = sub_3BC980(a1, v6, *(_DWORD *)(v8 + 4), a3, a4);
    if ( v6 != -1 )
      break;
    v10 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      do
      {
        v11 = *(_DWORD *)(a2 + 8) + 1;
        if ( *(_DWORD *)(v10 + 104) <= v11 )
        {
          if ( *(_DWORD *)v10 != -1 && v7 < *(_DWORD *)v10 )
            goto LABEL_14;
          goto LABEL_11;
        }
        *(_DWORD *)(a2 + 8) = v11;
        v14 = (unsigned int *)v10;
        if ( v11 >= 0 && v11 < *(_DWORD *)(v10 + 104) )
          v14 = (unsigned int *)(*(_QWORD *)(v10 + 112) + 8LL * v11);
      }
      while ( v7 >= v14[1] );
      v6 = *v14;
      if ( v7 >= *(_DWORD *)v10 || *(_DWORD *)v10 >= v6 )
        goto LABEL_15;
    }
    else
    {
      if ( v7 >= 0x464C457F )
        goto LABEL_11;
      v10 = a2 + 12;
    }
LABEL_14:
    *(_DWORD *)(a2 + 8) = -1;
    v6 = *(_DWORD *)v10;
    v7 = *(_DWORD *)v10;
LABEL_15:
    if ( v6 == -1 )
    {
LABEL_11:
      *(_DWORD *)(a2 + 8) = v15;
      return 0;
    }
    if ( !a3 )
      break;
    v13 = sub_3B9AA0((__int64)a1, v6, 1);
  }
  while ( !((unsigned __int8 (__fastcall *)(unsigned __int64, __int64 (__fastcall **)(_QWORD, _QWORD *, __int64)))a3)(
             v13,
             a4) );
  *(_DWORD *)(a2 + 24) = v6;
  return 1;
}

