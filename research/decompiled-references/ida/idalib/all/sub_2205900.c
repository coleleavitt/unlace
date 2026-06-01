unsigned __int64 *__fastcall sub_2205900(unsigned __int64 *a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // rcx
  __int64 v4; // rdx

  v1 = *((_DWORD *)a1 + 2);
  v2 = *a1;
  if ( v1 > 0x40 )
  {
    v4 = 0;
    do
    {
      if ( (*(_QWORD *)(v2 + 8 * v4))++ != -1 )
        break;
      ++v4;
    }
    while ( (unsigned int)(((unsigned __int64)v1 + 63) >> 6) > (unsigned int)v4 );
  }
  else
  {
    *a1 = v2 + 1;
  }
  return sub_CF8100(a1);
}
