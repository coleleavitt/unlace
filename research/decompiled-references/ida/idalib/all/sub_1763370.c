__int64 __fastcall sub_1763370(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v2 == 1 )
    return 0;
  else
    return sub_1B1AE80(
             *(_QWORD *)(*a1 + 760),
             *(_DWORD *)(a2 + 36),
             (unsigned int)v2 & 0xFFFFFFFE,
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 12),
             *(_DWORD *)(a2 + 40),
             *(_DWORD *)(a2 + 4));
}
