/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50078
// Address: 0x00050078

//----- (00050078) --------------------------------------------------------
void __fastcall sub_50078(void **ptr)
{
  unsigned __int8 *v2; // r5
  void *v3; // r0
  unsigned __int8 *v4; // r6
  void *v5; // r0

  if ( ptr )
  {
    v2 = (unsigned __int8 *)ptr[2];
    if ( v2 )
    {
      do
      {
        v3 = *((void **)v2 + 5);
        v4 = *(unsigned __int8 **)v2;
        if ( v3 )
        {
          *((_DWORD *)v2 + 6) = 0;
          qfree(v3);
          *((_DWORD *)v2 + 7) = 0;
          *((_DWORD *)v2 + 5) = 0;
        }
        if ( v2[8] << 31 )
          operator delete(*((void **)v2 + 4));
        operator delete(v2);
        v2 = v4;
      }
      while ( v4 );
    }
    v5 = *ptr;
    *ptr = nullptr;
    if ( v5 )
      operator delete(v5);
    operator delete(ptr);
  }
}
