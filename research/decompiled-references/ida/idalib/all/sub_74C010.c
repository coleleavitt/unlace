__int64 __fastcall sub_74C010(__int64 a1, int a2)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // r14
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  _BOOL4 v14; // ebp
  unsigned int v15; // ebp
  unsigned int v16; // r15d
  unsigned int v17; // eax
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // ecx
  unsigned int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // ecx
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned int v27; // eax
  unsigned int v28; // edi
  __int64 v30; // rax
  char *v31; // rcx
  __int64 v32; // r8
  int v33; // ecx
  unsigned int v34; // edx
  __int64 v35; // r12
  int v36; // esi
  int v37; // r13d
  __int64 v38; // rbp
  unsigned int v39; // eax
  char *v40; // rdi
  unsigned int v41; // eax
  size_t v42; // rdx
  void *v43; // rdi
  unsigned int v44; // eax
  unsigned int v45; // [rsp+0h] [rbp-48h]
  unsigned int v46; // [rsp+Ch] [rbp-3Ch]

  v4 = *(_QWORD *)(a1 + 24) - 5LL;
  v5 = *(unsigned int *)(a1 + 80);
  v6 = *(_QWORD *)a1;
  if ( v4 <= v5 )
    LODWORD(v5) = v4;
  v45 = v5;
  v46 = *(_DWORD *)(v6 + 8);
  v7 = v46;
  do
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v6 + 32);
      v9 = (*(_DWORD *)(a1 + 5940) + 42) >> 3;
      if ( v8 < v9 )
        goto LABEL_45;
      v10 = v8 - v9;
      v11 = (unsigned int)(*(_DWORD *)(a1 + 172) - *(_DWORD *)(a1 + 152));
      v12 = 0xFFFF;
      if ( (unsigned __int64)v7 + v11 < 0xFFFF )
        v12 = v11 + v7;
      if ( v12 <= v10 )
        v10 = v12;
      v13 = v10;
      if ( v45 > v10 && (a2 != 4 && v10 == 0 || !a2 || (_DWORD)v11 + v7 != v10) )
      {
LABEL_45:
        v15 = 0;
        v16 = v46 - v7;
        if ( v46 == v7 )
          goto LABEL_23;
        goto LABEL_46;
      }
      v14 = 0;
      if ( a2 == 4 )
        v14 = (_DWORD)v11 + v7 == v10;
      sub_7521B0(a1, 0, 0, v14);
      *(_WORD *)(*(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 40) - 4LL) = v13;
      *(_WORD *)(*(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 40) - 2LL) = ~(_WORD)v13;
      sub_74B500(*(_QWORD *)a1);
      if ( (_DWORD)v11 )
      {
        if ( (unsigned int)v11 > v13 )
          LODWORD(v11) = v13;
        v13 -= v11;
        memcpy(
          *(void **)(*(_QWORD *)a1 + 24LL),
          (const void *)(*(_QWORD *)(a1 + 96) + *(_QWORD *)(a1 + 152)),
          (unsigned int)v11);
        *(_QWORD *)(*(_QWORD *)a1 + 24LL) += (unsigned int)v11;
        *(_DWORD *)(*(_QWORD *)a1 + 32LL) -= v11;
        *(_QWORD *)(*(_QWORD *)a1 + 40LL) += (unsigned int)v11;
        *(_QWORD *)(a1 + 152) += (unsigned int)v11;
      }
      v6 = *(_QWORD *)a1;
      if ( v13 )
        break;
      v7 = *(_DWORD *)(v6 + 8);
      if ( v14 )
        goto LABEL_22;
    }
    sub_74B190(v6, *(void **)(v6 + 24), v13);
    *(_QWORD *)(*(_QWORD *)a1 + 24LL) += v13;
    *(_DWORD *)(*(_QWORD *)a1 + 32LL) -= v13;
    *(_QWORD *)(*(_QWORD *)a1 + 40LL) += v13;
    v6 = *(_QWORD *)a1;
    v7 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  }
  while ( !v14 );
LABEL_22:
  v15 = 1;
  v16 = v46 - v7;
  if ( v46 == v7 )
  {
LABEL_23:
    v17 = *(_DWORD *)(a1 + 172);
    goto LABEL_24;
  }
