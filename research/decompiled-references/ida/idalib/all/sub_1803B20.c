void __fastcall sub_1803B20(void *a1)
{
  bool v1; // zf

  v1 = *((_BYTE *)a1 + 36) == 0;
  *(_QWORD *)a1 = off_2C50FA0;
  if ( v1 )
    free(*((void **)a1 + 2));
  operator delete(a1, 0xB0u);
}
