char __fastcall sub_5739C0(__int64 a1, int a2, __int64 a3, unsigned int a4, int *a5, int *a6)
{
  int *v9; // r15
  int *v10; // r14
  _DWORD *v11; // rax
  _DWORD *v12; // rdx
  int v13; // ecx
  int v14; // edi
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // r10d
  size_t v18; // rsi
  unsigned int v19; // r12d
  unsigned int *v20; // rax
  __int64 v21; // rax
  _DWORD *v22; // rax
  int *v23; // r14
  _DWORD *v24; // rdx
  int v25; // esi
  int v26; // r8d
  __int64 v27; // rax
  unsigned int v28; // edi
  unsigned int v29; // r15d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned int v34; // r12d
  _QWORD *v35; // rax
  _DWORD *v36; // rcx
  unsigned int v37; // r15d
  size_t v38; // rsi
  unsigned int *v39; // rax
  unsigned int v40; // eax
  char *v41; // rcx
  char v42; // al
  __int64 v43; // rdx
  char *v44; // rax
  __int64 v45; // rax
  char *v46; // rdx
  char *v47; // rax
  int v48; // ebp
  int v49; // r12d
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rsi
  char result; // al
  void *v54; // rdi
  int v55; // ebp
  char **v56; // r12
  char **v57; // r12
  char **exception; // rbx
  __int64 v60; // [rsp+8h] [rbp-70h]
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  int v62; // [rsp+30h] [rbp-48h]

  *(_QWORD *)a1 = qword_1C65EC0;
  *(_DWORD *)(a1 + 8) = a4;
  *(_QWORD *)(a1 + 16) = 0;
  if ( a4 )
  {
    v9 = a5;
    v60 = a4;
    v10 = &a5[v60];
    v11 = (_DWORD *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v11 - 1) = 2;
    v12 = v11;
    *(_QWORD *)(a1 + 16) = v11;
    while ( 1 )
    {
      v13 = *v9++;
      *v11 = v13;
      v14 = *(v12 - 1);
      v15 = (unsigned int)(v14 + 1);
      *(v12 - 1) = v15;
      if ( v9 == v10 )
        break;
      v16 = *(v12 - 2);
      if ( v16 == (_DWORD)v15 )
      {
        v17 = (3 * v16 + 1) >> 1;
        v18 = 4 * v17 + 8;
        v19 = v17;
        if ( 4 * v14 + 12 >= (unsigned int)v18 || v16 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)ptr, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, ptr);
          sub_233E40((__int64)ptr);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v20 = (unsigned int *)sub_186B300(v12 - 2, v18);
        v12 = v20 + 2;
        *v20 = v19;
        v21 = v20[1];
        *(_QWORD *)(a1 + 16) = v12;
        v11 = &v12[v21];
      }
      else
      {
        v11 = &v12[v15];
      }
    }
    *(_QWORD *)(a1 + 24) = 0;
    v22 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v23 = a6;
    *((_QWORD *)v22 - 1) = 2;
    v24 = v22;
    *(_QWORD *)(a1 + 24) = v22;
    while ( 1 )
    {
      v25 = *v23++;
      *v22 = v25;
      v26 = *(v24 - 1);
      v27 = (unsigned int)(v26 + 1);
      *(v24 - 1) = v27;
      if ( &a6[v60] == v23 )
        break;
      v28 = *(v24 - 2);
      if ( v28 == (_DWORD)v27 )
      {
        v29 = (3 * v28 + 1) >> 1;
        v30 = 4 * v29 + 8;
        if ( 4 * v26 + 12 >= (unsigned int)v30 || v28 >= v29 )
        {
          v56 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)ptr, "Overflow encountered when expanding vector");
          *v56 = (char *)off_1C63128;
          sub_2333C0(v56 + 1, ptr);
          sub_233E40((__int64)ptr);
          __cxa_throw(v56, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v24 - 2, v30);
        v24 = v31 + 2;
        *v31 = v29;
        v32 = v31[1];
        *(_QWORD *)(a1 + 24) = v24;
        v22 = &v24[v32];
      }
      else
      {
        v22 = &v24[v27];
      }
    }
    *(_QWORD *)(a1 + 40) = 0;
    v33 = *(_QWORD *)(a3 + 16);
    if ( v33 )
    {
      v34 = *(_DWORD *)(v33 - 4);
      *(_BYTE *)(a1 + 33) = 0;
      if ( v34 )
        goto LABEL_18;
      v41 = nullptr;
    }
    else
    {
      *(_BYTE *)(a1 + 33) = 0;
      v41 = nullptr;
      v34 = 0;
    }
