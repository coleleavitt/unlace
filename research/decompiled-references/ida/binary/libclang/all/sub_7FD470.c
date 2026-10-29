__int64 __fastcall sub_7FD470(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 *v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // r14
  __int64 *v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // r14
  __int64 *v13; // rbx
  __int64 *v14; // r14
  __int64 v15; // rdx
  __int64 *v16; // rbx
  __int64 *v17; // r12

  if ( !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64))
    || !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 72)) )
  {
    return 0;
  }
  v4 = (__int64 *)(a2 + 64);
  v5 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 64;
  if ( v5 != a2 + 64 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v4) )
    {
      if ( (__int64 *)v5 == ++v4 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  if ( !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 24)) )
    return 0;
  v2 = sub_7EBA80(a1, *(_QWORD *)(a2 + 40));
  if ( !(_BYTE)v2 )
    return 0;
  v6 = *(unsigned int *)(a2 + 16);
  v7 = (__int64 *)(a2 + 8 * v6 + 64);
  v8 = &v7[v6];
  if ( v7 != v8 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v7) )
    {
      if ( v8 == ++v7 )
      {
        v6 = *(unsigned int *)(a2 + 16);
        v9 = v6;
        goto LABEL_14;
      }
    }
    return 0;
  }
  v9 = 0;
LABEL_14:
  v10 = (__int64 *)(a2 + 16 * v6 + 64);
  v11 = &v10[v9];
  if ( v10 != v11 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v10) )
    {
      if ( v11 == ++v10 )
      {
        v6 = *(unsigned int *)(a2 + 16);
        v12 = v6;
        goto LABEL_18;
      }
    }
    return 0;
  }
  v12 = 0;
LABEL_18:
  v13 = (__int64 *)(a2 + 24 * v6 + 64);
  v14 = &v13[v12];
  if ( v13 != v14 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v13) )
    {
      if ( v14 == ++v13 )
      {
        v6 = *(unsigned int *)(a2 + 16);
        v15 = v6;
        goto LABEL_22;
      }
    }
    return 0;
  }
  v15 = 0;
LABEL_22:
  v16 = (__int64 *)(a2 + 32 * v6 + 64);
  v17 = &v16[v15];
  if ( v16 != &v16[v15] )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v16) )
    {
      if ( v17 == ++v16 )
        return v2;
    }
    return 0;
  }
  return v2;
}

