void __fastcall sub_134690(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // r11d
  unsigned __int8 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 v17; // di
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 *v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx

  if ( *(_QWORD *)(a1 + 192) && a3[1] )
  {
    a2[1] = 0;
    v6 = a3[1];
    if ( a2[2] < v6 )
    {
      *a2 = qvector_reserve();
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
        v9 = *a3 + 8 * v7;
        v10 = v8;
        v11 = *(_DWORD *)v9;
        v12 = *(_BYTE *)(v9 + 4);
        v13 = 8LL * *(_QWORD *)(a1 + 192);
        v14 = v13 >> 3;
        if ( v13 > 0 )
          break;
        if ( !v13 )
          goto LABEL_16;
LABEL_17:
        v18 = a2[1];
        v19 = (v10 - v8) >> 3;
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
          if ( a2[2] < (unsigned __int64)(v18 + 1) )
          {
            v22 = qvector_reserve();
            v23 = a2[1];
            *a2 = v22;
            v20 = (__int64 *)(v22 + 8 * v23);
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
          v16 = v10 + 8 * (v14 >> 1);
          v17 = *(_BYTE *)(v16 + 4);
          if ( v17 < v12 || v12 == v17 && *(_DWORD *)v16 < v11 )
            break;
          v14 >>= 1;
          if ( v15 <= 0 )
            goto LABEL_13;
        }
        v10 = v16 + 8;
        v14 = v14 - 1 - v15;
      }
      while ( v14 > 0 );
LABEL_13:
      if ( v10 != v8 + v13 && (v8 == v10 || *(_BYTE *)(v10 + 4) == v12 && *(_DWORD *)v10 == v11) )
        goto LABEL_17;
LABEL_16:
      v10 -= 8;
      goto LABEL_17;
    }
  }
  else if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
}