LABEL_24:
    v43 = 0;
    do
    {
      while ( 1 )
      {
        v44 = &v41[a6[v43]];
        if ( !*v44 )
          break;
        ++v43;
        *(_BYTE *)(a1 + 33) = 1;
        *v44 = 1;
        if ( (unsigned int)v43 >= a4 )
        {
          v42 = 0;
          if ( a4 < v34 )
            goto LABEL_37;
          goto LABEL_28;
        }
      }
      ++v43;
      *v44 = 1;
    }
    while ( (unsigned int)v43 < a4 );
    v42 = 0;
    if ( a4 < v34 )
      goto LABEL_37;
LABEL_28:
    if ( !v41 )
      goto LABEL_64;
    v45 = *((unsigned int *)v41 - 1);
    v46 = &v41[v45];
    if ( v45 >> 2 )
    {
      v47 = &v41[4 * (v45 >> 2)];
      while ( *v41 )
      {
        if ( !v41[1] )
        {
          ++v41;
          goto LABEL_36;
        }
        if ( !v41[2] )
        {
          v41 += 2;
          goto LABEL_36;
        }
        if ( !v41[3] )
        {
          v41 += 3;
          goto LABEL_36;
        }
        v41 += 4;
        if ( v41 == v47 )
        {
          v45 = v46 - v41;
          goto LABEL_59;
        }
      }
      goto LABEL_36;
    }
LABEL_59:
    if ( v45 != 2 )
    {
      if ( v45 != 3 )
      {
        if ( v45 == 1 )
        {
LABEL_62:
          v42 = *v41;
          if ( *v41 )
            goto LABEL_37;
LABEL_36:
          v42 = v46 == v41;
          goto LABEL_37;
        }
LABEL_64:
        v42 = 1;
        goto LABEL_37;
      }
      if ( !*v41 )
        goto LABEL_36;
      ++v41;
    }
    if ( !*v41 )
      goto LABEL_36;
    ++v41;
    goto LABEL_62;
  }
  v33 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  if ( !v33 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    *(_WORD *)(a1 + 32) = 1;
    *(_QWORD *)a1 = &off_1C514D0;
    goto LABEL_73;
  }
  v34 = *(_DWORD *)(v33 - 4);
  *(_BYTE *)(a1 + 33) = 0;
  if ( !v34 )
  {
    *(_BYTE *)(a1 + 32) = 1;
    *(_QWORD *)a1 = &off_1C514D0;
    *(_QWORD *)(a1 + 56) = 0;
LABEL_38:
    v48 = *(_DWORD *)(v33 - 4);
    goto LABEL_39;
  }
LABEL_18:
  v35 = (_QWORD *)sub_186B270(0xAu);
  v36 = v35 + 1;
  *v35 = 2;
  for ( *(_QWORD *)(a1 + 40) = v35 + 1; ; *(_QWORD *)(a1 + 40) = v39 + 2 )
  {
    v40 = *(v36 - 2);
    if ( v40 >= v34 )
      break;
    v37 = (3 * v40 + 1) >> 1;
    v38 = v37 + 8;
    if ( v40 + 8 >= (unsigned int)v38 || v40 >= v37 )
    {
      v57 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)ptr, "Overflow encountered when expanding vector");
      *v57 = (char *)off_1C63128;
      sub_2333C0(v57 + 1, ptr);
      sub_233E40((__int64)ptr);
      __cxa_throw(v57, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v39 = (unsigned int *)sub_186B300(v36 - 2, v38);
    v36 = v39 + 2;
    *v39 = v37;
  }
  *(v36 - 1) = v34;
  v41 = (char *)memset(v36, 0, v34);
  v33 = *(_QWORD *)(a3 + 16);
  v42 = 0;
  if ( a4 )
    goto LABEL_24;
LABEL_37:
  *(_BYTE *)(a1 + 32) = v42;
  *(_QWORD *)a1 = &off_1C514D0;
  *(_QWORD *)(a1 + 56) = 0;
  if ( v33 )
    goto LABEL_38;
LABEL_73:
  v48 = 0;
LABEL_39:
  v49 = *(_DWORD *)(a3 + 24);
  v50 = (_QWORD *)sub_186B270(0x80u);
  v51 = *(_QWORD *)(a1 + 24);
  *v50 = 0;
  v50[2] = 0;
  v50[4] = 0;
  v50[6] = 0;
  v50[8] = 0;
  v50[10] = 0;
  v50[12] = 0;
  v50[14] = 0;
  ptr[0] = v50;
  ptr[1] = &byte_8;
  v62 = 0;
  if ( v51 )
    v52 = *(unsigned int *)(v51 - 4);
  else
    v52 = 0;
  sub_148B660(ptr, v52, v51, 1);
  if ( (unsigned int)sub_148BBB0(ptr) == 1 && (v55 = v48 - v49, (unsigned int)sub_148B9B0(ptr) == v55) )
  {
    result = 1;
    if ( v55 )
      result = v55 - 1 == (unsigned int)sub_148BAF0(ptr);
  }
  else
  {
    result = 0;
  }
  v54 = ptr[0];
  *(_BYTE *)(a1 + 48) = result;
  if ( v54 )
    return sub_186B220(v54);
  return result;
}

