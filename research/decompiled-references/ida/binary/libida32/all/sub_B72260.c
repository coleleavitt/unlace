void __fastcall sub_B72260(_DWORD *a1)
{
  bool v1; // cc

  v1 = a1[16] <= 1u;
  *(_QWORD *)a1 = &off_2BD97B0;
  if ( !v1 )
    sub_A2BBA0(a1 + 16);
  *(_QWORD *)a1 = &off_2B206B0;
  nullsub_438();
  operator delete(a1, 0x78u);
}

