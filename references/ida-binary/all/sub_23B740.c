__int64 __fastcall sub_23B740(__int64 *a1, char *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = sub_23B360(a1, a2, 1, nullptr);
  v3 = 0;
  if ( !v2 )
    return v3;
  v3 = 1;
  if ( !*(_QWORD *)(v2 + 32) )
    return v3;
  LOBYTE(v3) = **(_BYTE **)(v2 + 24) == 0;
  return v3;
}
