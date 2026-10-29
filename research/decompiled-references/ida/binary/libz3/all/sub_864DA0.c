char __fastcall sub_864DA0(__int64 a1, double a2)
{
  char result; // al
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int v7; // r15d
  __int64 v8; // rbp
  __int64 v9; // r12
  _BYTE *v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64); // rcx
  __int64 v12; // r14
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  __int64 *v14; // rax
  __int64 *v15; // r13
  __int64 *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // r12
  __int64 **v21; // rax
  char v22; // di
  __int64 v23; // rdx
  unsigned int v24; // ebp
  __int64 v25; // rsi
  __int64 v26; // rax
  char v27; // bp
  char v28; // al
  char v29; // al
  __int64 v30; // [rsp+0h] [rbp-48h]
  char v31; // [rsp+Fh] [rbp-39h]

  result = *(_BYTE *)(sub_7E4EB0(a1) + 412);
  if ( !result )
    return result;
  v6 = *(_QWORD *)(a1 + 88);
  if ( !v6 || (v7 = *(_DWORD *)(v6 - 4)) == 0 )
  {
    v23 = *(_QWORD *)(a1 + 440);
    v31 = 0;
    if ( v23 )
      goto LABEL_24;
    goto LABEL_38;
  }
  v31 = 0;
  v8 = 0;
  v30 = v7;
  do
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v8);
    if ( !*(_BYTE *)v9 )
      goto LABEL_22;
    v10 = *(_BYTE **)(a1 + 80);
    v11 = sub_795570;
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v8);
    v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 488LL);
    if ( v13 != sub_795570 )
    {
      v29 = v13((__int64)v10, *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v8));
LABEL_31:
      if ( !v29 )
        goto LABEL_22;
      goto LABEL_8;
    }
    if ( v10[168] )
    {
      v29 = *(_BYTE *)(v12 + 16);
      goto LABEL_31;
    }
LABEL_8:
    v14 = *(__int64 **)(v9 + 16);
    if ( v14 )
    {
      v15 = &v14[*((unsigned int *)v14 - 1)];
      if ( v15 != v14 )
      {
        v16 = *(__int64 **)(v9 + 16);
        do
        {
          v17 = *v16++;
          sub_817E40(a1, v9, v17, (__int64)v11, v4, v5);
        }
        while ( v15 != v16 );
      }
    }
    v20 = sub_8627A0(a1, (__int64 *)v12);
    v21 = *(__int64 ***)(v12 + 48);
    if ( !v21 )
      goto LABEL_36;
    v18 = *((unsigned int *)v21 - 1);
    v19 = (__int64)&v21[v18];
    if ( (__int64 **)v19 == v21 )
      goto LABEL_36;
    v22 = 0;
    do
    {
      v18 = **v21;
      if ( !*(_WORD *)(v18 + 4) )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 24LL);
        if ( v18 )
        {
          if ( *(_DWORD *)(a1 + 112) == *(_DWORD *)v18 )
          {
            LOBYTE(v18) = *(_DWORD *)(v18 + 4) == 4;
            v22 |= v18;
          }
        }
      }
      ++v21;
    }
    while ( v21 != (__int64 **)v19 );
    if ( !v22 )
LABEL_36:
      sub_817EC0(a1, v8, v18, v19, v4, v5);
    v31 |= v20;
LABEL_22:
    ++v8;
  }
  while ( v30 != v8 );
  v23 = *(_QWORD *)(a1 + 440);
  if ( !v23 )
  {
LABEL_38:
    *(_DWORD *)(a1 + 452) = 0;
    goto LABEL_28;
  }
LABEL_24:
  v24 = *(_DWORD *)(v23 - 4);
  *(_DWORD *)(a1 + 452) = 0;
  if ( v24 )
  {
    v25 = 0;
    while ( 1 )
    {
      while ( *(_DWORD *)(v23 + 24LL * (unsigned int)v25 + 4) != 1 )
      {
        v25 = (unsigned int)(v25 + 1);
        *(_DWORD *)(a1 + 452) = v25;
        if ( (unsigned int)v25 >= v24 )
          goto LABEL_28;
      }
      v31 |= sub_864CE0(a1, v25, a2);
      v25 = (unsigned int)(*(_DWORD *)(a1 + 452) + 1);
      *(_DWORD *)(a1 + 452) = v25;
      if ( (unsigned int)v25 >= v24 )
        break;
      v23 = *(_QWORD *)(a1 + 440);
    }
  }
LABEL_28:
  v26 = *(_QWORD *)a1;
  v27 = *(_BYTE *)(a1 + 456);
  *(_BYTE *)(a1 + 456) = 0;
  v28 = (*(__int64 (__fastcall **)(__int64))(v26 + 48))(a1);
  *(_BYTE *)(a1 + 456) = v27;
  return v31 | v28;
}

