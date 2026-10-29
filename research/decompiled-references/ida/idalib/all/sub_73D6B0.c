void *__fastcall sub_73D6B0(void *a1, unsigned __int16 *a2, unsigned __int64 a3)
{
  int v3; // eax

  v3 = *a2 + *(unsigned __int16 *)((char *)a2 + *a2 + 2) + 2;
  if ( v3 < a3 )
    sub_743130(a1, a2, v3);
  return memmove(a1, (char *)a2 + a3 + 2, v3 - a3);
}
