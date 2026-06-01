void __fastcall sub_B958A0(__int64 a1)
{
  bool v1; // cc

  v1 = *(_DWORD *)(a1 + 64) <= 1u;
  *(_QWORD *)a1 = &off_2C037B0;
  if ( !v1 )
    sub_A4F8E0((int *)(a1 + 64));
  *(_QWORD *)a1 = &off_2B4A650;
  nullsub_459();
}
