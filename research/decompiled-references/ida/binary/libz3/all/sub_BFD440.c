__int64 __fastcall sub_BFD440(__int64 a1, double a2)
{
  __int64 *v2; // r12
  __int64 *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  _DWORD *v7; // rdx
  unsigned int v8; // r13d
  __int64 v10; // r14
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  _DWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 *v20; // rcx
  int v21; // edi
  unsigned int v22; // edx
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 *v25; // r8
  __int64 *i; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int *v29; // rbp

  v2 = *(__int64 **)(a1 + 1128);
  if ( !v2 )
    return 0;
  v4 = &v2[*((unsigned int *)v2 - 1)];
  v5 = *((unsigned int *)v2 - 1);
  if ( v2 != v4 )
  {
    while ( 1 )
    {
      v6 = *v2;
      if ( *(_WORD *)(*v2 + 4)
        || (v7 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL)) == nullptr
        || *(_DWORD *)(a1 + 1744) != *v7
        || v7[1] != 12
        || *(_DWORD *)(v6 + 24) != 1 )
      {
        sub_1872CE0("");
        sub_1873130(114, 1069);
      }
      if ( (unsigned __int8)sub_BFD010(a1, *(unsigned int **)(v6 + 32), a2) )
        return 1;
      if ( v4 == ++v2 )
      {
        v4 = *(__int64 **)(a1 + 1128);
        if ( !v4 )
          return 0;
        v5 = *((unsigned int *)v4 - 1);
        break;
      }
    }
  }
  if ( !(_DWORD)v5 )
    return 0;
  v10 = 8 * v5;
  v11 = 0;
  v8 = 0;
  while ( 1 )
  {
    v12 = v4[v11 / 8];
    if ( *(_WORD *)(v12 + 4)
      || (v13 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL)) == nullptr
      || *(_DWORD *)(a1 + 1744) != *v13
      || v13[1] != 12
      || *(_DWORD *)(v12 + 24) != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1079);
    }
    v29 = *(unsigned int **)(v12 + 32);
    if ( (unsigned __int8)sub_BFD230(a1, *(unsigned int **)(v12 + 32), a2) )
      return 1;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
    if ( v14 && (v15 = *v29, (unsigned int)v15 < *(_DWORD *)(v14 - 4)) )
    {
      LOBYTE(v14) = *(_QWORD *)(v14 + 8 * v15) == 0;
      v8 |= v14;
    }
    else
    {
      v8 = 1;
    }
    v16 = sub_966570(a1, v29);
    v17 = (_QWORD *)v16[1];
    if ( v16 != v17 )
    {
      v18 = *v17;
      v19 = *(unsigned int *)(a1 + 1104);
      v20 = *(__int64 **)(a1 + 1096);
      v21 = *(_DWORD *)(*v17 + 12LL);
      v22 = v19 - 1;
      v19 *= 8;
      v23 = (__int64 *)((char *)v20 + v19);
      v24 = 8LL * (v21 & v22);
      v25 = &v20[(unsigned __int64)v24 / 8];
      if ( v24 != v19 )
      {
        for ( i = &v20[(unsigned __int64)v24 / 8]; v23 != i; ++i )
        {
          v27 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v27 + 12) == v21 && v18 == v27 )
              goto LABEL_36;
          }
          else if ( !v27 )
          {
            goto LABEL_35;
          }
        }
      }
      for ( ; v25 != v20; ++v20 )
      {
        v28 = *v20;
        if ( (unsigned __int64)*v20 > 1 )
        {
          if ( *(_DWORD *)(v28 + 12) == v21 && v18 == v28 )
            goto LABEL_36;
        }
        else if ( !v28 )
        {
          break;
        }
      }
    }
LABEL_35:
    v8 |= sub_BBB240(a1, v29);
LABEL_36:
    v11 += 8LL;
    if ( v11 == v10 )
      return v8;
    v4 = *(__int64 **)(a1 + 1128);
  }
}

