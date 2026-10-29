_QWORD *__fastcall sub_BD1D40(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // r13d
  unsigned int v6; // r12d
  _QWORD *v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  size_t v10; // rsi
  unsigned int *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  _DWORD *v14; // rcx
  __int64 v15; // r14
  _QWORD *v16; // r12
  __int64 v17; // rdx
  _QWORD *result; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // esi
  unsigned int v22; // eax
  unsigned int v23; // esi
  size_t v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // r15
  __int64 v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rdi
  _QWORD *v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 *v37; // r13
  __int64 *v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rdi
  bool v41; // zf
  __int64 *v42; // r14
  __int64 *v43; // r13
  __int64 v44; // rsi
  __int64 v45; // rdi
  _QWORD *v46; // rax
  char **exception; // rbp
  __int64 v48; // rdx
  __int64 v49; // rdx
  _QWORD *v50; // [rsp+8h] [rbp-80h]
  _DWORD *v51; // [rsp+10h] [rbp-78h]
  unsigned int v52; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v53; // [rsp+2Ch] [rbp-5Ch] BYREF
  __int64 v54[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = *(_DWORD *)a1;
  v7 = *(_QWORD **)(a1 + 32);
  v53 = *(_DWORD *)a1;
  if ( v7 )
    goto LABEL_6;
  v13 = (_QWORD *)sub_186B270(0x10u);
  v7 = v13 + 1;
  *v13 = 2;
  *(_QWORD *)(a1 + 32) = v13 + 1;
  v14 = v13 + 1;
  while ( 1 )
  {
    *v14 = 0;
    ++*((_DWORD *)v7 - 1);
LABEL_6:
    v8 = *((_DWORD *)v7 - 1);
    if ( v6 < v8 )
      break;
    v14 = (_DWORD *)v7 + v8;
    if ( v8 == *((_DWORD *)v7 - 2) )
    {
      v9 = (3 * v8 + 1) >> 1;
      v10 = 4 * v9 + 8;
      if ( 4 * v8 + 8 >= (unsigned int)v10 || v8 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v54, "Overflow encountered when expanding vector", v49);
LABEL_50:
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v54);
        sub_233E40((__int64)v54);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = (unsigned int *)sub_186B300(v7 - 1, v10);
      v7 = v11 + 2;
      *v11 = v9;
      v12 = v11[1];
      *(_QWORD *)(a1 + 32) = v7;
      v14 = (_DWORD *)v7 + v12;
    }
  }
  v15 = v6;
  if ( v6 >= *(_DWORD *)(a1 + 4) )
  {
    v16 = *(_QWORD **)(a1 + 16);
    *((_DWORD *)v7 + v15) = v5;
    if ( v16 )
      goto LABEL_13;
LABEL_46:
    v46 = (_QWORD *)sub_186B270(0x68u);
    v16 = v46 + 1;
    *v46 = 2;
    *(_QWORD *)(a1 + 16) = v46 + 1;
    result = v46 + 1;
    goto LABEL_15;
  }
  sub_BB7E40((_QWORD *)(a1 + 40), &v53);
  sub_BB7E40((_QWORD *)(a1 + 48), (unsigned int *)(4LL * v6 + *(_QWORD *)(a1 + 32)));
  v16 = *(_QWORD **)(a1 + 16);
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v15) = v5;
  if ( !v16 )
    goto LABEL_46;
