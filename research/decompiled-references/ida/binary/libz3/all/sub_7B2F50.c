void __fastcall sub_7B2F50(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // r13
  _QWORD *v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rbp

  v2 = *a2;
  if ( *a2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v3 == v2 )
    {
      LODWORD(v6) = 0;
      goto LABEL_12;
    }
    v4 = *a2;
    do
    {
      while ( 1 )
      {
        v5 = *v4;
        if ( (*(_BYTE *)(*v4 + 16LL) & 2) == 0 || !(unsigned __int8)sub_119E530(*(_QWORD *)(a1 + 24), *v4) )
          break;
        ++v4;
        sub_11B4BD0(*(_QWORD *)(a1 + 24), v5);
        sub_11B3D40(*(_QWORD *)(a1 + 24), v5);
        if ( v3 == v4 )
          goto LABEL_10;
      }
      if ( v4 != v2 )
        *v2 = *v4;
      ++v4;
      ++v2;
    }
    while ( v3 != v4 );
LABEL_10:
    v3 = *a2;
    if ( *a2 )
    {
      v6 = v2 - v3;
LABEL_12:
      *((_DWORD *)v3 - 1) = v6;
    }
  }
}

