__int64 __fastcall sub_8134A0(__int64 a1, char *a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rbx
  _DWORD *v7; // rax
  char *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int *v11; // rbx
  unsigned int *v12; // r15
  __int64 v13; // rdx
  unsigned int v14; // ebp
  __int64 v15; // rdx
  void *v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 *v23; // rbp
  __int64 v24; // rsi
  bool v25; // zf
  void *v26; // rbx
  __int64 result; // rax
  char v28; // al
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 *v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // [rsp+0h] [rbp-78h]
  void *v36; // [rsp+10h] [rbp-68h]
  void *v37; // [rsp+10h] [rbp-68h]
  void *v38; // [rsp+10h] [rbp-68h]
  __int64 v39; // [rsp+18h] [rbp-60h]
  _QWORD v40[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v41[9]; // [rsp+30h] [rbp-48h] BYREF

  v6 = *(_QWORD *)a2;
  if ( !*(_WORD *)(*(_QWORD *)a2 + 4LL) )
  {
    v7 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
    if ( v7 )
    {
      if ( *(_DWORD *)(a1 + 128) == *v7 && !v7[1] )
      {
        v30 = *a4;
        v31 = ***((unsigned int ***)a2 + 8);
        result = a4[1];
        ++*(_DWORD *)(v6 + 8);
        v32 = (__int64 *)(result + 8 * v31);
        v33 = *v32;
        if ( *v32 )
        {
          v25 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v25 )
            result = sub_15D7BC0(v30, v33);
        }
        *v32 = v6;
        return result;
      }
    }
  }
  v8 = a2 + 88;
  if ( *((int *)a2 + 22) >> 8 == -1 )
  {
LABEL_30:
    v34 = 0x7FFFFFFF8LL;
    v9 = 0x7FFFFFFF8LL;
  }
  else
  {
    while ( *(_DWORD *)(a1 + 12) != *v8 )
    {
      v8 = *((char **)v8 + 1);
      if ( !v8 )
        goto LABEL_30;
    }
    v34 = 8LL * (unsigned int)(*(int *)v8 >> 8);
    v9 = v34;
  }
  v40[0] = 0;
  v10 = *(_QWORD *)(a1 + 600);
  v41[0] = 1;
  v40[1] = 0;
  v11 = *(unsigned int **)(v10 + v9);
  v41[1] = 0;
  if ( !v11 )
  {
    v18 = a1 + 128;
    goto LABEL_40;
  }
  v12 = &v11[*(v11 - 1)];
  v13 = *(v11 - 1);
  if ( v12 == v11 )
  {
    v19 = a1 + 128;
    goto LABEL_21;
  }
  v14 = 0;
  do
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * *v11) != 1 )
        goto LABEL_12;
      v15 = sub_811880(a1, v14);
      v16 = qword_1C7F2C0;
      v17 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 )
        break;
      if ( (v40[0] & 0x100000000LL) != 0 )
      {
        v36 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v40, v40);
        v28 = BYTE4(v41[0]);
        v16 = v36;
        if ( (v41[0] & 0x100000000LL) != 0 )
        {
LABEL_42:
          sub_182C690(v16, v41, v41);
          goto LABEL_12;
        }
      }
      else
      {
        BYTE4(v40[0]) &= ~1u;
        v28 = BYTE4(v41[0]);
        if ( (v41[0] & 0x100000000LL) != 0 )
          goto LABEL_42;
      }
      BYTE4(v41[0]) = v28 & 0xFE;
LABEL_12:
      ++v11;
      ++v14;
      if ( v12 == v11 )
        goto LABEL_19;
    }
    if ( !LODWORD(v40[0]) )
    {
      if ( (*(_BYTE *)(v15 + 4) & 1) != 0 )
      {
        v39 = v15;
        v38 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v40, v15);
        v15 = v39;
        v16 = v38;
        if ( (*(_BYTE *)(v39 + 20) & 1) != 0 )
        {
LABEL_47:
          sub_182C690(v16, v41, v15 + 16);
          goto LABEL_12;
        }
      }
      else
      {
        BYTE4(v40[0]) &= ~1u;
        LODWORD(v40[0]) = v17;
        if ( (*(_BYTE *)(v15 + 20) & 1) != 0 )
          goto LABEL_47;
      }
      v29 = *(_DWORD *)(v15 + 16);
      BYTE4(v41[0]) &= ~1u;
      LODWORD(v41[0]) = v29;
      goto LABEL_12;
    }
    if ( (v41[0] & 0x100000000LL) == 0
      && LODWORD(v41[0]) == 1
      && (*(_BYTE *)(v15 + 20) & 1) == 0
      && *(_DWORD *)(v15 + 16) == 1 )
    {
      v37 = qword_1C7F2C0;
      sub_1831A80(qword_1C7F2C0, v40, v15, v40);
      sub_182CBA0(v37, v41);
      BYTE4(v41[0]) &= ~1u;
      LODWORD(v41[0]) = 1;
      goto LABEL_12;
    }
    sub_1851D20(qword_1C7F2C0, v40, v15, v40);
    ++v11;
    ++v14;
  }
  while ( v12 != v11 );
LABEL_19:
  v18 = a1 + 128;
  v19 = a1 + 128;
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + v34);
  if ( v20 )
  {
    v13 = *(unsigned int *)(v20 - 4);
    goto LABEL_21;
  }
LABEL_40:
  v19 = v18;
  v13 = 0;
LABEL_21:
  v21 = sub_1674520(v19, v40, v13);
  v22 = *a4;
  v23 = (__int64 *)(a4[1] + 8LL * ***((unsigned int ***)a2 + 8));
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  v24 = *v23;
  if ( *v23 )
  {
    v25 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v22, v24);
  }
  *v23 = v21;
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v40);
  return sub_182CBA0(v26, v41);
}

