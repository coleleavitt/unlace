int **__fastcall sub_98BA90(__int64 a1, unsigned int *a2, int **a3)
{
  int v4; // edx
  __int64 v5; // rbx
  int v6; // r15d
  int v7; // r12d
  int v8; // r15d
  int v9; // eax
  int *v10; // rbx
  int v11; // edx
  __int64 v12; // rax
  int v13; // r12d
  unsigned int v14; // ecx
  int *v15; // r15
  __int64 v16; // rcx
  int *v17; // r13
  int *v18; // r14
  int v19; // r9d
  unsigned int v20; // r15d
  __int64 v21; // rax
  _DWORD *v22; // rax
  __int64 v23; // rdi
  _DWORD *v24; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // dl
  int v29; // eax
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // r15
  size_t v33; // r12
  _DWORD *v34; // rbx
  _DWORD *v35; // r13
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // [rsp+8h] [rbp-50h]
  __int64 v41; // [rsp+8h] [rbp-50h]
  char v42; // [rsp+8h] [rbp-50h]
  bool v43; // [rsp+8h] [rbp-50h]
  size_t v44; // [rsp+8h] [rbp-50h]
  unsigned int v45; // [rsp+10h] [rbp-48h]
  unsigned int v46; // [rsp+10h] [rbp-48h]
  int v47; // [rsp+10h] [rbp-48h]
  unsigned int v48; // [rsp+14h] [rbp-44h]

  v4 = *(_DWORD *)(a1 + 24);
  if ( 3 * v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 32))) )
  {
    v47 = 2 * v4;
    v44 = 8LL * (unsigned int)(2 * v4);
    v30 = sub_186B270(v44);
    v31 = v47;
    v32 = v30;
    v33 = v30 + v44;
    if ( v47 )
    {
      if ( (v44 & 8) == 0 || (*(_DWORD *)(v30 + 4) = 0x80000000, v30 += 8, v30 != v33) )
      {
        do
        {
          *(_DWORD *)(v30 + 4) = 0x80000000;
          v30 += 16;
          *(_DWORD *)(v30 - 4) = 0x80000000;
        }
        while ( v30 != v33 );
      }
    }
    v34 = *(_DWORD **)(a1 + 16);
    v35 = &v34[2 * *(unsigned int *)(a1 + 24)];
    if ( v34 != v35 )
    {
      do
      {
        while ( v34[1] + 0x80000000 <= 1 )
        {
          v34 += 2;
          if ( v35 == v34 )
            goto LABEL_49;
        }
        v36 = 8LL * (*v34 & (unsigned int)(v47 - 1));
        v37 = v32 + v36;
        if ( v44 == v36 )
        {
LABEL_53:
          if ( v32 == v37 )
          {
LABEL_58:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v38 = v32;
          while ( *(_DWORD *)(v38 + 4) != 0x80000000 )
          {
            v38 += 8;
            if ( v37 == v38 )
              goto LABEL_58;
          }
        }
        else
        {
          v38 = v32 + v36;
          while ( *(_DWORD *)(v38 + 4) != 0x80000000 )
          {
            v38 += 8;
            if ( v33 == v38 )
              goto LABEL_53;
          }
        }
        v39 = *(_QWORD *)v34;
        v34 += 2;
        *(_QWORD *)v38 = v39;
      }
      while ( v35 != v34 );
LABEL_49:
      v35 = *(_DWORD **)(a1 + 16);
    }
    if ( v35 )
    {
      sub_186B220(v35);
      v31 = v47;
    }
    *(_QWORD *)(a1 + 16) = v32;
    *(_DWORD *)(a1 + 24) = v31;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v5 = sub_9AA900(*(_QWORD *)a1, *a2);
  v6 = sub_182DB30(v5);
  v7 = v6 + 3 * sub_182DB30(v5 + 16);
  v8 = sub_182DB30(v5 + 32);
  v9 = sub_182DB30(v5 + 48);
  v10 = *(int **)(a1 + 16);
  v11 = v8 + 3 * v9 + 1;
  v12 = *(unsigned int *)(a1 + 24);
  v13 = v11 ^ v7;
  v14 = v12 - 1;
  v12 *= 8;
  v15 = (int *)((char *)v10 + v12);
  v16 = 8LL * (v13 & v14);
  v17 = &v10[(unsigned __int64)v16 / 4];
  if ( v16 != v12 )
  {
    v10 = (int *)((char *)v10 + v16);
    v18 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = v10[1];
        if ( v19 + 0x80000000 > 1 )
          break;
        if ( v19 == 0x80000000 )
          goto LABEL_33;
        v18 = v10;
        v10 += 2;
        if ( v15 == v10 )
        {
LABEL_9:
          v10 = *(int **)(a1 + 16);
          goto LABEL_12;
        }
      }
      if ( *v10 != v13 )
        goto LABEL_5;
      v45 = v10[1];
      v48 = *a2;
      v40 = sub_9AA900(*(_QWORD *)(a1 + 8), *a2);
      v21 = sub_9AA900(*(_QWORD *)(a1 + 8), v45);
      if ( !(unsigned __int8)sub_9B0850(v21, v40) )
        goto LABEL_5;
      v22 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL * v45)) + 24);
      v23 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL * v48);
      if ( v22 && *v22 == 5 )
      {
        v43 = v22[1] == 1;
        v27 = sub_15D1F10(v23);
        v28 = v43;
        v24 = *(_DWORD **)(v27 + 24);
        if ( !v24 || *v24 != 5 )
        {
          if ( !v43 )
            goto LABEL_21;
          goto LABEL_5;
        }
      }
      else
      {
        v24 = *(_DWORD **)(sub_15D1F10(v23) + 24);
        if ( !v24 || *v24 != 5 )
          goto LABEL_21;
        v28 = 0;
      }
      if ( v28 == (v24[1] == 1) )
        goto LABEL_21;
LABEL_5:
      v10 += 2;
      if ( v15 == v10 )
        goto LABEL_9;
    }
  }
  v18 = nullptr;
  while ( 1 )
  {
LABEL_12:
    if ( v17 == v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v20 = v10[1];
    if ( v20 + 0x80000000 <= 1 )
      break;
    if ( *v10 == v13 )
    {
      v46 = *a2;
      v41 = sub_9AA900(*(_QWORD *)(a1 + 8), *a2);
      v26 = sub_9AA900(*(_QWORD *)(a1 + 8), v20);
      if ( (unsigned __int8)sub_9B0850(v26, v41) )
      {
        v42 = sub_98B380(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL * v20));
        if ( v42 == (unsigned __int8)sub_98B380(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL * v46)) )
        {
LABEL_21:
          *a3 = v10;
          return a3;
        }
      }
    }
LABEL_11:
    v10 += 2;
  }
  if ( v20 != 0x80000000 )
  {
    v18 = v10;
    goto LABEL_11;
  }
LABEL_33:
  if ( v18 )
    --*(_DWORD *)(a1 + 32);
  else
    v18 = v10;
  v29 = *a2;
  *v18 = v13;
  v18[1] = v29;
  ++*(_DWORD *)(a1 + 28);
  *a3 = v18;
  return a3;
}

