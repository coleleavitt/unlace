__int64 __fastcall sub_43ADF0(__int64 a1, __int64 a2, __int64 a3, char a4, int **a5)
{
  unsigned __int64 v5; // r12
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  int *v12; // rsi
  int *v13; // rbx
  int v14; // ecx
  int v15; // r15d
  int v16; // edi
  __int64 v17; // r11
  int *v18; // r14
  int *v19; // rdx
  int v20; // r10d
  unsigned __int64 v21; // rdx
  __int64 v22; // r11
  char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rbx
  char *v26; // rsi
  unsigned __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // r14
  char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-60h]
  int v35; // [rsp+10h] [rbp-58h]
  unsigned __int64 v36; // [rsp+10h] [rbp-58h]
  __int64 v37; // [rsp+18h] [rbp-50h]
  int v38; // [rsp+24h] [rbp-44h]
  __int64 v39; // [rsp+28h] [rbp-40h]

  result = (__int64)sub_3573A0((char **)a2);
  if ( !a4 )
  {
    if ( a5 )
    {
LABEL_3:
      sub_357520((__int64 *)a2);
      v10 = *(_QWORD *)(a2 + 8);
      v11 = 0;
      v12 = *a5;
      v13 = *a5;
      if ( v10 )
        v11 = v10 - 1;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v34 = v11;
      v17 = (__int64)a5[1];
      while ( 1 )
      {
        v18 = &v12[v17];
        v19 = v13;
        LOBYTE(v5) = (v16 ^ 1) & (&v12[v17] != v13);
        if ( (_BYTE)v5 )
        {
          v15 = *v13++;
          v20 = *v19;
        }
        else
        {
          v20 = v14;
          LODWORD(v5) = v16;
        }
        if ( v18 != v13 )
        {
          v14 = *v13;
          if ( v20 + 1 == *v13 )
            goto LABEL_19;
        }
        if ( v10 )
          break;
        if ( v34 )
        {
          v23 = *(char **)a2;
          v22 = 1;
          v21 = 2;
          if ( *(_QWORD *)(a2 + 16) < 2u )
            goto LABEL_24;
          goto LABEL_13;
        }
LABEL_14:
        if ( v15 + 1 < v20 || (v35 = v20, result = (__int64)sub_357520((__int64 *)a2), v15 != v35) )
          result = (__int64)sub_357520((__int64 *)a2);
        if ( v18 == v13 )
          return result;
        v15 = *v13;
        v12 = *a5;
        v10 = *(_QWORD *)(a2 + 8);
        v14 = *v13;
        v17 = (__int64)a5[1];
LABEL_19:
        ++v13;
        v16 = v5;
      }
      if ( v34 == v10 - 1 )
        goto LABEL_14;
      v21 = v10 + 1;
      v22 = v10;
      v23 = *(char **)a2;
      --v10;
      if ( *(_QWORD *)(a2 + 16) < v21 )
      {
LABEL_24:
        v39 = v10;
        v38 = v20;
        v37 = v22;
        v36 = v21;
        v24 = qvector_reserve(a2, v23, v21, 1);
        v10 = v39;
        v20 = v38;
        *(_QWORD *)a2 = v24;
        v22 = v37;
        v23 = (char *)v24;
        v21 = v36;
      }
LABEL_13:
      *(_QWORD *)(a2 + 8) = v21;
      v23[v10] = 44;
      *(_BYTE *)(*(_QWORD *)a2 + v22) = 0;
      goto LABEL_14;
    }
    return result;
  }
  v25 = *(_QWORD *)(a2 + 8);
  if ( v25 )
  {
    v28 = v25 + 11;
    v27 = v25 + 12;
    v26 = *(char **)a2;
    --v25;
    if ( *(_QWORD *)(a2 + 16) >= v27 )
      goto LABEL_27;
  }
  else
  {
    v26 = *(char **)a2;
    v27 = 13;
    v28 = 12;
    if ( *(_QWORD *)(a2 + 16) >= 0xDu )
      goto LABEL_27;
  }
  v32 = qvector_reserve(a2, v26, v27, 1);
  *(_QWORD *)a2 = v32;
  v26 = (char *)v32;
LABEL_27:
  result = 0x20746C7561666564LL;
  *(_QWORD *)(a2 + 8) = v27;
  v26[v28] = 0;
  qmemcpy((void *)(*(_QWORD *)a2 + v25), "default case", 12);
  if ( a5 )
  {
    v29 = *(_QWORD *)(a2 + 8);
    if ( v29 )
    {
      v30 = v29 + 1;
      v5 = v29 + 2;
      --v29;
    }
    else
    {
      v5 = 3;
      v30 = 2;
    }
    v31 = *(char **)a2;
    if ( *(_QWORD *)(a2 + 16) < v5 )
    {
      v33 = qvector_reserve(a2, v31, v5, 1);
      *(_QWORD *)a2 = v33;
      v31 = (char *)v33;
    }
    *(_QWORD *)(a2 + 8) = v5;
    v31[v30] = 0;
    *(_WORD *)(*(_QWORD *)a2 + v29) = 8236;
    goto LABEL_3;
  }
  return result;
}

