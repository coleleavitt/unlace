__int64 __fastcall sub_141AE30(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  __int64 v6; // rax

  v6 = operator new[](0x18u);
  *(_WORD *)(v6 + 18) = 0;
  *(_WORD *)(v6 + 16) = a3;
  *(_QWORD *)v6 = a2;
  *(_QWORD *)(v6 + 8) = a4;
  return sub_14368B0(a1, v6, 1, 1, 1, 0);
}
