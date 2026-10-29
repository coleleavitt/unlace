__int64 __fastcall sub_17B3A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbp
  signed __int64 v9; // r12
  __int64 (***v10)(); // rdi
  __int64 (*v11)(); // rax
  unsigned __int8 v12; // al
  size_t v13; // rax
  __int64 v14; // rsi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  char v25[1032]; // [rsp-8h] [rbp-448h] BYREF
  unsigned __int64 v26; // [rsp+400h] [rbp-40h]

  v7 = a3;
  v26 = __readfsqword(0x28u);
  v9 = a4;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v10 = *(__int64 (****)())a3;
  if ( !*(_QWORD *)a3 || (v11 = **v10, v11 == sub_17B0D0) )
  {
    if ( (*(_BYTE *)(a3 + 24) & 1) != 0 || a4 >= 0 )
      goto LABEL_5;
    v4 = (_BYTE *)(&dword_0 + 2);
    v5 = 0;
LABEL_36:
    v22 = qvector_reserve();
    *(_QWORD *)a1 = v22;
    v21 = v22;
LABEL_37:
    *(_QWORD *)(a1 + 8) = v4;
    *(_BYTE *)(v21 + v5) = 45;
    *(_BYTE *)(*(_QWORD *)a1 + v5 + 1) = 0;
    goto LABEL_5;
  }
  if ( ((((unsigned int (__fastcall *)(__int64 (***)(), __int64, __int64, __int64))v11)(v10, a1, a4, a3) + 1)
      & 0xFFFFFFFD) == 0 )
    return a1;
  if ( (*(_BYTE *)(v7 + 24) & 1) == 0 && v9 < 0 )
  {
    v20 = *(_QWORD *)(a1 + 8);
    v21 = *(_QWORD *)a1;
    if ( v20 )
    {
      v5 = v20 - 1;
      v4 = (char *)(v20 + 1);
    }
    else
    {
      v5 = 0;
      v4 = (_BYTE *)(&dword_0 + 2);
    }
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)v4 )
      goto LABEL_37;
    goto LABEL_36;
  }
LABEL_5:
  v12 = *(_BYTE *)(v7 + 8);
  if ( v12 )
  {
    if ( v12 == 2 )
    {
      if ( (*(_BYTE *)(v7 + 24) & 2) != 0 )
        goto LABEL_8;
      v18 = *(_QWORD *)(a1 + 8);
      if ( v18 )
      {
        v6 = v18 + 1;
        v5 = v18 + 2;
        --v18;
      }
      else
      {
        v5 = 3;
        v6 = 2;
      }
      v19 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v5 )
      {
        v24 = qvector_reserve();
        *(_QWORD *)a1 = v24;
        v19 = v24;
      }
      *(_QWORD *)(a1 + 8) = v5;
      *(_BYTE *)(v19 + v6) = 0;
      v4 = (char *)(*(_QWORD *)a1 + v18);
      *(_WORD *)v4 = 30768;
      v12 = *(_BYTE *)(v7 + 8);
    }
  }
  else
  {
    if ( (*(_BYTE *)(v7 + 24) & 2) != 0 )
      goto LABEL_8;
    v4 = *(char **)(a1 + 8);
    v5 = 2;
    if ( v4 )
      v5 = (unsigned __int64)(v4-- + 1);
    v16 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < v5 )
    {
      v23 = qvector_reserve();
      *(_QWORD *)a1 = v23;
      v16 = v23;
    }
    *(_QWORD *)(a1 + 8) = v5;
    v4[v16] = 48;
    v4[*(_QWORD *)a1 + 1] = 0;
    v12 = *(_BYTE *)(v7 + 8);
  }
  if ( v12 <= 2u )
  {
LABEL_8:
    v4 = v25;
    num2str_uint64();
    v13 = strlen(v25);
    v7 = *(_QWORD *)(a1 + 8);
    v9 = v13;
    v5 = v13;
    if ( v7 )
    {
      --v7;
      v5 = v13 + v7;
    }
    v14 = *(_QWORD *)a1;
    v6 = v5 + 1;
    if ( *(_QWORD *)(a1 + 16) >= v5 + 1 )
      goto LABEL_11;
    goto LABEL_22;
  }
  if ( under_debugger )
    BUG();
  interr();
LABEL_22:
  v17 = qvector_reserve();
  *(_QWORD *)a1 = v17;
  v14 = v17;
LABEL_11:
  *(_QWORD *)(a1 + 8) = v6;
  *(_BYTE *)(v14 + v5) = 0;
  memmove((void *)(v7 + *(_QWORD *)a1), v4, v9);
  return a1;
}

