_BYTE *__fastcall sub_1107FF0(_QWORD *a1, char *a2)
{
  __int64 v2; // rdx

  v2 = -1;
  *a1 = a1 + 2;
  if ( a2 )
    v2 = (__int64)&a2[j__strlen(a2)];
  return sub_1107830(a1, a2, v2);
}

