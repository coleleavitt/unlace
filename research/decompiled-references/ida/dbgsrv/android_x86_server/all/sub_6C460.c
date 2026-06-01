/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C460
// Address: 0x0006C460

//----- (0006C460) --------------------------------------------------------
void __cdecl sub_6C460(void **ptr)
{
  void *v1; // edi
  void *v2; // esi
  void *v3; // eax
  void *v4; // eax

  if ( ptr )
  {
    v1 = ptr[2];
    if ( v1 )
    {
      do
      {
        v2 = *(void **)v1;
        v3 = *((void **)v1 + 5);
        if ( v3 )
        {
          *((_DWORD *)v1 + 6) = 0;
          qfree(v3);
          *((_DWORD *)v1 + 5) = 0;
          *((_DWORD *)v1 + 7) = 0;
        }
        if ( (*((_BYTE *)v1 + 8) & 1) != 0 )
          operator delete(*((void **)v1 + 4));
        operator delete(v1);
        v1 = v2;
      }
      while ( v2 );
    }
    v4 = *ptr;
    *ptr = nullptr;
    if ( v4 )
      operator delete(v4);
    operator delete(ptr);
  }
}
