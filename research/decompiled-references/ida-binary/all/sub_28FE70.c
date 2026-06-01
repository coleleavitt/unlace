unsigned __int64 __fastcall sub_28FE70(unsigned int a1, unsigned int a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rax

  v5 = a1;
  if ( a5[1] > (int)a4 )
  {
    v5 = (unsigned int)((int)(a1 + a3) / 2);
    return (a4 << 32) | v5;
  }
  if ( a5[3] < (signed int)a2 )
    return ((unsigned __int64)a2 << 32) | (unsigned int)((int)(a1 + a3) / 2);
  if ( a5[2] >= (signed int)a1 )
  {
    if ( *a5 <= (signed int)a3 )
    {
      a4 = a2;
    }
    else
    {
      v5 = a3;
      a4 = (unsigned int)((int)(a2 + a4) / 2);
    }
    return (a4 << 32) | v5;
  }
  return ((unsigned __int64)(unsigned int)((int)(a2 + a4) / 2) << 32) | a1;
}
