__int64 __fastcall sub_2220590(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 result; // rax

  v7 = a1 + 8;
  *(_QWORD *)(v7 - 8) = &off_2BEAE58;
  result = sub_2253560(v7, a2);
  *(_QWORD *)(a1 + 40) = a3;
  *(_QWORD *)(a1 + 48) = a4;
  *(_BYTE *)(a1 + 56) = 1;
  return result;
}
