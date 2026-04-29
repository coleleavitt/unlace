__int64 __fastcall sub_6B8A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v8; // r14
  _BOOL8 v9; // rsi

  v6 = check_flat_jump_table();
  if ( v6 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    sub_6B6C0(v8);
    if ( (*(_DWORD *)a1 & 0x404) == 0x400 )
    {
      v9 = 1;
      if ( *(_DWORD *)(a4 + 212) )
        v9 = (unsigned __int64)(get_sreg(a2, 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL;
      sub_6B5D0(v8 + *(unsigned __int16 *)(a1 + 4), v9);
    }
  }
  return v6;
}
