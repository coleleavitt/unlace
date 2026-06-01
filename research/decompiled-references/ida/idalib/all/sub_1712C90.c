char *__fastcall sub_1712C90(__int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  char *v6; // r13
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // r11
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  char *v13; // r9
  char *v14; // rbp
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rax
  char *v28; // rdi
  __int64 v29; // r10
  signed __int64 v30; // rax
  char *v31; // r15
  __int64 v32; // r11
  unsigned __int64 v33; // rdx
  char *v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+8h] [rbp-60h]
  char *v37; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+8h] [rbp-60h]
  __int64 v39; // [rsp+8h] [rbp-60h]
  __int64 v40; // [rsp+8h] [rbp-60h]
  char *v41; // [rsp+8h] [rbp-60h]
  char *v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+10h] [rbp-58h]
  char *v44; // [rsp+10h] [rbp-58h]
  char *v45; // [rsp+10h] [rbp-58h]
  __int64 v46; // [rsp+18h] [rbp-50h]
  signed __int64 v47; // [rsp+18h] [rbp-50h]
  int v48; // [rsp+20h] [rbp-48h]
  __int64 v49; // [rsp+20h] [rbp-48h]
  __int64 v50; // [rsp+28h] [rbp-40h]

  v6 = a2;
  v8 = a3;
  v9 = *((unsigned int *)a1 + 2);
  v10 = *a1;
  v11 = *((unsigned int *)a1 + 3);
  v12 = 8 * v9;
  v13 = &a2[-v10];
  v14 = (char *)(v10 + 8 * v9);
  if ( v6 == v14 )
  {
    if ( a3 == a4 )
    {
      LODWORD(v26) = v9;
      if ( v9 <= v11 )
        goto LABEL_41;
      v42 = v13;
      sub_2237220(a1, a1 + 2, v9, 8);
      LODWORD(v26) = *((_DWORD *)a1 + 2);
      v13 = v42;
    }
    else
    {
      v24 = a3;
      v25 = 0;
      do
      {
        do
          v24 = *(_QWORD *)(v24 + 128);
        while ( v24 && (*(char *)(v24 + 28) < 0 || (*(_BYTE *)(v24 + 8) & 6) != 0) );
        ++v25;
      }
      while ( v24 != a4 );
      v26 = v9 + v25;
      if ( v9 + v25 > v11 )
      {
        v41 = v13;
        sub_2237220(a1, a1 + 2, v26, 8);
        v35 = *((unsigned int *)a1 + 2);
        v13 = v41;
        v14 = (char *)(*a1 + 8 * v35);
        LODWORD(v26) = v35 + v25;
      }
      do
      {
        *(_QWORD *)v14 = v8;
        v14 += 8;
        do
          v8 = *(_QWORD *)(v8 + 128);
        while ( v8 && (*(char *)(v8 + 28) < 0 || (*(_BYTE *)(v8 + 8) & 6) != 0) );
      }
      while ( v8 != a4 );
    }
    v6 = &v13[*a1];
LABEL_41:
    *((_DWORD *)a1 + 2) = v26;
    return v6;
  }
  v15 = a3;
  if ( a3 == a4 )
  {
    v19 = v9;
    v18 = 0;
  }
  else
  {
    v16 = a3;
    v17 = 0;
    do
    {
      do
        v16 = *(_QWORD *)(v16 + 128);
      while ( v16 && (*(char *)(v16 + 28) < 0 || (*(_BYTE *)(v16 + 8) & 6) != 0) );
      ++v17;
    }
    while ( v16 != a4 );
    v18 = v17;
    v19 = v9 + v17;
  }
  if ( v19 > v11 )
  {
    v43 = v15;
    v37 = v13;
    sub_2237220(a1, a1 + 2, v19, 8);
    v9 = *((unsigned int *)a1 + 2);
    v10 = *a1;
    v13 = v37;
    v15 = v43;
    v12 = 8 * v9;
    v14 = (char *)(*a1 + 8 * v9);
    v6 = &v37[*a1];
  }
  v20 = (v12 - (__int64)v13) >> 3;
  if ( v20 >= v18 )
  {
    v27 = v12;
    v28 = v14;
    v29 = 8 * (v9 - v18);
    v30 = v27 - v29;
    v31 = (char *)(v10 + v29);
    v32 = v30 >> 3;
    v33 = (v30 >> 3) + v9;
    if ( v33 > *((unsigned int *)a1 + 3) )
    {
      v50 = v30 >> 3;
      v49 = v15;
      v47 = v30;
      v45 = v13;
      v40 = v29;
      sub_2237220(a1, a1 + 2, v33, 8);
      v9 = *((unsigned int *)a1 + 2);
      LODWORD(v32) = v50;
      v15 = v49;
      v28 = (char *)(*a1 + 8 * v9);
      v30 = v47;
      v13 = v45;
      v29 = v40;
    }
    if ( v31 != v14 )
    {
      v48 = v32;
      v46 = v15;
      v44 = v13;
      v38 = v29;
      memmove(v28, v31, v30);
      LODWORD(v9) = *((_DWORD *)a1 + 2);
      LODWORD(v32) = v48;
      v15 = v46;
      v13 = v44;
      v29 = v38;
    }
    *((_DWORD *)a1 + 2) = v32 + v9;
    if ( v31 != v6 )
    {
      v39 = v15;
      memmove(&v14[-(v29 - (_QWORD)v13)], v6, v29 - (_QWORD)v13);
      v15 = v39;
    }
    v34 = v6;
    if ( v15 != a4 )
    {
      do
      {
        *(_QWORD *)v34 = v8;
        v34 += 8;
        do
          v8 = *(_QWORD *)(v8 + 128);
        while ( v8 && (*(char *)(v8 + 28) < 0 || (*(_BYTE *)(v8 + 8) & 6) != 0) );
      }
      while ( v8 != a4 );
    }
  }
  else
  {
    v21 = v18 + v9;
    *((_DWORD *)a1 + 2) = v21;
    if ( v14 != v6 )
    {
      v36 = (v12 - (__int64)v13) >> 3;
      memcpy((void *)(v10 + 8LL * v21 - (v12 - (_QWORD)v13)), v6, v12 - (_QWORD)v13);
      v20 = v36;
    }
    v22 = 0;
    if ( v20 )
    {
      do
      {
        *(_QWORD *)&v6[8 * v22] = v8;
        do
          v8 = *(_QWORD *)(v8 + 128);
        while ( v8 && (*(char *)(v8 + 28) < 0 || (*(_BYTE *)(v8 + 8) & 6) != 0) );
        ++v22;
      }
      while ( v20 != v22 );
    }
    while ( v8 != a4 )
    {
LABEL_21:
      *(_QWORD *)v14 = v8;
      v14 += 8;
      while ( 1 )
      {
        v8 = *(_QWORD *)(v8 + 128);
        if ( !v8 )
          break;
        if ( *(char *)(v8 + 28) >= 0 && (*(_BYTE *)(v8 + 8) & 6) == 0 )
        {
          if ( v8 != a4 )
            goto LABEL_21;
          return v6;
        }
      }
    }
  }
  return v6;
}
