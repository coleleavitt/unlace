__int64 __fastcall sub_5B1940(__int64 a1, unsigned int a2)
{
  char *v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-F0h]
  __int64 v7; // [rsp+10h] [rbp-E8h]
  char v8; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD v9[4]; // [rsp+D8h] [rbp-20h] BYREF

  v9[0] = __readfsqword(0x28u);
  if ( (get_flags_ex(a2, 4) & 0x10000) == 0 )
    return (unsigned int)-1;
  v5 = -1;
  v7 = 0;
  v6 = 0xFFFFFFFFLL;
  v2 = &v8;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 24;
    *((_WORD *)v2 - 11) = 0;
    *((_WORD *)v2 - 10) = 0;
    *((_DWORD *)v2 - 1) = 0;
    *((_WORD *)v2 - 9) = 0;
    *((_QWORD *)v2 - 2) = 0;
    *((_DWORD *)v2 - 2) = 0;
  }
  while ( v9 != (_QWORD *)v2 );
  v3 = decode_prev_insn(&v5, a2, v9);
  if ( v3 == -1
    || v3 + HIWORD(v6) != a2
    || (~((unsigned __int16)get_flags_ex(v3, 4) >> 8) & 6) != 0
    || (unsigned __int8)netnode_charval(*(unsigned int *)(*(_QWORD *)(a1 + 544) + 104LL), v3, 256) != 3 )
  {
    return (unsigned int)-1;
  }
  return v3;
}

