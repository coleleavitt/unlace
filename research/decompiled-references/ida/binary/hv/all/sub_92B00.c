__int64 __fastcall sub_92B00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = operator new(0x48u);
  *(_QWORD *)v2 = off_163F60;
  *(_QWORD *)(v2 + 24) = a1;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 8) = a2;
  *(_OWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 32) = sub_957E0();
  return sub_92300(v2);
}

