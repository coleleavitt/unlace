__int64 __fastcall sub_B41510(__int64 a1, unsigned int a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v5; // rbx
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 *v10; // rcx
  int v11; // edi
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // r12
  unsigned int v19; // r14d
  unsigned int v20; // eax
  _DWORD *v21; // r9
  unsigned int v22; // r14d
  unsigned int *v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 result; // rax
  int v28; // edx
  unsigned int *v29; // rsi
  __int64 v30; // r11
  __int64 *v31; // rax
  __int64 v32; // r10
  double v33; // xmm0_8
  unsigned int *v34; // r8
  _QWORD *v35; // rax
  unsigned int v36; // eax
  unsigned int v37; // r15d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // r12d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rax
  unsigned int v47; // [rsp+Ch] [rbp-6Ch]
  __int64 v48[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a2;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8840) + 8LL * a2);
  if ( !v8 )
    goto LABEL_9;
  v9 = *(unsigned int *)(a1 + 56);
  v10 = *(__int64 **)(a1 + 48);
  v11 = *(_DWORD *)(v8 + 12);
  v12 = v9 - 1;
  v9 *= 16;
  v13 = (__int64 *)((char *)v10 + v9);
  v14 = 16LL * (v11 & v12);
  v15 = &v10[(unsigned __int64)v14 / 8];
  if ( v14 == v9 )
  {
LABEL_32:
    while ( v15 != v10 )
    {
      v42 = *v10;
      if ( (unsigned __int64)*v10 > 1 )
      {
        if ( *(_DWORD *)(v42 + 12) == v11 && v8 == v42 )
        {
          v16 = v10;
          goto LABEL_21;
        }
      }
      else if ( !v42 )
      {
        break;
      }
      v10 += 2;
    }
LABEL_9:
    v18 = *(_QWORD **)(a1 + 40);
    v19 = a2 + 1;
    if ( !v18 )
      goto LABEL_22;
    goto LABEL_10;
  }
  v16 = &v10[(unsigned __int64)v14 / 8];
  while ( 1 )
  {
    v17 = *v16;
    if ( (unsigned __int64)*v16 > 1 )
      break;
    if ( !v17 )
      goto LABEL_9;
LABEL_6:
    v16 += 2;
    if ( v13 == v16 )
      goto LABEL_32;
  }
  if ( *(_DWORD *)(v17 + 12) != v11 || v8 != v17 )
    goto LABEL_6;
LABEL_21:
  v18 = *(_QWORD **)(a1 + 40);
  v19 = a2 + 1;
  *(_QWORD *)(*(_QWORD *)(v7 + 8880) + 8 * v5) = v16[1];
  if ( !v18 )
  {
LABEL_22:
    if ( (int)v19 > 0 )
    {
      v35 = (_QWORD *)sub_186B270(0x10u);
      v47 = 0;
      v18 = v35 + 1;
      *v35 = 2;
      v36 = *(_DWORD *)v35;
      *(_QWORD *)(a1 + 40) = v18;
      if ( v36 < v19 )
        goto LABEL_24;
      goto LABEL_28;
    }
    goto LABEL_11;
  }
LABEL_10:
  v20 = *((_DWORD *)v18 - 1);
  v47 = v20;
  if ( (int)v19 <= (int)v20 )
    goto LABEL_11;
  if ( v20 >= v19 )
  {
    *((_DWORD *)v18 - 1) = v19;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v36 = *((_DWORD *)v18 - 2);
    if ( v36 >= v19 )
      break;
LABEL_24:
    v37 = (3 * v36 + 1) >> 1;
    v38 = 4 * v37 + 8;
    if ( 4 * v36 + 8 >= (unsigned int)v38 || v36 >= v37 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v48, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v48);
      sub_233E40((__int64)v48);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v39 = (unsigned int *)sub_186B300(v18 - 1, v38);
    v18 = v39 + 2;
    *v39 = v37;
    *(_QWORD *)(a1 + 40) = v39 + 2;
  }
LABEL_28:
  *((_DWORD *)v18 - 1) = v19;
  v40 = 4LL * v19;
  v41 = 4LL * v47;
  if ( v41 == v40 )
  {
LABEL_11:
    v21 = *(_DWORD **)(a1 + 32);
    v22 = a2;
    v23 = (unsigned int *)v18 + v5;
    if ( !v21 )
      goto LABEL_30;
  }
  else
  {
    v22 = a2;
    memset((char *)v18 + v41, 0, v40 - v41);
    v21 = *(_DWORD **)(a1 + 32);
    v23 = (unsigned int *)v18 + v5;
    if ( !v21 )
    {
LABEL_30:
      *v23 = 0;
      result = sub_186B270(0x10u);
      v30 = v5;
      v18 = *(_QWORD **)(a1 + 40);
      v24 = 0;
      v29 = (unsigned int *)(result + 8);
      *(_QWORD *)result = 2;
      *(_QWORD *)(a1 + 32) = result + 8;
      ++*(_DWORD *)(result + 4);
      *(_DWORD *)(result + 8) = a2;
      goto LABEL_19;
    }
  }
  v24 = *(v21 - 1);
  *v23 = v24;
  v25 = (unsigned int)*(v21 - 1);
  if ( (_DWORD)v25 == *(v21 - 2) )
  {
    v43 = (unsigned int)(3 * v25 + 1) >> 1;
    v44 = 4 * v43 + 8;
    if ( 4 * (int)v25 + 8 >= (unsigned int)v44 || (unsigned int)v25 >= v43 )
    {
      v2 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v48, "Overflow encountered when expanding vector");
      *v2 = (char *)off_1C63128;
      sub_2333C0(v2 + 1, v48);
      sub_233E40((__int64)v48);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v45 = (unsigned int *)sub_186B300(v21 - 2, v44);
    v26 = v24;
    v21 = v45 + 2;
    *v45 = v43;
    v46 = v45[1];
    v28 = (int)v24 >> 1;
    *(_QWORD *)(a1 + 32) = v21;
    v18 = *(_QWORD **)(a1 + 40);
    v29 = &v21[v24];
    result = (__int64)&v21[v46];
  }
  else
  {
    v26 = v24;
    result = (__int64)&v21[v25];
    v28 = (int)v24 >> 1;
    v29 = &v21[v24];
  }
  *(_DWORD *)result = a2;
  ++*(v21 - 1);
  v30 = *v29;
  v22 = *v29;
  if ( v28 )
  {
    v31 = *(__int64 **)(a1 + 24);
    v32 = *v31;
    v33 = *(double *)(*v31 + 8 * v30);
    while ( 1 )
    {
      v29 = &v21[v26];
      v34 = &v21[v28];
      result = *v34;
      if ( v33 <= *(double *)(v32 + 8 * result) )
        break;
      *v29 = result;
      *((_DWORD *)v18 + result) = v24;
      v24 = v28;
      v28 >>= 1;
      if ( !v28 )
      {
        v29 = v34;
        v24 = 1;
        break;
      }
      v26 = v24;
    }
  }
LABEL_19:
  *v29 = v22;
  *((_DWORD *)v18 + v30) = v24;
  return result;
}

