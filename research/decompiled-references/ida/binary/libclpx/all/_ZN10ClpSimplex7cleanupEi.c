__int64 __fastcall ClpSimplex::cleanup(ClpSimplex *this, int a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // r12d
  unsigned int v6; // eax
  unsigned int v7; // [rsp+0h] [rbp-1Ch]

  if ( *((_DWORD *)this + 80) || !a2 )
    return 0;
  v3 = a2 % 10;
  v4 = *((_DWORD *)this + 81);
  if ( (((v4 - 2) & 0xFFFFFFFD) != 0 || (v3 & 1) == 0) && ((v3 & 2) == 0 || (unsigned int)(v4 - 3) > 1) )
    return 0;
  *((_DWORD *)this + 79) |= 1u;
  v5 = *((_DWORD *)this + 64);
  ClpModel::scaling(this, 0);
  if ( a2 > 9 )
    v6 = ClpSimplex::primal(this, 0, 0);
  else
    v6 = ClpSimplex::dual(this, 0, 0);
  v7 = v6;
  ClpModel::scaling(this, v5);
  return v7;
}

