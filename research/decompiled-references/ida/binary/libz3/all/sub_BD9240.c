__int64 __fastcall sub_BD9240(__int64 a1, __int64 a2, int **a3, __m128 a4, __m128 a5, __m128 a6)
{
  char **exception; // rbp
  char **v7; // rbp
  __int64 v8; // r15
  __int64 *v11; // r13
  __int64 *v12; // rbp
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // r8d
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // rcx
  int ***v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  int ***v30; // rcx
  unsigned int v31; // ebp
  __int64 result; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rsi
  unsigned int v37; // r14d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // r15d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // [rsp+8h] [rbp-70h]
  __int64 v48[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = (unsigned int)a2;
  v11 = *(__int64 **)(*(_QWORD *)(a1 + 256) + 8LL * (unsigned int)a2);
  v12 = *(__int64 **)(*(_QWORD *)(a1 + 448) + 8LL * (unsigned int)a2);
  v13 = *v11;
  if ( *v11 )
    v14 = *(_DWORD *)(v13 - 4);
  else
    v14 = 0;
  v15 = *v12;
  if ( *v12 )
    v16 = *(unsigned int *)(v15 - 4);
  else
    v16 = 0;
  v17 = v12[1];
  v18 = v16;
  if ( v17 )
    v18 = *(_DWORD *)(v17 - 4) + v16;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 264) + 18LL) )
    goto LABEL_26;
  if ( !(v14 + 2 * v18) )
    goto LABEL_9;
  if ( v13 && *(_DWORD *)(v13 - 4) )
  {
LABEL_26:
    sub_B30FF0((_DWORD *)a1, a2, v11);
  }
  else
  {
    if ( !(_DWORD)v16 )
      goto LABEL_9;
    v34 = 8 * v16;
    v35 = 0;
    v47 = v34;
    while ( 1 )
    {
      v36 = *(_QWORD *)(v15 + v35);
      v35 += 8;
      sub_BD6C20(a1, v36, a4, a5, a6);
      if ( v35 == v47 )
        break;
      v15 = *v12;
    }
  }
  v12 = *(__int64 **)(*(_QWORD *)(a1 + 448) + 8 * v8);
LABEL_9:
  v19 = (_QWORD *)sub_180C100(a1 + 400, 16);
  v20 = *(_QWORD **)(a1 + 384);
  v21 = v19;
  *v19 = off_1C56E28;
  v19[1] = v12 + 2;
  if ( v20 )
  {
    v22 = *((_DWORD *)v20 - 1);
    if ( v22 == *((_DWORD *)v20 - 2) )
    {
      v41 = (3 * v22 + 1) >> 1;
      v42 = 8 * v41 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v42 || v22 >= v41 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v48, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v48);
        sub_233E40((__int64)v48);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v43 = (unsigned int *)sub_186B300(v20 - 1, v42);
      v44 = v43[1];
      *v43 = v41;
      *(_QWORD *)(a1 + 384) = v43 + 2;
      *(_QWORD *)&v43[2 * v44 + 2] = v21;
      v43[1] = v44 + 1;
      v26 = (int ***)v12[2];
      if ( v26 )
        goto LABEL_13;
LABEL_34:
      v45 = (_QWORD *)sub_186B270(0x18u);
      v26 = (int ***)(v45 + 1);
      *v45 = 2;
      v29 = 1;
      v12[2] = (__int64)v26;
      v30 = v26;
      goto LABEL_15;
    }
    v23 = v22;
    v24 = v22 + 1;
    v25 = &v20[v23];
  }
  else
  {
    v46 = (_QWORD *)sub_186B270(0x18u);
    v20 = v46 + 1;
    *v46 = 2;
    v24 = 1;
    *(_QWORD *)(a1 + 384) = v20;
    v25 = v20;
  }
  *v25 = v21;
  *((_DWORD *)v20 - 1) = v24;
  v26 = (int ***)v12[2];
  if ( !v26 )
    goto LABEL_34;
LABEL_13:
  v27 = *((_DWORD *)v26 - 1);
  if ( v27 == *((_DWORD *)v26 - 2) )
  {
    v37 = (3 * v27 + 1) >> 1;
    v38 = 8 * v37 + 8;
    if ( 8 * v27 + 8 >= (unsigned int)v38 || v27 >= v37 )
    {
      v7 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v48, "Overflow encountered when expanding vector");
      *v7 = (char *)off_1C63128;
      sub_2333C0(v7 + 1, v48);
      sub_233E40((__int64)v48);
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v39 = (unsigned int *)sub_186B300(v26 - 1, v38);
    v40 = v39[1];
    v26 = (int ***)(v39 + 2);
    v12[2] = (__int64)(v39 + 2);
    *v39 = v37;
    LODWORD(v39) = v40;
    v30 = &v26[v40];
    v29 = (_DWORD)v39 + 1;
  }
  else
  {
    v28 = v27;
    v29 = v27 + 1;
    v30 = &v26[v28];
  }
LABEL_15:
  *v30 = a3;
  v31 = 0;
  *((_DWORD *)v26 - 1) = v29;
  for ( result = v11[1]; result; result = v11[1] )
  {
    if ( v31 >= *(_DWORD *)(result - 4) )
      break;
    v33 = v31++;
    sub_BD5AB0(a1, *(_QWORD *)(result + 8 * v33), a3, a4, a5, a6);
  }
  return result;
}

