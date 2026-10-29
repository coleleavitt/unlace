__int64 __fastcall sub_8B1720(__int64 a1, _QWORD *a2, __int64 a3)
{
  _BYTE *v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rdx

  v3 = (_BYTE *)*a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( v4 )
    return 0;
  if ( (unsigned __int64)v3 >= v5 )
  {
    *(_BYTE *)(a1 + 9) = 0;
    return 0;
  }
  *(_BYTE *)(a1 + 9) = *v3;
  *a2 = v3 + 1;
  return 1;
}

