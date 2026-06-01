unsigned __int64 __fastcall sub_41CDC0(_QWORD *a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 not_tail; // rbx
  __int64 v9; // rax
  __int64 v10; // r9
  char *v11; // rax
  __int64 v12; // [rsp+8h] [rbp-1D0h] BYREF
  __int128 v13; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v14; // [rsp+20h] [rbp-1B8h]
  __int64 v15; // [rsp+28h] [rbp-1B0h]
  __int64 v16; // [rsp+30h] [rbp-1A8h]
  char v17; // [rsp+38h] [rbp-1A0h] BYREF
  _BYTE v18[8]; // [rsp+178h] [rbp-60h] BYREF
  _BYTE v19[56]; // [rsp+180h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+1B8h] [rbp-20h]

  v12 = a2;
  v20 = __readfsqword(0x28u);
  sub_41C600(a1 + 309, &v12, a3, 0xA9u);
  v4 = sub_41C230((__int64)v19, 48, a3);
  v5 = v12;
  v6 = *a1;
  sub_7BE7C0(a1 + 308, *a1, v12, v19, v4, 339);
  if ( (get_merge_state(a1 + 308, v6) & 2) == 0 )
  {
    not_tail = v5;
    if ( (get_flags_ex(v5, 4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(v5);
    v9 = get_flags_ex(not_tail, 4) & 0x600;
    if ( v9 == 1536 )
    {
      v14 = -1;
      v11 = &v17;
      v15 = 0;
      v16 = 0;
      v13 = -1;
      do
      {
        *(_WORD *)v11 = 0;
        v11 += 40;
        *((_WORD *)v11 - 19) = 0;
        *((_WORD *)v11 - 18) = 0;
        *((_DWORD *)v11 - 2) = 0;
        *((_WORD *)v11 - 17) = 0;
        *((_OWORD *)v11 - 2) = 0;
        *((_QWORD *)v11 - 2) = 0;
      }
      while ( v18 != v11 );
      decode_insn(&v13, not_tail, v18, 0, 0, v10, 0.0);
      sub_573720(&v13);
    }
    else if ( v9 == 1024 )
    {
      apply_fixup(not_tail, v5, 0, 0);
    }
  }
  return v20 - __readfsqword(0x28u);
}
