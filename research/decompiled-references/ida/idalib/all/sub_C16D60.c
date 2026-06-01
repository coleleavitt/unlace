__int64 __fastcall sub_C16D60(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  _QWORD *v3; // rbx
  __int64 result; // rax
  _QWORD *v5; // rdx
  bool v6; // dl

  v2 = *a1;
  v3 = a2;
  result = sub_21F90D0();
  v5 = a1;
  if ( v2 == result )
    v5 = (_QWORD *)a1[1];
  v6 = (*((_BYTE *)v5 + 20) & 8) != 0;
  if ( *a2 == result )
    v3 = (_QWORD *)a2[1];
  if ( ((*((_BYTE *)v3 + 20) & 8) != 0) != v6 )
  {
    if ( v2 == result )
      return sub_21FFF70();
    else
      return sub_21FA410();
  }
  return result;
}
