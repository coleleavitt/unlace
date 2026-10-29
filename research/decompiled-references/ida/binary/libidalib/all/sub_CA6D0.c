void __fastcall sub_CA6D0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rbp
  unsigned __int64 v3; // rax

  v1 = *(__int64 **)(a1 + 8);
  if ( v1 )
  {
    v2 = 673;
    do
    {
      v3 = (unsigned int)(*((_DWORD *)v1 + 2) - 1022);
      if ( (unsigned int)v3 <= 9 )
      {
        if ( _bittest64(&v2, v3) )
          v1[3] = correct_address();
      }
      v1 = (__int64 *)*v1;
    }
    while ( v1 );
  }
}

