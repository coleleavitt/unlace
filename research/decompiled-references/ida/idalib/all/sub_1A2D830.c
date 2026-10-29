void __fastcall sub_1A2D830(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rax

  v5 = a3;
  if ( a3 )
    v5 = a3 + 64;
  v6 = sub_BBDCA0(*(_QWORD *)(a1 + 248), v5, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 40), a4, a2);
  *(_BYTE *)(v6 + 29) &= 0x9Fu;
  sub_B77A70(a2, v6);
}
