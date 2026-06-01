__int64 __fastcall sub_204BEA0(__int64 a1)
{
  __int64 v2; // r13
  __int64 *v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  void *v10; // rdi
  __int64 *v11; // r13
  __int64 *v12; // r15
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 *v15; // rdi
  __int64 *v16; // rbx
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 *v20; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  if ( (*(_BYTE *)(a1 + 1) & 2) != 0 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
    v23 = sub_20C31F0(**(_QWORD **)(a1 + 8));
    v24 = sub_2055240(v23, 1, 0);
    v25 = sub_205E5E0(v24, *(_QWORD *)(v22 + 8), 0);
    sub_20CDD90(v22, v25);
    sub_205B240(v22);
  }
  v2 = *(_QWORD *)(a1 + 56);
  v3 = (__int64 *)(a1 + 48);
  if ( v2 != a1 + 48 )
  {
    if ( !v2 )
LABEL_29:
      BUG();
    v4 = *(_QWORD *)(a1 + 56);
    while ( 1 )
    {
      v5 = 4LL * (*(_DWORD *)(v4 - 20) & 0x7FFFFFF);
      if ( (*(_BYTE *)(v4 - 17) & 0x40) != 0 )
      {
        v6 = *(_QWORD **)(v4 - 32);
        v7 = &v6[v5];
      }
      else
      {
        v7 = (_QWORD *)(v4 - 24);
        v6 = (_QWORD *)(v4 - 24 - v5 * 8);
      }
      for ( ; v7 != v6; v6 += 4 )
      {
        v8 = (_QWORD *)v6[2];
        if ( v8 )
        {
          v9 = v6[1];
          *v8 = v9;
          if ( v9 )
          {
            *(_QWORD *)(v9 + 16) = v8;
            v6[1] = 0;
          }
          v6[2] = 0;
        }
        *v6 = 0;
      }
      v4 = *(_QWORD *)(v4 + 8);
      if ( v3 == (__int64 *)v4 )
        break;
      if ( !v4 )
        goto LABEL_29;
    }
    while ( 1 )
    {
      v10 = *(void **)(v2 + 40);
      if ( v10 )
        sub_208B180(v10);
      v2 = *(_QWORD *)(v2 + 8);
      if ( v4 == v2 )
        break;
      if ( !v2 )
        BUG();
    }
    v11 = *(__int64 **)(a1 + 56);
    if ( (__int64 *)v4 != v11 )
    {
      do
      {
        v12 = (__int64 *)v11[1];
        sub_204BE50(v4, (__int64)(v11 - 3));
        v13 = *v11;
        v14 = (__int64 *)v11[1];
        v15 = v11 - 3;
        *v14 = *v11;
        *(_QWORD *)(v13 + 8) = v14;
        *(_OWORD *)v11 = 0;
        v11 = v12;
        sub_20CC2D0(v15);
      }
      while ( (__int64 *)v4 != v12 );
      v16 = *(__int64 **)(a1 + 56);
      if ( v3 != v16 )
      {
        do
        {
          v17 = (__int64 *)v16[1];
          sub_204BE50(a1 + 48, (__int64)(v16 - 3));
          v18 = *v16;
          v19 = (__int64 *)v16[1];
          v20 = v16 - 3;
          *v19 = *v16;
          *(_QWORD *)(v18 + 8) = v19;
          *(_OWORD *)v16 = 0;
          v16 = v17;
          sub_20CC2D0(v20);
        }
        while ( v3 != v17 );
      }
    }
  }
  return sub_20CC0C0(a1);
}
