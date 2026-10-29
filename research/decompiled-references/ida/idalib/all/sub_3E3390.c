__int64 __fastcall sub_3E3390(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // r13

  v4 = sub_3BE900(a1, a3, 4);
  if ( (v4 & 0x1000) != 0 )
  {
    if ( (v4 & 0x10000) != 0 && *(_BYTE *)(a2 + 8) == 21 && (v6 = *(_QWORD *)a2, v6 == sub_3C2650(a1, a3)) )
      return sub_3E2000(a1, a2, a3);
    else
      return sub_3E2EB0(a1, (unsigned __int64 *)a2, a3);
  }
  else
  {
    *(_QWORD *)a2 = -1;
    return 0;
  }
}
