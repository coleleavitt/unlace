void __fastcall pl_chooser_t__::vfunc_9(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // r11
  unsigned __int8 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int8 v17; // di
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 *v20; // rcx
  __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi

  if ( *(_QWORD *)(a1 + 192) && a3[1] )
  {
    a2[1] = 0;
    v6 = a3[1];
    if ( a2[2] < v6 )
    {
      *a2 = qvector_reserve(a2, *a2, v6, 8);
      if ( a3[1] )
        goto LABEL_5;
    }
    else if ( v6 )
    {
LABEL_5:
      v7 = 0;
      while ( 1 )
      {
        v8 = *(_QWORD *)(a1 + 184);
        v9 = *a3 + 16 * v7;
        v10 = 16LL * *(_QWORD *)(a1 + 192);
        v11 = *(_QWORD *)v9;
        v12 = *(_BYTE *)(v9 + 8);
        v13 = v8;
        v14 = v10 >> 4;
        if ( v10 > 0 )
          break;
        if ( !v10 )
          goto LABEL_16;
LABEL_17:
        v18 = a2[1];
        v19 = (v13 - v8) >> 4;
        v20 = (__int64 *)(*a2 + 8 * v18);
        if ( (__int64 *)*a2 == v20 )
          goto LABEL_24;
        v21 = (__int64 *)*a2;
        while ( v19 != *v21 )
        {
          if ( v20 == ++v21 )
            goto LABEL_24;
        }
        if ( v20 == v21 )
        {
LABEL_24:
          v22 = v18 + 1;
          if ( a2[2] < v22 )
          {
            v23 = qvector_reserve(a2, *a2, v22, 8);
            v24 = a2[1];
            *a2 = v23;
            v20 = (__int64 *)(v23 + 8 * v24);
          }
          *v20 = v19;
          ++a2[1];
        }
        if ( (unsigned __int64)++v7 >= a3[1] )
          return;
      }
      do
      {
        while ( 1 )
        {
          v15 = v14 >> 1;
          v16 = v13 + 16 * (v14 >> 1);
          v17 = *(_BYTE *)(v16 + 8);
          if ( v17 < v12 || v12 == v17 && *(_QWORD *)v16 < v11 )
            break;
          v14 >>= 1;
          if ( v15 <= 0 )
            goto LABEL_13;
        }
        v13 = v16 + 16;
        v14 = v14 - 1 - v15;
      }
      while ( v14 > 0 );
LABEL_13:
      if ( v13 != v8 + v10 && (v8 == v13 || *(_BYTE *)(v13 + 8) == v12 && *(_QWORD *)v13 == v11) )
        goto LABEL_17;
LABEL_16:
      v13 -= 16;
      goto LABEL_17;
    }
  }
  else
  {
    v25 = *a2;
    if ( *a2 )
    {
      a2[1] = 0;
      qfree(v25, (const char *)a2);
      *a2 = 0;
      a2[2] = 0;
    }
  }
}
