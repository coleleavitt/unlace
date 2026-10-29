__int64 __fastcall sub_AFB050(__int64 a1, int a2, __int64 *a3, _QWORD *a4, unsigned int *a5)
{
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  int *v12; // r14
  int v13; // eax
  int v14; // r15d
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  _QWORD *v17; // rax
  unsigned int v18; // edx
  size_t v19; // rsi
  unsigned int *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rsi
  int v24; // r15d
  __int64 v25; // rax
  unsigned int *v26; // rdx
  unsigned int *v27; // r8
  unsigned int *v28; // r14
  __int64 v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v34; // rax
  unsigned int *v35; // rax
  unsigned int v36; // ecx
  size_t v37; // rsi
  unsigned int *v38; // rax
  _QWORD *v39; // rax
  char **v40; // r12
  __int64 v41; // rdx
  char **exception; // r12
  __int64 v43; // rdx
  unsigned int v44; // [rsp+8h] [rbp-80h]
  unsigned int *v45; // [rsp+8h] [rbp-80h]
  unsigned int *v46; // [rsp+8h] [rbp-80h]
  unsigned int v48; // [rsp+18h] [rbp-70h]
  unsigned int v49; // [rsp+20h] [rbp-68h]
  unsigned int v50; // [rsp+28h] [rbp-60h]
  unsigned int v51; // [rsp+2Ch] [rbp-5Ch]
  __int64 v52[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( *a4 )
    *(_DWORD *)(*a4 - 4LL) = 0;
  v8 = sub_186B270(0x10u);
  v49 = 0;
  *(_DWORD *)(v8 + 8) = a2;
  v9 = (_QWORD *)(v8 + 8);
  *(_QWORD *)v8 = 0x100000002LL;
  while ( 1 )
  {
    v10 = (_QWORD *)*a4;
    v50 = *((_DWORD *)v9 + v49);
    v11 = v50 >> 5;
    if ( !*a4 )
    {
      v16 = v11 + 1;
      v17 = (_QWORD *)sub_186B270(0x10u);
      v10 = v17 + 1;
      *v17 = 2;
      *a4 = v17 + 1;
      v51 = 0;
      goto LABEL_13;
    }
    v51 = *((_DWORD *)v10 - 1);
    if ( (unsigned int)v11 >= v51 )
      break;
    v12 = (int *)v10 + v11;
    v13 = *v12;
    v14 = 1 << v50;
    if ( ((1 << v50) & *v12) == 0 )
      goto LABEL_17;
LABEL_7:
    if ( ++v49 >= *((_DWORD *)v9 - 1) )
    {
      v15 = 0;
LABEL_25:
      sub_186B220(v9 - 1);
      return v15;
    }
  }
  v16 = v11 + 1;
LABEL_13:
  while ( 1 )
  {
    v21 = *((_DWORD *)v10 - 2);
    if ( v21 >= v16 )
      break;
    v18 = (3 * v21 + 1) >> 1;
    v19 = 4 * v18 + 8;
    if ( 4 * v21 + 8 >= (unsigned int)v19 || v21 >= v18 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_140FB4(v52, "Overflow encountered when expanding vector", v43);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v52);
      sub_233E40((__int64)v52);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v44 = (3 * v21 + 1) >> 1;
    v20 = (unsigned int *)sub_186B300(v10 - 1, v19);
    v10 = v20 + 2;
    *a4 = v20 + 2;
    *v20 = v44;
  }
  *((_DWORD *)v10 - 1) = v16;
  v22 = 4LL * v16;
  v14 = 1 << v50;
  v23 = 4LL * v51;
  v12 = (int *)v10 + (v50 >> 5);
  if ( v23 != v22 )
    memset((char *)v10 + v23, 0, v22 - v23);
  v13 = *v12;
LABEL_17:
  v24 = v13 | v14;
  v25 = *(_QWORD *)(a1 + 48);
  *v12 = v24;
  v26 = *(unsigned int **)(v25 + 8LL * v50);
  if ( !v26 )
    goto LABEL_7;
  v27 = &v26[*(v26 - 1)];
  if ( v27 == v26 )
    goto LABEL_7;
  v28 = *(unsigned int **)(v25 + 8LL * v50);
  do
  {
    v29 = *(_QWORD *)(a1 + 40) + 32LL * *v28;
    v15 = *(unsigned __int8 *)(v29 + 24);
    if ( (_BYTE)v15 )
    {
      v30 = *(_DWORD *)(v29 + 4);
      v31 = *a3;
      *a5 = v30;
      v32 = v30 >> 5;
      if ( v31 && (unsigned int)v32 < *(_DWORD *)(v31 - 4) && (*(_DWORD *)(v31 + 4 * v32) & (1 << v30)) != 0 )
      {
        if ( !v9 )
          return v15;
        goto LABEL_25;
      }
      if ( v9 )
      {
        v34 = *((unsigned int *)v9 - 1);
        if ( (_DWORD)v34 == *((_DWORD *)v9 - 2) )
        {
          v36 = (unsigned int)(3 * v34 + 1) >> 1;
          v37 = 4 * v36 + 8;
          if ( 4 * (int)v34 + 8 >= (unsigned int)v37 || (unsigned int)v34 >= v36 )
          {
            v40 = (char **)__cxa_allocate_exception(0x28u);
            sub_140FB4(v52, "Overflow encountered when expanding vector", v41);
            *v40 = (char *)off_1C63128;
            sub_2333C0(v40 + 1, v52);
            sub_233E40((__int64)v52);
            __cxa_throw(v40, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v48 = (unsigned int)(3 * v34 + 1) >> 1;
          v45 = v27;
          v38 = (unsigned int *)sub_186B300(v9 - 1, v37);
          v9 = v38 + 2;
          v27 = v45;
          *v38 = v48;
          v30 = *a5;
          v35 = &v38[v38[1] + 2];
        }
        else
        {
          v35 = (unsigned int *)v9 + v34;
        }
      }
      else
      {
        v46 = v27;
        v39 = (_QWORD *)sub_186B270(0x10u);
        v30 = *a5;
        v27 = v46;
        v9 = v39 + 1;
        *v39 = 2;
        v35 = (unsigned int *)(v39 + 1);
      }
      *v35 = v30;
      ++*((_DWORD *)v9 - 1);
    }
    ++v28;
  }
  while ( v27 != v28 );
  if ( v9 )
    goto LABEL_7;
  return 0;
}

