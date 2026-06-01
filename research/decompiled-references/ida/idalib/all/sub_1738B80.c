void __fastcall sub_1738B80(__int64 a1, __int64 a2, __int64 a3, char ***a4)
{
  __int64 v4; // r9
  __int64 v5; // r15
  __int64 v6; // r14
  void *v7; // rdi
  __int64 *v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r12
  __int64 *v11; // r10
  __int64 v12; // r11
  unsigned int *v13; // rdi
  unsigned int *v14; // rsi
  size_t v15; // r14
  size_t v16; // rcx
  size_t v17; // rdx
  int v18; // eax
  __int64 v19; // r13
  char v20; // al
  bool v21; // zf
  char ***v22; // rdi
  char ***v23; // rbp
  char ***v24; // r15
  __int64 v25; // r12
  char ***v26; // r13
  char **v27; // r15
  char *v28; // rsi
  size_t v29; // r10
  char **v30; // r9
  char *v31; // rdi
  size_t v32; // r8
  size_t v33; // rdx
  int v34; // eax
  int v35; // eax
  char ***v36; // rdx
  __int64 v37; // rbx
  char v38; // al
  void *v39; // rdi
  __int64 *v40; // rdi
  char v41; // al
  __int64 v42; // r13
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 v45; // r13
  __int64 v46; // [rsp+8h] [rbp-D0h]
  char **v47; // [rsp+8h] [rbp-D0h]
  __int64 v48; // [rsp+10h] [rbp-C8h]
  __int64 v49; // [rsp+10h] [rbp-C8h]
  __int64 v50; // [rsp+10h] [rbp-C8h]
  size_t v51; // [rsp+10h] [rbp-C8h]
  __int64 *v52; // [rsp+18h] [rbp-C0h]
  size_t v53; // [rsp+18h] [rbp-C0h]
  __int64 v54; // [rsp+20h] [rbp-B8h]
  char **v55; // [rsp+20h] [rbp-B8h]
  size_t v56; // [rsp+28h] [rbp-B0h]
  __int64 v57; // [rsp+38h] [rbp-A0h]
  __int64 v59; // [rsp+48h] [rbp-90h]
  char **v62; // [rsp+60h] [rbp-78h]
  void *ptr; // [rsp+68h] [rbp-70h] BYREF
  int v64; // [rsp+70h] [rbp-68h]
  __int64 v65; // [rsp+78h] [rbp-60h] BYREF
  char v66; // [rsp+80h] [rbp-58h]
  int v67; // [rsp+88h] [rbp-50h]
  char **v68; // [rsp+90h] [rbp-48h]

  v4 = a1;
  v5 = a2;
  v6 = a1;
  v59 = (a3 - 1) / 2;
  if ( a2 < v59 )
  {
    do
    {
      v44 = 2 * (v5 + 1);
      v8 = (__int64 *)(v4 + 112 * (v5 + 1));
      v9 = 56 * (v44 - 1);
      v10 = *v8;
      v46 = 112 * (v5 + 1);
      v11 = (__int64 *)(v4 + v9);
      v12 = *(_QWORD *)(v4 + v9);
      v13 = *(unsigned int **)(*v8 + 16);
      v14 = *(unsigned int **)(v12 + 16);
      v15 = *v13;
      v16 = *v14;
      v17 = v15;
      if ( v16 <= v15 )
        v17 = *v14;
      if ( v17
        && (v57 = v4,
            v56 = *v14,
            v54 = *(_QWORD *)(v4 + v9),
            v52 = (__int64 *)(v4 + v9),
            v18 = memcmp(v13 + 4, v14 + 4, v17),
            v11 = v52,
            v12 = v54,
            v16 = v56,
            v9 = 56 * (v44 - 1),
            v4 = v57,
            v18) )
      {
        if ( v18 < 0 )
        {
          v10 = v54;
          v8 = v52;
          --v44;
        }
        else
        {
          v9 = 112 * (v5 + 1);
        }
        v46 = v9;
      }
      else if ( v16 != v15 )
      {
        if ( v16 > v15 )
        {
          v10 = v12;
          v8 = v11;
          --v44;
        }
        else
        {
          v9 = 112 * (v5 + 1);
        }
        v46 = v9;
      }
      v19 = v4 + 56 * v5;
      v20 = *((_BYTE *)v8 + 32);
      v21 = *(_BYTE *)(v19 + 32) == 0;
      *(_QWORD *)v19 = v10;
      v22 = (char ***)(v19 + 8);
      if ( v21 )
      {
        if ( v20 )
        {
          *(_QWORD *)(v19 + 8) = v19 + 24;
          *(_QWORD *)(v19 + 16) = 0x100000000LL;
          if ( *((_DWORD *)v8 + 4) )
          {
            v50 = v4;
            sub_1712470(v22, (char ***)v8 + 1);
            v4 = v50;
          }
          *(_BYTE *)(v19 + 32) = 1;
        }
      }
      else if ( v20 )
      {
        v49 = v4;
        sub_1712470(v22, (char ***)v8 + 1);
        v4 = v49;
      }
      else
      {
        v7 = *(void **)(v19 + 8);
        *(_BYTE *)(v19 + 32) = 0;
        if ( v7 != (void *)(v19 + 24) )
        {
          v48 = v4;
          free(v7);
          v4 = v48;
        }
      }
      v5 = v44;
      *(_DWORD *)(v19 + 40) = *((_DWORD *)v8 + 10);
      *(_QWORD *)(v19 + 48) = v8[6];
    }
    while ( v44 < v59 );
    v45 = v46;
    v6 = v4;
  }
  else
  {
    v44 = a2;
    v45 = 56 * a2;
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v44 )
  {
    v44 = 2 * v44 + 1;
    v42 = v6 + v45;
    v43 = v6 + 56 * v44;
    *(_QWORD *)v42 = *(_QWORD *)v43;
    sub_17125C0(v42 + 8, v43 + 8);
    *(_DWORD *)(v42 + 40) = *(_DWORD *)(v43 + 40);
    *(_QWORD *)(v42 + 48) = *(_QWORD *)(v43 + 48);
    v45 = 56 * v44;
  }
  v23 = (char ***)(v6 + v45);
  v62 = *a4;
  sub_1737F30((__int64)&ptr, (__int64)(a4 + 1));
  v67 = *((_DWORD *)a4 + 10);
  v24 = (char ***)(v6 + v45 + 8);
  v68 = a4[6];
  v25 = (v44 - 1) / 2;
  if ( v44 <= a2 )
  {
    v55 = v62;
  }
  else
  {
    v26 = v23 + 1;
    v55 = v62;
    v27 = v62;
    while ( 1 )
    {
      v28 = v27[2];
      v23 = (char ***)(v6 + 56 * v25);
      v29 = *(unsigned int *)v28;
      v30 = *v23;
      v31 = (*v23)[2];
      v32 = *(unsigned int *)v31;
      v33 = v32;
      if ( v29 <= v32 )
        v33 = *(unsigned int *)v28;
      if ( v33
        && (v53 = *(unsigned int *)v31,
            v51 = *(unsigned int *)v28,
            v47 = *v23,
            v34 = memcmp(v31 + 16, v28 + 16, v33),
            v30 = v47,
            v29 = v51,
            v32 = v53,
            v34) )
      {
        if ( v34 >= 0 )
          goto LABEL_36;
      }
      else if ( v29 == v32 || v29 <= v32 )
      {
LABEL_36:
        v24 = v26;
        v23 = (char ***)(v6 + 56 * v44);
        goto LABEL_37;
      }
      v36 = v23 + 1;
      v37 = v6 + 56 * v44;
      v38 = *((_BYTE *)v23 + 32);
      v21 = *(_BYTE *)(v37 + 32) == 0;
      *(_QWORD *)v37 = v30;
      if ( v21 )
      {
        if ( v38 )
        {
          *(_QWORD *)(v37 + 8) = v37 + 24;
          *(_QWORD *)(v37 + 16) = 0x100000000LL;
          if ( *((_DWORD *)v23 + 4) )
          {
            sub_1712470(v26, v23 + 1);
            v27 = v62;
            v36 = v23 + 1;
            v55 = v62;
          }
          *(_BYTE *)(v37 + 32) = 1;
        }
      }
      else if ( v38 )
      {
        sub_1712470(v26, v23 + 1);
        v27 = v62;
        v36 = v23 + 1;
        v55 = v62;
      }
      else
      {
        v39 = *(void **)(v37 + 8);
        *(_BYTE *)(v37 + 32) = 0;
        if ( v39 != (void *)(v37 + 24) )
        {
          free(v39);
          v27 = v62;
          v36 = v23 + 1;
        }
        v55 = v27;
      }
      v26 = v36;
      *(_DWORD *)(v37 + 40) = *((_DWORD *)v23 + 10);
      *(_QWORD *)(v37 + 48) = v23[6];
      v44 = v25;
      if ( a2 >= v25 )
        break;
      v25 = (v25 - 1) / 2;
    }
    v24 = v36;
  }
LABEL_37:
  v21 = *((_BYTE *)v23 + 32) == 0;
  *v23 = v55;
  if ( !v21 )
  {
    if ( v66 )
    {
      sub_1712470(v24, (char ***)&ptr);
      v41 = v66;
      goto LABEL_60;
    }
    v40 = (__int64 *)v23[1];
    *((_BYTE *)v23 + 32) = 0;
    if ( v40 != (__int64 *)(v23 + 3) )
    {
      free(v40);
      v41 = v66;
      goto LABEL_60;
    }
LABEL_64:
    *((_DWORD *)v23 + 10) = v67;
    v23[6] = v68;
    return;
  }
  if ( !v66 )
    goto LABEL_64;
  v23[1] = (char **)(v23 + 3);
  v23[2] = (char **)0x100000000LL;
  if ( v64 )
  {
    sub_1712470(v24, (char ***)&ptr);
    v41 = v66;
    *((_BYTE *)v23 + 32) = 1;
LABEL_60:
    *((_DWORD *)v23 + 10) = v67;
    v23[6] = v68;
    if ( !v41 )
      return;
    goto LABEL_41;
  }
  v35 = v67;
  *((_BYTE *)v23 + 32) = 1;
  *((_DWORD *)v23 + 10) = v35;
  v23[6] = v68;
LABEL_41:
  if ( ptr != &v65 )
    free(ptr);
}
