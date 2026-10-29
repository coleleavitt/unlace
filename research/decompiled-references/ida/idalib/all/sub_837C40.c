__int64 __fastcall sub_837C40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = operator new(0x30u);
  *(_QWORD *)(v4 + 32) = a2;
  *(_QWORD *)v4 = off_2B3CC78;
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 40) = a3 + a2;
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 8) = a3;
  return create_generic_linput(v4);
}
