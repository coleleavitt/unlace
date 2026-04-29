dyld4::Atlas::ProcessSnapshot *__fastcall dyld4::Atlas::ProcessSnapshot::addSharedCacheImage(
        dyld4::Atlas::ProcessSnapshot *this,
        const mach_header *a2)
{
  char *v2; // x10
  __int64 v3; // x9
  char *v4; // x8
  __int64 v5; // x11
  char *v6; // x12
  char *v7; // x10

  if ( (a2->flags & 0x80000000) == 0 )
    dyld4::Atlas::ProcessSnapshot::addSharedCacheImage(this, a2);
  v2 = *(char **)(*((_QWORD *)this + 8) + 160LL);
  v3 = *((_QWORD *)v2 + 18);
  v4 = &v2[*((_QWORD *)v2 + 17)];
  v5 = 32 * v3;
  if ( 32 * v3 )
  {
    v6 = (char *)((char *)a2 - v2 + *((_QWORD *)v2 + 28));
    v7 = &v2[*((_QWORD *)v2 + 17)];
    while ( *((char **)v7 + 2) != v6 )
    {
      v7 += 32;
      v5 -= 32;
      if ( !v5 )
        goto LABEL_11;
    }
  }
  else
  {
    v7 = &v2[*((_QWORD *)v2 + 17)];
  }
  if ( v7 == &v4[32 * v3] )
LABEL_11:
    dyld4::Atlas::ProcessSnapshot::addSharedCacheImage(this, a2);
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + ((unsigned __int64)((v7 - v4) >> 5) >> 3)) |= 1 << (((v7 - v4) >> 5) & 7);
  return this;
}
