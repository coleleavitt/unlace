__int64 __fastcall sub_8B90F0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // rcx
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rdi

  v3 = (unsigned __int64 *)a1[2];
  v4 = (unsigned __int64 *)a1[7];
  if ( v4 == &v3[3 * a1[3]] || a2 < *v4 || a2 >= v4[1] )
  {
    v5 = sub_8B8C20(a1, a2);
  }
  else
  {
    v5 = v4 - 3;
    if ( v4 == v3 )
      return -1;
  }
  if ( (unsigned __int64 *)a1[11] != v5 )
  {
    v6 = v5[1];
    a1[7] = v5;
    a1[6] = v6 - 1;
    a1[8] = v5[2] + 4 * (v6 - 1 - *v5);
    return v5[1] - 1;
  }
  return -1;
}
