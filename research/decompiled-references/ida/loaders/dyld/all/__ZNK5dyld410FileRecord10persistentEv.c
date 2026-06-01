bool __fastcall dyld4::FileRecord::persistent(dyld4::FileRecord *this)
{
  __int64 v1; // x9
  char *v2; // x8
  int v3; // w10
  bool v4; // zf

  v1 = 0;
  v2 = (char *)this + 24;
  do
  {
    v3 = (unsigned __int8)v2[v1];
    if ( v2[v1] )
      v4 = 1;
    else
      v4 = v1 == 15;
    ++v1;
  }
  while ( !v4 );
  return v3 && *((_QWORD *)this + 1) != 0;
}
