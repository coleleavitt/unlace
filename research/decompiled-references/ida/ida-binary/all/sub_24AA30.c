__int64 __fastcall exc_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // r13
  _BYTE *v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r13
  char *v13; // r15
  __int64 v14; // rax
  __int64 *v15; // r14
  __int64 v16; // r15
  __int64 v17; // r13
  char *v18; // rbx
  _QWORD *v19; // rsi
  unsigned __int64 v20; // rax
  char *v21; // rsi
  char *v22; // rbx
  unsigned int v23; // esi
  unsigned int v24; // esi
  unsigned int v25; // edx
  __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // r12
  __int64 v29; // rbx
  const char *v30; // r13
  __int64 *v31; // rbp
  _DWORD *v32; // rsi
  __int64 v33; // rax
  __int64 result; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  const void *v37; // r15
  void *v38; // rax
  __int64 v39; // rax

  v6 = qword_8CC2F0 + 56 * a5;
  sub_169A50(*a2, (__int64)"%08X", *(_DWORD *)v6);
  v7 = *a2;
  v8 = (__int64)(*a2 + 3);
  if ( v8 != v6 + 8 )
  {
    v9 = *(_QWORD *)(v6 + 16);
    if ( v9 > 1 )
    {
      v37 = *(const void **)(v6 + 8);
      v38 = (void *)v7[3];
      if ( v7[5] < v9 )
      {
        v38 = (void *)qvector_reserve(v8, v7[3], *(_QWORD *)(v6 + 16), 1);
        v7[3] = (__int64)v38;
      }
      v7[4] = v9;
      memmove(v38, v37, v9 - 1);
      *(_BYTE *)(v7[3] + v9 - 1) = 0;
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
    v10 = (_BYTE *)v7[6];
    v11 = 3;
    v12 = 2;
    v13 = "No";
    if ( (unsigned __int64)v7[8] >= 3 )
      goto LABEL_6;
LABEL_23:
    v36 = qvector_reserve(v7 + 6, v10, v11, 1);
    v7[7] = v11;
    v7[6] = v36;
    v10 = (_BYTE *)v36;
    v14 = (unsigned int)v12;
    if ( (v12 & 4) == 0 )
      goto LABEL_7;
    goto LABEL_24;
  }
  v10 = (_BYTE *)v7[6];
  v11 = 8;
  v12 = 7;
  v13 = "Suspend";
  if ( (unsigned __int64)v7[8] < 8 )
    goto LABEL_23;
LABEL_6:
  v7[7] = v11;
  v14 = (unsigned int)v12;
  if ( (v12 & 4) == 0 )
  {
LABEL_7:
    *v10 = *v13;
    *(_WORD *)&v10[v12 - 2] = *(_WORD *)&v13[v12 - 2];
    goto LABEL_8;
  }
LABEL_24:
  *(_DWORD *)v10 = *(_DWORD *)v13;
  *(_DWORD *)&v10[v14 - 4] = *(_DWORD *)&v13[v14 - 4];
LABEL_8:
  *(_BYTE *)(v7[6] + v12) = 0;
  if ( (*(_BYTE *)(v6 + 4) & 2) != 0 )
  {
    v15 = *a2;
    v16 = 9;
    v17 = 8;
    v18 = "Debugger";
    v19 = (_QWORD *)(*a2)[9];
    if ( (unsigned __int64)(*a2)[11] >= 9 )
      goto LABEL_10;
  }
  else
  {
    v15 = *a2;
    v16 = 12;
    v17 = 11;
    v18 = "Application";
    v19 = (_QWORD *)(*a2)[9];
    if ( (unsigned __int64)(*a2)[11] >= 0xC )
      goto LABEL_10;
  }
  v35 = qvector_reserve(v15 + 9, v19, v16, 1);
  v15[9] = v35;
  v19 = (_QWORD *)v35;
LABEL_10:
  v15[10] = v16;
  *v19 = *(_QWORD *)v18;
  *(_QWORD *)((char *)v19 + v17 - 8) = *(_QWORD *)&v18[v17 - 8];
  v20 = (unsigned __int64)(v19 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  v21 = (char *)v19 - v20;
  v22 = (char *)(v18 - v21);
  v23 = (v17 + (_DWORD)v21) & 0xFFFFFFF8;
  if ( v23 >= 8 )
  {
    v24 = v23 & 0xFFFFFFF8;
    v25 = 0;
    do
    {
      v26 = v25;
      v25 += 8;
      *(_QWORD *)(v20 + v26) = *(_QWORD *)&v22[v26];
    }
    while ( v25 < v24 );
  }
  *(_BYTE *)(v15[9] + v17) = 0;
  v27 = *(_DWORD *)(v6 + 4);
  if ( (v27 & 4) != 0 )
  {
    v28 = 4;
    v29 = 3;
    v30 = "Log";
    goto LABEL_15;
  }
  if ( (v27 & 8) != 0 )
  {
    v28 = 7;
    v29 = 6;
    v30 = "Silent";
LABEL_15:
    v31 = *a2;
    v32 = (_DWORD *)v31[12];
    if ( v31[14] >= v28 )
      goto LABEL_16;
    goto LABEL_30;
  }
  v31 = *a2;
  v28 = 5;
  v29 = 4;
  v30 = "Warn";
  v32 = (_DWORD *)v31[12];
  if ( (unsigned __int64)v31[14] >= 5 )
  {
LABEL_16:
    v31[13] = v28;
    v33 = (unsigned int)v29;
    if ( (v29 & 4) == 0 )
      goto LABEL_17;
LABEL_31:
    *v32 = *(_DWORD *)v30;
    *(_DWORD *)((char *)v32 + v33 - 4) = *(_DWORD *)&v30[v33 - 4];
    goto LABEL_19;
  }
LABEL_30:
  v39 = qvector_reserve(v31 + 12, v32, v28, 1);
  v31[13] = v28;
  v31[12] = v39;
  v32 = (_DWORD *)v39;
  v33 = (unsigned int)v29;
  if ( (v29 & 4) != 0 )
    goto LABEL_31;
LABEL_17:
  *(_BYTE *)v32 = *v30;
  if ( (v29 & 2) != 0 )
    *(_WORD *)((char *)v32 + v29 - 2) = *(_WORD *)&v30[v29 - 2];
LABEL_19:
  result = v31[12];
  *(_BYTE *)(result + v29) = 0;
  return result;
}
