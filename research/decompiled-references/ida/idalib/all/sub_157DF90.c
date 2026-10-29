void __fastcall sub_157DF90(void *a1)
{
  bool v1; // zf

  v1 = *((_BYTE *)a1 + 132) == 0;
  *(_QWORD *)a1 = off_2C44B38;
  if ( v1 )
  {
    free(*((void **)a1 + 14));
    if ( *((_BYTE *)a1 + 36) )
      goto LABEL_3;
  }
  else if ( *((_BYTE *)a1 + 36) )
  {
LABEL_3:
    operator delete(a1, 0x108u);
    return;
  }
  free(*((void **)a1 + 2));
  operator delete(a1, 0x108u);
}
