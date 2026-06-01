__int64 __fastcall sub_715700(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned int *v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // r12d
  bool v8; // zf

  v3 = *(_QWORD *)(a1 + 4224);
  if ( v3 && (unsigned __int8)qfileexist(v3, a2) )
  {
    dword_2CA2610 = 6;
    qword_2CA2608(6, 0);
    return 0;
  }
  if ( a2 <= 0x26 )
  {
    dword_2CA2610 = 5;
    qword_2CA2608(5, 0);
    return 0;
  }
  unk_2CA25F0 = 0;
  xmmword_2CA25E0 = 0;
  *(__int64 *)((char *)&qword_2CA25F9 + 6) = 0;
  v5 = (unsigned int *)operator new(0x18u);
  sub_714290((__int64)v5, (_QWORD *)(a1 + 4224), 1, (__int64)qword_2CA2608);
  *(_WORD *)(a1 + 1632) = 0;
  LOBYTE(v6) = sub_7142B0(v5);
  v7 = v6;
  if ( (_BYTE)v6 )
  {
    qstrncpy((char *)&xmmword_2CA25E0 + 13, aBTreeV2, 10);
    v8 = byte_2CA25CC == 0;
    word_2CA25F7 = 1;
    *(_WORD *)(a1 + 1632) = 1;
    WORD1(xmmword_2CA25E0) = a2;
    if ( !v8 )
    {
      byte_2CA25CC = 0;
      return sub_7153F0((unsigned int *)a1, v5, dword_2CA25C8);
    }
    LOBYTE(v7) = (unsigned int)sub_714540(v5, 0, 0x27u, (__int64)&xmmword_2CA25E0) == 0;
  }
  if ( v5 )
  {
    sub_7140B0(v5);
    operator delete(v5, 0x18u);
  }
  return v7;
}

