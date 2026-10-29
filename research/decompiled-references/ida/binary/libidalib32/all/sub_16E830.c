__int64 __fastcall sub_16E830(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  v2 = *(_QWORD *)(a2 + 8);
  LODWORD(v3) = 1;
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 12);
    LOBYTE(v3) = v3 >= v2 - 1;
  }
  return (unsigned int)v3;
}

