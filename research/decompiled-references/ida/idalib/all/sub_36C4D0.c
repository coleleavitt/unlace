__int64 __fastcall sub_36C4D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  FILE *v4; // r8

  v2 = -1;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 < (unsigned __int64)xmmword_2CCB488 )
  {
    v4 = *(FILE **)(qword_2CCB480 + 8 * v3);
    if ( v4 )
      v2 = (int)fwritebytes(v4);
  }
  *(_QWORD *)(a2 + 8) = v2;
  return 0;
}
