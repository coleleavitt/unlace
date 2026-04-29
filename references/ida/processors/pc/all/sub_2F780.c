__int64 __fastcall sub_2F780(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // [rsp+0h] [rbp-198h] BYREF
  __int64 v12; // [rsp+10h] [rbp-188h]
  __int64 v13; // [rsp+18h] [rbp-180h]
  __int64 v14; // [rsp+20h] [rbp-178h]
  char v15; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v16; // [rsp+168h] [rbp-30h] BYREF

  v16 = __readfsqword(0x28u);
  v3 = a2 + 5;
  if ( *(_QWORD *)(a3 + 8) < a2 + 5
    || (unsigned __int8)get_byte() == 0x90
    || (v3 & 0xF) != 0 && (unsigned __int8)get_byte() == 0x90 && get_first_fcref_to() == -1
    || (unsigned int)get_dword() != -1869574000
    || (unsigned __int8)get_byte() != 0x90 )
  {
    return -1;
  }
  v12 = -1;
  v5 = (unsigned __int64 *)&v15;
  v13 = 0;
  v14 = 0;
  v11 = -1;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v16 != v5 );
  v6 = a2;
  if ( a2 < v3 )
  {
    while ( (get_flags_ex() & 0xD000) == 0 )
    {
      if ( v3 == ++v6 )
        goto LABEL_22;
    }
  }
  else
  {
LABEL_22:
    if ( !(unsigned __int8)sub_2F5C0(a1, a2) )
      return -1;
  }
  if ( (get_aflags() & 0x20000000) != 0
    || !(unsigned int)decode_insn()
    || (unsigned __int8)sub_867A0((unsigned __int16)v13, v3, v7, v8, v9, v10, 0.0, v11, *((_QWORD *)&v11 + 1), v12)
    || (int)sub_37FE0(a1, &v11, 1) <= 99 )
  {
    return -1;
  }
  return v3;
}
