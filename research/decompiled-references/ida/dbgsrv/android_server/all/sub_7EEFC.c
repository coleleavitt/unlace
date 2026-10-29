/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EEFC
// Address: 0x000000000007EEFC

//----- (000000000007EEFC) ----------------------------------------------------
void __fastcall sub_7EEFC(
        void **ptr,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  void *v11; // x20
  void *v13; // x0
  void *v14; // x21
  void *v15; // x0

  if ( ptr )
  {
    v11 = ptr[2];
    if ( v11 )
    {
      do
      {
        v13 = *((void **)v11 + 5);
        v14 = *(void **)v11;
        if ( v13 )
        {
          *((_QWORD *)v11 + 6) = 0;
          qfree(v13);
          *((_QWORD *)v11 + 5) = 0;
          *((_QWORD *)v11 + 7) = 0;
        }
        if ( (*((_BYTE *)v11 + 16) & 1) != 0 )
          operator delete(*((void **)v11 + 4));
        operator delete(v11);
        v11 = v14;
      }
      while ( v14 );
    }
    v15 = *ptr;
    *ptr = nullptr;
    if ( v15 )
      operator delete(v15);
    operator delete(ptr);
  }
}
