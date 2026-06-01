unsigned int **__fastcall sub_5FA080(unsigned int **a1, char a2, char a3, __int64 *a4, unsigned int *a5, _DWORD *a6)
{
  unsigned int **result; // rax
  unsigned int **v7; // r14
  int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // ebp
  unsigned int v12; // ebp
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  char v18; // dl
  unsigned __int64 v19; // rbp
  __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  __int64 v22; // r13
  int v23; // edi
  unsigned int *v24; // rdx
  int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rbx
  unsigned int **v29; // [rsp+0h] [rbp-48h]
  unsigned int **v30; // [rsp+0h] [rbp-48h]
  unsigned int **v31; // [rsp+0h] [rbp-48h]
  unsigned int **v32; // [rsp+0h] [rbp-48h]
  _DWORD *v33; // [rsp+8h] [rbp-40h]

  result = a1;
  v7 = a1 + 2;
  v9 = a2 & 4;
  v10 = *a4;
  v11 = v10 & 7;
  if ( v11 == 7 )
  {
    v12 = *(_DWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    *a1 = (unsigned int *)v7;
    if ( v12 > 3 )
      v12 = 3;
    v11 = v12 + 8;
    a1[1] = (unsigned int *)0x400000000LL;
    if ( (a2 & 1) == 0 )
    {
      v23 = *((_DWORD *)a1 + 2);
      result[2] = (unsigned int *)(((unsigned __int64)*((unsigned int *)a4 + 2) << 32) | *((unsigned int *)a4 + 2));
      v15 = (unsigned int)(v23 + 1);
      *((_DWORD *)result + 2) = v15;
      if ( !a6 || (a2 & 2) == 0 || !*a6 || !a6[1] )
        goto LABEL_19;
LABEL_11:
      v16 = *((unsigned int *)result + 3);
      v17 = v15 + 1;
LABEL_27:
      v22 = *(_QWORD *)a6;
      if ( v16 < v17 )
      {
        v32 = result;
        sub_25D6060(result, v7, v17, 8);
        result = v32;
        v15 = *((unsigned int *)v32 + 2);
      }
      *(_QWORD *)&(*result)[2 * v15] = v22;
      ++*((_DWORD *)result + 2);
      goto LABEL_30;
    }
    if ( (_DWORD)a5 && (unsigned __int64)a5 >> 32 )
    {
      v18 = 1;
LABEL_23:
      a1[2] = a5;
      v16 = *((unsigned int *)a1 + 3);
      *((_DWORD *)a1 + 2) = 1;
      if ( !v18 )
      {
        if ( (a2 & 2) == 0 || a6 == nullptr )
        {
          v17 = 2;
          v15 = 1;
          goto LABEL_45;
        }
        v15 = 1;
        v17 = 2;
        if ( !*a6 )
          goto LABEL_45;
LABEL_26:
        if ( a6[1] )
          goto LABEL_27;
LABEL_45:
        v19 = ((unsigned __int64)*((unsigned int *)a4 + 4) << 32) | *((unsigned int *)a4 + 4);
        if ( v16 < v17 )
        {
          v29 = result;
          sub_25D6060(result, v7, v17, 8);
          result = v29;
          v15 = *((unsigned int *)v29 + 2);
        }
        goto LABEL_16;
      }
      v13 = ((unsigned __int64)*((unsigned int *)a4 + 2) << 32) | *((unsigned int *)a4 + 2);
      if ( v16 > 1 )
      {
        v14 = 1;
      }
      else
      {
        v33 = a6;
        sub_25D6060(a1, a1 + 2, 2, 8);
        result = a1;
        a6 = v33;
        v14 = *((unsigned int *)a1 + 2);
      }
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  *a1 = (unsigned int *)v7;
  a1[1] = (unsigned int *)0x400000000LL;
  v18 = (v11 != 6) | a3;
  if ( (a2 & 1) != 0 && (_DWORD)a5 && (unsigned __int64)a5 >> 32 )
    goto LABEL_23;
  if ( v18 )
  {
LABEL_6:
    v13 = ((unsigned __int64)*((unsigned int *)a4 + 2) << 32) | *((unsigned int *)a4 + 2);
    v14 = 0;
LABEL_7:
    *(_QWORD *)&(*result)[2 * v14] = v13;
    v15 = (unsigned int)(*((_DWORD *)result + 2) + 1);
    *((_DWORD *)result + 2) = v15;
    if ( !a6 || (a2 & 2) == 0 || !*a6 || !a6[1] )
    {
LABEL_30:
      if ( v11 != 6 )
        goto LABEL_19;
      v15 = *((unsigned int *)result + 2);
      v16 = *((unsigned int *)result + 3);
      v17 = v15 + 1;
      goto LABEL_45;
    }
    goto LABEL_11;
  }
  if ( (a2 & 2) != 0 && a6 != nullptr )
  {
    v15 = 0;
    v17 = 1;
    v16 = 4;
    if ( !*a6 )
      goto LABEL_45;
    goto LABEL_26;
  }
  v19 = ((unsigned __int64)*((unsigned int *)a4 + 4) << 32) | *((unsigned int *)a4 + 4);
  v15 = 0;
LABEL_16:
  *(_QWORD *)&(*result)[2 * v15] = v19;
  v20 = (unsigned int)(*((_DWORD *)result + 2) + 1);
  *((_DWORD *)result + 2) = v20;
  v21 = ((unsigned __int64)*((unsigned int *)a4 + 5) << 32) | *((unsigned int *)a4 + 5);
  if ( *((unsigned int *)result + 3) < (unsigned __int64)(v20 + 1) )
  {
    v30 = result;
    sub_25D6060(result, v7, v20 + 1, 8);
    result = v30;
    v20 = *((unsigned int *)v30 + 2);
  }
  *(_QWORD *)&(*result)[2 * v20] = v21;
  ++*((_DWORD *)result + 2);
LABEL_19:
  if ( v9 )
  {
    v24 = *result;
    v25 = *((_DWORD *)result + 3);
    v26 = (*result)[2 * *((unsigned int *)result + 2) - 1];
    v27 = **result;
    *((_DWORD *)result + 2) = 0;
    v28 = (v26 << 32) | v27;
    if ( !v25 )
    {
      v31 = result;
      sub_25D6060(result, v7, 1, 8);
      result = v31;
      v24 = &(*v31)[2 * *((unsigned int *)v31 + 2)];
    }
    *(_QWORD *)v24 = v28;
    ++*((_DWORD *)result + 2);
  }
  return result;
}

