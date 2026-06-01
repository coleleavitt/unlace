__int64 __fastcall sub_4F2660(__int64 a1, __int64 a2, __int64 (****a3)(), __int64 a4)
{
  char *v4; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 (****v7)(); // rbp
  signed __int64 v9; // r12
  __int64 (***v10)(); // rdi
  __int64 (*v11)(); // rax
  __int64 v12; // rax
  size_t v13; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  char v21[1032]; // [rsp-8h] [rbp-448h] BYREF
  unsigned __int64 v22; // [rsp+400h] [rbp-40h]

  v7 = a3;
  v22 = __readfsqword(0x28u);
  v9 = a4;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v10 = *a3;
  if ( !*a3 || (a3 = (__int64 (****)())sub_4F1EB0, v11 = **v10, v11 == sub_4F1EB0) )
  {
    if ( ((_BYTE)v7[3] & 1) != 0 || a4 >= 0 )
      goto LABEL_5;
    a2 = 0;
    v4 = (_BYTE *)(&dword_0 + 2);
    v5 = 0;
LABEL_36:
    v18 = qvector_reserve(a1, a2, v4, 1);
    *(_QWORD *)a1 = v18;
    a2 = v18;
LABEL_37:
    *(_QWORD *)(a1 + 8) = v4;
    *(_BYTE *)(a2 + v5) = 45;
    *(_BYTE *)(*(_QWORD *)a1 + v5 + 1) = 0;
    goto LABEL_5;
  }
  a2 = a1;
  if ( ((((unsigned int (__fastcall *)(__int64 (***)(), __int64, __int64, __int64 (****)()))v11)(v10, a1, a4, v7) + 1)
      & 0xFFFFFFFD) == 0 )
    return a1;
  if ( ((_BYTE)v7[3] & 1) == 0 && v9 < 0 )
  {
    v17 = *(_QWORD *)(a1 + 8);
    a2 = *(_QWORD *)a1;
    if ( v17 )
    {
      v5 = v17 - 1;
      v4 = (char *)(v17 + 1);
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
  v12 = *((unsigned __int8 *)v7 + 8);
  if ( (_BYTE)v12 )
  {
    if ( (_BYTE)v12 == 2 )
    {
      if ( ((_BYTE)v7[3] & 2) != 0 )
        goto LABEL_8;
      v16 = *(_QWORD *)(a1 + 8);
      if ( v16 )
      {
        v6 = v16 + 1;
        v5 = v16 + 2;
        --v16;
      }
      else
      {
        v5 = 3;
        v6 = 2;
      }
      a2 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v5 )
      {
        v20 = qvector_reserve(a1, a2, v5, 1);
        *(_QWORD *)a1 = v20;
        a2 = v20;
      }
      *(_QWORD *)(a1 + 8) = v5;
      a3 = (__int64 (****)())(&stru_7828 + 8);
      *(_BYTE *)(a2 + v6) = 0;
      v4 = (char *)(*(_QWORD *)a1 + v16);
      *(_WORD *)v4 = 30768;
      v12 = *((unsigned __int8 *)v7 + 8);
    }
  }
  else
  {
    if ( ((_BYTE)v7[3] & 2) != 0 )
      goto LABEL_8;
    v4 = *(char **)(a1 + 8);
    v5 = 2;
    if ( v4 )
      v5 = (unsigned __int64)(v4-- + 1);
    a2 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < v5 )
    {
      v19 = qvector_reserve(a1, a2, v5, 1);
      *(_QWORD *)a1 = v19;
      a2 = v19;
    }
    *(_QWORD *)(a1 + 8) = v5;
    v4[a2] = 48;
    v4[*(_QWORD *)a1 + 1] = 0;
    v12 = *((unsigned __int8 *)v7 + 8);
  }
  if ( (unsigned __int8)v12 <= 2u )
  {
LABEL_8:
    v4 = v21;
    num2str_uint64(v21, v9, dword_6CC2E0[v12], 0);
    v13 = strlen(v21);
    v7 = *(__int64 (*****)())(a1 + 8);
    v9 = v13;
    v5 = v13;
    if ( v7 )
    {
      v7 = (__int64 (****)())((char *)v7 - 1);
      v5 = (unsigned __int64)v7 + v13;
    }
    a2 = *(_QWORD *)a1;
    v6 = v5 + 1;
    if ( *(_QWORD *)(a1 + 16) >= v5 + 1 )
      goto LABEL_11;
    goto LABEL_22;
  }
  if ( under_debugger )
    BUG();
  interr(70131, a2, a3, a4, 0.0);
LABEL_22:
  v15 = qvector_reserve(a1, a2, v6, 1);
  *(_QWORD *)a1 = v15;
  a2 = v15;
LABEL_11:
  *(_QWORD *)(a1 + 8) = v6;
  *(_BYTE *)(a2 + v5) = 0;
  memmove((char *)v7 + *(_QWORD *)a1, v4, v9);
  return a1;
}
