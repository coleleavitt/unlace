__int64 __fastcall read_tinfo_bitfield_value(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  char v3; // bl
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // edx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx

  if ( a1 <= 0xFF )
    goto LABEL_14;
  v3 = a1;
  v5 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1632LL);
  v6 = sub_51B750(v5, a1);
  v7 = v6;
  if ( (~(unsigned __int8)*(_WORD *)(v6 + 68) & 0x70) == 0 )
  {
    if ( *(_QWORD *)v6 <= 0xFFu )
      goto LABEL_14;
    v7 = sub_51B750(v5, *(_QWORD *)v6);
  }
  if ( !v7 || (v3 & 0xF) != 0xE )
LABEL_14:
    sub_5192A0();
  v8 = *(unsigned __int8 *)(v7 + 1);
  v9 = a2 >> a3;
  if ( (unsigned __int8)v8 <= 0x3Fu )
  {
    v10 = (unsigned int)(v8 - 1);
    v12 = 1LL << *(_BYTE *)(v7 + 1);
    v11 = v12 - 1;
    if ( (unsigned __int64)(int)v10 > 0x3F )
      return v11 & v9;
  }
  else
  {
    v10 = (unsigned int)(v8 - 1);
    v11 = -1;
    v12 = 0;
    if ( (unsigned __int64)(int)v10 > 0x3F )
      return v11 & v9;
  }
  if ( !*(_BYTE *)(v7 + 2) && _bittest64((const __int64 *)&v9, v10) )
    return -v12 | v9;
  return v11 & v9;
}

