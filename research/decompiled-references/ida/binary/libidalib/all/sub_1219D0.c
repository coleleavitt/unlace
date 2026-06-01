__int64 __fastcall sub_1219D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r13
  unsigned __int64 *v4; // rax
  unsigned __int64 *next_seg; // rax

  getinf_buf();
  v2 = -a2;
  v3 = -a2;
  v4 = (unsigned __int64 *)getseg();
  if ( v4 && v2 < v4[1] && *v4 < v3 )
    return 1;
  next_seg = (unsigned __int64 *)get_next_seg();
  if ( next_seg )
  {
    while ( *next_seg < *(_QWORD *)(a1 + 8) )
    {
      if ( v2 < next_seg[1] && *next_seg < v3 )
        return 1;
      next_seg = (unsigned __int64 *)get_next_seg();
      if ( !next_seg )
        return 0;
    }
  }
  return 0;
}

