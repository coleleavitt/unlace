char __fastcall sub_3E3290(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rax

  v4 = sub_3BE900(a1, a3, 4);
  if ( (v4 & 0x10000) != 0 )
  {
    *(_BYTE *)(a2 + 8) = 21;
    v6 = sub_3C2650(a1, a3);
    *(_QWORD *)a2 = v6;
    return v6 != -1;
  }
  else if ( (v4 & 0x1000) != 0 )
  {
    return sub_3E2000(a1, a2, a3);
  }
  else
  {
    *(_QWORD *)a2 = -1;
    return 0;
  }
}
