void __fastcall sub_4BE70(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi

  if ( *(_DWORD *)a1 == 6 )
  {
    v1 = *(__int64 **)(a1 + 8);
    if ( v1 )
    {
      v2 = *v1;
      if ( *v1 )
      {
        v1[1] = 0;
        qfree(v2);
      }
      operator delete(v1, 0x18u);
    }
  }
}
