void __fastcall sub_72A2D0(void *a1)
{
  bool v1; // zf

  v1 = *((_BYTE *)a1 + 48) == 0;
  *(_QWORD *)a1 = off_2B38388;
  if ( !v1 )
    close_linput(*((void **)a1 + 3));
  operator delete(a1, 0x38u);
}
