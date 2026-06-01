__int64 __fastcall sub_DACC50(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ecx
  _QWORD *v3; // rdx
  __int64 result; // rax
  unsigned int v5; // eax

  v1 = sub_DFDA20(*(_QWORD *)(a1 + 176), 64);
  v2 = *(_DWORD *)(v1 + 24);
  v3 = (_QWORD *)v1;
  if ( v2 && v2 != 2 )
  {
    result = 1;
    if ( v2 == 3 )
      return result;
    if ( v3[5] )
      return result;
    if ( *v3 )
      return result;
    result = 1;
    if ( v3[6] )
      return result;
LABEL_10:
    v5 = sub_DFC980(*(_QWORD *)(a1 + 400));
    sub_E0FDF0(a1, v5, 2526, 0);
    return 0;
  }
  result = 1;
  if ( !v3[4] )
  {
    result = 1;
    if ( !v3[6] )
      goto LABEL_10;
  }
  return result;
}

