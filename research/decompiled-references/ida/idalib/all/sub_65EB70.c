unsigned __int64 __fastcall sub_65EB70(__int64 a1, char a2, char a3)
{
  _BYTE *v6; // r15
  char *v7; // r14
  char v8; // al
  int v9; // r8d
  int v10; // r9d
  int v11; // ecx
  size_t v12; // rbp
  size_t v13; // rax
  _BYTE *v14; // rsi
  size_t v15; // r14
  unsigned __int64 v16; // rax
  size_t v17; // r15
  unsigned __int64 v18; // r12
  size_t v19; // rax
  size_t v20; // r12
  size_t v21; // r14
  _BYTE *v22; // rsi
  char v23; // al
  unsigned __int64 v24; // r12
  __int64 v25; // r14
  _BYTE *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  void *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  char v32[1024]; // [rsp+0h] [rbp-448h] BYREF
  _BYTE v33[8]; // [rsp+400h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+408h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( a2 )
  {
    v32[0] = 0;
    if ( (a3 & 0x40) != 0 )
    {
      if ( (getinf(57) & 0xF) == 1 )
        v29 = &unk_23B1740;
      else
        v29 = &unk_23B1700;
      v30 = qstpncpy(v32, v29, 1024);
      LODWORD(v7) = v30;
      v6 = &v33[-v30];
    }
    else
    {
      LODWORD(v6) = 1024;
      v7 = v32;
    }
    v8 = getinf(57);
    v11 = 1 << (a2 - 1);
    if ( (v8 & 0xF) != 1 )
    {
      qsnprintf((_DWORD)v7, (_DWORD)v6, (unsigned int)&unk_2343620, v11, v9, v10);
      v12 = *(_QWORD *)(a1 + 8);
      if ( (a3 & 1) != 0 )
        goto LABEL_16;
LABEL_8:
      v13 = strlen(v32);
      v14 = *(_BYTE **)a1;
      v15 = v13;
      v16 = *(_QWORD *)(a1 + 16);
      if ( v12 )
      {
        --v12;
        v17 = v15 + v12;
        v18 = v15 + v12 + 1;
        if ( v16 >= v18 )
          goto LABEL_10;
      }
      else
      {
        v18 = v15 + 1;
        v17 = v15;
        if ( v16 >= v15 + 1 )
        {
          *(_QWORD *)(a1 + 8) = v18;
          v14[v15] = 0;
LABEL_12:
          memmove(*(void **)a1, v32, v15);
          return v34 - __readfsqword(0x28u);
        }
      }
      v28 = qvector_reserve(a1, v14, v18, 1);
      *(_QWORD *)a1 = v28;
      v14 = (_BYTE *)v28;
LABEL_10:
      *(_QWORD *)(a1 + 8) = v18;
      v14[v17] = 0;
      if ( v12 )
        memmove((void *)(*(_QWORD *)a1 + v15), *(const void **)a1, v12);
      goto LABEL_12;
    }
    qsnprintf((_DWORD)v7, (_DWORD)v6, (unsigned int)&unk_23435E8, v11, v9, v10);
  }
  else
  {
    if ( (a3 & 0x40) == 0 )
      return v34 - __readfsqword(0x28u);
    v32[0] = 0;
    if ( (getinf(57) & 0xF) == 1 )
      qstpncpy(v32, &unk_23B1740, 1024);
    else
      qstpncpy(v32, &unk_23B1700, 1024);
  }
  v12 = *(_QWORD *)(a1 + 8);
  if ( (a3 & 1) == 0 )
    goto LABEL_8;
LABEL_16:
  if ( v12 > 1 )
  {
    v23 = sub_65E1F0(a1);
    v12 = *(_QWORD *)(a1 + 8);
    if ( v23 != 32 )
    {
      if ( v12 )
      {
        v24 = v12 + 1;
        v25 = *(_QWORD *)(a1 + 8);
        --v12;
      }
      else
      {
        v25 = 1;
        v24 = 2;
      }
      v26 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v24 )
      {
        v31 = qvector_reserve(a1, v26, v24, 1);
        *(_QWORD *)a1 = v31;
        v26 = (_BYTE *)v31;
      }
      *(_QWORD *)(a1 + 8) = v24;
      v26[v12] = 32;
      *(_BYTE *)(*(_QWORD *)a1 + v25) = 0;
      v12 = *(_QWORD *)(a1 + 8);
    }
  }
  v19 = strlen(v32);
  v20 = v19;
  v21 = v19;
  if ( v12 )
  {
    --v12;
    v21 = v19 + v12;
  }
  v22 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) < v21 + 1 )
  {
    v27 = qvector_reserve(a1, v22, v21 + 1, 1);
    *(_QWORD *)a1 = v27;
    v22 = (_BYTE *)v27;
  }
  *(_QWORD *)(a1 + 8) = v21 + 1;
  v22[v21] = 0;
  memmove((void *)(v12 + *(_QWORD *)a1), v32, v20);
  return v34 - __readfsqword(0x28u);
}
