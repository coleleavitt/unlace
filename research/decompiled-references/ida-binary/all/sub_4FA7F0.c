__int64 __fastcall sub_4FA7F0(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned int v7; // r13d
  volatile signed __int32 *v8; // r15
  __int64 v9; // r14
  __int64 n; // rbp
  volatile signed __int32 *v11; // rax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  __int64 k; // r13
  volatile signed __int32 *v20; // rax
  __int64 v21; // rdx
  volatile signed __int32 *v22; // rcx
  __int64 v23; // r13
  __int64 v24; // rdx
  int v25; // r8d
  __int64 i; // rbp
  volatile signed __int32 *v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  int v30; // edx
  __int64 j; // r8
  volatile signed __int32 *v32; // rdx
  __int64 m; // r13
  volatile signed __int32 *v34; // rax
  volatile signed __int32 *v35; // [rsp+0h] [rbp-58h]
  volatile signed __int32 *v36; // [rsp+0h] [rbp-58h]
  __int64 v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+8h] [rbp-50h]
  __int64 v39; // [rsp+18h] [rbp-40h]

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v4 + 24LL * a2;
  v6 = *(_QWORD *)(v5 + 8);
  if ( !(_DWORD)v3 )
  {
    v7 = 1;
    if ( !*(_DWORD *)v6 )
      return v7;
  }
  v8 = *(volatile signed __int32 **)v5;
  v9 = *(_QWORD *)(v5 + 16);
  if ( !*(_QWORD *)v5 )
  {
    if ( a2 <= 0 )
    {
      v7 = 1;
      if ( a2 >= *(_QWORD *)(a1 + 16) - 1LL )
        return v7;
      goto LABEL_16;
    }
    goto LABEL_31;
  }
  _InterlockedAdd(v8, 1u);
  if ( a2 > 0 )
  {
    v4 = *(_QWORD *)(a1 + 8);
LABEL_31:
    v21 = v4 + 24LL * (a2 - 1);
    v22 = *(volatile signed __int32 **)v21;
    v23 = *(_QWORD *)(v21 + 8);
    v24 = *(_QWORD *)(v21 + 16);
    if ( v22 )
    {
      _InterlockedAdd(v22, 1u);
      if ( v24 > v3 )
      {
        v25 = *(_DWORD *)(v6 + 96 * v3);
        if ( *(_DWORD *)(v23 + 96 * v3) == v25 )
        {
          if ( v25 )
          {
            if ( !_InterlockedSub(v22, 1u) )
            {
              for ( i = v23 + 96 * v24; i != v23; v23 += 96 )
              {
                v27 = *(volatile signed __int32 **)(v23 + 56);
                if ( v27 && !_InterlockedSub(v27, 1u) )
                {
                  v35 = v22;
                  free(*(void **)(v23 + 56));
                  v22 = v35;
                }
              }
              free((void *)v22);
            }
            goto LABEL_27;
          }
        }
      }
      if ( !_InterlockedSub(v22, 1u) )
      {
        for ( j = v23 + 96 * v24; j != v23; v23 += 96 )
        {
          v32 = *(volatile signed __int32 **)(v23 + 56);
          if ( v32 && !_InterlockedSub(v32, 1u) )
          {
            v39 = v3;
            v37 = j;
            v36 = v22;
            free(*(void **)(v23 + 56));
            v3 = v39;
            j = v37;
            v22 = v36;
          }
        }
        v38 = v3;
        free((void *)v22);
        v3 = v38;
      }
    }
    else if ( v24 > v3 )
    {
      v28 = *(_DWORD *)(v6 + 96 * v3);
      if ( *(_DWORD *)(v23 + 96 * v3) == v28 )
      {
        if ( v28 )
          goto LABEL_27;
      }
    }
    if ( a2 >= *(_QWORD *)(a1 + 16) - 1LL )
      goto LABEL_59;
    goto LABEL_50;
  }
  v7 = 1;
  if ( a2 < *(_QWORD *)(a1 + 16) - 1LL )
  {
LABEL_50:
    v4 = *(_QWORD *)(a1 + 8);
LABEL_16:
    v13 = v4 + 24LL * (a2 + 1);
    v14 = *(volatile signed __int32 **)v13;
    v15 = *(_QWORD *)(v13 + 8);
    v16 = *(_QWORD *)(v13 + 16);
    if ( v14 )
    {
      _InterlockedAdd(v14, 1u);
      if ( v16 > v3 )
      {
        v17 = 96 * v3;
        v18 = *(_DWORD *)(v6 + v17);
        if ( *(_DWORD *)(v15 + v17) == v18 )
        {
          if ( v18 )
          {
            if ( !_InterlockedSub(v14, 1u) )
            {
              for ( k = v15 + 96 * v16; k != v15; v15 += 96 )
              {
                v20 = *(volatile signed __int32 **)(v15 + 56);
                if ( v20 && !_InterlockedSub(v20, 1u) )
                  free(*(void **)(v15 + 56));
              }
              free((void *)v14);
            }
            goto LABEL_27;
          }
        }
      }
      if ( !_InterlockedSub(v14, 1u) )
      {
        for ( m = v15 + 96 * v16; m != v15; v15 += 96 )
        {
          v34 = *(volatile signed __int32 **)(v15 + 56);
          if ( v34 && !_InterlockedSub(v34, 1u) )
            free(*(void **)(v15 + 56));
        }
        free((void *)v14);
      }
LABEL_59:
      v7 = 1;
LABEL_28:
      if ( !v8 )
        return v7;
      goto LABEL_6;
    }
    if ( v16 <= v3 )
      goto LABEL_59;
    v29 = 96 * v3;
    v30 = *(_DWORD *)(v6 + v29);
    if ( *(_DWORD *)(v15 + v29) != v30 || !v30 )
      goto LABEL_59;
LABEL_27:
    v7 = 0;
    goto LABEL_28;
  }
LABEL_6:
  if ( !_InterlockedSub(v8, 1u) )
  {
    for ( n = v6 + 96 * v9; n != v6; v6 += 96 )
    {
      v11 = *(volatile signed __int32 **)(v6 + 56);
      if ( v11 && !_InterlockedSub(v11, 1u) )
        free(*(void **)(v6 + 56));
    }
    free((void *)v8);
  }
  return v7;
}
