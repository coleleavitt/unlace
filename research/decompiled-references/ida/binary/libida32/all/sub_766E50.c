__int64 __fastcall sub_766E50(__int64 a1, __int64 a2, char a3, int a4)
{
  unsigned int v7; // eax
  __int64 *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // r12
  __int64 v15; // r12
  unsigned int v16; // eax
  __int64 *v17; // rbp
  unsigned int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v22; // rax
  const char *v23; // rsi
  unsigned int v24; // eax
  const char *v25; // rsi
  unsigned int v26; // r13d
  __int64 v27; // rax
  size_t v28; // rdx
  char v29; // r12
  __int64 *v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rsi
  _QWORD *v34; // rax
  __int64 v35; // r14
  char v36; // al
  __int64 v37; // rax
  char *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  const char *v42; // rsi
  const char *v43; // rsi
  __int64 v44; // rax
  size_t v45; // rdx
  __int64 *v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rax

  v7 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > 4u )
  {
    if ( v7 != 5 )
      goto LABEL_42;
    v24 = sub_766E50(a1, *(_QWORD *)(a2 + 16), 0, 0);
    v25 = haystack;
    v26 = v24;
    v27 = *(_QWORD *)(a2 + 8);
    v28 = *(_QWORD *)(v27 + 8);
    if ( v28 )
    {
      v25 = *(const char **)v27;
      --v28;
    }
    v29 = a3 - 14;
    sub_765200(a1, v25, v28);
    if ( a4 )
      v29 = (a4 <= 0) - 11;
    *(_BYTE *)(a1 + 204) = v29;
LABEL_21:
    v30 = *(__int64 **)(a1 + 192);
    v31 = v30[1];
    v32 = *v30;
    if ( v30[2] < (unsigned __int64)(v31 + 1) )
    {
      v40 = qvector_reserve(*(_QWORD *)(a1 + 192), v32, v31 + 1, 1);
      *v30 = v40;
      v32 = v40;
      v31 = v30[1];
    }
    *(_BYTE *)(v32 + v31) = v29;
    ++v30[1];
    ++*(_DWORD *)(a1 + 200);
    return v26;
  }
  if ( v7 > 2 )
  {
    v33 = *(_QWORD *)(a2 + 16);
    if ( a3 && *(_DWORD *)v33 == 1 )
    {
      v41 = *(_QWORD *)(v33 + 16);
      v42 = haystack;
      if ( *(_QWORD *)(v41 + 8) )
        v42 = *(const char **)v41;
      v26 = sub_766D10(a1, v42);
    }
    else
    {
      v26 = sub_766E50(a1, v33, 0, 0);
    }
    v34 = *(_QWORD **)(a2 + 8);
    v35 = v34[1];
    sub_76C1D0(*(_QWORD *)(a1 + 192), *v34, v35);
    *(_DWORD *)(a1 + 200) += v35;
    v36 = a3 - 2;
    if ( *(_DWORD *)a2 == 3 )
      v36 = -4 - a3;
    *(_BYTE *)(a1 + 204) = v36;
    v29 = v36;
    goto LABEL_21;
  }
  if ( v7 == 1 )
  {
    v22 = *(_QWORD *)(a2 + 16);
    v23 = haystack;
    if ( *(_QWORD *)(v22 + 8) )
      v23 = *(const char **)v22;
    return sub_766570(a1, v23, a3, a4);
  }
  if ( v7 != 2 )
  {
LABEL_42:
    if ( !under_debugger )
      interr(273);
    BUG();
  }
  v9 = *(__int64 **)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -86;
  v10 = v9[1];
  v11 = *v9;
  if ( v9[2] < (unsigned __int64)(v10 + 1) )
  {
    v39 = qvector_reserve(v9, v11, v10 + 1, 1);
    *v9 = v39;
    v11 = v39;
    v10 = v9[1];
  }
  *(_BYTE *)(v11 + v10) = -86;
  ++v9[1];
  v12 = *(_QWORD *)(a1 + 192);
  ++*(_DWORD *)(a1 + 200);
  v13 = *(_QWORD **)(a2 + 8);
  v14 = v13[1];
  sub_76C1D0(v12, *v13, v14);
  *(_DWORD *)(a1 + 200) += v14;
  v15 = *(_QWORD *)(a2 + 16);
  if ( *(_DWORD *)v15 != 1 )
  {
    if ( *(_DWORD *)v15 != 5 )
    {
      v16 = sub_766E50(a1, *(_QWORD *)(a2 + 16), 0, 0);
      v17 = *(__int64 **)(a1 + 192);
      *(_BYTE *)(a1 + 204) = -92;
      v18 = v16;
      v19 = v17[1];
      v20 = *v17;
      if ( v17[2] < (unsigned __int64)(v19 + 1) )
      {
        v50 = qvector_reserve(v17, v20, v19 + 1, 1);
        *v17 = v50;
        v20 = v50;
        v19 = v17[1];
      }
      *(_BYTE *)(v20 + v19) = -92;
      ++v17[1];
      ++*(_DWORD *)(a1 + 200);
      return v18;
    }
    v43 = haystack;
    v26 = sub_766E50(a1, *(_QWORD *)(v15 + 16), 0, 0);
    v44 = *(_QWORD *)(v15 + 8);
    v45 = *(_QWORD *)(v44 + 8);
    if ( v45 )
    {
      v43 = *(const char **)v44;
      --v45;
    }
    sub_765200(a1, v43, v45);
    v46 = *(__int64 **)(a1 + 192);
    *(_BYTE *)(a1 + 204) = -9;
    v47 = v46[1];
    v48 = *v46;
    if ( v46[2] < (unsigned __int64)(v47 + 1) )
    {
      v49 = qvector_reserve(v46, v48, v47 + 1, 1);
      *v46 = v49;
      v48 = v49;
      v47 = v46[1];
    }
    *(_BYTE *)(v48 + v47) = -9;
    ++v46[1];
    ++*(_DWORD *)(a1 + 200);
    return v26;
  }
  v37 = *(_QWORD *)(v15 + 16);
  v38 = (char *)haystack;
  if ( *(_QWORD *)(v37 + 8) )
    v38 = *(char **)v37;
  return sub_766910(a1, v38, *(_DWORD *)(a2 + 24));
}

