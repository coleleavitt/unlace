void __fastcall sub_B71B60(__int64 a1)
{
  bool v1; // cc

  v1 = *(_DWORD *)(a1 + 64) <= 1u;
  *(_QWORD *)a1 = &off_2BD97B0;
  if ( !v1 )
    sub_A2BBA0((int *)(a1 + 64));
  *(_QWORD *)a1 = &off_2B206B0;
  nullsub_438();
}

