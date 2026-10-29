void __fastcall sub_644B90(__int64 a1, __int64 *a2, unsigned __int64 *a3, __int16 a4)
{
  unsigned __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  char v9; // si
  __int16 v10; // ax

  v5 = *a3;
  if ( (*a3 & 0x100) != 0 || v5 > 0xFF )
  {
    v7 = sub_51B750(a1, v5);
    v8 = v7;
    if ( (a4 & 0x1000) != 0
      || (v10 = *(_WORD *)(v7 + 68), (v10 & 0x400) != 0)
      || (~(_BYTE)v10 & 0x70) == 0
      || !*(_QWORD *)(v8 + 32) )
    {
      v9 = *(_BYTE *)(v8 + 71);
      if ( v9 && (a4 & 2) != 0 )
        sub_641290((__int64)a2, v9, a4);
      if ( (a4 & 4) != 0 )
        sub_6440A0(a2, *(__int64 **)(v8 + 40), a4);
    }
  }
}

