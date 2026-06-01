__int64 __fastcall sub_2DC5E0(char **a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // r12
  void *v8; // r13
  int v9; // eax
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // r12
  void *v13; // r13
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // r13d
  char *v17; // rcx
  unsigned __int64 v18; // r13
  __int64 v19; // r12
  unsigned __int64 v20; // rdi
  __int64 v21; // rbp
  char *v22; // r11
  __int64 result; // rax
  __int64 v24; // rsi
  int v25; // edx
  char *v26; // rcx
  char *v27; // rdx
  char *v28; // r14
  char *v29; // rbx
  int v30; // eax
  char *v31; // rdx
  char *v32; // rdx
  void *v33; // rbp
  void *v34; // rbp
  char *v35; // rax
  char *v36; // rdx
  __int64 v37; // rdx
  char *v38; // rbp
  char *v39; // rax
  __int64 v40; // rdx
  char *v41; // rsi
  char *v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rsi
  char *v48; // rbx
  char *v49; // rbp
  char *v50; // rbp
  __int64 v51; // rsi
  void *v52; // [rsp+8h] [rbp-90h]
  void *v53; // [rsp+8h] [rbp-90h]
  char *v54; // [rsp+8h] [rbp-90h]
  char *v55; // [rsp+10h] [rbp-88h]
  size_t v56; // [rsp+18h] [rbp-80h]
  unsigned int v57; // [rsp+20h] [rbp-78h]
  char v58; // [rsp+27h] [rbp-71h]
  char *v59; // [rsp+28h] [rbp-70h]
  _QWORD *v60; // [rsp+30h] [rbp-68h]
  char *v61; // [rsp+38h] [rbp-60h]

  v5 = *(_QWORD **)a3;
  if ( *(_QWORD *)a3 )
  {
    v6 = (_QWORD *)sub_186B270(0x20u);
    v7 = *(_QWORD **)a3;
    *v6 = 0;
    v5 = v6;
    v6[1] = 0;
    v6[2] = 1;
    v6[3] = 0;
    v8 = qword_1C7F2C0;
    if ( (*((_BYTE *)v7 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v6, v7);
      if ( (*((_BYTE *)v7 + 20) & 1) == 0 )
        goto LABEL_4;
    }
    else
    {
      *(_DWORD *)v6 = *(_DWORD *)v7;
      if ( (*((_BYTE *)v7 + 20) & 1) == 0 )
      {
LABEL_4:
        v9 = *((_DWORD *)v7 + 4);
        *((_BYTE *)v5 + 20) &= ~1u;
        *((_DWORD *)v5 + 4) = v9;
        goto LABEL_5;
      }
    }
    sub_182C690(v8, v5 + 2, v7 + 2);
  }
LABEL_5:
  v10 = *(_QWORD **)(a3 + 8);
  if ( !v10 )
    goto LABEL_9;
  v11 = (_QWORD *)sub_186B270(0x20u);
  *v11 = 0;
  v10 = v11;
  v12 = *(_QWORD *)(a3 + 8);
  v11[1] = 0;
  v11[2] = 1;
  v11[3] = 0;
  v13 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v11, v12);
    if ( (*(_BYTE *)(v12 + 20) & 1) == 0 )
      goto LABEL_8;
  }
  else
  {
    *(_DWORD *)v11 = *(_DWORD *)v12;
    if ( (*(_BYTE *)(v12 + 20) & 1) == 0 )
    {
LABEL_8:
      v14 = *(_DWORD *)(v12 + 16);
      *((_BYTE *)v10 + 20) &= ~1u;
      *((_DWORD *)v10 + 4) = v14;
      goto LABEL_9;
    }
  }
  sub_182C690(v13, v10 + 2, v12 + 16);