LABEL_13:
  v17 = *((unsigned int *)v16 - 1);
  if ( (_DWORD)v17 == *((_DWORD *)v16 - 2) )
  {
    v21 = 3 * v17 + 1;
    v22 = v21 & 0xFFFFFFFE;
    v23 = v21 >> 1;
    v52 = v23;
    v24 = 16 * (v22 + v23) + 8;
    if ( 48 * (int)v17 + 8 >= (unsigned int)v24 || (unsigned int)v17 >= v23 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_154526(v54, "Overflow encountered when expanding vector", v48);
      goto LABEL_50;
    }
    v25 = sub_186B270(v24);
    v26 = *(_QWORD **)(a1 + 16);
    v51 = (_DWORD *)v25;
    v16 = (_QWORD *)(v25 + 8);
    if ( v26 )
    {
      v27 = v25;
      v28 = *((unsigned int *)v26 - 1);
      v29 = v16;
      *(_DWORD *)(v27 + 4) = v28;
      v30 = 3 * v28;
      v31 = v26;
      v32 = &v26[2 * v30];
      if ( v32 != v26 )
      {
        do
        {
          v33 = *v31;
          v31 += 6;
          v29 += 6;
          *(v29 - 6) = v33;
          v34 = *(v31 - 5);
          *(v31 - 5) = 0;
          *(v29 - 5) = v34;
          *(v29 - 4) = *(v31 - 4);
          v35 = *(v31 - 3);
          *(v31 - 3) = 0;
          *(v29 - 3) = v35;
          *((_DWORD *)v29 - 4) = *((_DWORD *)v31 - 4);
          *(v29 - 1) = *(v31 - 1);
        }
        while ( v32 != v31 );
      }
      v36 = *((unsigned int *)v26 - 1);
      if ( (_DWORD)v36 )
      {
        v50 = &v26[6 * v36];
        do
        {
          v37 = (__int64 *)v26[3];
          if ( v37 )
          {
            v38 = &v37[*((unsigned int *)v37 - 1)];
            if ( v37 >= v38 )
              goto LABEL_31;
            do
            {
              while ( 1 )
              {
                v39 = *v37;
                if ( *v37 )
                {
                  v40 = v26[2];
                  v41 = (*(_DWORD *)(v39 + 8))-- == 1;
                  if ( v41 )
                    break;
                }
                if ( ++v37 >= v38 )
                  goto LABEL_30;
              }
              sub_15D7BC0(v40, v39);
              ++v37;
            }
            while ( v37 < v38 );
LABEL_30:
            v37 = (__int64 *)v26[3];
            if ( v37 )
LABEL_31:
              sub_186B220(v37 - 1);
          }
          v42 = (__int64 *)v26[1];
          if ( v42 )
          {
            v43 = &v42[*((unsigned int *)v42 - 1)];
            if ( v42 >= v43 )
              goto LABEL_40;
            do
            {
              while ( 1 )
              {
                v44 = *v42;
                if ( *v42 )
                {
                  v45 = *v26;
                  v41 = (*(_DWORD *)(v44 + 8))-- == 1;
                  if ( v41 )
                    break;
                }
                if ( ++v42 >= v43 )
                  goto LABEL_39;
              }
              sub_15D7BC0(v45, v44);
              ++v42;
            }
            while ( v42 < v43 );
LABEL_39:
            v42 = (__int64 *)v26[1];
            if ( v42 )
LABEL_40:
              sub_186B220(v42 - 1);
          }
          v26 += 6;
        }
        while ( v26 != v50 );
        v26 = *(_QWORD **)(a1 + 16);
      }
      sub_186B220(v26 - 1);
      result = &v16[6 * (unsigned int)v51[1]];
    }
    else
    {
      *(_DWORD *)(v25 + 4) = 0;
      result = (_QWORD *)(v25 + 8);
    }
    *(_QWORD *)(a1 + 16) = v16;
    *v51 = v52;
  }
  else
  {
    result = &v16[6 * v17];
  }
LABEL_15:
  *result = *(_QWORD *)a2;
  v19 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0;
  result[1] = v19;
  result[2] = *(_QWORD *)(a2 + 16);
  v20 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0;
  result[3] = v20;
  *((_DWORD *)result + 8) = *(_DWORD *)(a2 + 32);
  result[5] = *(_QWORD *)(a2 + 40);
  ++*((_DWORD *)v16 - 1);
  ++*(_DWORD *)a1;
  return result;
}

