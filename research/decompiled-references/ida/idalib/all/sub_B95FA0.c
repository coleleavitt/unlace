void __fastcall sub_B95FA0(_DWORD *a1)
{
  bool v1; // cc

  v1 = a1[16] <= 1u;
  *(_QWORD *)a1 = &off_2C037B0;
  if ( !v1 )
    sub_A4F8E0(a1 + 16);
  *(_QWORD *)a1 = &off_2B4A650;
  nullsub_459();
  operator delete(a1, 0x78u);
}
