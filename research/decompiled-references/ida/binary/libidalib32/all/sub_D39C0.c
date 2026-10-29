__int64 __fastcall sub_D39C0(__int64 a1, char a2, double a3)
{
  unsigned __int64 *v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  _QWORD *v6; // rax
  char v8; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v9; // [rsp+D8h] [rbp-20h] BYREF

  v9 = __readfsqword(0x28u);
  sub_D0730(0);
  v3 = (unsigned __int64 *)&v8;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 3;
    *((_WORD *)v3 - 11) = 0;
    *((_WORD *)v3 - 10) = 0;
    *((_DWORD *)v3 - 1) = 0;
    *((_WORD *)v3 - 9) = 0;
    *(v3 - 2) = 0;
    *((_DWORD *)v3 - 2) = 0;
  }
  while ( v3 != &v9 );
  v4 = *(_QWORD *)(a1 + 40);
  if ( !v4
    || (v5 = dword_24411C, dbg)
    && (*(_BYTE *)(dbg + 37LL) & 0x40) != 0
    && (v6 = qword_2515B0) != nullptr
    && (*(_DWORD *)qword_2515B0 = *(_QWORD *)(v4 + 32LL * dword_24411C + 8),
        v6[1] = v4,
        *((_DWORD *)v6 + 4) = v5,
        (unsigned int)sub_CC780((__int64)v6, 11) != 1) )
  {
    if ( (int)decode_insn() <= 0 )
      return 0;
  }
  else if ( (int)decode_insn() <= 0 )
  {
    return 0;
  }
  if ( !(unsigned __int8)is_ret_insn() )
    return 0;
  return sub_D3340(a1, a2 == 0 ? 4098 : 4106, a3);
}

