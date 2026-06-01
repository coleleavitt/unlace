void __fastcall sub_6BB310(_QWORD *a1)
{
  _QWORD *v1; // r13
  unsigned __int64 *v2; // rbx
  unsigned __int64 *v3; // r12
  unsigned __int64 v4; // rsi

  v1 = *(_QWORD **)(*a1 + 1864LL);
  v2 = (unsigned __int64 *)v1[22];
  v3 = &v2[v1[23]];
  if ( v3 != v2 )
  {
    do
    {
      v4 = *v2++;
      sub_3A61A0(a1, v4, v4 + 1, 0x28u);
    }
    while ( v3 != v2 );
    v2 = (unsigned __int64 *)v1[22];
  }
  if ( v2 )
  {
    v1[23] = 0;
    qfree(v2);
    v1[22] = 0;
    v1[24] = 0;
  }
}
