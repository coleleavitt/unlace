__int64 __fastcall dyld4::APIs::_dyld_objc_class_count(dyld4::APIs *this)
{
  unsigned int *v1; // x8

  v1 = *(unsigned int **)(*((_QWORD *)this + 1) + 256LL);
  if ( v1 )
    return *(unsigned int *)((char *)&v1[2 * v1[1] + 264 + v1[1]] + v1[4] + v1[1] + 1) + v1[2];
  else
    return 0;
}
