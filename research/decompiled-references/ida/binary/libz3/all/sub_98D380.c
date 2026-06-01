int **__fastcall sub_98D380(__int64 a1, unsigned int *a2, int **a3)
{
  int v3; // edx
  __int64 v4; // rbx
  int v5; // r13d
  int v6; // r12d
  int v7; // r15d
  int v8; // r13d
  int v9; // r15d
  int v10; // r12d
  int v11; // eax
  int *v12; // r13
  int v13; // ecx
  __int64 v14; // rax
  int v15; // r12d
  unsigned int v16; // edx
  int *v17; // r15
  __int64 v18; // rdx
  int *v19; // r9
  int *v20; // rbx
  int *v21; // r14
  unsigned int v22; // r13d
  __int64 v23; // r15
  bool v24; // al
  char v25; // al
  char v26; // r13
  char v27; // al
  __int64 v29; // rbx
  __int64 v30; // rax
  char v31; // al
  char v32; // bl
  char v33; // al
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // r13
  size_t v37; // r12
  _DWORD *v38; // rbx
  _DWORD *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // [rsp+8h] [rbp-60h]
  int *v46; // [rsp+8h] [rbp-60h]
  size_t v47; // [rsp+8h] [rbp-60h]
  int *v48; // [rsp+10h] [rbp-58h]
  unsigned int v49; // [rsp+10h] [rbp-58h]
  int v50; // [rsp+10h] [rbp-58h]
  unsigned int v51; // [rsp+1Ch] [rbp-4Ch]
  __int64 v52; // [rsp+20h] [rbp-48h]

  v3 = *(_DWORD *)(a1 + 24);
  if ( 3 * v3 < (unsigned int)(4 * (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 32))) )
  {
    v50 = 2 * v3;
    v47 = 8LL * (unsigned int)(2 * v3);
    v34 = sub_186B270(v47);
    v35 = v50;
    v36 = v34;
    v37 = v34 + v47;
    if ( v50 )
    {
      if ( (v47 & 8) == 0 || (*(_DWORD *)(v34 + 4) = 0x80000000, v34 += 8, v34 != v37) )
      {
        do
        {
          *(_DWORD *)(v34 + 4) = 0x80000000;
          v34 += 16;
          *(_DWORD *)(v34 - 4) = 0x80000000;
        }
        while ( v34 != v37 );
      }
    }
    v38 = *(_DWORD **)(a1 + 16);
    v39 = &v38[2 * *(unsigned int *)(a1 + 24)];
    if ( v38 != v39 )
    {
      do
      {
        while ( v38[1] + 0x80000000 <= 1 )
        {
          v38 += 2;
          if ( v39 == v38 )
            goto LABEL_37;
        }
        v40 = 8LL * (*v38 & (unsigned int)(v50 - 1));
        v41 = v36 + v40;
        if ( v47 == v40 )
        {
LABEL_41:
          if ( v36 == v41 )
          {
LABEL_49:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v42 = v36;
          while ( *(_DWORD *)(v42 + 4) != 0x80000000 )
          {
            v42 += 8;
            if ( v41 == v42 )
              goto LABEL_49;
          }
        }
        else
        {
          v42 = v36 + v40;
          while ( *(_DWORD *)(v42 + 4) != 0x80000000 )
          {
            v42 += 8;
            if ( v37 == v42 )
              goto LABEL_41;
          }
        }
        v43 = *(_QWORD *)v38;
        v38 += 2;
        *(_QWORD *)v42 = v43;
      }
      while ( v39 != v38 );
LABEL_37:
      v39 = *(_DWORD **)(a1 + 16);
    }
    if ( v39 )
    {
      sub_186B220(v39);
      v35 = v50;
    }
    *(_QWORD *)(a1 + 16) = v36;
    *(_DWORD *)(a1 + 24) = v35;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v4 = sub_9AD4F0(*(_QWORD *)a1, *a2);
  v5 = sub_182DB30(v4);
  v6 = v5 + 3 * sub_182DB30(v4 + 16);
  v7 = sub_182DB30(v4 + 32);
  v8 = v7 + 3 * sub_182DB30(v4 + 48);
  v9 = sub_182DB30(v4 + 64);
  v10 = v8 ^ v6;
  v11 = sub_182DB30(v4 + 80);
  v12 = *(int **)(a1 + 16);
  v13 = v9 + 3 * v11 + 1;
  v14 = *(unsigned int *)(a1 + 24);
  v15 = v13 ^ v10;
  v16 = v14 - 1;
  v14 *= 8;
  v17 = (int *)((char *)v12 + v14);
  v18 = 8LL * (v15 & v16);
  v19 = &v12[(unsigned __int64)v18 / 4];
  if ( v18 != v14 )
  {
    v20 = &v12[(unsigned __int64)v18 / 4];
    v21 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = v20[1];
        if ( v22 + 0x80000000 <= 1 )
          break;
        if ( *v20 == v15 )
        {
          v48 = v19;
          v51 = *a2;
          v45 = sub_9AD4F0(*(_QWORD *)(a1 + 8), *a2);
          v52 = sub_9AD4F0(*(_QWORD *)(a1 + 8), v22);
          v24 = sub_3ED680((__int64)qword_1C7F2C0, v52, v45);
          v19 = v48;
          if ( v24 )
          {
            v25 = sub_9B0850(v52 + 32, v45 + 32);
            v19 = v48;
            if ( v25 )
            {
              v26 = sub_98B380(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL * v22));
              v27 = sub_98B380(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL * v51));
              v19 = v48;
              if ( v26 == v27 )
              {
                *a3 = v20;
                return a3;
              }
            }
          }
        }
        v20 += 2;
        if ( v17 == v20 )
          goto LABEL_9;
      }
      if ( v22 == 0x80000000 )
        break;
      v21 = v20;
      v20 += 2;
      if ( v17 == v20 )
      {
LABEL_9:
        v12 = *(int **)(a1 + 16);
        goto LABEL_12;
      }
    }
    if ( v21 )
      goto LABEL_47;
    v21 = v20;
    goto LABEL_48;
  }
  v21 = nullptr;
  while ( 1 )
  {
LABEL_12:
    if ( v19 == v12 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v23 = (unsigned int)v12[1];
    if ( (unsigned int)v23 + 0x80000000 <= 1 )
      break;
    if ( *v12 == v15 )
    {
      v46 = v19;
      v49 = *a2;
      v29 = sub_9AD4F0(*(_QWORD *)(a1 + 8), *a2);
      v30 = sub_9AD4F0(*(_QWORD *)(a1 + 8), (unsigned int)v23);
      v31 = sub_9F4890(v30, v29);
      v19 = v46;
      if ( v31 )
      {
        v32 = sub_98B380(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8 * v23));
        v33 = sub_98B380(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL * v49));
        v19 = v46;
        if ( v32 == v33 )
        {
          *a3 = v12;
          return a3;
        }
      }
    }
LABEL_11:
    v12 += 2;
  }
  if ( (_DWORD)v23 != 0x80000000 )
  {
    v21 = v12;
    goto LABEL_11;
  }
  if ( !v21 )
  {
    v21 = v12;
    goto LABEL_48;
  }
LABEL_47:
  --*(_DWORD *)(a1 + 32);
LABEL_48:
  v44 = *a2;
  *v21 = v15;
  v21[1] = v44;
  ++*(_DWORD *)(a1 + 28);
  *a3 = v21;
  return a3;
}

