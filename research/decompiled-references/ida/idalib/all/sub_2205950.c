unsigned __int64 *__fastcall sub_2205950(unsigned __int64 *a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // rcx
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx

  v1 = *((_DWORD *)a1 + 2);
  v2 = *a1;
  if ( v1 > 0x40 )
  {
    v4 = v1;
    v5 = 0;
    v6 = (unsigned __int64)(v4 + 63) >> 6;
    do
    {
      v7 = *(_QWORD *)(v2 + 8 * v5);
      *(_QWORD *)(v2 + 8 * v5) = v7 - 1;
      if ( v7 )
        break;
      ++v5;
    }
    while ( (unsigned int)v6 > (unsigned int)v5 );
  }
  else
  {
    *a1 = v2 - 1;
  }
  return sub_CF8100(a1);
}
