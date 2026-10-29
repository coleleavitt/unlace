__int64 __fastcall sub_73C890(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned int *v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // r12d
  bool v8; // zf

  v3 = *(_QWORD *)(a1 + 4224);
  if ( v3 && (unsigned __int8)qfileexist(v3, a2) )
  {
    dword_2CCC638 = 6;
    qword_2CCC630(6, 0);
    return 0;
  }
  if ( a2 <= 0x2C )
  {
    dword_2CCC638 = 5;
    qword_2CCC630(5, 0);
    return 0;
  }
  unk_2CCC610 = 0;
  xmmword_2CCC600 = 0;
  xmmword_2CCC61D = 0;
  v5 = (unsigned int *)operator new(0x18u);
  sub_73B2D0((__int64)v5, (_QWORD *)(a1 + 4224), 1, (__int64)qword_2CCC630);
  *(_WORD *)(a1 + 1632) = 0;
  LOBYTE(v6) = sub_73B2F0(v5);
  v7 = v6;
  if ( (_BYTE)v6 )
  {
    qstrncpy(byte_2CCC613, aBTreeV2_0, 10);
    v8 = byte_2CCC5E0 == 0;
    LOWORD(xmmword_2CCC61D) = 1;
    *(_WORD *)(a1 + 1632) = 1;
    WORD2(xmmword_2CCC600) = a2;
    if ( !v8 )
    {
      byte_2CCC5E0 = 0;
      return sub_73C5B0((unsigned int *)a1, v5, dword_2CCC5DC);
    }
    LOBYTE(v7) = (unsigned int)sub_73B580(v5, 0, 0x2Du, (__int64)&xmmword_2CCC600) == 0;
  }
  if ( v5 )
  {
    sub_73B0F0(v5);
    operator delete(v5, 0x18u);
  }
  return v7;
}
