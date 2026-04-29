unsigned __int64 __fastcall sub_1017F0(_QWORD *a1, _QWORD *a2, _BYTE *a3)
{
  _QWORD *v3; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdi

  v3 = (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFCLL);
  if ( v3 == a1 )
  {
    v5 = *a2 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*a3 & 2) == 0 )
      v5 = (unsigned __int64)a3;
    *v3 = v5 & 0xFFFFFFFFFFFFFFFCLL | *v3 & 3LL;
  }
  else if ( a2 == (_QWORD *)v3[1] )
  {
    v3[1] = a3;
  }
  else
  {
    v3[2] = a3;
  }
  result = *(_QWORD *)a3;
  if ( (*(_QWORD *)a3 & 2) == 0 )
  {
    result = *a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)a3 & 3LL;
    *(_QWORD *)a3 = result;
  }
  return result;
}
