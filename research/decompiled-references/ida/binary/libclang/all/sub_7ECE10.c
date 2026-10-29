__int64 __fastcall sub_7ECE10(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // r13
  unsigned int v4; // r13d
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rax

  v2 = (__int64 *)(a2 + 40);
  v3 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
  if ( v3 != a2 + 40 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v2) )
    {
      if ( (__int64 *)v3 == ++v2 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v4 = sub_7EBA80(a1, *(_QWORD *)(a2 + 24));
  if ( !(_BYTE)v4 )
    return 0;
  v6 = *(unsigned int *)(a2 + 16);
  v7 = (__int64 *)(a2 + 8 * v6 + 40);
  v8 = &v7[v6];
  if ( v7 != v8 )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v7) )
    {
      if ( v8 == ++v7 )
      {
        v6 = *(unsigned int *)(a2 + 16);
        v11 = v6;
        goto LABEL_14;
      }
    }
    return 0;
  }
  v11 = 0;
LABEL_14:
  v9 = (__int64 *)(a2 + 16 * v6 + 40);
  v10 = &v9[v11];
  if ( v9 != &v9[v11] )
  {
    while ( (unsigned __int8)sub_7EBA80(a1, *v9) )
    {
      if ( v10 == ++v9 )
        return v4;
    }
    return 0;
  }
  return v4;
}

