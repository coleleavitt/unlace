void *__fastcall sub_715B80(void *a1, unsigned __int16 *a2)
{
  int v2; // ecx
  __int64 v3; // rdx

  v2 = *a2;
  v3 = *(unsigned __int16 *)((char *)a2 + (unsigned __int16)v2 + 2);
  if ( (unsigned __int16)v2 > 0x204u || (unsigned int)v3 > 0x404 )
    sub_7172E0(a1, a2, v3);
  return memmove(a1, a2, (unsigned int)(v2 + v3 + 4));
}

