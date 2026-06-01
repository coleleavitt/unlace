__int64 __fastcall sub_20D8AF0(__int64 a1)
{
  size_t v1; // rax
  char *v2; // r13
  char *v3; // r12
  size_t v4; // r15
  size_t v5; // r14
  size_t v6; // r15
  __int64 v7; // rbx
  size_t v8; // r15
  size_t v9; // r14
  __int64 result; // rax
  __int64 v11; // r12
  char *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  char *v15; // r12
  char *v16; // r13
  size_t v17; // r13
  size_t v18; // r14
  char *v19; // rbx
  char *v20; // r12
  __int64 v21; // r13
  __int64 v22; // r13
  void *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rax
  char v27; // r12
  void *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r13
  void *v31; // r14
  char v32; // cl
  int v33; // [rsp+4h] [rbp-64h]
  __int64 v34; // [rsp+8h] [rbp-60h]
  size_t v35; // [rsp+10h] [rbp-58h]
  __int64 v36[8]; // [rsp+28h] [rbp-40h] BYREF

  v33 = sub_20CFB50((char **)a1, *(char **)(a1 + 8));
  v1 = j__strlen("Do");
  v2 = *(char **)(a1 + 8);
  v3 = *(char **)a1;
  v4 = v1;
  v5 = (size_t)&v2[-*(_QWORD *)a1];
  if ( sub_20D1BF0(v5, *(const void **)a1, v1, "Do") )
  {
    *(_QWORD *)a1 = &v3[v4];
    v7 = sub_20D1380(a1 + 816, "noexcept");
    if ( v7 )
    {
      v3 = *(char **)a1;
      v2 = *(char **)(a1 + 8);
      goto LABEL_4;
    }
    return 0;
  }
  v6 = j__strlen("DO");
  if ( sub_20D1BF0(v5, v3, v6, "DO") )
  {
    *(_QWORD *)a1 = &v3[v6];
    v11 = sub_20DA8A0(a1);
    if ( v11 )
    {
      v12 = *(char **)a1;
      if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v12 == 69 )
      {
        *(_QWORD *)a1 = v12 + 1;
        v13 = sub_20CF970(a1 + 816, 24);
        *(_WORD *)(v13 + 8) = 16401;
        v7 = v13;
        LOBYTE(v13) = *(_BYTE *)(v13 + 10);
        *(_QWORD *)(v7 + 16) = v11;
        v3 = *(char **)a1;
        *(_BYTE *)(v7 + 10) = v13 & 0xF0 | 5;
        *(_QWORD *)v7 = off_2BE6D20;
        v2 = *(char **)(a1 + 8);
        goto LABEL_4;
      }
    }
    return 0;
  }
  v7 = 0;
  v8 = j__strlen("Dw");
  if ( sub_20D1BF0(v5, v3, v8, "Dw") )
  {
    v19 = v2;
    v20 = &v3[v8];
    v21 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v20;
    v22 = v21 >> 3;
    while ( v20 == v19 || *v20 != 69 )
    {
      result = sub_20D8F30(a1);
      v36[0] = result;
      if ( !result )
        return result;
      sub_20D8690((char **)(a1 + 16), v36);
      v20 = *(char **)a1;
      v19 = *(char **)(a1 + 8);
    }
    *(_QWORD *)a1 = v20 + 1;
    v23 = sub_20CFAD0(a1, v22);
    v25 = v24;
    v26 = sub_20CF970(a1 + 816, 32);
    *(_WORD *)(v26 + 8) = 16402;
    v7 = v26;
    LOBYTE(v26) = *(_BYTE *)(v26 + 10);
    *(_QWORD *)(v7 + 24) = v25;
    v3 = *(char **)a1;
    *(_QWORD *)(v7 + 16) = v23;
    *(_BYTE *)(v7 + 10) = v26 & 0xF0 | 5;
    *(_QWORD *)v7 = off_2BE6D80;
    v2 = *(char **)(a1 + 8);
  }
LABEL_4:
  v9 = j__strlen("Dx");
  if ( sub_20D1BF0(v2 - v3, v3, v9, "Dx") )
  {
    v3 += v9;
    *(_QWORD *)a1 = v3;
  }
  if ( v2 == v3 || *v3 != 70 )
    return 0;
  *(_QWORD *)a1 = v3 + 1;
  if ( v2 != v3 + 1 && v3[1] == 89 )
    *(_QWORD *)a1 = v3 + 2;
  v14 = sub_20D8F30(a1);
  if ( !v14 )
    return 0;
  v15 = *(char **)a1;
  v34 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
  v16 = *(char **)(a1 + 8);
  while ( 1 )
  {
    if ( v15 == v16 )
      goto LABEL_24;
LABEL_22:
    if ( *v15 == 69 )
    {
      *(_QWORD *)a1 = v15 + 1;
      v27 = 0;
      goto LABEL_36;
    }
    if ( *v15 != 118 )
      break;
    *(_QWORD *)a1 = ++v15;
  }
  while ( 1 )
  {
LABEL_24:
    v17 = v16 - v15;
    v18 = j__strlen("RE");
    if ( sub_20D1BF0(v17, v15, v18, "RE") )
    {
      *(_QWORD *)a1 = &v15[v18];
      v27 = 1;
      goto LABEL_36;
    }
    v35 = j__strlen("OE");
    if ( sub_20D1BF0(v17, v15, v35, "OE") )
      break;
    result = sub_20D8F30(a1);
    v36[0] = result;
    if ( !result )
      return result;
    sub_20D8690((char **)(a1 + 16), v36);
    v15 = *(char **)a1;
    v16 = *(char **)(a1 + 8);
    if ( *(char **)a1 != v16 )
      goto LABEL_22;
  }
  *(_QWORD *)a1 = &v15[v35];
  v27 = 2;
LABEL_36:
  v28 = sub_20CFAD0(a1, v34);
  v30 = v29;
  v31 = v28;
  result = sub_20CF970(a1 + 816, 56);
  *(_WORD *)(result + 8) = 16;
  v32 = *(_BYTE *)(result + 10);
  *(_QWORD *)(result + 16) = v14;
  *(_QWORD *)(result + 24) = v31;
  *(_QWORD *)result = off_2BE6CC0;
  *(_QWORD *)(result + 32) = v30;
  *(_BYTE *)(result + 10) = v32 & 0xF0 | 1;
  *(_DWORD *)(result + 40) = v33;
  *(_BYTE *)(result + 44) = v27;
  *(_QWORD *)(result + 48) = v7;
  return result;
}
