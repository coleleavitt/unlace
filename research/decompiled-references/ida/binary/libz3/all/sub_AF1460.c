__int64 __fastcall sub_AF1460(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char **v3; // rbx
  __int64 v4; // rdx
  char **v5; // r13
  __int64 v6; // rdx
  char **exception; // rbx
  __int64 v8; // rdx
  __int64 result; // rax
  _QWORD *v10; // rdi
  unsigned int v13; // r13d
  __int64 v14; // rbx
  unsigned int v15; // ebp
  size_t v16; // rsi
  unsigned int *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rdx
  char *v21; // rdi
  _QWORD *v22; // rax
  _DWORD *v23; // rbp
  unsigned int v24; // r15d
  size_t v25; // rsi
  unsigned int *v26; // rax
  unsigned int v27; // eax
  _QWORD *v28; // rax
  unsigned int *v29; // rax
  unsigned int v30; // r15d
  unsigned int v31; // ecx
  __int64 v32; // rbx
  int v33; // edi
  __int64 v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // r9
  int v38; // eax
  _BYTE *v39; // r10
  unsigned int v40; // r8d
  size_t v41; // rsi
  unsigned int *v42; // rax
  unsigned int *v43; // r13
  unsigned int *v44; // rcx
  char v45; // r11
  int v46; // r8d
  unsigned int *v47; // rax
  __int64 v48; // r15
  bool v49; // zf
  _QWORD *v50; // rax
  unsigned int v51; // [rsp+0h] [rbp-8Ch]
  int v52; // [rsp+0h] [rbp-8Ch]
  _BYTE *v53; // [rsp+4h] [rbp-88h]
  __int64 v54; // [rsp+Ch] [rbp-80h]
  unsigned int *v55; // [rsp+14h] [rbp-78h]
  unsigned int v56; // [rsp+30h] [rbp-5Ch] BYREF
  __int64 v57[11]; // [rsp+34h] [rbp-58h] BYREF

  result = a2[6];
  v10 = (_QWORD *)*a3;
  if ( result )
  {
    v13 = *(_DWORD *)(result - 4);
    if ( v10 )
    {
      v14 = *((unsigned int *)v10 - 1);
      if ( (unsigned int)v14 >= v13 )
      {
        *((_DWORD *)v10 - 1) = v13;
        if ( !v13 )
          return result;
        goto LABEL_11;
      }
    }
    else
    {
      if ( !v13 )
        return result;
      v14 = 0;
      v50 = (_QWORD *)sub_186B270(0x10u);
      v10 = v50 + 1;
      *v50 = 2;
      *a3 = v50 + 1;
    }
    while ( 1 )
    {
      v18 = *((_DWORD *)v10 - 2);
      if ( v18 >= v13 )
        break;
      v15 = (3 * v18 + 1) >> 1;
      v16 = 4 * v15 + 8;
      if ( 4 * v18 + 8 >= (unsigned int)v16 || v18 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(v57, "Overflow encountered when expanding vector", v8);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v57);
        sub_233E40((__int64)v57);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v10 - 1, v16);
      v10 = v17 + 2;
      *v17 = v15;
      *a3 = v17 + 2;
    }
    v19 = 4 * v14;
    *((_DWORD *)v10 - 1) = v13;
    v20 = 4LL * v13;
    v21 = (char *)v10 + v19;
    if ( v19 != v20 )
      memset(v21, 0, v20 - v19);
LABEL_11:
    v22 = (_QWORD *)sub_186B270(0xAu);
    v23 = v22 + 1;
    *v22 = 2;
    while ( 1 )
    {
      v27 = *(v23 - 2);
      if ( v27 >= v13 )
        break;
      v24 = (3 * v27 + 1) >> 1;
      v25 = v24 + 8;
      if ( v27 + 8 >= (unsigned int)v25 || v27 >= v24 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(v57, "Overflow encountered when expanding vector", v4);
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v57);
        sub_233E40((__int64)v57);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v26 = (unsigned int *)sub_186B300(v23 - 2, v25);
      *v26 = v24;
      v23 = v26 + 2;
    }
    *(v23 - 1) = v13;
    memset(v23, 0, v13);
    v28 = (_QWORD *)sub_186B270(0x10u);
    *v28 = 2;
    v29 = (unsigned int *)(v28 + 1);
    v30 = 0;
    v31 = 0;
    v32 = (__int64)v29;
    while ( 1 )
    {
      *v29 = v31;
      v33 = *(_DWORD *)(v32 - 4);
      ++v30;
      v34 = (unsigned int)(v33 + 1);
      *(_DWORD *)(v32 - 4) = v34;
      if ( v13 == v30 )
        break;
      v35 = *(_DWORD *)(v32 - 8);
      v31 = v30;
      if ( v35 == (_DWORD)v34 )
      {
        v40 = (3 * v35 + 1) >> 1;
        v41 = 4 * v40 + 8;
        if ( 4 * v33 + 12 >= (unsigned int)v41 || v35 >= v40 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_140FB4(v57, "Overflow encountered when expanding vector", v6);
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v57);
          sub_233E40((__int64)v57);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v51 = (3 * v35 + 1) >> 1;
        v42 = (unsigned int *)sub_186B300((void *)(v32 - 8), v41);
        v32 = (__int64)(v42 + 2);
        v31 = v30;
        *v42 = v51;
        v29 = &v42[v42[1] + 2];
      }
      else
      {
        v29 = (unsigned int *)(v32 + 4 * v34);
      }
    }
    while ( 1 )
    {
      if ( !(_DWORD)v34 )
      {
        sub_186B220(v23 - 2);
        return sub_186B220((void *)(v32 - 8));
      }
      v36 = (unsigned int)(v34 - 1);
      v37 = *(unsigned int *)(v32 + 4 * v36);
      v38 = v34 - 1;
      v39 = (char *)v23 + v37;
      if ( *((_BYTE *)v23 + v37) )
      {
        *(_DWORD *)(v32 - 4) = v36;
        goto LABEL_22;
      }
      v43 = *(unsigned int **)(a2[6] + 8 * v37);
      if ( !v43 )
        break;
      v44 = &v43[*(v43 - 1)];
      if ( v44 == v43 )
        break;
      v45 = 1;
      v46 = 1;
      do
      {
        while ( 1 )
        {
          v47 = (unsigned int *)(a2[5] + 32LL * *v43);
          if ( *((_BYTE *)v47 + 24) )
          {
            v48 = v47[1];
            if ( *(_DWORD *)(a2[3] + 4 * v48) == *(_DWORD *)(a2[3] + 4LL * *v47) - 1 )
            {
              if ( v47[2] )
                break;
            }
          }
          if ( v44 == ++v43 )
            goto LABEL_39;
        }
        v49 = *((_BYTE *)v23 + v48) == 0;
        v56 = v47[1];
        if ( v49 )
        {
          v55 = v44;
          v54 = v37;
          v53 = v39;
          v52 = v46;
          v57[0] = v32;
          sub_AF0D60(v57, &v56);
          v32 = v57[0];
          v44 = v55;
          v45 = 0;
          v37 = v54;
          v39 = v53;
          v46 = v52;
        }
        ++v43;
        v46 += *(_DWORD *)(*a3 + 4 * v48);
      }
      while ( v44 != v43 );
LABEL_39:
      if ( v45 )
      {
        v38 = *(_DWORD *)(v32 - 4) - 1;
LABEL_49:
        *(_DWORD *)(v32 - 4) = v38;
        *(_DWORD *)(*a3 + 4 * v37) = v46;
        *v39 = 1;
        goto LABEL_22;
      }
      if ( !v32 )
        return sub_186B220(v23 - 2);
LABEL_22:
      LODWORD(v34) = *(_DWORD *)(v32 - 4);
    }
    v46 = 1;
    goto LABEL_49;
  }
  if ( v10 )
    *((_DWORD *)v10 - 1) = 0;
  return result;
}

