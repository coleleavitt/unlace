unsigned __int64 __fastcall sub_1B760(__int64 a1)
{
  __int64 v2; // rax
  _BYTE *v3; // rcx
  char v4; // dl
  __int64 v5; // rax
  _BYTE *v6; // rcx
  __int64 v7; // rdx
  unsigned __int8 v8; // si
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r12
  _QWORD *v15; // rdi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r12

  v2 = *(_QWORD *)(a1 + 32);
  if ( !v2 )
    return sub_1B300((_QWORD *)a1, 0, 0);
  v3 = *(_BYTE **)(a1 + 24);
  if ( *v3 != 76 )
  {
    if ( *v3 == 80 )
    {
      *(_QWORD *)(a1 + 24) = v3 + 1;
      *(_QWORD *)(a1 + 32) = v2 - 1;
      v11 = sub_1B300((_QWORD *)a1, 0, 0);
      if ( v11 )
      {
        v12 = sub_1B300((_QWORD *)a1, 0, 0);
        if ( v12 )
        {
          v13 = sub_C400(*(_QWORD **)(a1 + 40), 165);
          sub_C080(v13, v11, *(_QWORD **)(a1 + 40));
          sub_C080(v13, v12, *(_QWORD **)(a1 + 40));
          return v13;
        }
      }
      return 0;
    }
    return sub_1B300((_QWORD *)a1, 0, 0);
  }
  *(_QWORD *)(a1 + 24) = v3 + 1;
  *(_QWORD *)(a1 + 32) = v2 - 1;
  if ( v2 == 1 )
    return 0;
  v4 = v3[1];
  v5 = v2 - 2;
  v6 = v3 + 2;
  if ( v4 == 95 )
  {
    v10 = 0;
  }
  else
  {
    LOBYTE(v7) = v4 - 48;
    *(_QWORD *)(a1 + 24) = v6;
    *(_QWORD *)(a1 + 32) = v5;
    if ( (unsigned __int8)v7 > 9u )
      return 0;
    v7 = (char)v7;
    if ( !v5 )
      return 0;
    while ( 1 )
    {
      v8 = *v6 - 48;
      if ( v8 > 9u )
        break;
      --v5;
      *(_QWORD *)(a1 + 24) = ++v6;
      v7 = (char)v8 + 10 * v7;
      *(_QWORD *)(a1 + 32) = v5;
      if ( !v5 )
        return 0;
    }
    v9 = *(_QWORD *)(a1 + 32);
    if ( !v9 || *v6 != 95 )
      return 0;
    v5 = v9 - 1;
    ++v6;
    v10 = v7 + 1;
  }
  *(_QWORD *)(a1 + 24) = v6;
  v15 = *(_QWORD **)(a1 + 40);
  *(_QWORD *)(a1 + 32) = v5;
  v16 = sub_C480(v15, 151, v10);
  if ( !v16 )
    return 0;
  v17 = sub_1B300((_QWORD *)a1, 0, 0);
  if ( !v17 )
    return 0;
  v18 = sub_C400(*(_QWORD **)(a1 + 40), 128);
  sub_C080(v18, v16, *(_QWORD **)(a1 + 40));
  sub_C080(v18, v17, *(_QWORD **)(a1 + 40));
  return v18;
}

