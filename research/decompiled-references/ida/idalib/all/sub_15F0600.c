void __fastcall sub_15F0600(void **a1)
{
  bool v2; // zf
  char *v3; // rdi
  char *v4; // rdi
  char *v5; // rdi
  char *v6; // rdi
  char *v7; // rdi

  v2 = *((_BYTE *)a1 + 1932) == 0;
  *a1 = &off_2BC6440;
  if ( v2 )
    free(a1[239]);
  v3 = (char *)a1[228];
  if ( v3 != (char *)(a1 + 230) )
    free(v3);
  operator delete(a1[225], 12LL * *((unsigned int *)a1 + 454), 4);
  if ( !*((_BYTE *)a1 + 1732) )
    free(a1[214]);
  v4 = (char *)a1[208];
  if ( v4 != (char *)(a1 + 210) )
    free(v4);
  v5 = (char *)a1[192];
  if ( v5 != (char *)(a1 + 194) )
    free(v5);
  v6 = (char *)a1[185];
  *a1 = &off_2BC63C0;
  if ( v6 != (char *)(a1 + 187) )
    free(v6);
  v7 = (char *)a1[165];
  if ( v7 != (char *)(a1 + 167) )
    free(v7);
  operator delete(a1[161], 16LL * *((unsigned int *)a1 + 326), 8);
  sub_15ED760((__int64)a1);
  operator delete(a1, 0x7B0u);
}
