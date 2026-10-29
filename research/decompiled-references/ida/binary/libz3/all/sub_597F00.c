_QWORD *__fastcall sub_597F00(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  char **exception; // rbp
  char **v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // r11
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // r10d
  __int64 v23; // rax
  unsigned int *v24; // rax
  unsigned int v25; // r10d
  __int64 v26; // rax
  unsigned int *v27; // rax
  __int64 v28; // rdi
  unsigned int v29; // ecx
  __int64 v30; // rbp
  _QWORD *v31; // rbx
  __int64 i; // rax
  size_t v34; // rsi
  unsigned int *v35; // rax
  size_t v36; // rsi
  unsigned int *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // [rsp+0h] [rbp-A8h]
  unsigned int v41; // [rsp+0h] [rbp-A8h]
  __int64 v42; // [rsp+0h] [rbp-A8h]
  __int64 v43; // [rsp+8h] [rbp-A0h]
  unsigned int v44; // [rsp+8h] [rbp-A0h]
  __int64 v45; // [rsp+8h] [rbp-A0h]
  unsigned int v46; // [rsp+8h] [rbp-A0h]
  unsigned int v47; // [rsp+10h] [rbp-98h]
  __int64 v48; // [rsp+10h] [rbp-98h]
  unsigned int v49; // [rsp+10h] [rbp-98h]
  __int64 v50; // [rsp+10h] [rbp-98h]
  __int64 v51; // [rsp+18h] [rbp-90h]
  unsigned int v52; // [rsp+18h] [rbp-90h]
  __int64 v53; // [rsp+18h] [rbp-90h]
  __int64 v54; // [rsp+18h] [rbp-90h]
  __int64 v55; // [rsp+20h] [rbp-88h]
  __int64 v56; // [rsp+20h] [rbp-88h]
  __int64 v57; // [rsp+20h] [rbp-88h]
  __int64 v58; // [rsp+20h] [rbp-88h]
  __int64 v59; // [rsp+28h] [rbp-80h]
  __int64 v60; // [rsp+28h] [rbp-80h]
  __int64 v61; // [rsp+28h] [rbp-80h]
  __int64 v62; // [rsp+28h] [rbp-80h]
  __int64 v63; // [rsp+30h] [rbp-78h]
  __int64 v64; // [rsp+30h] [rbp-78h]
  __int64 v65; // [rsp+30h] [rbp-78h]
  __int64 v66; // [rsp+38h] [rbp-70h]
  __int64 v67[11]; // [rsp+50h] [rbp-58h] BYREF

  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_QWORD *)(a3 + 8);
  if ( a1 != v11 && a1 != v12 )
    return nullptr;
  v13 = *(_DWORD *)(v11 + 32);
  v14 = *(_DWORD *)(v12 + 32);
  if ( v13 == 4 )
  {
    if ( v14 == 4 )
    {
      v16 = a2;
      v15 = *(_QWORD *)(v9 + 64);
      v10 = *(_QWORD *)(a2 + 64);
      if ( a4 )
        goto LABEL_6;
      goto LABEL_32;
    }
    v10 = *(_QWORD *)(a2 + 64);
LABEL_30:
    v28 = *(_QWORD *)(a1 + 24);
    v15 = v9;
    v17 = 0;
    v19 = 0;
    v29 = 0;
    goto LABEL_20;
  }
  if ( v14 != 4 )
    goto LABEL_30;
  v15 = *(_QWORD *)(v9 + 64);
  v16 = 0;
  if ( !a4 )
  {
LABEL_32:
    v9 = v15;
    goto LABEL_30;
  }
