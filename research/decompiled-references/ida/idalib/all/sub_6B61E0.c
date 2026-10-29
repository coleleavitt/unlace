bool __fastcall sub_6B61E0(__int64 **a1)
{
  bool result; // al
  __int64 *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  if ( !*((_BYTE *)*a1 + 2321) )
    return 1;
  switch_dbctx(*(int *)(**a1 + 88));
  v2 = a1[2];
  sub_6B5C90(a1, 1, v3, v4, v5);
  sub_6B5C90(a1, 0, v6, v7, v8);
  result = 1;
  if ( !*((_BYTE *)a1 + 40) )
    return a1[2] == v2;
  return result;
}
