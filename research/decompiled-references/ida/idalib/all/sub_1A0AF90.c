__int64 __fastcall sub_1A0AF90(int *a1)
{
  int i; // ecx
  unsigned __int64 v2; // rdx
  unsigned __int8 v3; // al

  for ( i = *a1; ((1LL << i) & 0x300045) != 0; i = *a1 )
  {
    v2 = *((_QWORD *)a1 + 4);
    a1 = *((int **)a1 + 1);
    if ( !a1 )
      goto LABEL_8;
LABEL_5:
    ;
  }
  v2 = 0;
  if ( ((1LL << i) & 0x7FFB8) == 0 )
    v2 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFF8LL;
  a1 = *((int **)a1 + 1);
  if ( a1 )
    goto LABEL_5;
LABEL_8:
  if ( !v2 )
    return 0;
  v3 = *(_BYTE *)(v2 + 28) & 0x7F;
  if ( (unsigned int)v3 - 40 > 6 || v3 == 43 )
    return 0;
  else
    return *(_BYTE *)(v2 + 97) >> 7;
}
