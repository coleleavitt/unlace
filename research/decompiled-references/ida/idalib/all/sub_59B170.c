__int64 __fastcall sub_59B170(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r13
  unsigned __int64 v3; // rbp
  char v4; // dl
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rbx

  v2 = a1 + 300;
  v3 = sub_3BDD60(a1, a2);
  v4 = sub_7BE710(a1 + 300, *a1, v3, 4176);
  result = 0;
  if ( v4 )
  {
    v6 = sub_7BE710(v2, *a1, v3, 65);
    sub_3CF0D0((__int64)a1, a2, v6);
    v7 = *a1;
    sub_7BE850(v2, *a1, v3, 4176);
    sub_7BE850(v2, v7, v3, 65);
    return 1;
  }
  return result;
}
