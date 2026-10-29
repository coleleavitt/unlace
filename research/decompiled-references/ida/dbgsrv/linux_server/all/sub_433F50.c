/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433F50
// Address: 0x0000000000433F50

//----- (0000000000433F50) ----------------------------------------------------
__int64 __fastcall sub_433F50(__int64 a1, __int64 a2, char a3, int a4)
{
  unsigned int v7; // eax
  void **v9; // r12
  _BYTE *v10; // rax
  void *v11; // rsi
  char **v12; // rdi
  __int64 v13; // rax
  size_t v14; // r12
  __int64 v15; // r12
  unsigned int v16; // eax
  void **v17; // rbp
  unsigned int v18; // r13d
  _BYTE *v19; // rax
  void *v20; // rsi
  __int64 v22; // rax
  const char *v23; // rsi
  unsigned int v24; // eax
  const char *v25; // rsi
  unsigned int v26; // r13d
  __int64 v27; // rax
  size_t v28; // rdx
  char v29; // r12
  __int64 v30; // rbp
  __int64 v31; // rax
  void *v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rax
  size_t v35; // r14
  char v36; // al
  __int64 v37; // rax
  char *v38; // rsi
  void *v39; // rax
  void *v40; // rax
  __int64 v41; // rax
  const char *v42; // rsi
  const char *v43; // rsi
  __int64 v44; // rax
  size_t v45; // rdx
  void **v46; // rbp
  _BYTE *v47; // rax
  void *v48; // rsi
  void *v49; // rax
  void *v50; // rax

  v7 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > 4u )
  {
    if ( v7 != 5 )
      goto LABEL_42;
    v24 = sub_433F50(a1, *(_QWORD *)(a2 + 16), 0, 0);
    v25 = s1;
    v26 = v24;
    v27 = *(_QWORD *)(a2 + 8);
    v28 = *(_QWORD *)(v27 + 8);
    if ( v28 )
    {
      v25 = *(const char **)v27;
      --v28;
    }
    v29 = a3 - 14;
    sub_432270(a1, v25, v28);
    if ( a4 )
      v29 = (a4 <= 0) - 11;
    *(_BYTE *)(a1 + 212) = v29;
LABEL_21:
    v30 = *(_QWORD *)(a1 + 200);
    v31 = *(_QWORD *)(v30 + 8);
    v32 = *(void **)v30;
    if ( *(_QWORD *)(v30 + 16) < (unsigned __int64)(v31 + 1) )
    {
      v40 = sub_481540(*(_QWORD *)(a1 + 200), v32, v31 + 1, 1u);
      *(_QWORD *)v30 = v40;
      v32 = v40;
      v31 = *(_QWORD *)(v30 + 8);
    }
    *((_BYTE *)v32 + v31) = v29;
    ++*(_QWORD *)(v30 + 8);
    ++*(_DWORD *)(a1 + 208);
    return v26;
  }
  if ( v7 > 2 )
  {
    v33 = *(_QWORD *)(a2 + 16);
    if ( a3 && *(_DWORD *)v33 == 1 )
    {
      v41 = *(_QWORD *)(v33 + 16);
      v42 = s1;
      if ( *(_QWORD *)(v41 + 8) )
        v42 = *(const char **)v41;
      v26 = sub_433E10(a1, v42);
    }
    else
    {
      v26 = sub_433F50(a1, v33, 0, 0);
    }
    v34 = *(_QWORD *)(a2 + 8);
    v35 = *(_QWORD *)(v34 + 8);
    sub_438B30(*(char ***)(a1 + 200), *(const void **)v34, v35);
    *(_DWORD *)(a1 + 208) += v35;
    v36 = a3 - 2;
    if ( *(_DWORD *)a2 == 3 )
      v36 = -4 - a3;
    *(_BYTE *)(a1 + 212) = v36;
    v29 = v36;
    goto LABEL_21;
  }
  if ( v7 == 1 )
  {
    v22 = *(_QWORD *)(a2 + 16);
    v23 = s1;
    if ( *(_QWORD *)(v22 + 8) )
      v23 = *(const char **)v22;
    return sub_433670(a1, v23, a3, a4);
  }
  if ( v7 != 2 )
  {
LABEL_42:
    if ( !byte_4C94E1 )
      sub_481AC0(273);
    BUG();
  }
  v9 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -86;
  v10 = v9[1];
  v11 = *v9;
  if ( v9[2] < v10 + 1 )
  {
    v39 = sub_481540((__int64)v9, v11, (unsigned __int64)(v10 + 1), 1u);
    *v9 = v39;
    v11 = v39;
    v10 = v9[1];
  }
  v10[(_QWORD)v11] = -86;
  v9[1] = (char *)v9[1] + 1;
  v12 = *(char ***)(a1 + 200);
  ++*(_DWORD *)(a1 + 208);
  v13 = *(_QWORD *)(a2 + 8);
  v14 = *(_QWORD *)(v13 + 8);
  sub_438B30(v12, *(const void **)v13, v14);
  *(_DWORD *)(a1 + 208) += v14;
  v15 = *(_QWORD *)(a2 + 16);
  if ( *(_DWORD *)v15 != 1 )
  {
    if ( *(_DWORD *)v15 != 5 )
    {
      v16 = sub_433F50(a1, *(_QWORD *)(a2 + 16), 0, 0);
      v17 = *(void ***)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -92;
      v18 = v16;
      v19 = v17[1];
      v20 = *v17;
      if ( v17[2] < v19 + 1 )
      {
        v50 = sub_481540((__int64)v17, v20, (unsigned __int64)(v19 + 1), 1u);
        *v17 = v50;
        v20 = v50;
        v19 = v17[1];
      }
      v19[(_QWORD)v20] = -92;
      v17[1] = (char *)v17[1] + 1;
      ++*(_DWORD *)(a1 + 208);
      return v18;
    }
    v43 = s1;
    v26 = sub_433F50(a1, *(_QWORD *)(v15 + 16), 0, 0);
    v44 = *(_QWORD *)(v15 + 8);
    v45 = *(_QWORD *)(v44 + 8);
    if ( v45 )
    {
      v43 = *(const char **)v44;
      --v45;
    }
    sub_432270(a1, v43, v45);
    v46 = *(void ***)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -9;
    v47 = v46[1];
    v48 = *v46;
    if ( v46[2] < v47 + 1 )
    {
      v49 = sub_481540((__int64)v46, v48, (unsigned __int64)(v47 + 1), 1u);
      *v46 = v49;
      v48 = v49;
      v47 = v46[1];
    }
    v47[(_QWORD)v48] = -9;
    v46[1] = (char *)v46[1] + 1;
    ++*(_DWORD *)(a1 + 208);
    return v26;
  }
  v37 = *(_QWORD *)(v15 + 16);
  v38 = (char *)s1;
  if ( *(_QWORD *)(v37 + 8) )
    v38 = *(char **)v37;
  return sub_433A10(a1, v38, *(_DWORD *)(a2 + 24));
}
// 4C94E1: using guessed type char byte_4C94E1;
