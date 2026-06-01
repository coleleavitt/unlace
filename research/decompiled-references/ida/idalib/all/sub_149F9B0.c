void __fastcall sub_149F9B0(__int64 a1)
{
  char *v2; // r12
  char *v3; // rbx
  char *v4; // rdi

  if ( !*(_BYTE *)(a1 + 360) )
  {
    sub_1818070(*(_QWORD *)a1, *(_QWORD *)(a1 + 352), 0);
    *(_BYTE *)(a1 + 360) = 1;
  }
  v2 = *(char **)(a1 + 16);
  v3 = &v2[80 * *(unsigned int *)(a1 + 24)];
  if ( v2 != v3 )
  {
    do
    {
      v4 = v2;
      v2 += 80;
      sub_15B6850(v4);
    }
    while ( v3 != v2 );
    v3 = *(char **)(a1 + 16);
  }
  if ( v3 != (char *)(a1 + 32) )
    free(v3);
}
