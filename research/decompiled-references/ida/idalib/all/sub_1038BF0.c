_BOOL8 __fastcall sub_1038BF0(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 result; // rax

  result = 1;
  if ( a3 == 14 )
    return *(_QWORD *)a2 != 0x6F6C662D74666F73LL || *(_DWORD *)(a2 + 8) != 1630368865 || *(_WORD *)(a2 + 12) != 26978;
  return result;
}
