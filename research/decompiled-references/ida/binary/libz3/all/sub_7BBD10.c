__int64 __fastcall sub_7BBD10(__int64 a1, unsigned int a2)
{
  char **v2; // rbp
  __int64 v3; // rdx
  char **exception; // rbp
  __int64 v5; // rdx
  __int64 i; // rax
  int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // rdi
  unsigned int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // r13d
  _QWORD *v18; // rcx
  __int64 v19; // rax
  unsigned int *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // r14d
  _DWORD *v24; // rcx
  __int64 v25; // r12
  int v26; // r15d
  unsigned int v27; // r11d
  _QWORD *v28; // rax
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // ebx
  size_t v32; // rsi
  unsigned int *v33; // rax
  char *v34; // rdx
  char *v35; // rdi
  unsigned int v36; // r10d
  size_t v37; // rsi
  unsigned int v38; // r13d
  unsigned int *v39; // rax
  __int64 v40; // rax
  __int64 result; // rax
  __int64 v42; // [rsp+8h] [rbp-80h]
  unsigned int v43; // [rsp+14h] [rbp-74h]
  unsigned int v44; // [rsp+18h] [rbp-70h]
  unsigned int v45; // [rsp+1Ch] [rbp-6Ch]
  __int64 v46; // [rsp+20h] [rbp-68h]
  unsigned int v47; // [rsp+20h] [rbp-68h]
  __int64 v48; // [rsp+20h] [rbp-68h]
  __int64 v49; // [rsp+20h] [rbp-68h]
  __int64 v50; // [rsp+28h] [rbp-60h]
  __int64 v51[11]; // [rsp+30h] [rbp-58h] BYREF

  for ( i = *(_QWORD *)(a1 + 824); i; i = *(_QWORD *)(a1 + 824) )
  {
    v8 = *(_DWORD *)(i - 4);
    if ( !v8 )
      break;
    v9 = v8 - 1;
    v10 = *(_DWORD *)(i + 4LL * v9);
    *(_DWORD *)(i - 4) = v9;
    *(_BYTE *)(*(_QWORD *)(a1 + 816) + v10) = 0;
  }
  v11 = *(_QWORD *)(a1 + 800);
  if ( !v11 )
    goto LABEL_44;
  v12 = *(_DWORD *)(v11 - 4);
  if ( !v12 )
    goto LABEL_43;
  v44 = a2;
  v43 = 0;
  v13 = 0;
  v42 = 4LL * v12;
  v45 = a2 - 1;
  do
  {
    v22 = *(_QWORD *)(a1 + 792);
    v23 = *(_DWORD *)(v11 + v13);
    v24 = *(_DWORD **)(a1 + 816);
    if ( v22 && v23 < *(_DWORD *)(v22 - 4) )
    {
      v25 = *(_QWORD *)(v22 + 8LL * v23);
      v26 = v25;
      *(_BYTE *)(a1 + 996) |= (int)v25 != v25;
      if ( v24 )
        goto LABEL_21;
      v17 = v23 + 1;
LABEL_31:
      v29 = sub_186B270(0xAu);
      v30 = 2;
      v27 = 0;
      v24 = (_DWORD *)(v29 + 8);
      *(_QWORD *)v29 = 2;
      *(_QWORD *)(a1 + 816) = v29 + 8;
      if ( v17 <= 2 )
      {
        *(_DWORD *)(v29 + 4) = v17;
        v35 = (char *)(v29 + 8);
        v14 = v23;
        v34 = (char *)v24 + v17;
        goto LABEL_37;
      }
      goto LABEL_32;
    }
    v26 = 0;
    LODWORD(v25) = 0;
    if ( !v24 )
    {
      v17 = v23 + 1;
      if ( v23 == -1 )
      {
        if ( MEMORY[0xFFFFFFFF] )
          goto LABEL_17;
        v15 = 0xFFFFFFFFLL;
        v16 = 0xFFFFFFFFLL;
LABEL_9:
        *(_BYTE *)v15 = 1;
        v18 = *(_QWORD **)(a1 + 824);
        if ( !v18 )
          goto LABEL_25;
        goto LABEL_10;
      }
      goto LABEL_31;
    }
LABEL_21:
    v27 = *(v24 - 1);
    if ( v23 < v27 )
    {
      v14 = v23;
      v15 = (__int64)v24 + v23;
      v16 = v23;
      if ( *(_BYTE *)v15 )
        goto LABEL_17;
      v17 = v23 + 1;
      if ( v27 >= v23 + 1 )
        goto LABEL_9;
      v30 = *(v24 - 2);
      if ( v30 >= v17 )
      {
        *(v24 - 1) = v17;
        v35 = (char *)v24 + v27;
        v34 = (char *)v24 + v17;
        goto LABEL_37;
      }
    }
    else
    {
      v17 = v23 + 1;
      v14 = v23;
      if ( v27 >= v23 + 1 )
        goto LABEL_23;
      v30 = *(v24 - 2);
      if ( v30 >= v17 )
      {
        *(v24 - 1) = v17;
        v14 = v23;
        v35 = (char *)v24 + v27;
        v34 = (char *)v24 + v17;
LABEL_37:
        v48 = v14;
        memset(v35, 0, v34 - v35);
        v24 = *(_DWORD **)(a1 + 816);
        v14 = v48;
        goto LABEL_23;
      }
    }
LABEL_32:
    v47 = v27;
    v50 = v13;
    do
    {
      v31 = (3 * v30 + 1) >> 1;
      v32 = v31 + 8;
      if ( v30 + 8 >= (unsigned int)v32 || v30 >= v31 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_113C8C(v51, "Overflow encountered when expanding vector", v5);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v51);
        sub_233E40((__int64)v51);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (unsigned int *)sub_186B300(v24 - 2, v32);
      v30 = v31;
      v24 = v33 + 2;
      *v33 = v31;
      *(_QWORD *)(a1 + 816) = v33 + 2;
    }
    while ( v31 < v17 );
    v33[1] = v17;
    v14 = v23;
    v13 = v50;
    v34 = (char *)v24 + v17;
    v35 = (char *)v24 + v47;
    if ( v17 != v47 )
      goto LABEL_37;
LABEL_23:
    v16 = v14;
    if ( !*((_BYTE *)v24 + v14) )
    {
      *((_BYTE *)v24 + v14) = 1;
      v18 = *(_QWORD **)(a1 + 824);
      if ( !v18 )
      {
LABEL_25:
        v46 = v16;
        v28 = (_QWORD *)sub_186B270(0x10u);
        v16 = v46;
        v18 = v28 + 1;
        *v28 = 2;
        *(_QWORD *)(a1 + 824) = v28 + 1;
        v20 = (unsigned int *)(v28 + 1);
LABEL_12:
        *v20 = v23;
        ++*((_DWORD *)v18 - 1);
        goto LABEL_13;
      }
LABEL_10:
      v19 = *((unsigned int *)v18 - 1);
      if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
      {
        v36 = (unsigned int)(3 * v19 + 1) >> 1;
        v37 = 4 * v36 + 8;
        v38 = v36;
        if ( 4 * (int)v19 + 8 >= (unsigned int)v37 || (unsigned int)v19 >= v36 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_113C8C(v51, "Overflow encountered when expanding vector", v3);
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v51);
          sub_233E40((__int64)v51);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v49 = v16;
        v39 = (unsigned int *)sub_186B300(v18 - 1, v37);
        v16 = v49;
        v18 = v39 + 2;
        *v39 = v38;
        v40 = v39[1];
        *(_QWORD *)(a1 + 824) = v18;
        v20 = (unsigned int *)v18 + v40;
      }
      else
      {
        v20 = (unsigned int *)v18 + v19;
      }
      goto LABEL_12;
    }
LABEL_13:
    v11 = *(_QWORD *)(a1 + 800);
    if ( v26 )
    {
      if ( v26 <= 0 )
        v21 = -(__int64)((v45 - (unsigned int)v25) / v44);
      else
        v21 = ((unsigned int)v25 + v45) / v44;
      *(_QWORD *)(*(_QWORD *)(a1 + 792) + 8 * v16) = v21;
      *(_DWORD *)(v11 + 4LL * v43++) = v23;
    }
LABEL_17:
    v13 += 4;
  }
  while ( v13 != v42 );
  v12 = v43;
  a2 = v44;
  if ( v11 )
LABEL_43:
    *(_DWORD *)(v11 - 4) = v12;
LABEL_44:
  result = (a2 + *(_DWORD *)(a1 + 808) - 1) / a2;
  *(_DWORD *)(a1 + 808) = result;
  return result;
}

