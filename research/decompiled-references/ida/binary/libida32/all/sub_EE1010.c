void __fastcall sub_EE1010(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx

  v4 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x20) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 72);
    if ( v5 )
    {
      if ( (unsigned __int8)sub_EE00E0(v4, a2, v5, a3) )
        return;
      v4 = *(_QWORD *)a1;
    }
  }
  sub_EE0C90(v4, a2, 1);
}

