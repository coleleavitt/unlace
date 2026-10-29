__int64 __fastcall sub_C292F0(__int64 *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // rax
  __int64 *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edi
  __int64 *v25; // rcx
  unsigned int v26; // edx
  __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 *v29; // r8
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax

  v7 = *((unsigned int *)a1 + 10);
  v9 = (__int64 *)a1[4];
  v10 = *(_DWORD *)(a2 + 12);
  v11 = v7 - 1;
  v7 *= 16;
  v12 = (__int64 *)((char *)v9 + v7);
  v13 = 16LL * (v10 & v11);
  v14 = &v9[(unsigned __int64)v13 / 8];
  if ( v13 == v7 )
  {
LABEL_23:
    while ( v14 != v9 )
    {
      v32 = *v9;
      if ( (unsigned __int64)*v9 > 1 )
      {
        if ( *(_DWORD *)(v32 + 12) == v10 && a2 == v32 )
        {
          v15 = v9;
          goto LABEL_10;
        }
      }
      else if ( !v32 )
      {
        return 0;
      }
      v9 += 2;
    }
    return 0;
  }
  v15 = &v9[(unsigned __int64)v13 / 8];
  while ( 1 )
  {
    v16 = *v15;
    if ( (unsigned __int64)*v15 > 1 )
      break;
    if ( !v16 )
      return 0;
LABEL_5:
    v15 += 2;
    if ( v12 == v15 )
      goto LABEL_23;
  }
  if ( *(_DWORD *)(v16 + 12) != v10 || a2 != v16 )
    goto LABEL_5;
LABEL_10:
  v18 = v15[1];
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v19 = *a3;
  if ( *a3 && (v20 = a3[1], v21 = *(_DWORD *)(v19 + 8) == 1, --*(_DWORD *)(v19 + 8), v21) )
  {
    sub_15D7BC0(v20, v19);
    v37 = *a1;
    *a3 = v18;
    if ( !*(_BYTE *)(v37 + 16) )
      return 1;
  }
  else
  {
    v22 = *a1;
    *a3 = v18;
    if ( !*(_BYTE *)(v22 + 16) )
      return 1;
  }
  v23 = *((unsigned int *)a1 + 16);
  v24 = *(_DWORD *)(a2 + 12);
  v25 = (__int64 *)a1[7];
  v26 = v23 - 1;
  v23 *= 16;
  v27 = (__int64 *)((char *)v25 + v23);
  v28 = 16LL * (v24 & v26);
  v29 = &v25[(unsigned __int64)v28 / 8];
  if ( v28 == v23 )
  {
LABEL_39:
    while ( v29 != v25 )
    {
      v36 = *v25;
      if ( (unsigned __int64)*v25 > 1 )
      {
        if ( *(_DWORD *)(v36 + 12) == v24 && a2 == v36 )
        {
          v30 = v25;
          goto LABEL_32;
        }
      }
      else if ( !v36 )
      {
        break;
      }
      v25 += 2;
    }
LABEL_22:
    BUG();
  }
  v30 = &v25[(unsigned __int64)v28 / 8];
  while ( 2 )
  {
    v31 = *v30;
    if ( (unsigned __int64)*v30 <= 1 )
    {
      if ( !v31 )
        goto LABEL_22;
      goto LABEL_19;
    }
    if ( *(_DWORD *)(v31 + 12) != v24 || a2 != v31 )
    {
LABEL_19:
      v30 += 2;
      if ( v27 == v30 )
        goto LABEL_39;
      continue;
    }
    break;
  }
LABEL_32:
  v33 = v30[1];
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  v34 = *a4;
  if ( *a4 )
  {
    v35 = a4[1];
    v21 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v35, v34);
  }
  *a4 = v33;
  return 1;
}

