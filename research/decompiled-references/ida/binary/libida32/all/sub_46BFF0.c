__int64 __fastcall sub_46BFF0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  _DWORD *v8; // rdi
  _DWORD *v9; // rax
  _DWORD *v10; // r10

  v4 = switch_dbctx(*(int *)(a1 + 8));
  v5 = sub_4F7C00(v4);
  v6 = -1;
  v7 = *(_QWORD *)(v5 + 8);
  if ( !v7 )
    return v6;
  v8 = *(_DWORD **)v5;
  v9 = sub_46BE60(*(_DWORD **)v5, *(_QWORD *)v5 + 8 * v7, a2);
  if ( a3 == 1 )
  {
    if ( v9 == v10 )
      return v6;
    v6 = (unsigned int)*v9;
    if ( a2 != (_DWORD)v6 )
      return v6;
    v9 += 2;
LABEL_10:
    if ( v9 == v10 )
      return -1;
    return (unsigned int)*v9;
  }
  if ( a3 != 2 )
  {
    if ( a3 )
      return (unsigned int)*v9;
    goto LABEL_10;
  }
  if ( v8 == v9 )
    return v6;
  return (unsigned int)*(v9 - 2);
}

