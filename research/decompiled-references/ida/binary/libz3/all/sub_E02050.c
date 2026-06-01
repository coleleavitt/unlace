__int64 __fastcall sub_E02050(__int64 a1)
{
  __int64 **v2; // rax
  __int64 **v3; // rbp
  __int64 **v4; // rbx
  __int64 **v5; // rax
  __int64 v6; // rsi
  __int64 **v7; // rdi
  __int64 **v8; // rdx
  int v9; // ecx
  unsigned int v10; // ebp
  size_t v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rax

  v2 = *(__int64 ***)(a1 + 696);
  v3 = &v2[3 * *(unsigned int *)(a1 + 704)];
  v4 = v2;
  if ( v2 == v3 )
  {
    if ( *(_DWORD *)(a1 + 708) )
      goto LABEL_25;
  }
  else
  {
    while ( *((_DWORD *)v4 + 1) != 2 )
    {
      v4 += 3;
      if ( v3 == v4 )
        goto LABEL_32;
    }
    if ( v3 == v4 )
    {
LABEL_32:
      if ( !*(_DWORD *)(a1 + 708) )
        goto LABEL_12;
      v7 = *(__int64 ***)(a1 + 696);
      v6 = *(unsigned int *)(a1 + 704);
      v8 = &v2[3 * v6];
      goto LABEL_14;
    }
    do
    {
      sub_DFBCB0(a1);
      sub_DF7170(v4 + 2, *(_QWORD *)(a1 + 296));
      v5 = v4 + 3;
      if ( v3 == v4 + 3 )
        break;
      while ( 1 )
      {
        v4 = v5;
        if ( *((_DWORD *)v5 + 1) == 2 )
          break;
        v5 += 3;
        if ( v3 == v5 )
          goto LABEL_11;
      }
    }
    while ( v3 != v5 );
LABEL_11:
    if ( *(_DWORD *)(a1 + 708) )
      goto LABEL_13;
  }
LABEL_12:
  if ( !*(_DWORD *)(a1 + 712) )
    goto LABEL_26;
LABEL_13:
  v2 = *(__int64 ***)(a1 + 696);
  v6 = *(unsigned int *)(a1 + 704);
  v7 = v2;
  v8 = &v2[3 * v6];
  if ( v2 != v8 )
  {
LABEL_14:
    v9 = 0;
    do
    {
      while ( *((_DWORD *)v2 + 1) )
      {
        *((_DWORD *)v2 + 1) = 0;
        v2 += 3;
        if ( v2 == v8 )
          goto LABEL_18;
      }
      v2 += 3;
      ++v9;
    }
    while ( v2 != v8 );
LABEL_18:
    if ( (unsigned int)v6 <= 0x10 || 3 * (int)v6 >= (unsigned int)(4 * v9) )
      goto LABEL_25;
    if ( v7 )
    {
      sub_186B220(v7);
      v10 = *(_DWORD *)(a1 + 704);
      *(_QWORD *)(a1 + 696) = 0;
      v10 >>= 1;
      *(_DWORD *)(a1 + 704) = v10;
      v11 = 24LL * v10;
      v12 = sub_186B270(v11);
      if ( !v10 )
      {
LABEL_24:
        *(_QWORD *)(a1 + 696) = v12;
        goto LABEL_25;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 696) = 0;
      v15 = (unsigned int)v6 >> 1;
      *(_DWORD *)(a1 + 704) = v15;
      v11 = 24 * v15;
      v12 = sub_186B270(24 * v15);
    }
    v13 = v12 + 8;
    do
    {
      *(_QWORD *)(v13 - 8) = 0;
      v13 += 24;
      *(_QWORD *)(v13 - 24) = 0;
      *(_QWORD *)(v13 - 16) = 0;
    }
    while ( v13 != v12 + 8 + v11 );
    goto LABEL_24;
  }
LABEL_25:
  *(_QWORD *)(a1 + 708) = 0;
LABEL_26:
  result = *(_QWORD *)(a1 + 736);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

