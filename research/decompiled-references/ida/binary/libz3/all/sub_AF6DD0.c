void __fastcall sub_AF6DD0(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  _QWORD *v3; // rax

  if ( *(_BYTE *)(a1 + 144) )
  {
    v1 = *(_QWORD **)(a1 + 96);
    v2 = &v1[2 * *(unsigned int *)(a1 + 104)];
    if ( v1 != v2 )
    {
      while ( *v1 <= 1u )
      {
        v1 += 2;
        if ( v2 == v1 )
          goto LABEL_3;
      }
      while ( v2 != v1 )
      {
        sub_AF6C10(a1, v1[1]);
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
          {
            *(_BYTE *)(a1 + 144) = 0;
            return;
          }
        }
      }
    }
LABEL_3:
    *(_BYTE *)(a1 + 144) = 0;
  }
}

