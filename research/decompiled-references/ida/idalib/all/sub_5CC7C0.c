__int64 __fastcall sub_5CC7C0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int128 v6; // [rsp+0h] [rbp-188h] BYREF
  __int64 v7; // [rsp+10h] [rbp-178h]
  __int64 v8; // [rsp+18h] [rbp-170h]
  __int64 v9; // [rsp+20h] [rbp-168h]
  char v10; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v11[4]; // [rsp+168h] [rbp-20h] BYREF

  v11[0] = __readfsqword(0x28u);
  if ( (get_flags_ex(a2, 4) & 0x10000) == 0 )
    return -1;
  v7 = -1;
  v2 = &v10;
  v8 = 0;
  v9 = 0;
  v6 = -1;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 40;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *((_QWORD *)v2 - 2) = 0;
  }
  while ( v11 != (_QWORD *)v2 );
  v3 = decode_prev_insn(&v6, a2, v11, 0.0);
  v4 = v3;
  if ( v3 == -1
    || v3 + WORD1(v8) != a2
    || (~((unsigned __int16)get_flags_ex(v3, 4) >> 8) & 6) != 0
    || (unsigned __int8)netnode_charval(*(_QWORD *)(*(_QWORD *)(a1 + 632) + 104LL), v4, 256) != 3 )
  {
    return -1;
  }
  return v4;
}
