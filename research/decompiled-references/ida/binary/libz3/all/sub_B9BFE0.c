unsigned __int64 __fastcall sub_B9BFE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char **exception; // rbp
  __int64 v7; // r12
  _QWORD *v9; // r9
  _QWORD *v10; // rcx
  size_t v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // ebx
  __int64 v16; // rax
  unsigned int v17; // r13d
  unsigned __int64 result; // rax
  __int64 v19; // r12
  unsigned int v20; // edx
  size_t v21; // rsi
  unsigned int v22; // r15d
  unsigned int *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int *v28; // rax
  unsigned int v29; // r12d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _DWORD *v35; // rbx
  __int64 v36; // r12
  unsigned int v37; // r14d
  unsigned int v38; // r13d
  size_t v39; // rsi
  unsigned int *v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // [rsp+8h] [rbp-80h]
  __int64 v45; // [rsp+8h] [rbp-80h]
  __int64 v46; // [rsp+10h] [rbp-78h]
  unsigned int v47; // [rsp+1Ch] [rbp-6Ch]
  _QWORD *v48; // [rsp+20h] [rbp-68h]
  _QWORD *v49; // [rsp+28h] [rbp-60h]
  char *v50[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = a3;
  v9 = *(_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 88) = a2;
  *(_QWORD *)(a1 + 72) = a3;
  *(_QWORD *)(a1 + 80) = a4;
  *(_DWORD *)(a1 + 96) = 0;
  if ( v9 )
    *((_DWORD *)v9 - 1) = 0;
  v10 = *(_QWORD **)(a1 + 40);
  if ( v10 )
  {
    v11 = 8LL * *((unsigned int *)v10 - 1);
    if ( v11 )
    {
      v44 = v9;
      v12 = memset(*(void **)(a1 + 40), 0, v11);
      v9 = v44;
      v10 = v12;
    }
  }
  v13 = a5;
  v14 = 1;
  v15 = 2;
  v16 = *(_QWORD *)(a4 + 8 * v13 + 32);
  v17 = 0;
  v46 = v16;
  result = *(unsigned int *)(v16 + 24);
  v47 = result;
  if ( (_DWORD)result )
  {
    while ( 1 )
    {
      ++v17;
      v45 = *(_QWORD *)(v46 + v14 * 8 + 24);
      if ( !v10 )
        break;
      v19 = *((unsigned int *)v10 - 1);
      if ( v17 < (unsigned int)v19 )
        goto LABEL_17;
      if ( (unsigned int)v19 < v15 )
        goto LABEL_14;
      *((_DWORD *)v10 - 1) = v15;
      v10[v14] = v45;
      if ( !v9 )
      {
LABEL_28:
        v34 = (_QWORD *)sub_186B270(0x10u);
        v9 = v34 + 1;
        *v34 = 2;
        *(_QWORD *)(a1 + 48) = v34 + 1;
        v28 = (unsigned int *)(v34 + 1);
        goto LABEL_20;
      }
LABEL_18:
      v27 = *((unsigned int *)v9 - 1);
      if ( (_DWORD)v27 == *((_DWORD *)v9 - 2) )
      {
        v29 = (unsigned int)(3 * v27 + 1) >> 1;
        v30 = 4 * v29 + 8;
        if ( 4 * (int)v27 + 8 >= (unsigned int)v30 || (unsigned int)v27 >= v29 )
        {
LABEL_43:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_151CF2(v50);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v50);
          sub_233E40((__int64)v50);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v9 - 1, v30);
        v9 = v31 + 2;
        *v31 = v29;
        v32 = v31[1];
        *(_QWORD *)(a1 + 48) = v9;
        v28 = (unsigned int *)v9 + v32;
      }
      else
      {
        v28 = (unsigned int *)v9 + v27;
      }
LABEL_20:
      *v28 = v17;
      result = v47;
      ++v14;
      ++v15;
      ++*((_DWORD *)v9 - 1);
      if ( v17 == v47 )
      {
        v7 = *(_QWORD *)(a1 + 72);
        goto LABEL_30;
      }
      v10 = *(_QWORD **)(a1 + 40);
    }
    if ( v15 )
    {
      v19 = 0;
      v33 = (_QWORD *)sub_186B270(0x18u);
      v10 = v33 + 1;
      *v33 = 2;
      *(_QWORD *)(a1 + 40) = v33 + 1;
LABEL_14:
      while ( 1 )
      {
        v24 = *((_DWORD *)v10 - 2);
        if ( v24 >= v15 )
          break;
        v20 = (3 * v24 + 1) >> 1;
        v21 = 8 * v20 + 8;
        v22 = v20;
        if ( 8 * v24 + 8 >= (unsigned int)v21 || v24 >= v20 )
          goto LABEL_43;
        v23 = (unsigned int *)sub_186B300(v10 - 1, v21);
        v10 = v23 + 2;
        *v23 = v22;
        *(_QWORD *)(a1 + 40) = v23 + 2;
      }
      v25 = 8 * v19;
      *((_DWORD *)v10 - 1) = v15;
      v9 = *(_QWORD **)(a1 + 48);
      v26 = 8LL * v15;
      if ( v25 != v26 )
      {
        v49 = *(_QWORD **)(a1 + 48);
        v48 = v10;
        memset(&v10[(unsigned __int64)v25 / 8], 0, v26 - v25);
        v9 = v49;
        v10 = v48;
      }
    }
LABEL_17:
    v10[v14] = v45;
    if ( !v9 )
      goto LABEL_28;
    goto LABEL_18;
  }
LABEL_30:
  v35 = *(_DWORD **)(a1 + 64);
  v36 = *(unsigned int *)(v7 + 20);
  if ( v35 )
  {
    v37 = *(v35 - 1);
    if ( v37 < (unsigned int)v36 )
      goto LABEL_37;
    if ( (_DWORD)v36 )
      return (unsigned __int64)memset(v35, 255, 4 * v36);
  }
  else if ( (_DWORD)v36 )
  {
    v37 = 0;
    v43 = (_QWORD *)sub_186B270(0x10u);
    v35 = v43 + 1;
    *v43 = 2;
    *(_QWORD *)(a1 + 64) = v43 + 1;
LABEL_37:
    while ( 1 )
    {
      v41 = *(v35 - 2);
      if ( v41 >= (unsigned int)v36 )
        break;
      v38 = (3 * v41 + 1) >> 1;
      v39 = 4 * v38 + 8;
      if ( 4 * v41 + 8 >= (unsigned int)v39 || v41 >= v38 )
        goto LABEL_43;
      v40 = (unsigned int *)sub_186B300(v35 - 2, v39);
      v35 = v40 + 2;
      *v40 = v38;
      *(_QWORD *)(a1 + 64) = v40 + 2;
    }
    *(v35 - 1) = v36;
    v42 = v37;
    if ( v42 != v36 )
      memset(&v35[v42], 255, 4 * v36 - v42 * 4);
    return (unsigned __int64)memset(v35, 255, 4 * v36);
  }
  return result;
}