LABEL_6:
  if ( v13 == 4 )
  {
    v17 = 0;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v9 + 40);
      while ( *(_DWORD *)(v20 + 4LL * *(unsigned int *)(a6 + 4 * v18)) != -1 )
      {
        if ( v8 == ++v18 )
          goto LABEL_18;
      }
      v21 = *(_QWORD *)(v16 + 40);
      if ( *(_DWORD *)(v21 + 4LL * *(unsigned int *)(a5 + 4 * v18)) != -1 )
        break;
      v22 = *(_DWORD *)(v21 + 4 * v18);
      v40 = 4 * v18;
      if ( v19 )
      {
        v23 = *(unsigned int *)(v19 - 4);
        if ( (_DWORD)v23 == *(_DWORD *)(v19 - 8) )
        {
          v44 = (unsigned int)(3 * v23 + 1) >> 1;
          v36 = 4 * v44 + 8;
          if ( 4 * (int)v23 + 8 >= (unsigned int)v36 || (unsigned int)v23 >= v44 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v67, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v67);
            sub_233E40((__int64)v67);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v66 = a6;
          v64 = a5;
          v60 = v16;
          v56 = v15;
          v52 = v22;
          v48 = v18;
          v37 = (unsigned int *)sub_186B300((void *)(v19 - 8), v36);
          v19 = (__int64)(v37 + 2);
          v18 = v48;
          v22 = v52;
          v15 = v56;
          v16 = v60;
          a5 = v64;
          *v37 = v44;
          v20 = *(_QWORD *)(v9 + 40);
          a6 = v66;
          v24 = &v37[v37[1] + 2];
        }
        else
        {
          v24 = (unsigned int *)(v19 + 4 * v23);
        }
      }
      else
      {
        v65 = a6;
        v61 = a5;
        v57 = v16;
        v53 = v15;
        v49 = *(_DWORD *)(v21 + 4 * v18);
        v45 = v18;
        v38 = (_QWORD *)sub_186B270(0x10u);
        v20 = *(_QWORD *)(v9 + 40);
        v18 = v45;
        *v38 = 2;
        v19 = (__int64)(v38 + 1);
        v22 = v49;
        v15 = v53;
        v16 = v57;
        a5 = v61;
        v24 = (unsigned int *)(v38 + 1);
        a6 = v65;
      }
      *v24 = v22;
      ++*(_DWORD *)(v19 - 4);
      v25 = *(_DWORD *)(v20 + v40);
      if ( v17 )
      {
        v26 = *(unsigned int *)(v17 - 4);
        if ( (_DWORD)v26 == *(_DWORD *)(v17 - 8) )
        {
          v41 = (unsigned int)(3 * v26 + 1) >> 1;
          v34 = 4 * v41 + 8;
          if ( 4 * (int)v26 + 8 >= (unsigned int)v34 || (unsigned int)v26 >= v41 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v67, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v67);
            sub_233E40((__int64)v67);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v63 = a6;
          v59 = a5;
          v55 = v16;
          v51 = v15;
          v47 = v25;
          v43 = v18;
          v35 = (unsigned int *)sub_186B300((void *)(v17 - 8), v34);
          v17 = (__int64)(v35 + 2);
          v18 = v43;
          v25 = v47;
          v15 = v51;
          v16 = v55;
          a5 = v59;
          *v35 = v41;
          a6 = v63;
          v27 = &v35[v35[1] + 2];
        }
        else
        {
          v27 = (unsigned int *)(v17 + 4 * v26);
        }
      }
      else
      {
        v62 = a6;
        v58 = a5;
        v54 = v16;
        v50 = v15;
        v46 = *(_DWORD *)(v20 + v40);
        v42 = v18;
        v39 = (_QWORD *)sub_186B270(0x10u);
        *v39 = 2;
        v18 = v42;
        v17 = (__int64)(v39 + 1);
        v25 = v46;
        v15 = v50;
        v16 = v54;
        a5 = v58;
        v27 = (unsigned int *)(v39 + 1);
        a6 = v62;
      }
      ++v18;
      *v27 = v25;
      ++*(_DWORD *)(v17 - 4);
      if ( v18 == v8 )
        goto LABEL_18;
    }
LABEL_38:
    v31 = (_QWORD *)sub_186B270(8u);
    *v31 = off_1C51FC8;
    goto LABEL_22;
  }
  for ( i = 0; i != a4; ++i )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 4LL * *(unsigned int *)(a6 + 4 * i)) == -1 )
    {
      v17 = 0;
      v19 = 0;
      goto LABEL_38;
    }
  }
  v19 = 0;
  v17 = 0;
LABEL_18:
  v28 = *(_QWORD *)(a1 + 24);
  if ( v19 )
    v29 = *(_DWORD *)(v19 - 4);
  else
    v29 = 0;
LABEL_20:
  v30 = sub_4C4AE0(v28, v10, v15, v29, v19, v17);
  if ( v30 )
  {
    v31 = (_QWORD *)sub_186B270(0x10u);
    *v31 = &off_1C51FA0;
    v31[1] = v30;
  }
  else
  {
    v31 = nullptr;
  }
LABEL_22:
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  return v31;
}

