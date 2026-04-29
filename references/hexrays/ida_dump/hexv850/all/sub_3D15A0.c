void __fastcall sub_3D15A0(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *v1;
    if ( *v1 )
    {
      v1[1] = 0;
      qfree(v2);
    }
    operator delete(v1, 0x38u);
  }
}
