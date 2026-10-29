__int64 __fastcall sub_DB4C0(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  unsigned __int64 v8; // r13
  _BYTE *v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r13
  const char *v12; // r15
  __int64 v13; // rax
  __int64 *v14; // r14
  __int64 v15; // r15
  __int64 v16; // r13
  char *v17; // rbx
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rax
  char *v20; // rsi
  char *v21; // rbx
  unsigned int v22; // esi
  unsigned int v23; // esi
  unsigned int v24; // edx
  __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // r12
  __int64 v28; // rbx
  const char *v29; // r13
  __int64 *v30; // rbp
  _DWORD *v31; // rsi
  __int64 v32; // rax
  __int64 result; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  const void *v36; // r15
  void *v37; // rax
  __int64 v38; // rax

  v6 = qword_2512E0 + 56 * a5;
  sub_94360(*a2);
  v7 = *a2;
  if ( *a2 + 3 != (__int64 *)(v6 + 8) )
  {
    v8 = *(_QWORD *)(v6 + 16);
    if ( v8 > 1 )
    {
      v36 = *(const void **)(v6 + 8);
      v37 = (void *)v7[3];
      if ( v7[5] < v8 )
      {
        v37 = (void *)qvector_reserve();
        v7[3] = (__int64)v37;
      }
      v7[4] = v8;
      memmove(v37, v36, v8 - 1);
      *(_BYTE *)(v7[3] + v8 - 1) = 0;
      v7 = *a2;
    }
    else
    {
      v7[4] = 0;
      v7 = *a2;
    }
  }
  if ( (*(_BYTE *)(v6 + 4) & 1) == 0 )
  {
    v9 = (_BYTE *)v7[6];
    v10 = 3;
    v11 = 2;
    v12 = "No";
    if ( (unsigned __int64)v7[8] >= 3 )
      goto LABEL_6;
LABEL_23:
    v35 = qvector_reserve();
    v7[7] = v10;
    v7[6] = v35;
    v9 = (_BYTE *)v35;
    v13 = (unsigned int)v11;
    if ( (v11 & 4) == 0 )
      goto LABEL_7;
    goto LABEL_24;
  }
  v9 = (_BYTE *)v7[6];
  v10 = 8;
  v11 = 7;
  v12 = "Suspend";
  if ( (unsigned __int64)v7[8] < 8 )
    goto LABEL_23;
LABEL_6:
  v7[7] = v10;
  v13 = (unsigned int)v11;
  if ( (v11 & 4) == 0 )
  {
LABEL_7:
    *v9 = *v12;
    *(_WORD *)&v9[v11 - 2] = *(_WORD *)&v12[v11 - 2];
    goto LABEL_8;
  }
LABEL_24:
  *(_DWORD *)v9 = *(_DWORD *)v12;
  *(_DWORD *)&v9[v13 - 4] = *(_DWORD *)&v12[v13 - 4];
LABEL_8:
  *(_BYTE *)(v7[6] + v11) = 0;
  if ( (*(_BYTE *)(v6 + 4) & 2) != 0 )
  {
    v14 = *a2;
    v15 = 9;
    v16 = 8;
    v17 = "Debugger";
    v18 = (_QWORD *)(*a2)[9];
    if ( (unsigned __int64)(*a2)[11] >= 9 )
      goto LABEL_10;
  }
  else
  {
    v14 = *a2;
    v15 = 12;
    v16 = 11;
    v17 = "Application";
    v18 = (_QWORD *)(*a2)[9];
    if ( (unsigned __int64)(*a2)[11] >= 0xC )
      goto LABEL_10;
  }
  v34 = qvector_reserve();
  v14[9] = v34;
  v18 = (_QWORD *)v34;
LABEL_10:
  v14[10] = v15;
  *v18 = *(_QWORD *)v17;
  *(_QWORD *)((char *)v18 + v16 - 8) = *(_QWORD *)&v17[v16 - 8];
  v19 = (unsigned __int64)(v18 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  v20 = (char *)v18 - v19;
  v21 = (char *)(v17 - v20);
  v22 = (v16 + (_DWORD)v20) & 0xFFFFFFF8;
  if ( v22 >= 8 )
  {
    v23 = v22 & 0xFFFFFFF8;
    v24 = 0;
    do
    {
      v25 = v24;
      v24 += 8;
      *(_QWORD *)(v19 + v25) = *(_QWORD *)&v21[v25];
    }
    while ( v24 < v23 );
  }
  *(_BYTE *)(v14[9] + v16) = 0;
  v26 = *(_DWORD *)(v6 + 4);
  if ( (v26 & 4) != 0 )
  {
    v27 = 4;
    v28 = 3;
    v29 = "Log";
    goto LABEL_15;
  }
  if ( (v26 & 8) != 0 )
  {
    v27 = 7;
    v28 = 6;
    v29 = "Silent";
LABEL_15:
    v30 = *a2;
    v31 = (_DWORD *)v30[12];
    if ( v30[14] >= v27 )
      goto LABEL_16;
    goto LABEL_30;
  }
  v30 = *a2;
  v27 = 5;
  v28 = 4;
  v29 = "Warn";
  v31 = (_DWORD *)v30[12];
  if ( (unsigned __int64)v30[14] >= 5 )
  {
LABEL_16:
    v30[13] = v27;
    v32 = (unsigned int)v28;
    if ( (v28 & 4) == 0 )
      goto LABEL_17;
LABEL_31:
    *v31 = *(_DWORD *)v29;
    *(_DWORD *)((char *)v31 + v32 - 4) = *(_DWORD *)&v29[v32 - 4];
    goto LABEL_19;
  }
LABEL_30:
  v38 = qvector_reserve();
  v30[13] = v27;
  v30[12] = v38;
  v31 = (_DWORD *)v38;
  v32 = (unsigned int)v28;
  if ( (v28 & 4) != 0 )
    goto LABEL_31;
LABEL_17:
  *(_BYTE *)v31 = *v29;
  if ( (v28 & 2) != 0 )
    *(_WORD *)((char *)v31 + v28 - 2) = *(_WORD *)&v29[v28 - 2];
LABEL_19:
  result = v30[12];
  *(_BYTE *)(result + v28) = 0;
  return result;
}