LABEL_9:
  v58 = *(_BYTE *)(a3 + 16);
  v15 = *((unsigned int *)a1 + 2);
  v16 = 2 * v15;
  if ( 3 * (int)v15 < (unsigned int)(4 * (*((_DWORD *)a1 + 3) + *((_DWORD *)a1 + 4))) )
  {
    v56 = 40LL * v16;
    v35 = (char *)sub_186B270(v56);
    v17 = v35;
    if ( v16 )
    {
      v36 = &v35[40 * v16];
      do
      {
        *(_QWORD *)v35 = 0;
        v35 += 40;
        *((_OWORD *)v35 - 2) = 0;
        *((_QWORD *)v35 - 2) = 0;
        *(v35 - 8) = 0;
      }
      while ( v35 != v36 );
    }
    v37 = *((unsigned int *)a1 + 2);
    v38 = *a1;
    v19 = (__int64)&v17[v56];
    v57 = v16 - 1;
    v39 = &(*a1)[40 * (unsigned int)v37];
    if ( *a1 != v39 )
    {
      do
      {
        while ( *((_DWORD *)v38 + 1) != 2 )
        {
          v38 += 40;
          if ( v39 == v38 )
            goto LABEL_51;
        }
        v40 = 40LL * (*(_DWORD *)v38 & v57);
        v41 = &v17[v40];
        if ( v56 == v40 )
        {
LABEL_66:
          if ( v17 == v41 )
          {
LABEL_77:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v42 = v17;
          while ( *((_DWORD *)v42 + 1) )
          {
            v42 += 40;
            if ( v41 == v42 )
              goto LABEL_77;
          }
        }
        else
        {
          v42 = &v17[v40];
          while ( *((_DWORD *)v42 + 1) )
          {
            v42 += 40;
            if ( (char *)v19 == v42 )
              goto LABEL_66;
          }
        }
        v43 = *((_QWORD *)v38 + 1);
        *(_DWORD *)v42 = *(_DWORD *)v38;
        v38 += 40;
        v44 = *((_QWORD *)v38 - 3);
        *((_DWORD *)v42 + 1) = 2;
        *((_QWORD *)v42 + 1) = v43;
        v45 = *((_QWORD *)v42 + 2);
        *((_QWORD *)v42 + 2) = v44;
        v46 = *((_QWORD *)v38 - 2);
        *((_QWORD *)v38 - 3) = v45;
        v47 = *((_QWORD *)v42 + 3);
        *((_QWORD *)v42 + 3) = v46;
        *((_QWORD *)v38 - 2) = v47;
        v42[32] = *(v38 - 8);
      }
      while ( v39 != v38 );
LABEL_51:
      v37 = *((unsigned int *)a1 + 2);
      v39 = *a1;
    }
    if ( v39 )
    {
      if ( (_DWORD)v37 )
      {
        v59 = v17;
        v61 = v39;
        v55 = &v39[40 * v37];
        v60 = v5;
        v48 = v39;
        do
        {
          while ( 1 )
          {
            v49 = *((char **)v48 + 3);
            if ( v49 )
            {
              v52 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, *((_QWORD *)v48 + 3));
              sub_182CBA0(v52, v49 + 16);
              sub_186B220(v49);
            }
            v50 = *((char **)v48 + 2);
            if ( !v50 )
              break;
            v51 = *((_QWORD *)v48 + 2);
            v48 += 40;
            v53 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v51);
            sub_182CBA0(v53, v50 + 16);
            sub_186B220(v50);
            if ( v55 == v48 )
              goto LABEL_59;
          }
          v48 += 40;
        }
        while ( v48 != v55 );
LABEL_59:
        v17 = v59;
        v5 = v60;
        v39 = v61;
      }
      v54 = v17;
      sub_186B220(v39);
      v17 = v54;
    }
    *((_DWORD *)a1 + 2) = v16;
    v18 = a2;
    *a1 = v17;
    *((_DWORD *)a1 + 4) = 0;
    if ( a2 )
      goto LABEL_11;
  }
  else
  {
    v17 = *a1;
    v18 = a2;
    v57 = v15 - 1;
    v56 = 40 * v15;
    v19 = (__int64)&(*a1)[40 * v15];
    if ( a2 )
    {
LABEL_11:
      if ( (v18 & 7) == 1 )
        v20 = v18 >> 3;
      else
        LODWORD(v20) = *(_DWORD *)(v18 - 8);
      goto LABEL_13;
    }
  }
  LODWORD(v20) = -1640531495;
LABEL_13:
  v21 = (unsigned int)v20 & v57;
  v22 = &v17[40 * v21];
  if ( 40 * v21 != v56 )
  {
    result = (__int64)&v17[40 * v21];
    v24 = 0;
    while ( 1 )
    {
      v25 = *(_DWORD *)(result + 4);
      if ( v25 == 2 )
      {
        if ( (_DWORD)v20 == *(_DWORD *)result && v18 == *(_QWORD *)(result + 8) )
        {
          v26 = *(char **)(result + 24);
          *(_DWORD *)(result + 4) = 2;
          *(_QWORD *)(result + 24) = v10;
          *(_QWORD *)(result + 8) = a2;
          v27 = *(char **)(result + 16);
          v28 = v26;
          *(_QWORD *)(result + 16) = v5;
          *(_BYTE *)(result + 32) = v58;
          v29 = v27;
          goto LABEL_34;
        }
      }
      else
      {
        if ( !v25 )
        {
          if ( v24 )
            goto LABEL_32;
          v24 = result;
          goto LABEL_33;
        }
        v24 = result;
      }
      result += 40;
      if ( result == v19 )
        goto LABEL_25;
    }
  }
  v24 = 0;
  while ( 1 )
  {
LABEL_25:
    if ( v22 == v17 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v30 = *((_DWORD *)v17 + 1);
    if ( v30 != 2 )
      break;
    if ( (_DWORD)v20 == *(_DWORD *)v17 && v18 == *((_QWORD *)v17 + 1) )
    {
      v31 = *((char **)v17 + 3);
      *((_DWORD *)v17 + 1) = 2;
      *((_QWORD *)v17 + 3) = v10;
      *((_QWORD *)v17 + 1) = a2;
      result = *((_QWORD *)v17 + 2);
      v28 = v31;
      *((_QWORD *)v17 + 2) = v5;
      v17[32] = v58;
      v29 = (char *)result;
      goto LABEL_34;
    }
LABEL_24:
    v17 += 40;
  }
  if ( v30 )
  {
    v24 = (__int64)v17;
    goto LABEL_24;
  }
  if ( v24 )
LABEL_32:
    --*((_DWORD *)a1 + 4);
  else
    v24 = (__int64)v17;
LABEL_33:
  *(_QWORD *)(v24 + 8) = a2;
  result = *(_QWORD *)(v24 + 16);
  *(_QWORD *)(v24 + 16) = v5;
  v32 = *(char **)(v24 + 24);
  *(_QWORD *)(v24 + 24) = v10;
  v28 = v32;
  *(_BYTE *)(v24 + 32) = v58;
  v29 = (char *)result;
  *(_DWORD *)(v24 + 4) = 2;
  *(_DWORD *)v24 = v20;
  ++*((_DWORD *)a1 + 3);
LABEL_34:
  if ( v28 )
  {
    v33 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v28);
    sub_182CBA0(v33, v28 + 16);
    result = sub_186B220(v28);
  }
  if ( v29 )
  {
    v34 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v29);
    sub_182CBA0(v34, v29 + 16);
    return sub_186B220(v29);
  }
  return result;
}

