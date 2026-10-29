__int64 __fastcall sub_B77230(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = sub_B770E0(a1, a2);
  if ( (unsigned int)sub_B76070(a1, a2, v3, v4) )
    v2 -= *(_DWORD *)(**(_QWORD **)(a1 + 120) + 100LL) != 0;
  return v2;
}
