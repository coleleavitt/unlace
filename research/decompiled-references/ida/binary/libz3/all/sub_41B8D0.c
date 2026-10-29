void __fastcall sub_41B8D0(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  _QWORD *v3; // rax

  v1 = *(_QWORD **)(a1 + 264);
  v2 = &v1[2 * *(unsigned int *)(a1 + 272)];
  if ( v1 != v2 )
  {
    while ( *v1 <= 1u )
    {
      v1 += 2;
      if ( v2 == v1 )
        return;
    }
    while ( v2 != v1 )
    {
      sub_41AB70(v1[1] + 176LL);
      v3 = v1 + 2;
      if ( v2 == v1 + 2 )
        break;
      while ( 1 )
      {
        v1 = v3;
        if ( *v3 > 1u )
          break;
        v3 += 2;
        if ( v2 == v3 )
          return;
      }
    }
  }
}

