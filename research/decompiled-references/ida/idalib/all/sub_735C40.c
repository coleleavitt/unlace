__int64 __fastcall sub_735C40(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned int *v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // r12d
  bool v8; // zf

  v3 = *(_QWORD *)(a1 + 4224);
  if ( v3 && (unsigned __int8)qfileexist(v3, a2) )
  {
    dword_2CCC510 = 6;
    qword_2CCC508(6, 0);
    return 0;
  }
  if ( a2 <= 0x26 )
  {
    dword_2CCC510 = 5;
    qword_2CCC508(5, 0);
    return 0;
  }
  unk_2CCC4F0 = 0;
  xmmword_2CCC4E0 = 0;
  *(__int64 *)((char *)&qword_2CCC4F9 + 6) = 0;
  v5 = (unsigned int *)operator new(0x18u);
  sub_7347D0((__int64)v5, (_QWORD *)(a1 + 4224), 1, (__int64)qword_2CCC508);
  *(_WORD *)(a1 + 1632) = 0;
  LOBYTE(v6) = sub_7347F0(v5);
  v7 = v6;
  if ( (_BYTE)v6 )
  {
    qstrncpy((char *)&xmmword_2CCC4E0 + 13, aBTreeV2, 10);
    v8 = byte_2CCC4CC == 0;
    word_2CCC4F7 = 1;
    *(_WORD *)(a1 + 1632) = 1;
    WORD1(xmmword_2CCC4E0) = a2;
    if ( !v8 )
    {
      byte_2CCC4CC = 0;
      return sub_735930((unsigned int *)a1, v5, dword_2CCC4C8);
    }
    LOBYTE(v7) = (unsigned int)sub_734A80(v5, 0, 0x27u, (__int64)&xmmword_2CCC4E0) == 0;
  }
  if ( v5 )
  {
    sub_7345F0(v5);
    operator delete(v5, 0x18u);
  }
  return v7;
}
