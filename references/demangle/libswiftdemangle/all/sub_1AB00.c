__int64 __fastcall sub_1AB00(_QWORD *a1, char a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rdx

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = (_BYTE *)*a1;
  if ( a2 != *(_BYTE *)*a1 )
    return 0;
  a1[1] = v2 - 1;
  *a1 = v3 + 1;
  return 1;
}
