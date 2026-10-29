__int64 __fastcall sub_D1F80(__int64 a1, char a2)
{
  __int64 v2; // rax
  int v4; // ecx
  __int64 v5; // r13
  _QWORD *v6; // rdi
  unsigned __int64 *v7; // rax
  __int64 result; // rax
  int v9; // edx
  __int64 v10; // [rsp+8h] [rbp-1A0h]
  char v11; // [rsp+38h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+178h] [rbp-30h] BYREF

  v12 = __readfsqword(0x28u);
  if ( !a1 || !dbg )
    return -1;
  v2 = *(_QWORD *)(dbg + 32LL);
  v4 = dword_245174;
  v5 = *(_QWORD *)(a1 + 32LL * dword_245174 + 8);
  if ( (v2 & 0x400000000000LL) != 0 )
  {
    v6 = qword_252758;
    if ( qword_252758 )
    {
      *(_QWORD *)qword_252758 = v5;
      v6[1] = a1;
      *((_DWORD *)v6 + 4) = v4;
      sub_CDCF0((__int64)v6, 11);
      v2 = *(_QWORD *)(dbg + 32LL);
    }
  }
  if ( (v2 & 0x200000) == 0 && !(unsigned __int8)is_debugger_memory() )
  {
    sub_D1B30(1);
    if ( !(unsigned __int8)is_debugger_memory() )
      return -1;
  }
  if ( !a2 )
  {
    v7 = (unsigned __int64 *)&v11;
    do
    {
      *(_WORD *)v7 = 0;
      v7 += 5;
      *((_WORD *)v7 - 19) = 0;
      *((_WORD *)v7 - 18) = 0;
      *((_DWORD *)v7 - 2) = 0;
      *((_WORD *)v7 - 17) = 0;
      *((_OWORD *)v7 - 2) = 0;
      *(v7 - 2) = 0;
    }
    while ( v7 != &v12 );
    if ( (unsigned int)decode_insn() && ((unsigned __int8)is_call_insn() || (unsigned __int8)is_ret_insn()) )
      return -1;
  }
  v9 = sub_9E360();
  result = -1;
  if ( v9 == 1 )
  {
    result = v10;
    if ( v10 != -1 )
      return sub_CE400(v10, 0, 0);
  }
  return result;
}

