void __fastcall sub_8AA5D0(void **a1)
{
  *a1 = &off_2BD1E18;
  qsem_free(a1[2]);
  operator delete(a1, 0x20u);
}

