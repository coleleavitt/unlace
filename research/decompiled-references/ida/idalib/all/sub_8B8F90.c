unsigned __int64 __fastcall sub_8B8F90(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 *v3; // rax

  v2 = a2 + 1;
  v3 = sub_8B8DB0((__int64)a1, a2 + 1);
  if ( v3 == (unsigned __int64 *)a1[11] )
    return sub_8B8F20(a1, v2);
  a1[7] = v3;
  a1[6] = v2;
  a1[8] = v3[2] + 4 * (v2 - *v3);
  return a2 + 1;
}
