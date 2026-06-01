__int64 __fastcall sub_AA6660(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int ***v3; // rbx
  __int64 result; // rax
  unsigned int ***i; // rbp
  unsigned int **v6; // rdx

  v3 = *(unsigned int ****)(a3 + 56);
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    for ( i = &v3[result]; i != v3; result = sub_AA6440(a1, a2, v6) )
    {
      while ( 1 )
      {
        v6 = *v3;
        if ( (*((_BYTE *)*v3 + 44) & 0x10) != 0 )
          break;
        if ( i == ++v3 )
          return result;
      }
      ++v3;
    }
  }
  return result;
}

