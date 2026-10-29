__int64 (__fastcall *__fastcall sub_DEBA00(_QWORD *a1, __int64 *a2))(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  bool v5; // zf
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // r14
  __int64 v9; // rbp
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 (__fastcall *result)(__int64, __int64 *); // rax
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 *v19; // rdi
  unsigned int v20; // r15d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  _QWORD *v28; // rcx
  __int64 *v29; // rbx
  __int64 *v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // r15
  __int64 v33; // rdi
  __int64 *v34; // rax
  __int64 v35; // rdi
  void *v36; // rdi
  __int64 v37; // rsi
  __int64 *v38; // rdx
  __int64 *v39; // rax
  int v40; // ecx
  unsigned int v41; // ebp
  size_t v42; // rbx
  __int64 *v43; // rdx
  __int64 *v44; // rax
  _QWORD *v45; // rax
  unsigned int v46; // ebp
  unsigned int v47; // ecx
  unsigned int *v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rdx
  size_t v51; // rsi
  char **exception; // rbp
  __int64 v53[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = a1[4];
  v5 = (*(_DWORD *)(v4 + 16))-- == 1;
  if ( v5 )
  {
    v24 = (_QWORD *)a2[10];
    if ( v24 )
    {
      v25 = *((_DWORD *)v24 - 1);
      if ( v25 == *((_DWORD *)v24 - 2) )
      {
        v46 = (3 * v25 + 1) >> 1;
        v47 = 8 * v46 + 8;
        if ( 8 * v25 + 8 >= v47 || v25 >= v46 )
        {
LABEL_75:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v53, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v53);
          sub_233E40((__int64)v53);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v48 = (unsigned int *)sub_186B300(v24 - 1, v47);
        v49 = v48[1];
        v24 = v48 + 2;
        *v48 = v46;
        a2[10] = (__int64)(v48 + 2);
        LODWORD(v48) = v49;
        v28 = &v24[v49];
        v27 = (_DWORD)v48 + 1;
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
      v50 = (_QWORD *)sub_186B270(0x18u);
      *v50 = 2;
      v27 = 1;
      v24 = v50 + 1;
      a2[10] = (__int64)v24;
      v28 = v24;
    }
    *v28 = v4;
    *((_DWORD *)v24 - 1) = v27;
  }
  v6 = (__int64 *)a1[5];
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = &v6[v7];
      do
      {
        while ( 1 )
        {
          v9 = *v6;
          v5 = (*(_DWORD *)(*v6 + 16))-- == 1;
          if ( v5 )
            break;
          if ( v8 == ++v6 )
            goto LABEL_11;
        }
        v10 = (_QWORD *)a2[10];
        if ( v10 )
        {
          v11 = *((_DWORD *)v10 - 1);
          if ( v11 == *((_DWORD *)v10 - 2) )
          {
            v20 = (3 * v11 + 1) >> 1;
            v21 = 8 * v20 + 8;
            if ( 8 * v11 + 8 >= (unsigned int)v21 || v11 >= v20 )
              goto LABEL_75;
            v22 = (unsigned int *)sub_186B300(v10 - 1, v21);
            v23 = v22[1];
            v10 = v22 + 2;
            *v22 = v20;
            a2[10] = (__int64)(v22 + 2);
            LODWORD(v22) = v23;
            v14 = &v10[v23];
            v13 = (_DWORD)v22 + 1;
          }
          else
          {
            v12 = v11;
            v13 = v11 + 1;
            v14 = &v10[v12];
          }
        }
        else
        {
          v45 = (_QWORD *)sub_186B270(0x18u);
          v10 = v45 + 1;
          *v45 = 2;
          v13 = 1;
          a2[10] = (__int64)v10;
          v14 = v10;
        }
        ++v6;
        *v14 = v9;
        *((_DWORD *)v10 - 1) = v13;
      }
      while ( v8 != v6 );
    }
  }
LABEL_11:
  result = *(__int64 (__fastcall **)(__int64, __int64 *))(*a1 + 56LL);
  if ( result == sub_DDD780 )
  {
    v16 = a1[3];
    if ( !v16 )
    {
LABEL_21:
      a1[3] = 0;
      return result;
    }
    if ( !*(_DWORD *)v16 )
    {
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
      {
        v18 = *a2;
        v5 = (*(_DWORD *)(v17 + 8))-- == 1;
        if ( v5 )
          sub_15D7BC0(v18, v17);
      }
      *(_QWORD *)(v16 + 8) = 0;
      v19 = *(__int64 **)(v16 + 16);
      goto LABEL_18;
    }
    v19 = *(__int64 **)(v16 + 16);
    v29 = v19;
    v30 = &v19[2 * *(unsigned int *)(v16 + 24)];
    if ( v19 != v30 )
    {
      while ( (unsigned __int64)*v29 <= 1 )
      {
        v29 += 2;
        if ( v30 == v29 )
          goto LABEL_51;
      }
      if ( v29 != v30 )
      {
        v31 = *v29;
        v32 = v29[1];
        if ( *v29 )
          goto LABEL_45;
LABEL_35:
        if ( *(_DWORD *)v16 == 1 )
        {
LABEL_36:
          if ( v32 )
          {
            v33 = *a2;
            v5 = (*(_DWORD *)(v32 + 8))-- == 1;
            if ( v5 )
              sub_15D7BC0(v33, v32);
          }
          goto LABEL_39;
        }
        while ( 1 )
        {
          sub_DE95C0(v32, a2);
          v36 = *(void **)(v32 + 16);
          if ( v36 )
            sub_186B220(v36);
          sub_17E9C40(a2[1], 40, v32);
LABEL_39:
          v34 = v29 + 2;
          if ( v30 == v29 + 2 )
            break;
          while ( 1 )
          {
            v31 = *v34;
            v29 = v34;
            if ( (unsigned __int64)*v34 > 1 )
              break;
            v34 += 2;
            if ( v30 == v34 )
              goto LABEL_50;
          }
          if ( v30 == v34 )
            break;
          v32 = v34[1];
LABEL_45:
          v35 = *a2;
          v5 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( !v5 )
            goto LABEL_35;
          sub_15D7BC0(v35, v31);
          if ( *(_DWORD *)v16 == 1 )
            goto LABEL_36;
        }
LABEL_50:
        v19 = *(__int64 **)(v16 + 16);
      }
    }
LABEL_51:
    if ( !*(_DWORD *)(v16 + 28) && !*(_DWORD *)(v16 + 32) )
    {
LABEL_18:
      if ( !v19 )
      {
LABEL_20:
        result = (__int64 (__fastcall *)(__int64, __int64 *))sub_17E9C40(a2[1], 40, v16);
        goto LABEL_21;
      }
LABEL_19:
      sub_186B220(v19);
      goto LABEL_20;
    }
    v37 = *(unsigned int *)(v16 + 24);
    v38 = &v19[2 * v37];
    if ( v38 == v19 )
      goto LABEL_72;
    v39 = v19;
    v40 = 0;
    do
    {
      while ( *v39 )
      {
        *v39 = 0;
        v39 += 2;
        if ( v38 == v39 )
          goto LABEL_57;
      }
      v39 += 2;
      ++v40;
    }
    while ( v38 != v39 );
LABEL_57:
    if ( (unsigned int)v37 <= 0x10 || 3 * (int)v37 >= (unsigned int)(4 * v40) )
    {
LABEL_72:
      *(_QWORD *)(v16 + 28) = 0;
      goto LABEL_18;
    }
    if ( v19 )
    {
      sub_186B220(v19);
      v41 = *(_DWORD *)(v16 + 24);
      *(_QWORD *)(v16 + 16) = 0;
      v41 >>= 1;
      *(_DWORD *)(v16 + 24) = v41;
      v42 = 2LL * v41;
      v19 = (__int64 *)sub_186B270(v42 * 8);
      if ( !v41 )
      {
LABEL_64:
        *(_QWORD *)(v16 + 16) = v19;
        *(_QWORD *)(v16 + 28) = 0;
        goto LABEL_19;
      }
    }
    else
    {
      v51 = (unsigned int)v37 >> 1;
      *(_QWORD *)(v16 + 16) = 0;
      *(_DWORD *)(v16 + 24) = v51;
      v42 = 2 * v51;
      v19 = (__int64 *)sub_186B270(16 * v51);
    }
    v43 = &v19[v42];
    v44 = v19;
    if ( ((v42 * 8) & 0x10) == 0 || (v44 = v19 + 2, *(_OWORD *)v19 = 0, v43 != v19 + 2) )
    {
      do
      {
        *(_OWORD *)v44 = 0;
        v44 += 4;
        *((_OWORD *)v44 - 1) = 0;
      }
      while ( v43 != v44 );
    }
    goto LABEL_64;
  }
  return (__int64 (__fastcall *)(__int64, __int64 *))result((__int64)a1, a2);
}

