unsigned __int64 __fastcall sub_B946F0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 *v8; // rax

  v6 = a1;
  if ( !(_BYTE)qword_2CCC3F8 && __cxa_guard_acquire(&qword_2CCC3F8) )
  {
    unk_2CCC400 = 2;
    __cxa_guard_release(&qword_2CCC3F8);
  }
  if ( (*(_BYTE *)(a1 + 8) & 0x7D) == 4 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(sub_B8C1B0(v6) + 16);
        if ( (v7 & 4) != 0 )
          break;
        v6 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v6 + 8) & 0x7D) != 4 )
          goto LABEL_5;
      }
      v6 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    }
    while ( (*(_BYTE *)(v6 + 8) & 0x7D) == 4 );
  }
LABEL_5:
  v8 = (unsigned __int64 *)sub_B91570(v6, a2, a3, a4, a5, a6);
  return sub_B94300(v8, (__int64)&unk_2CCC407, v6);
}
