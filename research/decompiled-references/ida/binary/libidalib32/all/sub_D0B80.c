__int64 __fastcall sub_D0B80(__int64 a1, char a2)
{
  __int64 v2; // rax
  int v4; // ecx
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  unsigned __int64 *v7; // rax
  __int64 result; // rax
  int v9; // edx
  unsigned int v10; // [rsp+Ch] [rbp-10Ch]
  char v11; // [rsp+28h] [rbp-F0h] BYREF
  unsigned __int64 v12; // [rsp+E8h] [rbp-30h] BYREF

  v12 = __readfsqword(0x28u);
  if ( !a1 || !dbg )
    return 0xFFFFFFFFLL;
  v2 = *(_QWORD *)(dbg + 32LL);
  v4 = dword_24411C;
  v5 = *(_QWORD *)(a1 + 32LL * dword_24411C + 8);
  if ( (v2 & 0x400000000000LL) != 0 )
  {
    v6 = qword_2515B0;
    if ( qword_2515B0 )
    {
      *(_DWORD *)qword_2515B0 = v5;
      v6[1] = a1;
      *((_DWORD *)v6 + 4) = v4;
      sub_CC780((__int64)v6, 11);
      v2 = *(_QWORD *)(dbg + 32LL);
    }
  }
  if ( (v2 & 0x200000) == 0 && !(unsigned __int8)is_debugger_memory() )
  {
    sub_D0730(1);
    if ( !(unsigned __int8)is_debugger_memory() )
      return 0xFFFFFFFFLL;
  }
  if ( !a2 )
  {
    v7 = (unsigned __int64 *)&v11;
    do
    {
      *(_WORD *)v7 = 0;
      v7 += 3;
      *((_WORD *)v7 - 11) = 0;
      *((_WORD *)v7 - 10) = 0;
      *((_DWORD *)v7 - 1) = 0;
      *((_WORD *)v7 - 9) = 0;
      *(v7 - 2) = 0;
      *((_DWORD *)v7 - 2) = 0;
    }
    while ( v7 != &v12 );
    if ( (unsigned int)decode_insn() && ((unsigned __int8)is_call_insn() || (unsigned __int8)is_ret_insn()) )
      return 0xFFFFFFFFLL;
  }
  v9 = sub_9E220();
  result = 0xFFFFFFFFLL;
  if ( v9 == 1 )
  {
    result = v10;
    if ( v10 != -1 )
      return sub_CCE60(v10, 0, 0);
  }
  return result;
}

