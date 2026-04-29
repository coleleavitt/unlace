__int64 __fastcall sub_5570(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 result; // rax

  result = -1;
  if ( *(_WORD *)(a2 + 24) == 122 && *(_BYTE *)(a2 + 41) == 1 && a3 == *(_WORD *)(a2 + 46) && *(_BYTE *)(a2 + 81) == 5 )
    return *(_QWORD *)(a2 + 88);
  return result;
}
