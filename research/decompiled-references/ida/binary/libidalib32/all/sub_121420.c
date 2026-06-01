__int64 __fastcall sub_121420(__int64 a1, int a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r13d
  unsigned int *v4; // rax
  unsigned int *next_seg; // rax

  getinf_buf();
  v2 = -a2;
  v3 = -a2;
  v4 = (unsigned int *)getseg();
  if ( v4 && v2 < v4[1] && *v4 < v3 )
    return 1;
  next_seg = (unsigned int *)get_next_seg();
  if ( next_seg )
  {
    while ( *next_seg < *(_DWORD *)(a1 + 4) )
    {
      if ( v2 < next_seg[1] && *next_seg < v3 )
        return 1;
      next_seg = (unsigned int *)get_next_seg();
      if ( !next_seg )
        return 0;
    }
  }
  return 0;
}

