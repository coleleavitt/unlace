__int64 __fastcall sub_20DED80(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  char v6; // r12
  char *v7; // r8
  char *v8; // r13
  size_t v9; // r14
  bool v10; // al
  size_t v11; // r10
  char v12; // r14
  char *v13; // r8
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // rax
  char v17; // dl
  char *v18; // rdx
  __int64 v19; // rax
  char *v20; // rdx
  bool v22; // al
  __int64 v23; // rax
  __int64 v24; // r14
  char *v25; // rax
  void *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // r13
  char v29; // al
  int v30; // r14d
  int v31; // r14d
  char v32; // al
  char v33; // dl
  unsigned __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rax
  __int16 v38; // dx
  __int16 v39; // di
  _BYTE *v40; // rax
  int v41; // r13d
  char v42; // al
  __int64 v43; // rax
  int v44; // ecx
  char v45; // dl
  size_t v46; // [rsp+0h] [rbp-68h]
  size_t v47; // [rsp+0h] [rbp-68h]
  __int64 v48; // [rsp+0h] [rbp-68h]
  __int64 v49; // [rsp+0h] [rbp-68h]
  char v50; // [rsp+Fh] [rbp-59h]
  char *v51; // [rsp+10h] [rbp-58h]
  __int64 v52; // [rsp+18h] [rbp-50h] BYREF
  __int64 v53[8]; // [rsp+28h] [rbp-40h] BYREF

  v52 = a4;
  if ( (unsigned __int8)sub_20D8770((char **)a1, &v52) )
    return 0;
  v6 = 0;
  v7 = *(char **)(a1 + 8);
  v8 = *(char **)a1;
  if ( !a3 )
  {
LABEL_30:
    if ( v7 != v8 )
    {
      v9 = v7 - v8;
      if ( *v8 != 76 )
        goto LABEL_6;
      goto LABEL_32;
    }
LABEL_22:
    v9 = v7 - v8;
    goto LABEL_23;
  }
  if ( v7 == v8 )
    goto LABEL_22;
  if ( *v8 == 70 )
  {
    ++v8;
    v6 = 1;
    *(_QWORD *)a1 = v8;
    goto LABEL_30;
  }
  v9 = v7 - v8;
  if ( *v8 != 76 )
    goto LABEL_6;
LABEL_32:
  *(_QWORD *)a1 = ++v8;
  v9 = v7 - v8;
  if ( v8 == v7 )
  {
LABEL_23:
    v47 = j__strlen("DC");
    v22 = sub_20D1BF0(v9, v8, v47, "DC");
    v11 = v47;
    if ( !v22 )
      goto LABEL_10;
LABEL_24:
    v23 = *(_QWORD *)(a1 + 16);
    v24 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)a1 = &v8[v11];
    v48 = v23;
    while ( 1 )
    {
      v14 = sub_20D1DD0((char **)a1);
      v53[0] = v14;
      if ( !v14 )
        return v14;
      sub_20D8690((char **)(a1 + 16), v53);
      v25 = *(char **)a1;
      if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v25 == 69 )
      {
        *(_QWORD *)a1 = v25 + 1;
        v26 = sub_20CFAD0(a1, (v24 - v48) >> 3);
        v28 = v27;
        v14 = sub_20CF970(a1 + 816, 32);
        *(_WORD *)(v14 + 8) = 16437;
        v29 = *(_BYTE *)(v14 + 10);
        *(_QWORD *)(v14 + 16) = v26;
        *(_QWORD *)(v14 + 24) = v28;
        *(_BYTE *)(v14 + 10) = v29 & 0xF0 | 5;
        *(_QWORD *)v14 = off_2BE7AA0;
        goto LABEL_12;
      }
    }
  }
