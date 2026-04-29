char __fastcall sub_12D730(const __m128i *a1, int *a2, int *a3)
{
  char result; // al
  unsigned int *v4; // r8
  int v5; // eax
  int *v6; // [rsp+8h] [rbp-10h]

  if ( *((_BYTE *)a2 + 32) != 4 )
    return 0;
  v4 = *((unsigned int **)a2 + 5);
  if ( *a3 != *v4 || a2[17] != a3[17] )
    return 0;
  v5 = *a2;
  if ( *a2 != 11 )
  {
LABEL_8:
    if ( v5 == 10 )
      return sub_12D480(a1, 0, a3, 0, *((unsigned int **)a2 + 5));
    return 0;
  }
  v6 = a3;
  result = sub_12D410(a1, 0, (__int64)a3, 0, v4);
  if ( !result )
  {
    v5 = *a2;
    a3 = v6;
    goto LABEL_8;
  }
  return result;
}
