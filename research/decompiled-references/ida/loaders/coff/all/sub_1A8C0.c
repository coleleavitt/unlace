__int64 __fastcall sub_1A8C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int16 v6; // ax
  __int64 v7; // rdi

  v5 = sub_15990(a1, a2, a3);
  if ( !(_BYTE)v5 )
    return v5;
  v6 = *(_WORD *)(a3 + 12);
  v7 = a1[4];
  if ( v6 != 22 )
  {
    if ( v6 == 23 )
      create_insn(v7, 0);
    return v5;
  }
  sub_5F40(0x57u, a1[4], 1);
  return v5;
}

