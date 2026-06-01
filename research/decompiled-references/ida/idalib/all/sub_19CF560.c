bool __fastcall sub_19CF560(__int64 a1)
{
  bool result; // al
  __int64 v2; // rax
  _BOOL4 v3; // eax

  result = 0;
  if ( *(_QWORD *)(a1 + 24) == 3 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = *(_WORD *)v2 != 28521 || *(_BYTE *)(v2 + 2) != 115;
    return !v3;
  }
  return result;
}
