void **__fastcall sub_21AE800(void **a1, __int64 a2, __int64 a3)
{
  char ***v5; // rbx
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v9; // rbp
  char *v10; // rdx
  char *v11; // rax
  char v12; // al
  unsigned int v14; // eax
  unsigned int v15; // r15d
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // r15
  unsigned int v19; // eax
  unsigned int v20; // r15d
  char *v21; // rsi
  char *v22; // rax
  char **v23; // rcx
  __int64 v24; // r12
  unsigned int v25; // ebp
  int v26; // r15d
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned int v29; // eax
  int v30; // eax
  int v31; // r15d
  char *v32; // rsi
  char *v33; // rax
  char **v34; // rcx
  __int64 v35; // r12
  char ***v36; // rbp
  int v37; // ebx
  int v38; // r15d
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned int v41; // eax
  int v42; // eax
  int v43; // r15d
  unsigned int v44; // eax
  unsigned int v45; // [rsp+4h] [rbp-A4h]
  __int64 *v46; // [rsp+8h] [rbp-A0h]
  char **v47; // [rsp+10h] [rbp-98h]
  char **v48; // [rsp+10h] [rbp-98h]
  unsigned int v49; // [rsp+10h] [rbp-98h]
  void **v50; // [rsp+18h] [rbp-90h]
  void **v51; // [rsp+18h] [rbp-90h]
  void *v52; // [rsp+28h] [rbp-80h] BYREF
  void *v53; // [rsp+30h] [rbp-78h] BYREF
  __int64 v54; // [rsp+38h] [rbp-70h]
  __int64 v55; // [rsp+40h] [rbp-68h] BYREF
  void *ptr; // [rsp+48h] [rbp-60h]
  __int64 v57; // [rsp+50h] [rbp-58h]
  __int64 v58; // [rsp+68h] [rbp-40h]

  v5 = (char ***)&v53;
  v46 = (__int64 *)(a2 + 304);
  v6 = sub_21A2A40(a3);
  sub_21A4DC0((__int64 *)(a2 + 304), v6);
  v7 = a3;
  v9 = v7;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *(char **)(v9 + 16);
      v45 = v6 - 1;
      v11 = *(char **)(v9 + 8);
      if ( !v6 )
      {
        if ( v10 == v11 )
        {
          *a1 = nullptr;
        }
        else
        {
          sub_21A2C10((__int64 *)&v53, "type section ended prematurely");
          *a1 = v53;
        }
        return a1;
      }
      v53 = &v55;
      v54 = 0x100000000LL;
      ptr = v5 + 5;
      v57 = 0x400000000LL;
      v58 = 0;
      if ( v10 == v11 )
        goto LABEL_75;
      *(_QWORD *)(v9 + 8) = v11 + 1;
      v12 = *v11;
      if ( v12 != 78 )
        break;
      v14 = sub_21A2A40(v9);
      v15 = v14;
      if ( !v14 )
      {
        sub_21A2C10((__int64 *)&v52, "Rec group size cannot be 0");
        *a1 = v52;
        goto LABEL_10;
      }
      sub_21A4DC0(v46, v14 + ((__int64)(*(_QWORD *)(a2 + 312) - *(_QWORD *)(a2 + 304)) >> 6));
      v6 = v45 + v15;
      LODWORD(v58) = 2;
      sub_21AE750((__int64)v46, (__int64)v5);
      *(_BYTE *)(a2 + 615) = 1;
LABEL_22:
      if ( ptr != v5 + 5 )
        free(ptr);
      if ( v53 != &v55 )
        free(v53);
    }
    if ( v12 != 96 )
      break;
    v19 = sub_21A2A40(v9);
    if ( HIDWORD(v57) < v19 )
    {
      v49 = v19;
      sub_2237220(v5 + 3, v5 + 5, v19, 4);
      v19 = v49;
    }
    v20 = v19 - 1;
    if ( v19 )
    {
      v21 = *(char **)(v9 + 16);
      v22 = *(char **)(v9 + 8);
      if ( v21 == v22 )
        goto LABEL_75;
      v23 = (char **)(v9 + 8);
      v50 = a1;
      v24 = v9;
      v25 = v20;
      v47 = v23;
      while ( 1 )
      {
        *(_QWORD *)(v24 + 8) = v22 + 1;
        v26 = (unsigned __int8)*v22;
        if ( (unsigned int)(v26 - 105) <= 0x16 )
        {
          if ( ((1LL << ((unsigned __int8)v26 - 105)) & 0x7C00C1) == 0 )
            v26 = 255;
        }
        else
        {
          v29 = v26 - 99;
          v26 = 255;
          if ( v29 <= 1 )
            sub_21A2AC0(v47, v21);
        }
        v27 = (unsigned int)v57;
        v28 = (unsigned int)v57 + 1LL;
        if ( v28 > HIDWORD(v57) )
        {
          sub_2237220(v5 + 3, v5 + 5, v28, 4);
          v27 = (unsigned int)v57;
        }
        --v25;
        *((_DWORD *)ptr + v27) = v26;
        LODWORD(v57) = v57 + 1;
        if ( v25 == -1 )
          break;
        v21 = *(char **)(v24 + 16);
        v22 = *(char **)(v24 + 8);
        if ( v21 == v22 )
          goto LABEL_75;
      }
      v9 = v24;
      a1 = v50;
    }
    v30 = sub_21A2A40(v9);
    v31 = v30 - 1;
    if ( v30 )
    {
      v32 = *(char **)(v9 + 16);
      v33 = *(char **)(v9 + 8);
      if ( v33 == v32 )
LABEL_75:
        sub_21A2960();
      v34 = (char **)(v9 + 8);
      v51 = a1;
      v35 = v9;
      v36 = v5;
      v48 = v34;
      v37 = v31;
      while ( 1 )
      {
        *(_QWORD *)(v35 + 8) = v33 + 1;
        v38 = (unsigned __int8)*v33;
        if ( (unsigned int)(v38 - 105) <= 0x16 )
        {
          if ( ((1LL << ((unsigned __int8)v38 - 105)) & 0x7C00C1) == 0 )
            v38 = 255;
        }
        else
        {
          v41 = v38 - 99;
          v38 = 255;
          if ( v41 <= 1 )
            sub_21A2AC0(v48, v32);
        }
        v39 = (unsigned int)v54;
        v40 = (unsigned int)v54 + 1LL;
        if ( v40 > HIDWORD(v54) )
        {
          sub_2237220(v36, &v55, v40, 4);
          v39 = (unsigned int)v54;
        }
        --v37;
        *((_DWORD *)v53 + v39) = v38;
        LODWORD(v54) = v54 + 1;
        if ( v37 == -1 )
          break;
        v32 = *(char **)(v35 + 16);
        v33 = *(char **)(v35 + 8);
        if ( v32 == v33 )
          goto LABEL_75;
      }
      v5 = v36;
      v9 = v35;
      a1 = v51;
    }
    sub_21AE750((__int64)v46, (__int64)v5);
    if ( ptr != v5 + 5 )
      free(ptr);
    if ( v53 != &v55 )
      free(v53);
    v6 = v45;
  }
  if ( (unsigned __int8)(v12 - 79) > 1u )
  {
LABEL_7:
    if ( v12 == 95 )
    {
      v42 = sub_21A2A40(v9);
      v43 = v42 - 1;
      if ( v42 )
      {
        do
        {
          --v43;
          v44 = sub_21A2A40(v9);
          sub_21A2B80(v9, v44);
          sub_21A2A40(v9);
        }
        while ( v43 != -1 );
      }
    }
    else
    {
      if ( v12 != 94 )
      {
        sub_21A2C10((__int64 *)&v52, "bad form");
        *a1 = v52;
        goto LABEL_10;
      }
      v17 = sub_21A2A40(v9);
      sub_21A2B80(v9, v17);
      sub_21A2A40(v9);
    }
    LODWORD(v58) = 2;
    v18 = *(_QWORD *)(a2 + 312);
    if ( v18 == *(_QWORD *)(a2 + 320) )
    {
      sub_21AE3F0((__int64)v46, *(char **)(a2 + 312), (__int64)v5);
    }
    else
    {
      *(_QWORD *)v18 = v18 + 16;
      *(_QWORD *)(v18 + 8) = 0x100000000LL;
      if ( (_DWORD)v54 )
        sub_2124940((char ***)v18, v5);
      *(_QWORD *)(v18 + 24) = v18 + 40;
      *(_QWORD *)(v18 + 32) = 0x400000000LL;
      if ( (_DWORD)v57 )
        sub_2124940((char ***)(v18 + 24), v5 + 3);
      *(_QWORD *)(v18 + 56) = v58;
      *(_QWORD *)(a2 + 312) += 64LL;
    }
    *(_BYTE *)(a2 + 615) = 1;
    v6 = v45;
    goto LABEL_22;
  }
  v16 = sub_21A2A40(v9);
  if ( !v16 )
  {
LABEL_20:
    v12 = sub_21A2A40(v9);
    goto LABEL_7;
  }
  if ( v16 == 1 )
  {
    sub_21A2A40(v9);
    goto LABEL_20;
  }
  sub_21A2C10((__int64 *)&v52, "Invalid number of supertypes");
  *a1 = v52;
LABEL_10:
  if ( ptr != v5 + 5 )
    free(ptr);
  if ( v53 != v5 + 2 )
    free(v53);
  return a1;
}
