__int64 __fastcall sub_8EA3B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = *(_QWORD *)(a1 + 7496);
  if ( !v2 || !*(_QWORD *)(v2 + 216) )
    return 0;
  LOBYTE(v3) = (unsigned int)sub_B39350(a2, *(unsigned int *)(v2 + 8)) != -1;
  return v3;
}

