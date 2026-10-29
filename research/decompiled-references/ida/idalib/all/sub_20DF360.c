__int64 __fastcall sub_20DF360(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v3; // r15
  _BYTE *v5; // r12
  _BYTE *v6; // rbx
  __int64 result; // rax

  v3 = 0;
  v5 = *(_BYTE **)(a1 + 8);
  v6 = *(_BYTE **)a1;
  if ( sub_20D1BF0((size_t)&v5[-*(_QWORD *)a1], *(const void **)a1, 2u, "St") )
  {
    *(_QWORD *)a1 = v6 + 2;
    v3 = sub_20D1380(a1 + 816, "std");
    if ( !v3 )
      return 0;
    v6 = *(_BYTE **)a1;
    v5 = *(_BYTE **)(a1 + 8);
  }
  result = 0;
  if ( v5 == v6 || *v6 != 83 )
    return sub_20DED80(a1, a2, v3, result);
  result = sub_20D8880(a1);
  if ( result )
  {
    if ( *(_BYTE *)(result + 8) == 27 )
      return sub_20DED80(a1, a2, v3, result);
    if ( !v3 )
    {
      *a3 = 1;
      return result;
    }
  }
  return 0;
}
