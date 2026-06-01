__int64 __fastcall sub_32CD50(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 88);
  if ( (get_aflags(v1) & 0x40) != 0 )
    clr_abits(v1, 64);
  else
    set_abits(v1, 64);
  return 1;
}
