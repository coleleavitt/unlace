__int64 __fastcall sub_36C790(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r8

  v2 = a1[1];
  v3 = -1;
  if ( v2 < (unsigned __int64)xmmword_2CCB488 )
  {
    v4 = *(_QWORD *)(qword_2CCB480 + 8 * v2);
    if ( v4 )
      v3 = (int)base2file(v4, a1[5], a1[9], a1[9] + a1[13]);
  }
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
