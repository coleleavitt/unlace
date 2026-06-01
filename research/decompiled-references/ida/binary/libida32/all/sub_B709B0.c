unsigned __int64 __fastcall sub_B709B0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 *v8; // rax

  v6 = a1;
  if ( !(_BYTE)qword_2CA2500 && __cxa_guard_acquire(&qword_2CA2500) )
  {
    unk_2CA2508 = 2;
    __cxa_guard_release(&qword_2CA2500);
  }
  if ( (*(_BYTE *)(a1 + 8) & 0x7D) == 4 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(sub_B68470(v6) + 16);
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
  v8 = (__int64 *)sub_B6D830(v6, a2, a3, a4, a5, a6);
  return sub_B705C0(v8, (__int64)&unk_2CA250F, v6);
}

