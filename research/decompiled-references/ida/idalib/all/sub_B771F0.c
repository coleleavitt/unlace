__int64 __fastcall sub_B771F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = sub_B76070(a1, a2, a3, a4);
  if ( (unsigned int)sub_B76070(a1, a2, v5, v6) )
    v4 -= *(_DWORD *)(**(_QWORD **)(a1 + 120) + 100LL) != 0;
  return v4;
}
