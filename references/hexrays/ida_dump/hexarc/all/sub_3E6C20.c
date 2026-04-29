__int64 __fastcall sub_3E6C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned __int64 v7; // rbp
  bool v8; // zf
  unsigned int v9; // r12d
  unsigned __int8 v10; // al
  __int64 v11; // rax
  int v12; // ecx
  _QWORD v14[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]
  char v17; // [rsp+21h] [rbp-27h]
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v7 = -1;
  v8 = *(_BYTE *)(a1 + 65) == 7;
  v18 = __readfsqword(0x28u);
  v9 = a2;
  if ( v8 )
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL)
       & (16LL * *(_QWORD *)(a1 + 24) + (*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFFELL));
  if ( *(_WORD *)(a1 + 48) == 15 && (unsigned __int8)is_mapped(v7) )
  {
    a2 = *(_QWORD *)(a1 + 40);
    if ( !(unsigned __int8)xrefblk_t_first_from(&v15, a2, 5) || v16 != v7 )
      return 0;
    if ( v17 != 17 )
      return 0;
  }
  else if ( !(unsigned __int8)is_call_insn(a1 + 24, a2, a3, a4, a5, a6) )
  {
    return 0;
  }
  v10 = *(_BYTE *)(a1 + 65);
  if ( v10 == 7 )
  {
    v11 = *(_QWORD *)(a1 + 832);
    v15 = -4294967290LL;
    v12 = 8 * *(_DWORD *)(v11 + 84);
    if ( (unsigned __int64)v12 <= 0x3F )
      v7 &= ~(-1LL << v12);
    v16 = v7;
    sub_1CF350(a1, 56, (unsigned __int8 *)&v15, nullptr, nullptr);
    sub_1166E0((__int64)&v15);
  }
  else
  {
    if ( v10 > 7u || v10 != 1 && v10 != 4 )
    {
      if ( !under_debugger )
        sub_37B760(0xCA45u, a2, a7);
      BUG();
    }
    v15 = 0x400000001LL;
    v14[0] = 0x200000001LL;
    v16 = v9;
    v14[1] = 296;
    sub_1CF350(a1, 57, (unsigned __int8 *)v14, (unsigned __int8 *)&v15, nullptr);
    sub_1166E0((__int64)&v15);
    sub_1166E0((__int64)v14);
  }
  return 1;
}
