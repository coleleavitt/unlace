__int64 __fastcall sub_563C30(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rcx

  v2 = sub_562CD0(a1);
  if ( !v2 )
    return 0;
  v3 = 0;
  if ( v2 >= a2 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2);
  return v3;
}
