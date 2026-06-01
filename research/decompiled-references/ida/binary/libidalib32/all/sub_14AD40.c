void __fastcall sub_14AD40(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // r13
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  _DWORD *v8; // rdi
  unsigned int v9; // esi
  _DWORD *v10; // r9
  __int64 v11; // rax
  _DWORD *v12; // r8
  __int64 i; // rax
  unsigned int *v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // r15
  unsigned __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx

  v4 = *(_QWORD *)(a1 + 216);
  if ( *(_QWORD *)(v4 + 16) && a3[1] )
  {
    a2[1] = 0;
    v6 = a3[1];
    if ( a2[2] < v6 )
    {
      *a2 = qvector_reserve();
      if ( !a3[1] )
        return;
    }
    else if ( !v6 )
    {
      return;
    }
    v7 = 0;
    do
    {
      v8 = *(_DWORD **)(v4 + 8);
      v9 = *(_DWORD *)(*a3 + 4 * v7);
      v10 = v8;
      v11 = 3LL * *(_QWORD *)(v4 + 16);
      v12 = &v8[v11];
      for ( i = 0xAAAAAAAAAAAAAAABLL * ((v11 * 4) >> 2); i > 0; i >>= 1 )
      {
        while ( 1 )
        {
          v14 = &v10[(i >> 1) + (i & 0xFFFFFFFFFFFFFFFELL)];
          if ( *v14 >= v9 )
            break;
          v10 = v14 + 3;
          i = i - 1 - (i >> 1);
          if ( i <= 0 )
            goto LABEL_10;
        }
      }
LABEL_10:
      if ( v12 == v10 || v8 != v10 && v9 != *v10 )
        v10 -= 3;
      v15 = a2[1];
      v16 = (unsigned __int64 *)(*a2 + 8 * v15);
      v17 = 0xAAAAAAAAAAAAAAABLL * (v10 - v8);
      if ( (unsigned __int64 *)*a2 == v16 )
        goto LABEL_22;
      v18 = (unsigned __int64 *)*a2;
      while ( v17 != *v18 )
      {
        if ( v16 == ++v18 )
          goto LABEL_22;
      }
      if ( v18 == v16 )
      {
LABEL_22:
        if ( a2[2] < (unsigned __int64)(v15 + 1) )
        {
          v19 = qvector_reserve();
          v20 = a2[1];
          *a2 = v19;
          v16 = (unsigned __int64 *)(v19 + 8 * v20);
        }
        *v16 = v17;
        ++a2[1];
      }
      ++v7;
    }
    while ( v7 < a3[1] );
  }
  else if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
}

