__int64 __fastcall get_fileregion_offset(unsigned __int64 a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 *v2; // rbx
  unsigned __int64 v3; // r12
  int v4; // edx
  int v5; // eax
  int v6; // edx

  v1 = sub_505D70(*(_QWORD *)(qword_2CCB598 + 1672) + 2872LL, a1);
  if ( !v1 )
    return -1;
  v2 = v1;
  v3 = a1 - *v1;
  v4 = nbits(a1);
  v5 = v4 + 14;
  v6 = v4 + 7;
  if ( v6 >= 0 )
    v5 = v6;
  return v2[2] + v3 * (v5 >> 3);
}
