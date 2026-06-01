void __fastcall sub_384E50(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // r13
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdi

  v1 = *(_QWORD *)(a1 + 184);
  if ( v1 > 1 )
  {
    v2 = *(_QWORD *)(a1 + 192);
    v3 = 1;
    v4 = 1;
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 8 * v4);
      if ( *(_BYTE *)v5 != 45 )
        break;
      if ( *(_BYTE *)(v5 + 1) == 45 && !strcmp((const char *)(v5 + 2), "upg32") )
      {
        ++v3;
        byte_2CA15CB = 1;
        batch[0] = 1;
        v4 = v3;
        if ( v3 >= v1 )
          return;
      }
      else
      {
        v4 = ++v3;
        if ( v3 >= v1 )
          return;
      }
    }
  }
}

