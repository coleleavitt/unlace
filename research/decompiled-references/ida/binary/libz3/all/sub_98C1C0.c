_QWORD *__fastcall sub_98C1C0(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  int v4; // edx
  __int64 v5; // rbx
  int v6; // r12d
  int v7; // eax
  _DWORD *v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  int v11; // r12d
  unsigned int v12; // edx
  _DWORD *v13; // r10
  __int64 v14; // rdx
  _DWORD *v15; // r13
  _DWORD *v16; // r14
  __int64 v17; // r15
  __int64 v18; // r15
  __int64 v19; // rax
  bool v20; // al
  _DWORD *v21; // rax
  __int64 v22; // rdi
  _DWORD *v23; // rax
  __int64 v25; // rax
  char v26; // r15
  bool v27; // r15
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // r15
  size_t v33; // r13
  _DWORD *v34; // rbx
  _DWORD *v35; // r12
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // [rsp+10h] [rbp-58h]
  __int64 v41; // [rsp+10h] [rbp-58h]
  size_t v42; // [rsp+10h] [rbp-58h]
  _DWORD *v43; // [rsp+18h] [rbp-50h]
  unsigned int v44; // [rsp+18h] [rbp-50h]
  int v45; // [rsp+18h] [rbp-50h]
  unsigned int v46; // [rsp+24h] [rbp-44h]

  v4 = *(_DWORD *)(a1 + 24);
  if ( 3 * v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 32))) )
  {
    v45 = 2 * v4;
    v42 = 8LL * (unsigned int)(2 * v4);
    v30 = sub_186B270(v42);
    v31 = v45;
    v32 = v30;
    v33 = v30 + v42;
    if ( v45 )
    {
      if ( (v42 & 8) == 0 || (*(_DWORD *)(v30 + 4) = 0x80000000, v30 += 8, v30 != v33) )
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
        v36 = 8LL * (*v34 & (unsigned int)(v45 - 1));
        v37 = v32 + v36;
        if ( v42 == v36 )
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
      v31 = v45;
    }
    *(_QWORD *)(a1 + 16) = v32;
    *(_DWORD *)(a1 + 24) = v31;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v5 = sub_999800(*(_QWORD *)a1, *a2);
  v6 = sub_182DB30(v5);
  v7 = sub_182DB30(v5 + 16);
  v8 = *(_DWORD **)(a1 + 16);
  v9 = 3 * v7;
  v10 = *(unsigned int *)(a1 + 24);
  v11 = v9 + v6;
  v12 = v10 - 1;
  v10 *= 8;
  v13 = (_DWORD *)((char *)v8 + v10);
  v14 = 8LL * (v11 & v12);
  v15 = &v8[(unsigned __int64)v14 / 4];
  if ( v14 != v10 )
  {
    v8 = (_DWORD *)((char *)v8 + v14);
    v16 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = (unsigned int)v8[1];
        if ( (unsigned int)v17 + 0x80000000 > 1 )
          break;
        if ( (_DWORD)v17 == 0x80000000 )
          goto LABEL_33;
        v16 = v8;
        v8 += 2;
        if ( v13 == v8 )
        {
LABEL_9:
          v8 = *(_DWORD **)(a1 + 16);
          goto LABEL_12;
        }
      }
      if ( *v8 != v11 )
        goto LABEL_5;
      v43 = v13;
      v46 = *a2;
      v40 = sub_999800(*(_QWORD *)(a1 + 8), *a2);
      v19 = sub_999800(*(_QWORD *)(a1 + 8), (unsigned int)v17);
      v20 = sub_3ED680((__int64)qword_1C7F2C0, v19, v40);
      v13 = v43;
      if ( !v20 )
        goto LABEL_5;
      v21 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8 * v17)) + 24);
      v22 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL * v46);
      if ( v21 && *v21 == 5 )
      {
        v27 = v21[1] == 1;
        v28 = sub_15D1F10(v22);
        v13 = v43;
        v23 = *(_DWORD **)(v28 + 24);
        if ( !v23 || *v23 != 5 )
        {
          if ( !v27 )
            goto LABEL_21;
          goto LABEL_5;
        }
      }
      else
      {
        v23 = *(_DWORD **)(sub_15D1F10(v22) + 24);
        if ( !v23 )
          goto LABEL_21;
        v13 = v43;
        if ( *v23 != 5 )
          goto LABEL_21;
        v27 = 0;
      }
      if ( v27 == (v23[1] == 1) )
        goto LABEL_21;
LABEL_5:
      v8 += 2;
      if ( v13 == v8 )
        goto LABEL_9;
    }
  }
  v16 = nullptr;
  while ( 1 )
  {
LABEL_12:
    if ( v15 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v18 = (unsigned int)v8[1];
    if ( (unsigned int)v18 + 0x80000000 <= 1 )
      break;
    if ( *v8 == v11 )
    {
      v44 = *a2;
      v41 = sub_999800(*(_QWORD *)(a1 + 8), *a2);
      v25 = sub_999800(*(_QWORD *)(a1 + 8), (unsigned int)v18);
      if ( sub_3ED680((__int64)qword_1C7F2C0, v25, v41) )
      {
        v26 = sub_98B380(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8 * v18));
        if ( v26 == (unsigned __int8)sub_98B380(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL * v44)) )
        {
LABEL_21:
          *a3 = v8;
          return a3;
        }
      }
    }
LABEL_11:
    v8 += 2;
  }
  if ( (_DWORD)v18 != 0x80000000 )
  {
    v16 = v8;
    goto LABEL_11;
  }
LABEL_33:
  if ( v16 )
    --*(_DWORD *)(a1 + 32);
  else
    v16 = v8;
  v29 = *a2;
  *v16 = v11;
  v16[1] = v29;
  ++*(_DWORD *)(a1 + 28);
  *a3 = v16;
  return a3;
}

