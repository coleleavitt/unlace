__int64 __fastcall sub_4805C0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 *v9; // rax
  __int64 *v10; // r9

  v4 = switch_dbctx(*(int *)(a1 + 8));
  v5 = sub_50F370(v4);
  v6 = -1;
  v7 = *(_QWORD *)(v5 + 8);
  if ( !v7 )
    return v6;
  v8 = *(__int64 **)v5;
  v9 = sub_480420(*(_QWORD **)v5, *(_QWORD *)v5 + 16 * v7, a2);
  if ( a3 == 1 )
  {
    if ( v9 == v10 )
      return v6;
    v6 = *v9;
    if ( a2 != *v9 )
      return v6;
    v9 += 2;
LABEL_10:
    if ( v9 == v10 )
      return -1;
    return *v9;
  }
  if ( a3 != 2 )
  {
    if ( a3 )
      return *v9;
    goto LABEL_10;
  }
  if ( v8 == v9 )
    return v6;
  return *(v9 - 2);
}
