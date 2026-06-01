__int64 __fastcall sub_17A220(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_52EF50();
  *(_QWORD *)(a1 + 8) = 0;
  result = *(_DWORD *)(a2 + 360) & 0xFFFFFFFE;
  if ( dword_8C9810 > 0 )
    result = *(_DWORD *)(a2 + 360) | 1u;
  *(_DWORD *)(a2 + 360) = result;
  return result;
}
