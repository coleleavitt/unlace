__int64 __fastcall ClpSimplex::factorizationFrequency(ClpSimplex *this)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *((_QWORD *)this + 158);
  if ( !v1 )
    return 0xFFFFFFFFLL;
  v2 = *(_QWORD *)(v1 + 8);
  if ( v2 )
    return *(unsigned int *)(v2 + 64);
  else
    return *(unsigned int *)(*(_QWORD *)(v1 + 16) + 48LL);
}

