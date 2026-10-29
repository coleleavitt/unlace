int __fastcall sub_1EAB800(__int64 a1)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rax
  int v5; // r13d
  unsigned __int64 v6; // r8
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // r9d
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rsi
  int v13; // r10d
  int v14; // edx
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rsi
  int v18; // r15d
  int v19; // edx
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  int v22; // r14d
  int v23; // edx
  int v24; // ecx
  FILE *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  float v31; // xmm1_4
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  float v35; // xmm1_4
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // edx
  unsigned __int64 i; // rcx
  unsigned __int64 j; // rcx
  float v50; // xmm1_4
  float v51; // xmm1_4
  __int64 v52; // rax
  int v53; // [rsp+8h] [rbp-50h]
  int v54; // [rsp+8h] [rbp-50h]
  __int64 v55; // [rsp+8h] [rbp-50h]
  int v56; // [rsp+14h] [rbp-44h]
  int v57; // [rsp+14h] [rbp-44h]
  int v58; // [rsp+18h] [rbp-40h]
  int v59; // [rsp+18h] [rbp-40h]

  fwrite("*** AST File Statistics:\n", 1u, 0x19u, stderr);
  v2 = *(_QWORD *)(a1 + 2688);
  if ( !v2 )
  {
LABEL_6:
    v5 = 0;
    goto LABEL_7;
  }
  v3 = *(_QWORD **)(a1 + 2696);
  v4 = 0;
  if ( !*v3 )
  {
    do
    {
      v4 += 128LL;
      if ( v2 <= v4 )
        goto LABEL_6;
    }
    while ( !v3[v4 >> 7] );
  }
  v5 = 0;
  do
  {
    i = v4 + 1;
    v5 += *(_QWORD *)(v3[v4 >> 7] + 8 * (v4 & 0x7F)) == 0;
    if ( (((_BYTE)v4 + 1) & 0x7F) != 0 )
    {
      ++v4;
    }
    else
    {
      if ( v2 > i && !v3[i >> 7] )
      {
        for ( i = v4 + 129; i < v2 && !v3[i >> 7]; i += 128LL )
          ;
      }
      v4 = i;
      if ( v2 <= i )
        v4 = *(_QWORD *)(a1 + 2688);
    }
  }
  while ( v4 != v2 );
LABEL_7:
  v6 = *(_QWORD *)(a1 + 2720);
  if ( !v6 )
  {
LABEL_12:
    v9 = 0;
    goto LABEL_13;
  }
  v7 = *(_QWORD **)(a1 + 2728);
  v8 = 0;
  if ( !*v7 )
  {
    do
    {
      v8 += 128LL;
      if ( v6 <= v8 )
        goto LABEL_12;
    }
    while ( !v7[v8 >> 7] );
  }
  v9 = 0;
  do
  {
    j = v8 + 1;
    v9 += *(_QWORD *)(v7[v8 >> 7] + 8 * (v8 & 0x7F)) == 0;
    if ( (((_BYTE)v8 + 1) & 0x7F) != 0 )
    {
      ++v8;
    }
    else
    {
      if ( v6 > j && !v7[j >> 7] )
      {
        for ( j = v8 + 129; v6 > j && !v7[j >> 7]; j += 128LL )
          ;
      }
      v8 = j;
      if ( v6 <= j )
        v8 = *(_QWORD *)(a1 + 2720);
    }
  }
  while ( v6 != v8 );
