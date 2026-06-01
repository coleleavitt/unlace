__int64 __fastcall DyldSharedCache::addressInText(DyldSharedCache *this, __int64 a2, unsigned int *a3)
{
  char *v3; // x8
  char *v4; // x9
  unsigned int v5; // w10
  unsigned __int64 v6; // x11
  unsigned __int64 v7; // x12

  v3 = (char *)this + *((_QWORD *)this + 17);
  v4 = &v3[32 * *((_QWORD *)this + 18)];
  if ( v4 <= v3 )
    return 0;
  v5 = 0;
  v6 = *(_QWORD *)((char *)this + *((unsigned int *)this + 4)) + a2;
  while ( 1 )
  {
    v7 = *((_QWORD *)v3 + 2);
    if ( v7 <= v6 && v6 < v7 + *((unsigned int *)v3 + 6) )
      break;
    v3 += 32;
    ++v5;
    if ( v3 >= v4 )
      return 0;
  }
  *a3 = v5;
  return 1;
}
