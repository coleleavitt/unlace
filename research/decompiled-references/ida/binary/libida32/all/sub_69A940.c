void __fastcall sub_69A940(_QWORD *a1)
{
  _QWORD *v1; // r13
  unsigned int *v2; // rbx
  unsigned int *v3; // r12
  unsigned int v4; // esi

  v1 = *(_QWORD **)(*a1 + 1672LL);
  v2 = (unsigned int *)v1[22];
  v3 = &v2[v1[23]];
  if ( v3 != v2 )
  {
    do
    {
      v4 = *v2++;
      sub_3A1A90(a1, v4, v4 + 1, 0x28u);
    }
    while ( v3 != v2 );
    v2 = (unsigned int *)v1[22];
  }
  if ( v2 )
  {
    v1[23] = 0;
    qfree(v2);
    v1[22] = 0;
    v1[24] = 0;
  }
}

