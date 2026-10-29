void __fastcall sub_249630(_QWORD *a1)
{
  *a1 = &off_1C4C9C8;
  if ( *((_BYTE *)a1 + 56) )
  {
    sub_18296D0(a1[8]);
    if ( !*((_BYTE *)a1 + 57) )
      goto LABEL_3;
LABEL_5:
    sub_1829760(a1[8]);
  }
  if ( *((_BYTE *)a1 + 57) )
    goto LABEL_5;
LABEL_3:
  operator delete(a1, 0x48u);
}

