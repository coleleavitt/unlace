__int64 *__fastcall sub_9221C0(__int64 *a1, _QWORD *a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned int **v8; // r14
  unsigned int *v9; // rax
  int v10; // edx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v16; // rax
  __int64 v17; // rbp
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r10
  __int64 v22; // rax
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+8h] [rbp-50h]
  __int64 v41; // [rsp+8h] [rbp-50h]
  __int64 v42; // [rsp+8h] [rbp-50h]
  __int64 v43; // [rsp+8h] [rbp-50h]
  __int64 v44; // [rsp+10h] [rbp-48h]
  __int64 v45; // [rsp+10h] [rbp-48h]
  __int64 v46; // [rsp+10h] [rbp-48h]
  __int64 v47; // [rsp+18h] [rbp-40h]

  v6 = a2[30];
  v7 = a2[3];
  *a1 = 0;
  v8 = (unsigned int **)(v6 + 8LL * a3);
  a1[1] = v7;
  v9 = *v8;
  if ( !*v8 )
    goto LABEL_8;
  v10 = *(v9 - 1);
  if ( v10 == 1 )
  {
    if ( (v9[3] & 1) == 0 )
    {
      v18 = v9[2];
      if ( v18 == 1 )
      {
        if ( (v9[7] & 1) != 0 || v9[6] != 1 )
          goto LABEL_8;
        v20 = **(_QWORD **)(a2[4] + 8LL * *v9);
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        v41 = a4;
        sub_91CCE0(0, v7);
      }
      else
      {
        if ( v18 != -1 || (v9[7] & 1) != 0 || v9[6] != 1 )
          goto LABEL_8;
        v41 = a4;
        v19 = sub_15E1A70(a2[12]);
        v20 = v19;
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        sub_91CCE0(*a1, a1[1]);
      }
      v21 = v41;
      v40 = 0;
LABEL_25:
      *a1 = v20;
      v47 = v21;
      v22 = sub_15D1F10(v20);
      v26 = sub_3EC140((__int64)(a2 + 12), (int)v47 + 32, v22, v23, v24, v25);
      v14 = v26;
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      if ( *(int *)(v47 + 64) >= 0 || a5 )
        v27 = sub_15E1B70(a2[12]);
      else
        v27 = sub_15E1AF0(a2[3]);
      v28 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      sub_91CCE0(*a1, a1[1]);
      *a1 = v28;
      goto LABEL_12;
    }
  }
  else if ( v10 == 2 )
  {
    if ( (v9[3] & 1) != 0 || v9[2] != 1 || (v9[7] & 1) != 0 || v9[6] != 1 )
    {
      if ( (v9[13] & 1) != 0 )
        goto LABEL_8;
    }
    else
    {
      if ( (v9[13] & 1) != 0 )
        goto LABEL_8;
      if ( v9[12] == -1 )
      {
        if ( (v9[17] & 1) != 0 )
          goto LABEL_8;
        if ( v9[16] == 1 )
        {
          v35 = **(_QWORD **)(a2[4] + 8LL * *v9);
          if ( v35 )
            ++*(_DWORD *)(v35 + 8);
          v46 = a4;
          v43 = v35;
          sub_91CCE0(0, v7);
          v36 = (*v8)[10];
          v37 = a2[4];
          *a1 = v43;
          v38 = **(_QWORD **)(v37 + 8 * v36);
          v40 = v38;
          if ( v38 )
            ++*(_DWORD *)(v38 + 8);
          v39 = sub_15E1B70(a2[12]);
          v34 = v46;
          v20 = v39;
          if ( v39 )
            ++*(_DWORD *)(v39 + 8);
LABEL_44:
          v45 = v34;
          sub_91CCE0(*a1, a1[1]);
          v21 = v45;
          goto LABEL_25;
        }
      }
    }
    if ( v9[12] == 1
      && (v9[17] & 1) == 0
      && v9[16] == 1
      && (v9[3] & 1) == 0
      && v9[2] == -1
      && (v9[7] & 1) == 0
      && v9[6] == 1 )
    {
      v29 = **(_QWORD **)(a2[4] + 8LL * v9[10]);
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      v44 = a4;
      v42 = v29;
      sub_91CCE0(0, v7);
      v30 = **v8;
      v31 = a2[4];
      *a1 = v42;
      v32 = **(_QWORD **)(v31 + 8 * v30);
      v40 = v32;
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      v33 = sub_15E1B70(a2[12]);
      v34 = v44;
      v20 = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      goto LABEL_44;
    }
  }
LABEL_8:
  v12 = sub_15E1AF0(v7);
  v13 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  sub_91CCE0(*a1, a1[1]);
  *a1 = v13;
  if ( a5 )
  {
    v16 = sub_15E1A70(a2[3]);
    v17 = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    sub_91CCE0(*a1, a1[1]);
    *a1 = v17;
  }
  v40 = 0;
  v14 = 0;
LABEL_12:
  sub_91CCE0(v40, v7);
  sub_91CCE0(v14, v7);
  return a1;
}