LABEL_13:
  v10 = *(_QWORD **)(a1 + 4328);
  v11 = *(_QWORD **)(a1 + 4320);
  v12 = v10 - v11;
  v13 = v12;
  if ( v11 != v10 )
  {
    v14 = 0;
    do
      v14 += *v11++ == 0;
    while ( v10 != v11 );
    v13 = v12 - v14;
  }
  v15 = *(_QWORD **)(a1 + 4352);
  v16 = *(_QWORD **)(a1 + 4344);
  v17 = v15 - v16;
  v18 = v17;
  if ( v16 != v15 )
  {
    v19 = 0;
    do
      v19 += *v16++ == 0;
    while ( v15 != v16 );
    v18 = v17 - v19;
  }
  v20 = *(_QWORD **)(a1 + 4720);
  v21 = &v20[*(unsigned int *)(a1 + 4728)];
  v22 = *(_DWORD *)(a1 + 4728);
  if ( v21 != v20 )
  {
    v23 = 0;
    do
      v23 += *v20++ == 0;
    while ( v20 != v21 );
    v22 -= v23;
  }
  v24 = *(_DWORD *)(a1 + 9308);
  v25 = stderr;
  v26 = *(_QWORD *)(a1 + 2688);
  if ( v24 )
  {
    v59 = v9;
    v57 = v13;
    v55 = *(_QWORD *)(a1 + 2720);
    fprintf(
      stderr,
      "  %u/%u source location entries read (%f%%)\n",
      *(_DWORD *)(a1 + 9304),
      v24,
      (float)((float)((float)*(int *)(a1 + 9304) / (float)v24) * 100.0));
    v25 = stderr;
    v26 = *(_QWORD *)(a1 + 2688);
    v9 = v59;
    v13 = v57;
    LODWORD(v6) = v55;
  }
  if ( v26 )
  {
    if ( v26 < 0 )
      v51 = (float)(v26 & 1 | (unsigned int)((unsigned __int64)v26 >> 1))
          + (float)(v26 & 1 | (unsigned int)((unsigned __int64)v26 >> 1));
    else
      v51 = (float)(int)v26;
    v58 = v9;
    v56 = v13;
    v54 = v6;
    fprintf(v25, "  %u/%u types read (%f%%)\n", v2 - v5, v26, (float)((float)((float)((int)v2 - v5) / v51) * 100.0));
    v25 = stderr;
    v9 = v58;
    v13 = v56;
    LODWORD(v6) = v54;
  }
  v27 = *(_QWORD *)(a1 + 2720);
  if ( v27 )
  {
    if ( v27 < 0 )
    {
      v52 = *(_QWORD *)(a1 + 2720) & 1LL | ((unsigned __int64)v27 >> 1);
      v50 = (float)(int)v52 + (float)(int)v52;
    }
    else
    {
      v50 = (float)(int)v27;
    }
    v53 = v13;
    fprintf(
      v25,
      "  %u/%u declarations read (%f%%)\n",
      v6 - v9,
      v27,
      (float)((float)((float)((int)v6 - v9) / v50) * 100.0));
    v25 = stderr;
    v13 = v53;
  }
  v28 = *(_QWORD *)(a1 + 4328);
  v29 = *(_QWORD *)(a1 + 4320);
  if ( v28 != v29 )
  {
    v30 = (v28 - v29) >> 3;
    if ( v30 < 0 )
      v31 = (float)(v30 & 1 | (unsigned int)((unsigned __int64)v30 >> 1))
          + (float)(v30 & 1 | (unsigned int)((unsigned __int64)v30 >> 1));
    else
      v31 = (float)(int)v30;
    fprintf(v25, "  %u/%u identifiers read (%f%%)\n", v13, v30, (float)((float)((float)v13 / v31) * 100.0));
    v25 = stderr;
  }
  v32 = *(_QWORD *)(a1 + 4352);
  v33 = *(_QWORD *)(a1 + 4344);
  if ( v32 != v33 )
  {
    v34 = (v32 - v33) >> 3;
    if ( v34 < 0 )
      v35 = (float)(v34 & 1 | (unsigned int)((unsigned __int64)v34 >> 1))
          + (float)(v34 & 1 | (unsigned int)((unsigned __int64)v34 >> 1));
    else
      v35 = (float)(int)v34;
    fprintf(v25, "  %u/%u macros read (%f%%)\n", v18, v34, (float)((float)((float)v18 / v35) * 100.0));
    v25 = stderr;
  }
  v36 = *(_DWORD *)(a1 + 4728);
  if ( v36 )
  {
    fprintf(v25, "  %u/%u selectors read (%f%%)\n", v22, v36, (float)((float)((float)v22 / (float)v36) * 100.0));
    v25 = stderr;
  }
  v37 = *(_DWORD *)(a1 + 9316);
  if ( v37 )
  {
    fprintf(
      v25,
      "  %u/%u statements read (%f%%)\n",
      *(_DWORD *)(a1 + 9312),
      v37,
      (float)((float)((float)*(int *)(a1 + 9312) / (float)v37) * 100.0));
    v25 = stderr;
  }
  v38 = *(_DWORD *)(a1 + 9324);
  if ( v38 )
  {
    fprintf(
      v25,
      "  %u/%u macros read (%f%%)\n",
      *(_DWORD *)(a1 + 9320),
      v38,
      (float)((float)((float)*(int *)(a1 + 9320) / (float)v38) * 100.0));
    v25 = stderr;
  }
  v39 = *(_DWORD *)(a1 + 9368);
  if ( v39 )
  {
    fprintf(
      v25,
      "  %u/%u lexical declcontexts read (%f%%)\n",
      *(_DWORD *)(a1 + 9364),
      v39,
      (float)((float)((float)*(int *)(a1 + 9364) / (float)v39) * 100.0));
    v25 = stderr;
  }
  v40 = *(_DWORD *)(a1 + 9376);
  if ( v40 )
  {
    fprintf(
      v25,
      "  %u/%u visible declcontexts read (%f%%)\n",
      *(_DWORD *)(a1 + 9372),
      v40,
      (float)((float)((float)*(int *)(a1 + 9372) / (float)v40) * 100.0));
    v25 = stderr;
  }
  v41 = *(_DWORD *)(a1 + 9384);
  if ( v41 )
  {
    fprintf(
      v25,
      "  %u/%u module local visible declcontexts read (%f%%)\n",
      *(_DWORD *)(a1 + 9380),
      v41,
      (float)((float)((float)*(int *)(a1 + 9380) / (float)v41) * 100.0));
    v25 = stderr;
  }
  v42 = *(_DWORD *)(a1 + 9392);
  if ( v42 )
  {
    fprintf(
      v25,
      "  %u/%u visible declcontexts in GMF read (%f%%)\n",
      *(_DWORD *)(a1 + 9388),
      v42,
      (float)((float)((float)*(int *)(a1 + 9388) / (float)v42) * 100.0));
    v25 = stderr;
  }
  v43 = *(_DWORD *)(a1 + 9360);
  if ( v43 )
  {
    fprintf(
      v25,
      "  %u/%u method pool entries read (%f%%)\n",
      *(_DWORD *)(a1 + 9340),
      v43,
      (float)((float)((float)*(int *)(a1 + 9340) / (float)v43) * 100.0));
    v25 = stderr;
  }
  v44 = *(_DWORD *)(a1 + 9344);
  if ( v44 )
  {
    fprintf(
      v25,
      "  %u/%u method pool lookups succeeded (%f%%)\n",
      *(_DWORD *)(a1 + 9348),
      v44,
      (float)((float)*(int *)(a1 + 9348) / (float)v44) * 100.0);
    v25 = stderr;
  }
  v45 = *(_DWORD *)(a1 + 9352);
  if ( v45 )
  {
    fprintf(
      v25,
      "  %u/%u method pool table lookups succeeded (%f%%)\n",
      *(_DWORD *)(a1 + 9356),
      v45,
      (float)((float)*(int *)(a1 + 9356) / (float)v45) * 100.0);
    v25 = stderr;
  }
  v46 = *(_DWORD *)(a1 + 9332);
  if ( v46 )
  {
    fprintf(
      v25,
      "  %u / %u identifier table lookups succeeded (%f%%)\n",
      v46,
      *(_DWORD *)(a1 + 9328),
      (double)v46 * 100.0 / (double)*(int *)(a1 + 9328));
    v25 = stderr;
  }
  if ( *(_QWORD *)(a1 + 520) )
  {
    fputc(10, v25);
    sub_1FD17C0(*(_QWORD *)(a1 + 520));
    v25 = stderr;
  }
  fputc(10, v25);
  sub_1EAB620(a1, (__int64)v25);
  return fputc(10, stderr);
}
