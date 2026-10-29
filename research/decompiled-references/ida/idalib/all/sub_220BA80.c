void *__fastcall sub_220BA80(_DWORD *a1, const void *a2, unsigned int a3)
{
  if ( a1[2] > 0x40u )
    a1 = *(_DWORD **)a1;
  return memcpy(a1, a2, a3);
}
