/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83DD0
// Address: 0x0000000000083DD0

//----- (0000000000083DD0) ----------------------------------------------------
void __fastcall sub_83DD0(void **ptr)
{
  void *v2; // rbx
  void *v3; // r15
  void *v4; // rdi
  void *v5; // rdi

  if ( ptr )
  {
    v2 = ptr[2];
    if ( v2 )
    {
      do
      {
        v3 = *(void **)v2;
        v4 = *((void **)v2 + 5);
        if ( v4 )
        {
          *((_QWORD *)v2 + 6) = 0;
          qfree(v4);
          *((_QWORD *)v2 + 5) = 0;
          *((_QWORD *)v2 + 7) = 0;
        }
        if ( (*((_BYTE *)v2 + 16) & 1) != 0 )
          operator delete(*((void **)v2 + 4));
        operator delete(v2);
        v2 = v3;
      }
      while ( v3 );
    }
    v5 = *ptr;
    *ptr = nullptr;
    if ( v5 )
      operator delete(v5);
    operator delete(ptr);
  }
}
