void __fastcall sub_2259370(_BYTE *a1)
{
  bool v1; // zf
  _BYTE *v3; // rdi
  _BYTE *v4; // rdi

  v1 = a1[328] == 0;
  *(_QWORD *)a1 = &off_2C75EB0;
  if ( !v1 && (a1[320] & 1) == 0 )
  {
    v3 = *((_BYTE **)a1 + 21);
    if ( v3 != a1 + 192 )
      free(v3);
    v4 = *((_BYTE **)a1 + 2);
    if ( v4 != a1 + 40 )
      free(v4);
  }
  operator delete(a1, 0x150u);
}
