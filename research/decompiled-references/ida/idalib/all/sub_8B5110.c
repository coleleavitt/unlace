void __fastcall sub_8B5110(void **a1)
{
  *a1 = &off_2BFBE18;
  qsem_free(a1[2]);
  operator delete(a1, 0x30u);
}
