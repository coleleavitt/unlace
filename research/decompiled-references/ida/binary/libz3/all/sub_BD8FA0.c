__int64 __fastcall sub_BD8FA0(__int64 a1, __int64 a2, _QWORD *a3, __m128 a4, __m128 a5, __m128 a6)
{
  char **exception; // rbp
  char **v7; // rbp
  __int64 v8; // r15
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 *v13; // r12
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // r9d
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rbp
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  _QWORD *v30; // rcx
  __int64 v32; // r14
  __int64 v33; // rbp
  __int64 v34; // rsi
  unsigned int v35; // ebp
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // r14d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __int64 v45[11]; // [rsp+10h] [rbp-58h] BYREF

  v8 = (unsigned int)a2;
  v11 = *(__int64 **)(*(_QWORD *)(a1 + 256) + 8LL * (unsigned int)a2);
  v12 = *v11;
  v13 = *(__int64 **)(*(_QWORD *)(a1 + 448) + 8LL * (unsigned int)a2);
  if ( *v11 )
    v14 = *(_DWORD *)(v12 - 4);
  else
    v14 = 0;
  v15 = *v13;
  if ( *v13 )
    v16 = *(unsigned int *)(v15 - 4);
  else
    v16 = 0;
  v17 = v13[1];
  v18 = v16;
  if ( v17 )
    v18 = *(_DWORD *)(v17 - 4) + v16;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 264) + 18LL) )
    goto LABEL_23;
  if ( !(v14 + 2 * v18) )
    goto LABEL_9;
  if ( v12 && *(_DWORD *)(v12 - 4) )
  {
LABEL_23:
    sub_B30FF0((_DWORD *)a1, a2, v11);
  }
  else
  {
    if ( !(_DWORD)v16 )
      goto LABEL_9;
    v32 = 8 * v16;
    v33 = 0;
    while ( 1 )
    {
      v34 = *(_QWORD *)(v15 + v33);
      v33 += 8;
      sub_BD6C20(a1, v34, a4, a5, a6);
      if ( v33 == v32 )
        break;
      v15 = *v13;
    }
  }
  v13 = *(__int64 **)(*(_QWORD *)(a1 + 448) + 8 * v8);
LABEL_9:
  v19 = (_QWORD *)sub_180C100(a1 + 400, 16);
  v20 = *(_QWORD **)(a1 + 384);
  v21 = v19;
  *v19 = off_1C56E28;
  v19[1] = v13 + 3;
  if ( v20 )
  {
    v22 = *((_DWORD *)v20 - 1);
    if ( v22 == *((_DWORD *)v20 - 2) )
    {
      v39 = (3 * v22 + 1) >> 1;
      v40 = 8 * v39 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v40 || v22 >= v39 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v45, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v45);
        sub_233E40((__int64)v45);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v41 = (unsigned int *)sub_186B300(v20 - 1, v40);
      v42 = v41[1];
      *v41 = v39;
      *(_QWORD *)(a1 + 384) = v41 + 2;
      *(_QWORD *)&v41[2 * v42 + 2] = v21;
      v41[1] = v42 + 1;
      v26 = (_QWORD *)v13[3];
      if ( v26 )
        goto LABEL_13;
LABEL_31:
      v43 = (_QWORD *)sub_186B270(0x18u);
      v26 = v43 + 1;
      *v43 = 2;
      v29 = 1;
      v13[3] = (__int64)v26;
      v30 = v26;
      goto LABEL_15;
    }
    v23 = v22;
    v24 = v22 + 1;
    v25 = &v20[v23];
  }
  else
  {
    v44 = (_QWORD *)sub_186B270(0x18u);
    v20 = v44 + 1;
    *v44 = 2;
    v24 = 1;
    *(_QWORD *)(a1 + 384) = v20;
    v25 = v20;
  }
  *v25 = v21;
  *((_DWORD *)v20 - 1) = v24;
  v26 = (_QWORD *)v13[3];
  if ( !v26 )
    goto LABEL_31;
LABEL_13:
  v27 = *((_DWORD *)v26 - 1);
  if ( v27 == *((_DWORD *)v26 - 2) )
  {
    v35 = (3 * v27 + 1) >> 1;
    v36 = 8 * v35 + 8;
    if ( 8 * v27 + 8 >= (unsigned int)v36 || v27 >= v35 )
    {
      v7 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v45, "Overflow encountered when expanding vector");
      *v7 = (char *)off_1C63128;
      sub_2333C0(v7 + 1, v45);
      sub_233E40((__int64)v45);
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v37 = (unsigned int *)sub_186B300(v26 - 1, v36);
    v38 = v37[1];
    v26 = v37 + 2;
    v13[3] = (__int64)(v37 + 2);
    *v37 = v35;
    LODWORD(v37) = v38;
    v30 = &v26[v38];
    v29 = (_DWORD)v37 + 1;
  }
  else
  {
    v28 = v27;
    v29 = v27 + 1;
    v30 = &v26[v28];
  }
LABEL_15:
  *v30 = a3;
  *((_DWORD *)v26 - 1) = v29;
  return sub_BD7CA0(a1, a3, a4, a5, a6);
}

