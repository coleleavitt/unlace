_BYTE *__fastcall sub_17016D0(_QWORD *a1, char *a2)
{
  __int64 v2; // rdx

  v2 = -1;
  *a1 = a1 + 2;
  if ( a2 )
    v2 = (__int64)&a2[strlen(a2)];
  return sub_1700210(a1, a2, v2);
}
