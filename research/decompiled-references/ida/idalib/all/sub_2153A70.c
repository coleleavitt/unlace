__int64 __fastcall sub_2153A70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi

  v6 = a1 + 48;
  *(_QWORD *)(v6 - 32) = a2;
  *(_QWORD *)(v6 - 40) = 0;
  *(_QWORD *)(v6 - 48) = &unk_2C736A0;
  *(_QWORD *)(v6 - 24) = a3;
  *(_QWORD *)(v6 - 16) = a4;
  *(_QWORD *)(v6 - 8) = a5;
  sub_2124B70(v6, a5);
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 224) = a1 + 240;
  *(_WORD *)(a1 + 240) = 0;
  return 0;
}
