void __fastcall sub_7A0C80(__int64 *a1)
{
  __int64 v1; // rax
  void **v2; // rax
  void **v3; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( (v1 & 4) != 0 )
    {
      v2 = (void **)(v1 & 0xFFFFFFFFFFFFFFF8LL);
      v3 = v2;
      if ( v2 )
      {
        if ( *v2 != v2 + 2 )
          free(*v2);
        operator delete(v3, 0x30u);
      }
    }
  }
}

