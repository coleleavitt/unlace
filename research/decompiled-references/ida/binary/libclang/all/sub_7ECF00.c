__int64 __fastcall sub_7ECF00(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 *v7; // r13
  __int64 *v8; // rbx
  __int64 *v9; // r13
  __int64 *v10; // rbx
  __int64 *v11; // r12
  __int64 v12; // r13
  __int64 v13; // rdx

  v2 = *(unsigned int *)(a2 + 16);
  v3 = (__int64 *)(a2 + 24);
  v4 = v2;
  v5 = a2 + 8 * v2 + 24;
  if ( v5 != a2 + 24 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v3) )
    {
      if ( (__int64 *)v5 == ++v3 )
      {
        v2 = *(unsigned int *)(a2 + 16);
        v4 = v2;
        v3 = (__int64 *)(a2 + 8 * v2 + 24);
        goto LABEL_7;
      }
    }
    return 0;
  }
LABEL_7:
  v7 = &v3[v4];
  if ( v7 != v3 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v3) )
    {
      if ( v7 == ++v3 )
      {
        v2 = *(unsigned int *)(a2 + 16);
        v12 = v2;
        goto LABEL_13;
      }
    }
    return 0;
  }
  v12 = 0;
LABEL_13:
  v8 = (__int64 *)(a2 + 16 * v2 + 24);
  v9 = &v8[v12];
  if ( v8 != v9 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v8) )
    {
      if ( v9 == ++v8 )
      {
        v2 = *(unsigned int *)(a2 + 16);
        v13 = v2;
        goto LABEL_19;
      }
    }
    return 0;
  }
  v13 = 0;
LABEL_19:
  v10 = (__int64 *)(a2 + 8 * (3 * v2 + 3));
  v11 = &v10[v13];
  if ( v10 != &v10[v13] )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v10) )
    {
      if ( v11 == ++v10 )
        return 1;
    }
    return 0;
  }
  return 1;
}

