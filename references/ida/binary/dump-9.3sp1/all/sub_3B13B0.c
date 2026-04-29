void __fastcall sub_3B13B0(unsigned __int64 **a1, __int64 a2)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 *v4; // rdi

  if ( a1 )
  {
    v3 = a1[4];
    while ( v3 )
    {
      sub_3AB0B0((_QWORD *)v3[3]);
      v4 = v3;
      v3 = (unsigned __int64 *)v3[2];
      a2 = 40;
      operator delete(v4, 0x28u);
    }
    if ( *a1 )
    {
      sub_3B11F0(a1, a2);
      if ( *a1 )
        qfree((__int64)*a1);
    }
    operator delete(a1, 0x48u);
  }
}
