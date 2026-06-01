char __fastcall sub_F61920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax

  v6 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  v8 = *(unsigned __int8 *)(*(_QWORD *)v6 + 16LL);
  if ( (_BYTE)v8 == 13 )
  {
    LOBYTE(v9) = (((*(_WORD *)(v7 + 18) >> 3) + 76) & 0x1FFu) <= 0x13;
  }
  else
  {
    LOBYTE(v9) = 1;
    if ( (_BYTE)v8 != 10 )
    {
      LOBYTE(v9) = 0;
      if ( (_BYTE)v8 == 47 )
        return (unsigned int)~*((_DWORD *)sub_F60E90(*(_QWORD **)(v7 + 24), a2, v8, v7, a5, a6) + 19) >> 7;
    }
  }
  return v9;
}
