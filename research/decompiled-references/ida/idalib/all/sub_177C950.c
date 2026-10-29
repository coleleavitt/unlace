unsigned __int64 __fastcall sub_177C950(__int64 *a1, __int64 a2, double a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  result = (unsigned __int64)sub_177C940(a1, *(unsigned int **)(a2 + 16), a3);
  if ( result != 1 )
    return sub_EEEA30(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 8), result & 0xFFFFFFFFFFFFFFFELL, v4, v5, v6);
  return result;
}
