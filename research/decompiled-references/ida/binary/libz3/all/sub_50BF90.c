__int64 __fastcall sub_50BF90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 0;
  if ( a1 == *(_QWORD *)(a2 + 8) && a1 == *(_QWORD *)(a3 + 8) && (!a4 || a1 == *(_QWORD *)(a4 + 8)) )
  {
    result = sub_186B270(0x10u);
    *(_QWORD *)result = off_1C50560;
    *(_BYTE *)(result + 8) = 0;
  }
  return result;
}

