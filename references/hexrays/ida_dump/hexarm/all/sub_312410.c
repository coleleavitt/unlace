void __fastcall sub_312410(__int64 *a1)
{
  __int64 v2; // rdi

  if ( a1 )
  {
    sub_312350((__int64)a1);
    v2 = *a1;
    if ( *a1 )
    {
      a1[1] = 0;
      qfree(v2);
    }
    operator delete(a1, 0x28u);
  }
}
