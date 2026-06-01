__int64 __fastcall sub_209330(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = reg_int_op("DerefMaxDepth", 0, 5, "Debugger");
  result = reg_int_op("DerefHideDefaultSegments", 0, 1, "Debugger");
  *(_BYTE *)(a1 + 12) = (_DWORD)result != 0;
  return result;
}
