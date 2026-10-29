__int64 __fastcall sub_8E8560(__int64 a1)
{
  __int64 v1; // rax
  int v2; // eax
  unsigned int v3; // ebp
  __int64 v5; // rax
  _QWORD *v6; // r12
  _QWORD *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v1 = *(_QWORD *)(a1 + 8920);
  if ( v1 )
    v2 = *(_DWORD *)(v1 - 4);
  else
    v2 = 0;
  if ( *(_DWORD *)(a1 + 8936) != v2 )
    return 1;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 7488) + 72LL))(*(_QWORD *)(a1 + 7488)) )
    return 1;
  v5 = *(_QWORD *)(a1 + 9024);
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 - 4) )
      return 1;
  }
  v3 = sub_953490(*(_QWORD *)(a1 + 7472));
  if ( (_BYTE)v3 )
    return 1;
  v6 = *(_QWORD **)(a1 + 8688);
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 != v7 )
    {
      while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 176LL))(*v6) )
      {
        if ( v7 == ++v6 )
          goto LABEL_14;
      }
      return 1;
    }
  }
LABEL_14:
  v8 = *(_QWORD *)(a1 + 8760);
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 - 4) )
      return 1;
  }
  v9 = *(_QWORD *)(a1 + 8768);
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 - 4) )
      return 1;
  }
  v10 = *(_QWORD *)(a1 + 8776);
  if ( v10 )
    LOBYTE(v3) = *(_DWORD *)(v10 - 4) != 0;
  return v3;
}

