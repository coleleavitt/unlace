void __fastcall sub_B72300(__int64 *a1)
{
  __int64 v1; // rdi
  void **v2; // rbx

  v1 = *a1;
  if ( v1 )
  {
    if ( (v1 & 4) != 0 )
    {
      v2 = (void **)(v1 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v1 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( *v2 != v2 + 2 )
          free(*v2);
        operator delete(v2, 0x30u);
      }
    }
  }
}

