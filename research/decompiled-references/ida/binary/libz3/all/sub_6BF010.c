__int64 __fastcall sub_6BF010(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  __int64 v8; // r14
  __int16 v9; // ax
  __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // cl
  char v13; // cl
  char v14; // cl
  char v15; // cl
  char v16; // cl
  int v17; // ecx
  int v18; // edx
  __int64 v19; // r12
  int v20; // edx
  unsigned int v21; // r15d
  int v23; // r8d
  int v24; // r9d
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 *v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // r15d
  size_t v35; // rsi
  unsigned int *v36; // rax
  _QWORD *v37; // rax
  char **v38; // r12
  char **exception; // rbx
  const char *v40; // rax
  __int64 v41; // [rsp+0h] [rbp-90h]
  __int64 v42; // [rsp+0h] [rbp-90h]
  __int64 v43; // [rsp+0h] [rbp-90h]
  __int64 v44; // [rsp+0h] [rbp-90h]
  __int64 v45; // [rsp+0h] [rbp-90h]
  __int64 v46; // [rsp+0h] [rbp-90h]
  char v47; // [rsp+Fh] [rbp-81h]
  char v48; // [rsp+10h] [rbp-80h]
  char v49; // [rsp+11h] [rbp-7Fh]
  char v50; // [rsp+12h] [rbp-7Eh]
  char v51; // [rsp+13h] [rbp-7Dh]
  int v52; // [rsp+14h] [rbp-7Ch]
  __int64 v53; // [rsp+18h] [rbp-78h]
  __int64 v57[10]; // [rsp+40h] [rbp-50h] BYREF

  if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    v40 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_6A99E0(v57, v40);
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, v57);
    sub_233E40((__int64)v57);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  v8 = *a4;
  v9 = *(_WORD *)(*a4 + 4);
  if ( !v9 )
  {
    if ( (*(_BYTE *)(v8 + 30) & 2) == 0 )
      goto LABEL_4;
LABEL_10:
    v21 = 0;
    sub_6B2860(a5, a2, a3);
    return v21;
  }
  if ( v9 == 2 )
    goto LABEL_10;
LABEL_4:
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(a1 + 48);
  v12 = *(_BYTE *)(v10 + 715);
  v53 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v10 + 715) = 1;
  v47 = v12;
  v13 = *(_BYTE *)(v10 + 57);
  *(_BYTE *)(v10 + 57) = 1;
  v48 = v13;
  v14 = *(_BYTE *)(v10 + 337);
  *(_BYTE *)(v10 + 337) = 1;
  v49 = v14;
  v15 = *(_BYTE *)(v10 + 436);
  *(_BYTE *)(v10 + 436) = 1;
  v50 = v15;
  v16 = *(_BYTE *)(v10 + 396);
  *(_BYTE *)(v10 + 396) = 1;
  v51 = v16;
  v17 = *(_DWORD *)(v10 + 476);
  *(_DWORD *)(v10 + 476) = 0;
  v52 = v17;
  ++*(_DWORD *)(v8 + 8);
  if ( v11 && (v18 = *(_DWORD *)(v11 - 4)) != 0 )
  {
    v19 = *(_QWORD *)(v11 + 8LL * (unsigned int)(v18 - 1));
    v20 = v18 - 1;
    if ( v19 )
    {
      sub_6B1F70(nullptr);
      v11 = *(_QWORD *)(a1 + 48);
      v20 = *(_DWORD *)(v11 - 4) - 1;
    }
    *(_DWORD *)(v11 - 4) = v20;
  }
  else
  {
    v19 = sub_186B270(0x518u);
    sub_6BA640(v19, *(_QWORD *)(a1 + 8), a1, *(_QWORD *)(a1 + 16), v23, v24);
    v41 = sub_70F5C0(v19);
    sub_6AB850(v19, v41);
    sub_6B1FA0(v19 + 344, v41);
    v42 = sub_725D80(v19);
    sub_6AB850(v19, v42);
    sub_6B1FA0(v19 + 344, v42);
    v43 = sub_6C0270(v19, *(unsigned __int8 *)(a1 + 40), *(_QWORD *)(a1 + 16), v25, v26, v27);
    sub_6AB850(v19, v43);
    sub_6B1FA0(v19 + 344, v43);
    v44 = sub_6D95F0(v19);
    sub_6AB850(v19, v44);
    sub_6B1FA0(v19 + 344, v44);
    v45 = sub_71DF90(v19);
    sub_6AB850(v19, v45);
    sub_6B1FA0(v19 + 344, v45);
    v46 = sub_6DBE80(v19);
    sub_6AB850(v19, v46);
    sub_6B1FA0(v19 + 344, v46);
  }
  sub_6BE340(v19, a2, a3, *(_QWORD *)(a1 + 24), a4, a6, a5, a7);
  v28 = *(_QWORD **)(a1 + 48);
  if ( v28 )
  {
    v29 = *((_DWORD *)v28 - 1);
    if ( v29 == *((_DWORD *)v28 - 2) )
    {
      v34 = (3 * v29 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v29 + 8 >= (unsigned int)v35 || v29 >= v34 )
      {
        v38 = (char **)__cxa_allocate_exception(0x28u);
        sub_6A99E0(v57, "Overflow encountered when expanding vector");
        *v38 = (char *)off_1C63128;
        sub_2333C0(v38 + 1, v57);
        sub_233E40((__int64)v57);
        __cxa_throw(v38, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v36 = (unsigned int *)sub_186B300(v28 - 1, v35);
      v28 = v36 + 2;
      *v36 = v34;
      *(_QWORD *)(a1 + 48) = v36 + 2;
      LODWORD(v36) = v36[1];
      v32 = &v28[(unsigned int)v36];
      v31 = (_DWORD)v36 + 1;
    }
    else
    {
      v30 = v29;
      v31 = v29 + 1;
      v32 = &v28[v30];
    }
  }
  else
  {
    v37 = (_QWORD *)sub_186B270(0x18u);
    v28 = v37 + 1;
    *v37 = 2;
    v32 = v37 + 1;
    *(_QWORD *)(a1 + 48) = v37 + 1;
    v31 = 1;
  }
  *v32 = v19;
  *((_DWORD *)v28 - 1) = v31;
  sub_6BAEC0(v19);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL) == *a4 )
  {
    v21 = -1;
  }
  else
  {
    v21 = 1;
    v33 = *(_QWORD *)(a5 + 8);
    if ( v33 )
      v21 = *(_DWORD *)(v33 - 4) == 0;
  }
  sub_6A99C0(v8, v53);
  *(_DWORD *)(v10 + 476) = v52;
  *(_BYTE *)(v10 + 396) = v51;
  *(_BYTE *)(v10 + 436) = v50;
  *(_BYTE *)(v10 + 337) = v49;
  *(_BYTE *)(v10 + 57) = v48;
  *(_BYTE *)(v10 + 715) = v47;
  return v21;
}

