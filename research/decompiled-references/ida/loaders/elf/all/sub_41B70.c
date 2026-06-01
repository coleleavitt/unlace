__int64 __fastcall sub_41B70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  if ( !*(_BYTE *)(a2 + 248) || !*(_QWORD *)(a2 + 120) || *(_WORD *)(a2 + 520) != 1 )
    return *(_QWORD *)(a2 + 456) & (*(_QWORD *)(a2 + 608) + *(_QWORD *)(a3 + 16));
  v4 = *(_QWORD *)(a3 + 48);
  result = *(_QWORD *)(a1 + 512);
  if ( (unsigned __int64)(v4 - 2) <= 0xFFE && (v4 & (v4 - 1)) == 0 )
    return *(_QWORD *)(a2 + 456) & -(int)v4 & ((int)v4 - 1 + result);
  return result;
}

