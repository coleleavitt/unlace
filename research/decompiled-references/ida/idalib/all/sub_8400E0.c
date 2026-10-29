void __fastcall sub_8400E0(void **a1)
{
  *a1 = &off_2BFBE18;
  qsem_free(a1[2]);
  operator delete(a1, 0x20u);
}
