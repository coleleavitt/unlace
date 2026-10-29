__int64 __fastcall sub_6609A0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 tinfo_pdata; // rax
  char *v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // r13
  _QWORD *v10; // r12
  __int64 v11; // rbp
  char *v12; // r15
  _QWORD *v13; // rbx
  const char *v14; // rsi
  const char *v15; // rdi
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  const char *v20; // rdi
  const char *v21; // rsi
  unsigned int v22; // edx
  __int64 idati; // rax
  __int64 v24; // [rsp+0h] [rbp-90h]
  _QWORD *v26; // [rsp+10h] [rbp-80h]
  char *s2; // [rsp+18h] [rbp-78h] BYREF
  __int128 v28; // [rsp+20h] [rbp-70h]
  _QWORD v29[2]; // [rsp+38h] [rbp-58h] BYREF
  __int16 v30; // [rsp+48h] [rbp-48h]
  unsigned __int64 v31; // [rsp+50h] [rbp-40h]

  v3 = *a3;
  v31 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 16);
  v28 = 0;
  s2 = nullptr;
  v24 = *(_QWORD *)(v4 + 1480);
  if ( (v3 & 0x100) == 0 )
    return 0;
  tinfo_pdata = get_tinfo_pdata(&s2, v3, 0);
  v7 = s2;
  if ( !tinfo_pdata )
    goto LABEL_27;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD **)(v8 + 16);
  v10 = (_QWORD *)(v8 + 8);
  v26 = (_QWORD *)(v8 + 8);
  if ( !v9 )
    goto LABEL_27;
  v11 = v28;
  v12 = (char *)haystack;
  if ( (_QWORD)v28 )
    v12 = s2;
  while ( 1 )
  {
    v18 = v9[5];
    if ( !v11 )
      break;
    if ( v18 )
      goto LABEL_17;
    v13 = v9;
    v14 = v7;
    v15 = haystack;
LABEL_10:
    v16 = strcmp(v15, v14);
    v17 = (_QWORD *)v9[2];
    v9 = (_QWORD *)v9[3];
    if ( v16 >= 0 )
    {
      v10 = v13;
      v9 = v17;
    }
    if ( !v9 )
      goto LABEL_19;
  }
  if ( v18 )
  {
LABEL_17:
    v15 = (const char *)v9[4];
    v13 = v9;
    v14 = v12;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v19 = v9[2];
    if ( !v19 )
      break;
    v10 = v9;
    v9 = (_QWORD *)v9[2];
    if ( *(_QWORD *)(v19 + 40) )
      goto LABEL_17;
  }
  v10 = v9;
LABEL_19:
  if ( v26 != v10 )
  {
    if ( !v10[5] )
    {
      v20 = v7;
      v21 = haystack;
      if ( v11 )
        goto LABEL_23;
      goto LABEL_24;
    }
    v20 = haystack;
    v21 = (const char *)v10[4];
    if ( v11 )
      v20 = v7;
LABEL_23:
    if ( strcmp(v20, v21) >= 0 )
    {
LABEL_24:
      v22 = *((_DWORD *)v10 + 14);
      idati = *(_QWORD *)(v24 + 8);
      v30 = 1;
      v29[1] = v22;
      if ( !idati )
        idati = get_idati(v20, v21);
      v29[0] = idati;
      create_tinfo(a2, 61, 189, v29);
      *(_DWORD *)(a2 + 56) |= 1u;
      v7 = s2;
    }
  }
LABEL_27:
  if ( v7 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v7);
  }
  return 0;
}

