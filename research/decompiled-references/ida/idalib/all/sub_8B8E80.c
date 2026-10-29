__int64 __fastcall sub_8B8E80(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 *v3; // rax
  bool v4; // zf
  __int64 result; // rax

  v2 = a1[6];
  if ( v2 == a2 && v2 != -1 )
    return a1[8];
  v3 = (unsigned __int64 *)a1[7];
  if ( (v3 == (unsigned __int64 *)a1[11] || a2 < *v3 || a2 >= v3[1])
    && (v3 = sub_8B8DB0((__int64)a1, a2), v4 = a1[11] == (_QWORD)v3, a1[7] = v3, v4) )
  {
    a1[6] = -1;
    return 0;
  }
  else
  {
    a1[6] = a2;
    result = v3[2] + 4 * (a2 - *v3);
    a1[8] = result;
  }
  return result;
}
