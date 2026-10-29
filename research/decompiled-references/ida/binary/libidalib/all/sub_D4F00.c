__int64 __fastcall sub_D4F00(__int64 a1, char a2)
{
  unsigned __int64 *v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  _QWORD *v6; // rdi
  char v8; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v9; // [rsp+168h] [rbp-20h] BYREF

  v9 = __readfsqword(0x28u);
  sub_D1B30(0);
  v3 = (unsigned __int64 *)&v8;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( v3 != &v9 );
  v4 = *(_QWORD *)(a1 + 40);
  if ( !v4
    || (v5 = dword_245174, dbg)
    && (*(_BYTE *)(dbg + 37LL) & 0x40) != 0
    && (v6 = qword_252758) != nullptr
    && (*(_QWORD *)qword_252758 = *(_QWORD *)(v4 + 32LL * dword_245174 + 8),
        v6[1] = v4,
        *((_DWORD *)v6 + 4) = v5,
        (unsigned int)sub_CDCF0((__int64)v6, 11) != 1) )
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
  return sub_D4880(a1, a2 == 0 ? 4098 : 4106);
}

