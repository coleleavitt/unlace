__int64 __fastcall sub_7F5B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int128 v3; // rt0

  v2 = -a2;
  if ( a2 > 0 )
    v2 = a2;
  *(_QWORD *)&v3 = a2;
  *((_QWORD *)&v3 + 1) = v2;
  return sub_7F380(a1, v3 >> 63);
}
