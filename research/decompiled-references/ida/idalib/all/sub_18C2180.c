__int64 __fastcall sub_18C2180(__int64 a1, unsigned __int64 *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(result + 107) & 4) != 0 )
  {
    *a2 = sub_C0A3E0(
            *(_QWORD **)(a1 + 248),
            *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8),
            57,
            *a2 & 0xFFFFFFFFFFFFFFFELL,
            0,
            0,
            0);
    *(_WORD *)(a1 + 4512) = 257;
    return 257;
  }
  return result;
}
