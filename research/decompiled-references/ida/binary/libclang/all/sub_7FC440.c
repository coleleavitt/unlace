__int64 __fastcall sub_7FC440(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // r13
  unsigned int v4; // r13d
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 *v11; // rbx
  __int64 *v12; // r14
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // rdx

  v2 = (__int64 *)(a2 + 64);
  v3 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 64;
  if ( v3 != a2 + 64 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v2) )
    {
      if ( (__int64 *)v3 == ++v2 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  if ( !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 24)) )
    return 0;
  v4 = sub_7EBA80(a1, *(_QWORD *)(a2 + 40));
  if ( !(_BYTE)v4 )
    return 0;
  v6 = *(unsigned int *)(a2 + 16);
  v7 = (__int64 *)(a2 + 8 * v6 + 64);
  v8 = &v7[v6];
  if ( v8 != v7 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v7) )
    {
      if ( v8 == ++v7 )
      {
        v6 = *(unsigned int *)(a2 + 16);
        v15 = v6;
        goto LABEL_15;
      }
    }
    return 0;
  }
  v15 = 0;
LABEL_15:
  v9 = (__int64 *)(a2 + 16 * v6 + 64);
  v10 = &v9[v15];
  if ( v9 != v10 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v9) )
    {
      if ( v10 == ++v9 )
      {
        v6 = *(unsigned int *)(a2 + 16);
        v16 = v6;
        goto LABEL_21;
      }
    }
    return 0;
  }
  v16 = 0;
LABEL_21:
  v11 = (__int64 *)(a2 + 24 * v6 + 64);
  v12 = &v11[v16];
  if ( v11 != v12 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v11) )
    {
      if ( v12 == ++v11 )
      {
        v6 = *(unsigned int *)(a2 + 16);
        v17 = v6;
        goto LABEL_27;
      }
    }
    return 0;
  }
  v17 = 0;
LABEL_27:
  v13 = (__int64 *)(a2 + 32 * v6 + 64);
  v14 = &v13[v17];
  if ( v13 != &v13[v17] )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v13) )
    {
      if ( v14 == ++v13 )
        return v4;
    }
    return 0;
  }
  return v4;
}

