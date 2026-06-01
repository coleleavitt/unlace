_QWORD **__fastcall sub_52EA70(__int64 a1, unsigned __int64 a2)
{
  _QWORD **v2; // r8
  __int64 i; // rax
  unsigned __int64 **v4; // rcx

  v2 = *(_QWORD ***)(a1 + 8);
  for ( i = (8LL * *(_QWORD *)(a1 + 16)) >> 3; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v4 = &v2[i >> 1];
      if ( **v4 >= a2 )
        break;
      v2 = v4 + 1;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return v2;
    }
  }
  return v2;
}