LABEL_6:
  if ( (unsigned __int8)(*v8 - 49) <= 8u )
  {
    v14 = sub_20D1DD0((char **)a1);
LABEL_11:
    if ( v14 )
      goto LABEL_12;
    return 0;
  }
  if ( *v8 == 85 )
  {
    v14 = sub_20DE740((char **)a1, (__int64)a2);
    goto LABEL_11;
  }
  v51 = v7;
  v50 = *v8;
  v46 = j__strlen("DC");
  v10 = sub_20D1BF0(v9, v8, v46, "DC");
  v11 = v46;
  v12 = v10;
  v13 = v51;
  if ( v10 )
    goto LABEL_24;
  if ( (unsigned __int8)(v50 - 67) > 1u )
  {
LABEL_10:
    v14 = sub_20DA530(a1, a2);
    goto LABEL_11;
  }
  if ( !a3 || v52 )
    return 0;
  if ( *(_BYTE *)(a3 + 8) == 48 )
  {
    v43 = sub_20CF970(a1 + 816, 16);
    v44 = *(_DWORD *)(a3 + 12);
    v45 = *(_BYTE *)(v43 + 10);
    *(_WORD *)(v43 + 8) = 16431;
    *(_DWORD *)(v43 + 12) = v44;
    *(_BYTE *)(v43 + 10) = v45 & 0xF0 | 5;
    *(_QWORD *)v43 = off_2BE7860;
    v8 = *(char **)a1;
    v13 = *(char **)(a1 + 8);
    if ( *(char **)a1 == v13 )
      return 0;
    a3 = v43;
  }
  if ( *v8 == 67 )
  {
    v40 = v8 + 1;
    *(_QWORD *)a1 = v8 + 1;
    if ( v8 + 1 == v13 )
      return 0;
    if ( v8[1] == 73 )
    {
      v40 = v8 + 2;
      *(_QWORD *)a1 = v8 + 2;
      if ( v8 + 2 == v13 )
        return 0;
      v12 = 1;
    }
    if ( (unsigned __int8)(*v40 - 49) > 4u )
      return 0;
    v41 = (char)*v40 - 48;
    *(_QWORD *)a1 = v40 + 1;
    if ( a2 )
      *a2 = 1;
    if ( v12 && !sub_20DD4B0(a1, (__int64)a2) )
      return 0;
    v14 = sub_20CF970(a1 + 816, 32);
    *(_WORD *)(v14 + 8) = 16433;
    v42 = *(_BYTE *)(v14 + 10);
    *(_QWORD *)(v14 + 16) = a3;
    *(_BYTE *)(v14 + 24) = 0;
    *(_DWORD *)(v14 + 28) = v41;
    *(_BYTE *)(v14 + 10) = v42 & 0xF0 | 5;
    *(_QWORD *)v14 = off_2BE7920;
  }
  else
  {
    if ( (unsigned __int64)(v13 - v8) <= 1 )
      return 0;
    if ( *v8 != 68 )
      return 0;
    v30 = v8[1];
    if ( (unsigned __int8)(v8[1] - 48) > 2u && (unsigned __int8)(v30 - 52) > 1u )
      return 0;
    v31 = v30 - 48;
    *(_QWORD *)a1 = v8 + 2;
    if ( a2 )
      *a2 = 1;
    v14 = sub_20CF970(a1 + 816, 32);
    *(_WORD *)(v14 + 8) = 16433;
    v32 = *(_BYTE *)(v14 + 10);
    *(_QWORD *)(v14 + 16) = a3;
    *(_BYTE *)(v14 + 24) = 1;
    *(_DWORD *)(v14 + 28) = v31;
    *(_BYTE *)(v14 + 10) = v32 & 0xF0 | 5;
    *(_QWORD *)v14 = off_2BE7920;
  }
LABEL_12:
  v15 = v52;
  if ( v52 )
  {
    v16 = sub_20CF970(a1 + 816, 32);
    v17 = *(_BYTE *)(v16 + 10);
    *(_WORD *)(v16 + 8) = 16412;
    *(_QWORD *)(v16 + 16) = v15;
    *(_QWORD *)(v16 + 24) = v14;
    v14 = v16;
    *(_BYTE *)(v16 + 10) = v17 & 0xF0 | 5;
    *(_QWORD *)v16 = off_2BE70E0;
  }
  v18 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 && *v18 == 66 )
  {
    v49 = a1 + 816;
    do
    {
      *(_QWORD *)a1 = v18 + 1;
      v34 = sub_20D0070((char **)a1);
      v36 = v35;
      if ( !v34 )
        return 0;
      v37 = sub_20CF970(v49, 40);
      v38 = *(_WORD *)(v14 + 9);
      v39 = *(_WORD *)(v37 + 8);
      *(_QWORD *)(v37 + 16) = v14;
      v14 = v37;
      *(_QWORD *)(v37 + 24) = v34;
      *(_QWORD *)(v37 + 32) = v36;
      *(_WORD *)(v37 + 8) = v39 & 0xC000 | 9;
      *(_WORD *)(v37 + 9) = v38 & 0xFC0 | *(_WORD *)(v37 + 9) & 0xF03F;
      *(_QWORD *)v37 = off_2BE6A20;
      v18 = *(char **)a1;
    }
    while ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v18 == 66 );
  }
  if ( v6 )
  {
    v19 = sub_20CF970(a1 + 816, 32);
    v33 = *(_BYTE *)(v19 + 10);
    *(_WORD *)(v19 + 8) = 16409;
    *(_BYTE *)(v19 + 10) = v33 & 0xF0 | 5;
    v20 = (char *)&unk_2BE7010;
    goto LABEL_19;
  }
  if ( a3 )
  {
    v19 = sub_20CF970(a1 + 816, 32);
    *(_WORD *)(v19 + 8) = 16408;
    *(_BYTE *)(v19 + 10) = *(_BYTE *)(v19 + 10) & 0xF0 | 5;
    v20 = (char *)&unk_2BE6FB0;
LABEL_19:
    *(_QWORD *)(v19 + 24) = v14;
    v14 = v19;
    *(_QWORD *)v19 = v20 + 16;
    *(_QWORD *)(v19 + 16) = a3;
  }
  return v14;
}
