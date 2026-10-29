void __fastcall sub_222B2A0(__int16 *a1)
{
  __int16 v2; // ax
  __int16 *v3; // rdi
  char *v4; // r12
  char *v5; // rbx
  char *v6; // rdi

  v2 = *a1;
  if ( *a1 == 7 )
  {
    sub_222B0E0((__int64 *)a1 + 1);
    operator delete(*((_QWORD *)a1 + 1), (unsigned __int64)*((unsigned int *)a1 + 6) << 6, 8);
  }
  else if ( v2 == 8 )
  {
    v4 = *((char **)a1 + 2);
    v5 = *((char **)a1 + 1);
    if ( v4 != v5 )
    {
      do
      {
        v6 = v5;
        v5 += 40;
        sub_222B2A0(v6);
      }
      while ( v4 != v5 );
      v5 = *((char **)a1 + 1);
    }
    if ( v5 )
      operator delete(v5);
  }
  else if ( v2 == 6 )
  {
    v3 = *((__int16 **)a1 + 1);
    if ( v3 != a1 + 12 )
      operator delete(v3);
  }
}
