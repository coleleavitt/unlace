void __fastcall sub_238F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // rax

  v4 = *(__int64 **)(a1 + 8);
  if ( v4 )
  {
    v7 = 673;
    do
    {
      v8 = (unsigned int)(*((_DWORD *)v4 + 2) - 1022);
      if ( (unsigned int)v8 <= 9 )
      {
        if ( _bittest64(&v7, v8) )
          v4[3] = correct_address(v4[3], a2, a3, a4, 0);
      }
      v4 = (__int64 *)*v4;
    }
    while ( v4 );
  }
}
