__int64 __fastcall sub_8591A0(__int64 *a1, __int64 a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  void *v7; // rdi
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  _QWORD *v16; // rsi
  void *v17; // r15
  int v18; // eax
  __int64 v19; // rax
  void *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r8d
  unsigned int v25; // r13d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  size_t v30; // rdi
  __int64 v31; // rax
  int *v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdx
  int *v36; // rax
  int *v37; // rdi
  int v38; // ecx
  char v39; // si
  __int64 v40; // rcx
  char v41; // si
  __int64 v42; // rcx
  __int64 v43; // rax
  void *v44; // r13
  int *v45; // rsi
  _QWORD *v46; // rax
  int *v48; // [rsp+10h] [rbp-A8h]
  void *v49; // [rsp+10h] [rbp-A8h]
  _DWORD *v50; // [rsp+18h] [rbp-A0h]
  __int64 v51; // [rsp+20h] [rbp-98h]
  unsigned int v52; // [rsp+2Ch] [rbp-8Ch]
  _QWORD v53[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v54[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v55[11]; // [rsp+60h] [rbp-58h] BYREF

  v53[0] = 0;
  v7 = qword_1C7F2C0;
  v53[1] = 0;
  v54[0] = 1;
  v54[1] = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    v49 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v53, &qword_1C7F280);
    v7 = v49;
  }
  else
  {
    LODWORD(v53[0]) = qword_1C7F280;
  }
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
  {
    sub_182C690(v7, v54, &qword_1C7F290);
  }
  else
  {
    BYTE4(v54[0]) &= ~1u;
    LODWORD(v54[0]) = qword_1C7F290;
  }
  v8 = *(_QWORD *)(a3 + 8);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v9 = *(_QWORD **)(v8 + 8);
  if ( v9 )
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 == *((_DWORD *)v9 - 2) )
    {
      v25 = (3 * v10 + 1) >> 1;
      v26 = 8 * v25 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v26 || v10 >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v55, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v55);
        sub_233E40((__int64)v55);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = (unsigned int *)sub_186B300(v9 - 1, v26);
      v28 = v27[1];
      *(_QWORD *)(v8 + 8) = v27 + 2;
      v8 = *(_QWORD *)(a3 + 8);
      *v27 = v25;
      v14 = *(_QWORD *)(v8 + 16);
      *(_QWORD *)&v27[2 * v28 + 2] = a2;
      v27[1] = v28 + 1;
      if ( v14 )
        goto LABEL_11;
LABEL_21:
      v29 = (_QWORD *)sub_186B270(0x48u);
      v16 = v29 + 1;
      *v29 = 2;
      *(_QWORD *)(v8 + 16) = v29 + 1;
      goto LABEL_13;
    }
    v11 = v10;
    v12 = v10 + 1;
    v13 = &v9[v11];
  }
  else
  {
    v46 = (_QWORD *)sub_186B270(0x18u);
    v9 = v46 + 1;
    *v46 = 2;
    v12 = 1;
    *(_QWORD *)(v8 + 8) = v9;
    v13 = v9;
    v8 = *(_QWORD *)(a3 + 8);
  }
  v14 = *(_QWORD *)(v8 + 16);
  *v13 = a2;
  *((_DWORD *)v9 - 1) = v12;
  if ( !v14 )
    goto LABEL_21;
LABEL_11:
  v15 = *(unsigned int *)(v14 - 4);
  if ( (_DWORD)v15 == *(_DWORD *)(v14 - 8) )
  {
    v52 = (unsigned int)(3 * v15 + 1) >> 1;
    v30 = 32 * v52 + 8;
    if ( 32 * (int)v15 + 8 >= (unsigned int)v30 || (unsigned int)v15 >= (unsigned int)(3 * v15 + 1) >> 1 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v55, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v55);
      sub_233E40((__int64)v55);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v31 = sub_186B270(v30);
    v32 = *(int **)(v8 + 16);
    v50 = (_DWORD *)v31;
    v33 = v31 + 8;
    v51 = v33;
    if ( v32 )
    {
      v34 = (unsigned int)*(v32 - 1);
      v35 = v33;
      v50[1] = v34;
      v36 = v32;
      v37 = &v32[8 * v34];
      if ( v32 != v37 )
      {
        do
        {
          v38 = *v36;
          v39 = *((_BYTE *)v36 + 4);
          v36 += 8;
          v35 += 32;
          *(_DWORD *)(v35 - 32) = v38;
          *(_BYTE *)(v35 - 28) = v39 & 3 | *(_BYTE *)(v35 - 28) & 0xFC;
          v40 = *((_QWORD *)v36 - 3);
          *((_QWORD *)v36 - 3) = 0;
          *(_QWORD *)(v35 - 24) = v40;
          v41 = *((_BYTE *)v36 - 12);
          *(_DWORD *)(v35 - 16) = *(v36 - 4);
          *(_BYTE *)(v35 - 12) = v41 & 3 | *(_BYTE *)(v35 - 12) & 0xFC;
          v42 = *((_QWORD *)v36 - 1);
          *((_QWORD *)v36 - 1) = 0;
          *(_QWORD *)(v35 - 8) = v42;
        }
        while ( v36 != v37 );
      }
      v43 = (unsigned int)*(v32 - 1);
      v48 = &v32[8 * v43];
      if ( (_DWORD)v43 )
      {
        do
        {
          v44 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v32);
          v45 = v32 + 4;
          v32 += 8;
          sub_182CBA0(v44, v45);
        }
        while ( v32 != v48 );
        v32 = *(int **)(v8 + 16);
      }
      sub_186B220(v32 - 2);
      v33 = v51;
      v16 = (_QWORD *)(v51 + 32LL * (unsigned int)v50[1]);
    }
    else
    {
      v16 = (_QWORD *)v33;
      v50[1] = 0;
    }
    *(_QWORD *)(v8 + 16) = v33;
    *v50 = v52;
  }
  else
  {
    v16 = (_QWORD *)(32 * v15 + v14);
  }
LABEL_13:
  *v16 = 0;
  v17 = qword_1C7F2C0;
  v16[1] = 0;
  v16[2] = 1;
  v16[3] = 0;
  if ( (v53[0] & 0x100000000LL) != 0 )
    sub_182C690(v17, v16, v53);
  else
    *(_DWORD *)v16 = v53[0];
  if ( (v54[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v17, v16 + 2, v54);
  }
  else
  {
    v18 = v54[0];
    *((_BYTE *)v16 + 20) &= ~1u;
    *((_DWORD *)v16 + 4) = v18;
  }
  v19 = *(_QWORD *)(v8 + 16);
  v20 = qword_1C7F2C0;
  ++*(_DWORD *)(v19 - 4);
  sub_182CBA0(v20, v53);
  sub_182CBA0(v20, v54);
  return sub_856C90(a1, a3, v21, v22, v23);
}

