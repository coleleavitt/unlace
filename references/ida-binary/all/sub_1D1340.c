__int64 __fastcall sub_1D1340(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  char *v9; // rsi
  __int64 v10; // rdx
  unsigned int *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // r13
  const char *v16; // rdi
  __int64 *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // rbp
  __int64 v22; // rdx
  __int64 *v23; // r14
  __int64 v24; // r15
  __int64 v25; // rbp
  __int64 v26; // r12
  __int64 v27; // rbp
  __int64 v28; // r14
  __int64 v29; // rbp
  __int64 v30; // r12
  __int64 v31; // rax
  _QWORD *v32; // r15
  __int64 *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v37; // [rsp+10h] [rbp-48h]

  v2 = qalloc_or_throw(24);
  *(_QWORD *)v2 = 0;
  v3 = (__int64 *)v2;
  *(_OWORD *)(v2 + 8) = 0;
  v4 = operator new(0x18u);
  *(_QWORD *)v4 = 0;
  v5 = v4;
  *(_OWORD *)(v4 + 8) = 0;
  v6 = v3[1];
  v37 = *v3;
  if ( v6 )
  {
    v7 = *v3;
    v8 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v7 + 8) )
      {
        v9 = "children";
        if ( !strcmp(*(const char **)v7, "children") )
          break;
      }
      ++v8;
      v7 += 40;
      if ( v6 == v8 )
        goto LABEL_43;
    }
    v11 = (unsigned int *)(v7 + 24);
  }
  else
  {
LABEL_43:
    if ( v3[2] < (unsigned __int64)(v6 + 1) )
    {
      v35 = qvector_reserve(v3, v37, v6 + 1, 40);
      v6 = v3[1];
      v37 = v35;
      *v3 = v35;
    }
    v9 = "children";
    v32 = (_QWORD *)(v37 + 40 * v6);
    *v32 = 0;
    v33 = v32;
    v11 = (unsigned int *)(v32 + 3);
    *((_OWORD *)v11 - 1) = 0;
    *v11 = 0;
    *((_QWORD *)v11 + 1) = 0;
    ++v3[1];
    sub_1CB2E0(v33, "children");
  }
  v12 = *v11;
  if ( (_DWORD)v12 )
    jvalue_t_clear(v11);
  *v11 = 4;
  *((_QWORD *)v11 + 1) = v5;
  if ( a2 )
  {
    v13 = *(_QWORD *)(a2 + 8);
    if ( v13 )
    {
      v14 = *(_QWORD *)a2;
      v15 = 0;
      while ( 1 )
      {
        if ( *(_QWORD *)(v14 + 8) )
        {
          v16 = *(const char **)v14;
          v9 = "children";
          if ( !strcmp(*(const char **)v14, "children") )
            break;
        }
        ++v15;
        v14 += 40;
        if ( v13 == v15 )
          goto LABEL_48;
      }
      if ( *(_DWORD *)(v14 + 24) == 4 )
      {
        v17 = *(__int64 **)(v14 + 32);
        v18 = v17[1];
        v19 = *v17;
        if ( v17[2] < (unsigned __int64)(v18 + 1) )
        {
          v31 = qvector_reserve(v17, v19, v18 + 1, 16);
          *v17 = v31;
          v19 = v31;
          v18 = v17[1];
        }
        v20 = (_QWORD *)(v19 + 16 * v18);
        *v20 = 0;
        v20[1] = 0;
        ++v17[1];
        if ( !*(_DWORD *)v20 )
          goto LABEL_19;
        goto LABEL_36;
      }
    }
    else
    {
LABEL_48:
      if ( under_debugger )
        BUG();
      v16 = (_BYTE *)(&stru_9E98 + 2);
      interr(40602, "children", v10, v12, 0.0);
    }
    goto LABEL_50;
  }
  v22 = *(_QWORD *)(a1 + 56);
  if ( v22 )
  {
    sub_1CCD50(v3, "area_geom", v22);
    *(_QWORD *)(a1 + 56) = 0;
  }
  v23 = *(__int64 **)(a1 + 32);
  v24 = v23[1];
  if ( !*(_BYTE *)(a1 + 48) )
  {
    if ( v24 )
    {
      v29 = *v23;
      v30 = 0;
      while ( !*(_QWORD *)(v29 + 8) || strcmp(*(const char **)v29, "main") )
      {
        ++v30;
        v29 += 40;
        if ( v24 == v30 )
          goto LABEL_42;
      }
    }
    else
    {
LABEL_42:
      sub_1CCD50(v23, "main", (__int64)v3);
    }
    return (__int64)v3;
  }
  if ( v24 )
  {
    v25 = *v23;
    v26 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v25 + 8) )
      {
        v16 = *(const char **)v25;
        v9 = "floating";
        if ( !strcmp(*(const char **)v25, "floating") )
          break;
      }
      ++v26;
      v25 += 40;
      if ( v24 == v26 )
        goto LABEL_46;
    }
  }
  else
  {
LABEL_46:
    v34 = operator new(0x18u);
    v16 = (const char *)v23;
    v9 = "floating";
    *(_QWORD *)v34 = 0;
    *(_OWORD *)(v34 + 8) = 0;
    sub_1CCC30(v23, "floating", v34);
    v23 = *(__int64 **)(a1 + 32);
    v24 = v23[1];
    if ( !v24 )
      goto LABEL_34;
  }
  v27 = *v23;
  v28 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v27 + 8) )
    {
      v16 = *(const char **)v27;
      v9 = "floating";
      if ( !strcmp(*(const char **)v27, "floating") )
        break;
    }
    ++v28;
    v27 += 40;
    if ( v28 == v24 )
      goto LABEL_34;
  }
  a2 = v27 + 24;
LABEL_34:
  if ( *(_DWORD *)a2 == 4 )
  {
    v20 = sub_1D12F0(*(__int64 **)(a2 + 8));
    if ( !*(_DWORD *)v20 )
    {
LABEL_19:
      *(_DWORD *)v20 = 3;
      v20[1] = v3;
      return (__int64)v3;
    }
LABEL_36:
    jvalue_t_clear(v20);
    goto LABEL_19;
  }
LABEL_50:
  sub_1CAD60(0.0, (__int64)v16, (__int64)v9, v10, v12);
  return sub_1D1750();
}
