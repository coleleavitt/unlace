unsigned __int64 __fastcall sub_4099C0(_QWORD *a1, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 v6; // rsi
  unsigned int not_tail; // ebx
  __int64 v9; // rax
  __int64 v10; // r9
  char *v11; // rax
  unsigned int v12; // [rsp+Ch] [rbp-12Ch] BYREF
  _QWORD v13[3]; // [rsp+10h] [rbp-128h] BYREF
  char v14; // [rsp+28h] [rbp-110h] BYREF
  _BYTE v15[8]; // [rsp+E8h] [rbp-50h] BYREF
  _BYTE v16[40]; // [rsp+F0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+118h] [rbp-20h]

  v12 = a2;
  v17 = __readfsqword(0x28u);
  sub_409240(a1 + 295, &v12, a3, 169);
  v4 = sub_408EB0((__int64)v16, 28, a3);
  v5 = v12;
  v6 = *a1;
  sub_79B440((char *)a1 + 2356, *a1, v12, v16, v4, 339);
  if ( (get_merge_state((char *)a1 + 2356, v6) & 2) == 0 )
  {
    not_tail = v5;
    if ( (get_flags_ex(v5, 4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(v5);
    v9 = get_flags_ex(not_tail, 4) & 0x600;
    if ( v9 == 1536 )
    {
      v13[0] = -1;
      v13[2] = 0;
      v13[1] = 0xFFFFFFFFLL;
      v11 = &v14;
      do
      {
        *(_WORD *)v11 = 0;
        v11 += 24;
        *((_WORD *)v11 - 11) = 0;
        *((_WORD *)v11 - 10) = 0;
        *((_DWORD *)v11 - 1) = 0;
        *((_WORD *)v11 - 9) = 0;
        *((_QWORD *)v11 - 2) = 0;
        *((_DWORD *)v11 - 2) = 0;
      }
      while ( v15 != v11 );
      decode_insn(v13, not_tail, v15, 0, 0, v10);
      sub_559BB0(v13);
    }
    else if ( v9 == 1024 )
    {
      apply_fixup(not_tail, v5, 0, 0);
    }
  }
  return v17 - __readfsqword(0x28u);
}

