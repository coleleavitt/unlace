void __fastcall sub_2210230(void **a1)
{
  char *v2; // rdi
  void *v3; // rdi

  if ( !a1 )
    return;
  if ( *((_BYTE *)a1 + 292) )
  {
    if ( *((_BYTE *)a1 + 140) )
      goto LABEL_4;
LABEL_12:
    free(a1[15]);
    v2 = (char *)a1[9];
    if ( v2 == (char *)(a1 + 11) )
      goto LABEL_6;
    goto LABEL_5;
  }
  free(a1[34]);
  if ( !*((_BYTE *)a1 + 140) )
    goto LABEL_12;
LABEL_4:
  v2 = (char *)a1[9];
  if ( v2 != (char *)(a1 + 11) )
LABEL_5:
    free(v2);
LABEL_6:
  v3 = a1[6];
  if ( v3 )
    operator delete(v3);
  if ( *a1 != a1 + 2 )
    operator delete(*a1);
  operator delete(a1, 0x150u);
}
