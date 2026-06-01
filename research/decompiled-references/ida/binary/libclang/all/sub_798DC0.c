__int64 __fastcall sub_798DC0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 *v5; // rsi
  __int64 v6; // r12
  __int64 *v7; // rbx
  unsigned __int64 v8; // r13
  bool v9; // zf
  __int64 *v10; // rax
  __int64 *v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 *i; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // rax
  unsigned int v18; // eax

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v3 = a1;
    v4 = a1;
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
      v4 = sub_793320(a1);
    v5 = sub_6BB160(*(_QWORD *)(v4 + 88), a1);
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
      v3 = sub_793320(a1);
    v6 = *(_QWORD *)(v3 + 88);
    v1 = 0;
    v7 = (__int64 *)*v5;
    v8 = *v5 + 8LL * *((unsigned int *)v5 + 2);
    v9 = *v5 == v8;
    if ( *v5 >= v8 )
      goto LABEL_17;
LABEL_8:
    v10 = v7;
    while ( 1 )
    {
      v11 = v10;
      if ( *(_WORD *)(*v10 + 32) == 118 )
        break;
      if ( (__int64 *)v8 == ++v10 )
        return v1;
    }
    v12 = v8;
    while ( v11 != (__int64 *)v12 )
    {
      v13 = *v7;
      for ( i = v7 + 1; *(_WORD *)(v13 + 32) != 118; ++i )
      {
        v13 = *i;
        v7 = i;
      }
      if ( !sub_7275A0(v13) )
      {
        v16 = *v7;
        if ( *(_WORD *)(*v7 + 32) != 118 )
        {
          v17 = v7 + 1;
          do
          {
            v16 = *v17;
            v7 = v17++;
          }
          while ( *(_WORD *)(v16 + 32) != 118 );
        }
        v18 = sub_7239C0(v16, v6);
        if ( v1 < v18 )
          v1 = v18;
      }
      v9 = ++v7 == (__int64 *)v8;
      if ( (unsigned __int64)v7 < v8 )
        goto LABEL_8;
LABEL_17:
      if ( v9 )
        return v1;
      v15 = v8;
      while ( 1 )
      {
        v12 = v15;
        if ( *(_WORD *)(*(_QWORD *)v15 + 32LL) == 118 )
          break;
        v15 += 8LL;
        if ( v7 == (__int64 *)v15 )
          return v1;
      }
      v11 = v7;
    }
  }
  return v1;
}

