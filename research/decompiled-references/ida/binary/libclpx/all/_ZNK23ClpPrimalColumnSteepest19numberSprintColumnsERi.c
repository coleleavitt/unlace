__int64 __fastcall ClpPrimalColumnSteepest::numberSprintColumns(ClpPrimalColumnSteepest *this, int *a2)
{
  ClpSimplex *v3; // rdi
  int v4; // edx
  int v5; // eax
  int v6; // edx
  __int64 v7; // rax
  int v8; // esi
  int v9; // ecx
  __int64 result; // rax

  *a2 = 0;
  if ( *((_DWORD *)this + 22) || *((int *)this + 19) <= 9 )
    return 0;
  v3 = *((ClpSimplex **)this + 1);
  v4 = *((_DWORD *)v3 + 26) / 5;
  if ( v4 > 2000 )
    v4 = 2000;
  *a2 = v4;
  v5 = ClpSimplex::factorizationFrequency(v3);
  v6 = 500;
  if ( *a2 >= 500 )
    v6 = *a2;
  if ( v6 < v5 )
    v6 = v5;
  *a2 = v6;
  if ( *((_DWORD *)this + 19) != 10 )
    abort();
  v7 = *((_QWORD *)this + 1);
  v8 = *(_DWORD *)(v7 + 108);
  v9 = *(_DWORD *)(v7 + 104) / 5;
  result = (unsigned int)(v8 / 10);
  if ( v9 >= (int)result )
    result = (unsigned int)v9;
  if ( (int)result < 300 )
    result = 300;
  if ( (int)result > v8 )
    return (unsigned int)v8;
  return result;
}

