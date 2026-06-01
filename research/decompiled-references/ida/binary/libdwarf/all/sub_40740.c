void __fastcall sub_40740(void **ptr, __int64 a2)
{
  void **v2; // rbx

  if ( ptr && a2 )
  {
    if ( a2 > 0 )
    {
      v2 = ptr;
      do
      {
        if ( *v2 )
        {
          free(*v2);
          *v2 = nullptr;
        }
        ++v2;
      }
      while ( v2 != &ptr[a2] );
    }
    free(ptr);
  }
}

