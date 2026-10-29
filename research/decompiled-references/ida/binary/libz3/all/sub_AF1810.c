__int64 __fastcall sub_AF1810(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, __int64 *a5)
{
  char **v5; // rbx
  __int64 v6; // rdx
  char **exception; // rbx
  __int64 v8; // rdx
  char **v9; // r12
  __int64 v10; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  unsigned int v15; // ebx
  __int64 result; // rax
  unsigned int v19; // ecx
  size_t v20; // rsi
  unsigned int v21; // r14d
  unsigned int *v22; // rax
  unsigned int v23; // eax
  char *v24; // rdi
  __int64 v25; // rdx
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  unsigned int v28; // edx
  size_t v29; // rsi
  unsigned int v30; // r14d
  unsigned int *v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  char *v35; // rdi
  __int64 v36; // r14
  __int64 v37; // rbx
  int v38; // r8d
  __int64 v39; // rdi
  char v40; // si
  __int64 v41; // rdx
  int v42; // eax
  int v43; // edx
  __int64 v44; // rax
  unsigned int v45; // r9d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // r9
  int v51; // r8d
  __int64 v52; // rdx
  unsigned int v53; // r14d
  __int64 v54; // rsi
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  unsigned int v59; // [rsp+0h] [rbp-88h]
  unsigned int v60; // [rsp+0h] [rbp-88h]
  int v61; // [rsp+0h] [rbp-88h]
  int v62; // [rsp+8h] [rbp-80h]
  _QWORD *v63; // [rsp+8h] [rbp-80h]
  int v64; // [rsp+8h] [rbp-80h]
  unsigned int v65; // [rsp+10h] [rbp-78h]
  __int64 v66; // [rsp+10h] [rbp-78h]
  __int64 v67; // [rsp+18h] [rbp-70h]
  unsigned int v68; // [rsp+2Ch] [rbp-5Ch] BYREF
  __int64 v69[11]; // [rsp+30h] [rbp-58h] BYREF

  v13 = a2[6];
  v14 = (_QWORD *)*a4;
  if ( !v13 )
  {
    if ( v14 )
    {
      result = *a5;
      *((_DWORD *)v14 - 1) = 0;
      if ( !result )
        return result;
      goto LABEL_51;
    }
LABEL_56:
    result = *a5;
    if ( !*a5 )
      return result;
LABEL_51:
    *(_DWORD *)(result - 4) = 0;
    return result;
  }
  v15 = *(_DWORD *)(v13 - 4);
  if ( !v14 )
  {
    if ( v15 )
    {
      v57 = (_QWORD *)sub_186B270(0x10u);
      v14 = v57 + 1;
      *v57 = 2;
      *a4 = v57 + 1;
      v59 = 0;
      goto LABEL_8;
    }
    goto LABEL_56;
  }
  result = *((unsigned int *)v14 - 1);
  v59 = result;
  if ( (unsigned int)result >= v15 )
  {
    *((_DWORD *)v14 - 1) = v15;
    goto LABEL_11;
  }
LABEL_8:
  while ( 1 )
  {
    v23 = *((_DWORD *)v14 - 2);
    if ( v23 >= v15 )
      break;
    v19 = (3 * v23 + 1) >> 1;
    v20 = 4 * v19 + 8;
    v21 = v19;
    if ( 4 * v23 + 8 >= (unsigned int)v20 || v23 >= v19 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_140FB4(v69, "Overflow encountered when expanding vector", v8);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v69);
      sub_233E40((__int64)v69);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v22 = (unsigned int *)sub_186B300(v14 - 1, v20);
    v14 = v22 + 2;
    *v22 = v21;
    *a4 = v22 + 2;
  }
  *((_DWORD *)v14 - 1) = v15;
  result = 4LL * v59;
  v24 = (char *)v14 + result;
  v25 = 4LL * v15;
  if ( result != v25 )
    result = (__int64)memset(v24, 0, v25 - result);
LABEL_11:
  v26 = (_QWORD *)*a5;
  if ( *a5 )
  {
    result = *((unsigned int *)v26 - 1);
    v60 = result;
    if ( (unsigned int)result >= v15 )
    {
      *((_DWORD *)v26 - 1) = v15;
      v27 = v15;
      if ( !v15 )
        return result;
      goto LABEL_21;
    }
  }
  else
  {
    if ( !v15 )
      return result;
    v58 = (_QWORD *)sub_186B270(0x10u);
    v26 = v58 + 1;
    *v58 = 2;
    *a5 = (__int64)(v58 + 1);
    v60 = 0;
  }
  while ( 1 )
  {
    v32 = *((_DWORD *)v26 - 2);
    if ( v32 >= v15 )
      break;
    v28 = (3 * v32 + 1) >> 1;
    v29 = 4 * v28 + 8;
    v30 = v28;
    if ( 4 * v32 + 8 >= (unsigned int)v29 || v32 >= v28 )
    {
      v5 = (char **)__cxa_allocate_exception(0x28u);
      sub_140FB4(v69, "Overflow encountered when expanding vector", v6);
      *v5 = (char *)off_1C63128;
      sub_2333C0(v5 + 1, v69);
      sub_233E40((__int64)v69);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v31 = (unsigned int *)sub_186B300(v26 - 1, v29);
    v26 = v31 + 2;
    *v31 = v30;
    *a5 = (__int64)(v31 + 2);
  }
  v27 = v15;
  *((_DWORD *)v26 - 1) = v15;
  v33 = 4LL * v15;
  v34 = 4LL * v60;
  v35 = (char *)v26 + v34;
  if ( v34 != v33 )
  {
    memset(v35, 0, v33 - v34);
    v27 = v15;
  }
LABEL_21:
  v36 = 0;
  v37 = 0;
  v38 = 0;
  do
  {
    result = *(_QWORD *)(a2[7] + 8 * v36);
    if ( !result )
      goto LABEL_32;
    v39 = result + 4LL * *(unsigned int *)(result - 4);
    if ( result == v39 )
      goto LABEL_32;
    v40 = 1;
    do
    {
      v41 = *(unsigned int *)result;
      result += 4;
      v40 &= *(_BYTE *)(a2[5] + 32 * v41 + 24) ^ 1;
    }
    while ( result != v39 );
    if ( v40 )
    {
LABEL_32:
      *(_DWORD *)(*a4 + 4 * v36) = v38;
      v38 += *(_DWORD *)(*a3 + 4 * v36);
      *(_DWORD *)(*a5 + 4 * v36) = v38 - 1;
      v43 = v36;
      if ( v37 )
      {
        v44 = *(unsigned int *)(v37 - 4);
        if ( (_DWORD)v44 == *(_DWORD *)(v37 - 8) )
        {
          v45 = (unsigned int)(3 * v44 + 1) >> 1;
          v46 = 4 * v45 + 8;
          if ( 4 * (int)v44 + 8 >= (unsigned int)v46 || (unsigned int)v44 >= v45 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_140FB4(v69, "Overflow encountered when expanding vector", v10);
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, v69);
            sub_233E40((__int64)v69);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v67 = v27;
          v65 = (unsigned int)(3 * v44 + 1) >> 1;
          v62 = v38;
          v47 = (unsigned int *)sub_186B300((void *)(v37 - 8), v46);
          v37 = (__int64)(v47 + 2);
          v43 = v36;
          v38 = v62;
          v27 = v67;
          *v47 = v65;
          result = (__int64)&v47[v47[1] + 2];
        }
        else
        {
          result = v37 + 4 * v44;
        }
      }
      else
      {
        v66 = v27;
        v64 = v38;
        v56 = (_QWORD *)sub_186B270(0x10u);
        *v56 = 2;
        v43 = v36;
        v37 = (__int64)(v56 + 1);
        v38 = v64;
        v27 = v66;
        result = (__int64)(v56 + 1);
      }
      *(_DWORD *)result = v43;
      ++*(_DWORD *)(v37 - 4);
    }
    ++v36;
  }
  while ( v36 != v27 );
  while ( v37 )
  {
    do
    {
      v42 = *(_DWORD *)(v37 - 4);
      if ( !v42 )
        return sub_186B220((void *)(v37 - 8));
      v48 = (unsigned int)(v42 - 1);
      v49 = *(unsigned int *)(v37 + 4 * v48);
      v50 = (_QWORD *)(a2[6] + 8 * v49);
      v51 = *(_DWORD *)(*a4 + 4 * v49);
      v52 = *v50;
      *(_DWORD *)(v37 - 4) = v48;
    }
    while ( !v52 );
    result = (__int64)&v68;
    v53 = 0;
    do
    {
      if ( v53 >= *(_DWORD *)(v52 - 4) )
        break;
      result = a2[5] + 32LL * *(unsigned int *)(v52 + 4LL * v53);
      if ( *(_BYTE *)(result + 24) )
      {
        v54 = *(unsigned int *)(result + 4);
        if ( *(_DWORD *)(a2[3] + 4 * v54) == *(_DWORD *)(a2[3] + 4LL * *(unsigned int *)result) - 1 )
        {
          result = *(unsigned int *)(result + 8);
          if ( (_DWORD)result )
          {
            v55 = (_QWORD *)*a4;
            v68 = v54;
            v63 = v50;
            *((_DWORD *)v55 + v54) = v51;
            v61 = *(_DWORD *)(*a3 + 4 * v54) + v51;
            *(_DWORD *)(*a5 + 4 * v54) = v61 - 1;
            v69[0] = v37;
            result = sub_AF0D60(v69, &v68);
            v50 = v63;
            v37 = v69[0];
            v51 = v61;
            v52 = *v63;
          }
        }
      }
      ++v53;
    }
    while ( v52 );
  }
  return result;
}

