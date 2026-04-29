__int64 __fastcall sub_64550(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v7; // rax
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rbp
  __int64 v18; // rax
  int v19; // r14d
  char v20; // al
  unsigned int v21; // r9d
  __int64 v22; // rax
  _QWORD *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rbp
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  char *v31; // rax
  char *v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+0h] [rbp-48h]
  unsigned int v38; // [rsp+Ch] [rbp-3Ch]
  unsigned int v39; // [rsp+Ch] [rbp-3Ch]
  unsigned int v40; // [rsp+Ch] [rbp-3Ch]

  if ( a4 )
  {
    v7 = *(_QWORD *)(a1 + 1496);
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 24) + 16LL) == a3 || a3 == -1 || (*(_BYTE *)(v7 + 604) & 1) == 0 )
      return 0;
    v8 = sub_32B3E0(a1, a3);
    sub_32B650(a1, a2, 43, v8, v9, v10);
  }
  v11 = *(_DWORD *)(a1 + 64);
  if ( v11 <= 0
    || (v12 = *(_QWORD *)(a1 + 528),
        v13 = (unsigned int)(v11 - 1),
        *(_DWORD *)(*(_QWORD *)(v12 + 8LL * (int)v13) + 76LL) != 1) )
  {
    result = sub_63550(a1, a3, 2);
    goto LABEL_9;
  }
  v16 = (unsigned int)(v11 - 2);
  if ( (unsigned int)v11 <= 1 )
    sub_609E0(a1, v13, v12, v16);
  v17 = *(_QWORD **)(v12 + 8LL * (int)v16);
  if ( *((_DWORD *)v17 + 19) == 3 )
  {
    v18 = v17[7];
    if ( v18 )
    {
      if ( *(_DWORD *)v18 == 55 || !*((_DWORD *)v17 + 94) )
        goto LABEL_15;
      v19 = *((_DWORD *)v17 + 18);
      v37 = *(_QWORD *)(v18 + 24);
    }
    else
    {
      if ( !*((_DWORD *)v17 + 94) )
        goto LABEL_15;
      v19 = *((_DWORD *)v17 + 18);
      v37 = v17[4];
    }
    v20 = sub_9DFF0(v17);
    v21 = v19 + 1;
    if ( !v20 )
    {
      v22 = sub_64040(a1, v21, 0);
      v21 = v19 + 1;
      *(_DWORD *)(v22 + 24) |= 2u;
      v23 = (_QWORD *)v22;
      *(_DWORD *)v17[46] = v19 + 1;
      v24 = *(_QWORD *)(v22 + 376);
      v25 = v23[46];
      if ( v23[48] < (unsigned __int64)(v24 + 1) )
      {
        v35 = qvector_reserve(v23 + 46, v25, v24 + 1, 4);
        v21 = v19 + 1;
        v23[46] = v35;
        v25 = v35;
        v24 = v23[47];
      }
      *(_DWORD *)(v25 + 4 * v24) = v19 + 2;
      v26 = v23[44];
      ++v23[47];
      v27 = v23[43];
      if ( v23[45] < (unsigned __int64)(v26 + 1) )
      {
        v39 = v21;
        v34 = qvector_reserve(v23 + 43, v27, v26 + 1, 4);
        v21 = v39;
        v23[43] = v34;
        v27 = v34;
        v26 = v23[44];
      }
      *(_DWORD *)(v27 + 4 * v26) = v19;
      v28 = (_QWORD *)v23[1];
      ++v23[44];
      v29 = v28[43];
      v30 = v28[44];
      v31 = (char *)(v29 + 4 * v30);
      if ( (char *)v29 == v31 )
        goto LABEL_37;
      v32 = (char *)v28[43];
      while ( *(_DWORD *)v32 != v19 )
      {
        v32 += 4;
        if ( v31 == v32 )
          goto LABEL_37;
      }
      if ( v31 == v32 )
      {
LABEL_37:
        v33 = v30 + 1;
      }
      else
      {
        v38 = v21;
        memmove(v32, v32 + 4, v31 - v32 - 4);
        v33 = v28[44];
        v21 = v38;
        v29 = v28[43];
        v30 = v33 - 1;
        v28[44] = v33 - 1;
      }
      if ( v28[45] < v33 )
      {
        v40 = v21;
        v36 = qvector_reserve(v28 + 43, v29, v33, 4);
        v30 = v28[44];
        v21 = v40;
        v28[43] = v36;
        v29 = v36;
      }
      *(_DWORD *)(v29 + 4 * v30) = v21;
      ++v28[44];
      v17 = v23;
    }
    sub_B0700(v17, v37, v21);
    LODWORD(v13) = *(_DWORD *)(a1 + 64) - 1;
  }
LABEL_15:
  result = sub_64040(a1, v13, 0);
  *(_QWORD *)(result + 32) = a3;
LABEL_9:
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (a3 + 1);
  *(_DWORD *)(result + 24) |= 2u;
  *(_QWORD *)(result + 40) = v15;
  if ( a4 )
    *(_DWORD *)(result + 76) = 6;
  return result;
}
