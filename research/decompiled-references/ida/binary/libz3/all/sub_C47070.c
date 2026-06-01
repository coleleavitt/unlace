__int64 __fastcall sub_C47070(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // edx
  int v17; // r13d
  _QWORD *v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 *v23; // rdx
  _QWORD *v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  _QWORD *v28; // rdx
  unsigned __int8 v29; // dl
  __int64 v30; // rax
  int v31; // r12d
  int v32; // r14d
  _QWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // r12d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r13
  unsigned int v42; // ebx
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rdx
  unsigned __int8 v46; // dl
  __int64 v47; // rax
  unsigned int v48; // r15d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rax
  int v52; // edx
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  char **exception; // rbx
  __int64 v59; // [rsp+0h] [rbp-78h] BYREF
  __int64 v60; // [rsp+8h] [rbp-70h] BYREF
  __int64 v61; // [rsp+10h] [rbp-68h] BYREF
  __int64 v62; // [rsp+18h] [rbp-60h] BYREF
  __int64 v63[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v19 = (_QWORD *)a1[7];
    if ( v19 )
    {
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 == *((_DWORD *)v19 - 2) )
      {
        v36 = (3 * v20 + 1) >> 1;
        v37 = 8 * v36 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v37 || v20 >= v36 )
          goto LABEL_79;
        v38 = (unsigned int *)sub_186B300(v19 - 1, v37);
        v39 = v38[1];
        v19 = v38 + 2;
        *v38 = v36;
        a1[7] = v38 + 2;
        LODWORD(v38) = v39;
        v23 = &v19[v39];
        v22 = (_DWORD)v38 + 1;
      }
      else
      {
        v21 = v20;
        v22 = v20 + 1;
        v23 = &v19[v21];
      }
    }
    else
    {
      v55 = (_QWORD *)sub_186B270(0x18u);
      v19 = v55 + 1;
      *v55 = 2;
      v22 = 1;
      a1[7] = v19;
      v23 = v19;
    }
    *v23 = a2;
    *((_DWORD *)v19 - 1) = v22;
    v24 = (_QWORD *)a1[11];
    if ( v24 )
    {
      v25 = *((_DWORD *)v24 - 1);
      if ( v25 == *((_DWORD *)v24 - 2) )
      {
        v42 = (3 * v25 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v25 + 8 >= (unsigned int)v43 || v25 >= v42 )
          goto LABEL_79;
        v44 = (unsigned int *)sub_186B300(v24 - 1, v43);
        v45 = v44[1];
        v24 = v44 + 2;
        *v44 = v42;
        a1[11] = v44 + 2;
        LODWORD(v44) = v45;
        v28 = &v24[v45];
        v27 = (_DWORD)v44 + 1;
      }
      else
      {
        v26 = v25;
        v27 = v25 + 1;
        v28 = &v24[v26];
      }
    }
    else
    {
      v54 = (_QWORD *)sub_186B270(0x18u);
      v24 = v54 + 1;
      *v54 = 2;
      v27 = 1;
      a1[11] = v24;
      v28 = v24;
    }
    *v28 = 0;
    *((_DWORD *)v24 - 1) = v27;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v17 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_20:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
        goto LABEL_41;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v7 = a1[1];
      ++*(_DWORD *)(a2 + 8);
      v8 = a1[18];
      v9 = *(_QWORD *)(a2 + 16);
      sub_C41860(a1[62], a1[63]);
      a1[62] = 0;
      if ( (unsigned int)sub_C426E0(v8, v9, nullptr, a1 + 60) == 5 )
      {
        ++*(_DWORD *)(a2 + 8);
        v63[0] = a2;
        sub_C41DD0(a1 + 7, v63);
        v62 = 0;
        sub_C41D10(a1 + 11, &v62);
      }
      else
      {
        v10 = a1[60];
        v61 = v10;
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        sub_C41DD0(a1 + 7, &v61);
        v11 = a1[62];
        if ( v11 )
        {
          ++*(_DWORD *)(v11 + 8);
          v60 = v11;
          sub_C41D10(a1 + 11, &v60);
        }
        else
        {
          v57 = sub_15DE370(a1[1]);
          v59 = v57;
          if ( v57 )
            ++*(_DWORD *)(v57 + 8);
          sub_C41D10(a1 + 11, &v59);
        }
        sub_C41860(a1[62], a1[63]);
        v12 = a1[61];
        v13 = a1[60];
        a1[62] = 0;
        sub_C41880(v13, v12);
        a1[60] = 0;
        v14 = a1[5];
        if ( v14 )
        {
          v15 = *(_DWORD *)(v14 - 4);
          if ( v15 )
            *(_BYTE *)(v14 + 16LL * (unsigned int)(v15 - 1) + 8) |= 2u;
        }
      }
      if ( (*(_DWORD *)(a2 + 8))-- == 1 )
        sub_15D7BC0(v7, a2);
      return 1;
    }
    v40 = sub_1680FB0(a1[4], a2, 0);
    v41 = v40;
    if ( v40 )
    {
      v63[0] = v40;
      ++*(_DWORD *)(v40 + 8);
      sub_C41DD0(a1 + 7, v63);
      if ( a2 != v41 )
      {
        v51 = a1[5];
        if ( v51 )
        {
          v52 = *(_DWORD *)(v51 - 4);
          if ( v52 )
            *(_BYTE *)(v51 + 16LL * (unsigned int)(v52 - 1) + 8) |= 2u;
        }
      }
      v53 = sub_1680FB0(a1[9], a2, 0);
      v63[0] = v53;
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      sub_C41D10(a1 + 11, v63);
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v17 = 1;
  }
  if ( v5 == 1 )
  {
LABEL_41:
    sub_C46C30(a1, a2);
    return 1;
  }
  if ( v5 == 2 )
  {
    v29 = 3;
    if ( a3 != 3 )
      v29 = (a3 - 1) & 3;
    v30 = a1[7];
    v31 = v29;
    if ( v30 )
      v32 = *(_DWORD *)(v30 - 4);
    else
      v32 = 0;
    v33 = (_QWORD *)a1[5];
    if ( !v33 )
    {
LABEL_75:
      v56 = (_QWORD *)sub_186B270(0x28u);
      v33 = v56 + 1;
      *v56 = 2;
      a1[5] = v56 + 1;
      v35 = (__int64)(v56 + 1);
      goto LABEL_38;
    }
    v34 = *((unsigned int *)v33 - 1);
    if ( (_DWORD)v34 != *((_DWORD *)v33 - 2) )
      goto LABEL_37;
    v48 = (unsigned int)(3 * v34 + 1) >> 1;
    v49 = 16 * v48 + 8;
    if ( 16 * (int)v34 + 8 < (unsigned int)v49 && (unsigned int)v34 < v48 )
    {
LABEL_62:
      v50 = (unsigned int *)sub_186B300(v33 - 1, v49);
      v33 = v50 + 2;
      a1[5] = v50 + 2;
      *v50 = v48;
      v35 = (__int64)&v50[4 * v50[1] + 2];
      goto LABEL_38;
    }
LABEL_79:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_C418A0(v63, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v63);
    sub_233E40((__int64)v63);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v5 )
    goto LABEL_20;
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_6;
  v46 = 3;
  if ( a3 != 3 )
    v46 = (a3 - 1) & 3;
  v47 = a1[7];
  v31 = v46;
  if ( v47 )
    v32 = *(_DWORD *)(v47 - 4);
  else
    v32 = 0;
  v33 = (_QWORD *)a1[5];
  if ( !v33 )
    goto LABEL_75;
  v34 = *((unsigned int *)v33 - 1);
  if ( (_DWORD)v34 == *((_DWORD *)v33 - 2) )
  {
    v48 = (unsigned int)(3 * v34 + 1) >> 1;
    v49 = 16 * v48 + 8;
    if ( 16 * (int)v34 + 8 >= (unsigned int)v49 || (unsigned int)v34 >= v48 )
      goto LABEL_79;
    goto LABEL_62;
  }
LABEL_37:
  v35 = (__int64)&v33[2 * v34];
LABEL_38:
  *(_QWORD *)v35 = a2;
  *(_DWORD *)(v35 + 12) = v32;
  *(_DWORD *)(v35 + 8) = v17 | (16 * v31);
  ++*((_DWORD *)v33 - 1);
  return 0;
}