LABEL_46:
  v30 = *(unsigned int *)(a1 + 80);
  v31 = *(char **)(a1 + 96);
  if ( (unsigned int)v30 <= v16 )
  {
    *(_DWORD *)(a1 + 5928) = 2;
    memcpy(v31, (const void *)(*(_QWORD *)v6 - (unsigned int)v30), (unsigned int)v30);
    v17 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 172) = v17;
    *(_DWORD *)(a1 + 5932) = v17;
  }
  else
  {
    v32 = *(unsigned int *)(a1 + 172);
    if ( *(_QWORD *)(a1 + 104) - v32 <= (unsigned __int64)v16 )
    {
      v42 = (unsigned int)(*(_DWORD *)(a1 + 172) - v30);
      v43 = *(void **)(a1 + 96);
      *(_DWORD *)(a1 + 172) = v42;
      memcpy(v43, &v31[v30], v42);
      v44 = *(_DWORD *)(a1 + 5928);
      if ( v44 <= 1 )
        *(_DWORD *)(a1 + 5928) = v44 + 1;
      v32 = *(unsigned int *)(a1 + 172);
      if ( *(_DWORD *)(a1 + 5932) > (unsigned int)v32 )
        *(_DWORD *)(a1 + 5932) = v32;
      v6 = *(_QWORD *)a1;
      v31 = *(char **)(a1 + 96);
    }
    memcpy(&v31[v32], (const void *)(*(_QWORD *)v6 - v16), v16);
    v33 = *(_DWORD *)(a1 + 5932);
    v34 = *(_DWORD *)(a1 + 80) - v33;
    v17 = v16 + *(_DWORD *)(a1 + 172);
    if ( v34 > v16 )
      v34 = v16;
    *(_DWORD *)(a1 + 172) = v17;
    *(_DWORD *)(a1 + 5932) = v33 + v34;
  }
  *(_QWORD *)(a1 + 152) = v17;
LABEL_24:
  v18 = v17;
  if ( *(_QWORD *)(a1 + 5944) < (unsigned __int64)v17 )
    *(_QWORD *)(a1 + 5944) = v17;
  if ( v15 )
    return 3;
  v19 = *(_QWORD *)a1;
  v20 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( (a2 & 0xFFFFFFFB) != 0 && !v20 )
  {
    if ( v17 == *(_QWORD *)(a1 + 152) )
      return 1;
    goto LABEL_34;
  }
  v21 = *(_DWORD *)(a1 + 104) - v17;
  if ( v21 < v20 )
  {
    v22 = *(_QWORD *)(a1 + 152);
    v23 = *(unsigned int *)(a1 + 80);
    if ( v22 >= v23 )
    {
      v39 = v17 - v23;
      v40 = *(char **)(a1 + 96);
      *(_QWORD *)(a1 + 152) = v22 - v23;
      *(_DWORD *)(a1 + 172) = v39;
      memcpy(v40, &v40[v23], v39);
      v41 = *(_DWORD *)(a1 + 5928);
      if ( v41 <= 1 )
        *(_DWORD *)(a1 + 5928) = v41 + 1;
      v18 = *(unsigned int *)(a1 + 172);
      v21 += *(_DWORD *)(a1 + 80);
      v17 = v18;
      if ( *(_DWORD *)(a1 + 5932) > (unsigned int)v18 )
        *(_DWORD *)(a1 + 5932) = v18;
      v19 = *(_QWORD *)a1;
      v20 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
    }
  }
  if ( v21 > v20 )
    v21 = v20;
  if ( !v21 )
  {
LABEL_34:
    v24 = *(_DWORD *)(a1 + 80);
    goto LABEL_35;
  }
  sub_74B190(v19, (void *)(*(_QWORD *)(a1 + 96) + v18), v21);
  v24 = *(_DWORD *)(a1 + 80);
  v36 = *(_DWORD *)(a1 + 5932);
  v17 = v21 + *(_DWORD *)(a1 + 172);
  *(_DWORD *)(a1 + 172) = v17;
  if ( v24 - v36 <= v21 )
    v21 = v24 - v36;
  v37 = v36 + v21;
  v18 = v17;
  *(_DWORD *)(a1 + 5932) = v37;
LABEL_35:
  if ( *(_QWORD *)(a1 + 5944) < v18 )
    *(_QWORD *)(a1 + 5944) = v18;
  v25 = *(_QWORD *)(a1 + 24) - (unsigned int)((*(_DWORD *)(a1 + 5940) + 42) >> 3);
  if ( v25 > 0xFFFF )
    LODWORD(v25) = 0xFFFF;
  v26 = *(_QWORD *)(a1 + 152);
  v27 = v17 - v26;
  v28 = v25;
  if ( (unsigned int)v25 <= v24 )
    v24 = v25;
  if ( v24 <= v27 )
  {
    if ( (unsigned int)v25 > v27 )
      LODWORD(v25) = v27;
    if ( a2 == 4 && !*(_DWORD *)(*(_QWORD *)a1 + 8LL) && v28 >= v27 )
      goto LABEL_67;
LABEL_55:
    v35 = (unsigned int)v25;
    sub_7521B0(a1, *(_QWORD *)(a1 + 96) + v26, (unsigned int)v25, 0);
    *(_QWORD *)(a1 + 152) += v35;
    sub_74B500(*(_QWORD *)a1);
    return v15;
  }
  if ( (a2 == 4 || v27 != 0) && a2 && !*(_DWORD *)(*(_QWORD *)a1 + 8LL) && (unsigned int)v25 >= v27 )
  {
    if ( (unsigned int)v25 <= v27 )
      v27 = v25;
    LODWORD(v25) = v27;
    if ( a2 == 4 )
    {
LABEL_67:
      v38 = (unsigned int)v25;
      sub_7521B0(a1, *(_QWORD *)(a1 + 96) + v26, (unsigned int)v25, 1);
      *(_QWORD *)(a1 + 152) += v38;
      v15 = 2;
      sub_74B500(*(_QWORD *)a1);
      return v15;
    }
    goto LABEL_55;
  }
  return v15;
}
