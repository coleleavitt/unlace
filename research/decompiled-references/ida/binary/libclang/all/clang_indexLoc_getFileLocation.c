void __fastcall clang_indexLoc_getFileLocation(
        __int64 *a1,
        __int64 *a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int a9)
{
  if ( a1 )
    *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a9 )
  {
    if ( a7 )
      sub_67EF40(a7, a9, a1, a2, a3, a4, a5);
  }
}

