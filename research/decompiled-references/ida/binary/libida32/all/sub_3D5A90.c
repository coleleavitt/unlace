unsigned __int64 __fastcall sub_3D5A90(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 result; // rax

  switch_dbctx(*(int *)(a1 + 8));
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 8);
  if ( a3 == 1 )
  {
    result = -1;
    if ( a2 >= v5 )
      return result;
    result = a2 + 1;
  }
  else
  {
    v6 = *(_QWORD *)(v4 + 8);
    if ( a2 <= v5 )
      v6 = a2;
    result = v6 - 1;
    if ( a3 != 2 )
      result = a2;
  }
  if ( result >= v5 )
    return -1;
  return result;
}

