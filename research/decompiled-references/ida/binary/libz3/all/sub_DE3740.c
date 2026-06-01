__int64 __fastcall sub_DE3740(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // rbx
  int v4; // edx
  _QWORD *v5; // rax
  int v6; // edx
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbp
  _DWORD *v12; // rsi
  __int64 v13; // rax
  char *v14; // rdi
  int v15; // ecx
  __int64 v16; // rsi
  char *v17; // rax
  char *v18; // rdx
  unsigned int v19; // ebp
  size_t v20; // rbx
  _OWORD *v21; // rdx
  _OWORD *v22; // rcx
  _OWORD *v23; // rax
  char *v24; // rdi
  int v25; // ecx
  __int64 v26; // rsi
  char *v27; // rax
  char *v28; // rdx
  unsigned int v29; // ebx
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  void *v39; // rdi
  void *v40; // rdi
  __int64 v41; // rax
  void *v42; // rdi
  void *v43; // rdi
  __int64 result; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  unsigned int v47; // edx
  __int64 v48; // rcx
  int v49; // edx
  _QWORD *v50; // rcx
  size_t v51; // rsi
  unsigned int v52; // esi
  unsigned int v53; // ebp
  unsigned int v54; // ecx
  unsigned int *v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 16) - 1;
    v5 = *(_QWORD **)(a1 + 80);
    *(_DWORD *)(v3 + 16) = v4;
    if ( !v4 )
    {
      if ( v5 )
      {
        v47 = *((_DWORD *)v5 - 1);
        if ( v47 == *((_DWORD *)v5 - 2) )
        {
          v53 = (3 * v47 + 1) >> 1;
          v54 = 8 * v53 + 8;
          if ( 8 * v47 + 8 >= v54 || v47 >= v53 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v58, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v58);
            sub_233E40((__int64)v58);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v55 = (unsigned int *)sub_186B300(v5 - 1, v54);
          v5 = v55 + 2;
          v56 = v55[1];
          *v55 = v53;
          *(_QWORD *)(a1 + 80) = v55 + 2;
          LODWORD(v55) = v56;
          v50 = &v5[v56];
          v49 = (_DWORD)v55 + 1;
        }
        else
        {
          v48 = v47;
          v49 = v47 + 1;
          v50 = &v5[v48];
        }
      }
      else
      {
        v57 = (_QWORD *)sub_186B270(0x18u);
        v49 = 1;
        *v57 = 2;
        v5 = v57 + 1;
        *(_QWORD *)(a1 + 80) = v5;
        v50 = v5;
      }
      *v50 = v3;
      *((_DWORD *)v5 - 1) = v49;
      goto LABEL_4;
    }
    while ( v5 )
    {
LABEL_4:
      v6 = *((_DWORD *)v5 - 1);
      if ( !v6 )
        break;
      v45 = (unsigned int)(v6 - 1);
      v46 = v5[v45];
      *((_DWORD *)v5 - 1) = v45;
      sub_DE31B0(a1, v46);
      v5 = *(_QWORD **)(a1 + 80);
    }
  }
  sub_DE2320((__int64 *)a1);
  v7 = *(_QWORD **)(a1 + 32);
  v8 = &v7[2 * *(unsigned int *)(a1 + 40)];
  if ( v7 != v8 )
  {
    while ( *v7 <= 1u )
    {
      v7 += 2;
      if ( v8 == v7 )
        goto LABEL_13;
    }
    while ( v8 != v7 )
    {
      sub_DE2D20(a1, (_DWORD *)v7[1]);
      v9 = v7 + 2;
      if ( v8 == v7 + 2 )
        break;
      while ( 1 )
      {
        v7 = v9;
        if ( *v9 > 1u )
          break;
        v9 += 2;
        if ( v8 == v9 )
          goto LABEL_13;
      }
    }
  }
LABEL_13:
  v10 = *(_QWORD *)(a1 + 56);
  v11 = v10 + 16LL * *(unsigned int *)(a1 + 64);
  if ( v10 != v11 )
  {
    while ( *(_QWORD *)(v10 + 8) <= 1u )
    {
      v10 += 16;
      if ( v11 == v10 )
        goto LABEL_24;
    }
    if ( v11 != v10 )
    {
      v12 = *(_DWORD **)(v10 + 8);
      do
      {
        sub_DE2D20(a1, v12);
        v13 = v10 + 16;
        if ( v11 == v10 + 16 )
          break;
        while ( 1 )
        {
          v12 = *(_DWORD **)(v13 + 8);
          v10 = v13;
          if ( (unsigned __int64)v12 > 1 )
            break;
          v13 += 16;
          if ( v11 == v13 )
            goto LABEL_24;
        }
      }
      while ( v11 != v13 );
    }
  }
LABEL_24:
  if ( *(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 48) )
  {
    v14 = *(char **)(a1 + 32);
    v15 = 0;
    v16 = *(unsigned int *)(a1 + 40);
    v17 = v14;
    v18 = &v14[16 * v16];
    if ( v14 == v18 )
      goto LABEL_39;
    do
    {
      while ( *(_QWORD *)v17 )
      {
        *(_QWORD *)v17 = 0;
        v17 += 16;
        if ( v18 == v17 )
          goto LABEL_31;
      }
      v17 += 16;
      ++v15;
    }
    while ( v18 != v17 );
LABEL_31:
    if ( (unsigned int)v16 <= 0x10 || 3 * (int)v16 >= (unsigned int)(4 * v15) )
      goto LABEL_39;
    if ( v14 )
    {
      sub_186B220(v14);
      v19 = *(_DWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 32) = 0;
      v19 >>= 1;
      *(_DWORD *)(a1 + 40) = v19;
      v20 = v19;
      v21 = (_OWORD *)sub_186B270(v20 * 16);
      if ( !v19 )
      {
LABEL_38:
        *(_QWORD *)(a1 + 32) = v21;
LABEL_39:
        *(_QWORD *)(a1 + 44) = 0;
        goto LABEL_40;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 32) = 0;
      v51 = (unsigned int)v16 >> 1;
      *(_DWORD *)(a1 + 40) = v51;
      v20 = v51;
      v21 = (_OWORD *)sub_186B270(16 * v51);
    }
    v22 = &v21[v20];
    v23 = v21;
    if ( ((v20 * 16) & 0x10) == 0 || (v23 = v21 + 1, *v21 = 0, v21 + 1 != v22) )
    {
      do
      {
        *v23 = 0;
        v23 += 2;
        *(v23 - 1) = 0;
      }
      while ( v23 != v22 );
    }
    goto LABEL_38;
  }
LABEL_40:
  if ( *(_DWORD *)(a1 + 68) || *(_DWORD *)(a1 + 72) )
  {
    v24 = *(char **)(a1 + 56);
    v25 = 0;
    v26 = *(unsigned int *)(a1 + 64);
    v27 = v24;
    v28 = &v24[16 * v26];
    if ( v24 == v28 )
      goto LABEL_55;
    do
    {
      while ( *((_QWORD *)v27 + 1) )
      {
        *((_QWORD *)v27 + 1) = 0;
        v27 += 16;
        if ( v28 == v27 )
          goto LABEL_47;
      }
      v27 += 16;
      ++v25;
    }
    while ( v28 != v27 );
LABEL_47:
    if ( (unsigned int)v26 <= 0x10 || 3 * (int)v26 >= (unsigned int)(4 * v25) )
      goto LABEL_55;
    if ( v24 )
    {
      sub_186B220(v24);
      v29 = *(_DWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 56) = 0;
      v29 >>= 1;
      *(_DWORD *)(a1 + 64) = v29;
      v30 = v29;
      v31 = sub_186B270(16LL * v29);
      if ( !v29 )
      {
LABEL_54:
        *(_QWORD *)(a1 + 56) = v31;
LABEL_55:
        *(_QWORD *)(a1 + 68) = 0;
        goto LABEL_56;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 56) = 0;
      v52 = (unsigned int)v26 >> 1;
      v30 = v52;
      *(_DWORD *)(a1 + 64) = v52;
      v31 = sub_186B270(16LL * v52);
    }
    v32 = 16 * v30;
    v33 = v31;
    v34 = v31 + v32;
    if ( (v32 & 0x10) == 0 || (v33 = v31 + 16, *(_QWORD *)(v31 + 8) = 0, v34 != v31 + 16) )
    {
      do
      {
        *(_QWORD *)(v33 + 8) = 0;
        v33 += 32;
        *(_QWORD *)(v33 - 8) = 0;
      }
      while ( v34 != v33 );
    }
    goto LABEL_54;
  }
LABEL_56:
  v35 = *(_QWORD *)(a1 + 184);
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v36 = *(_QWORD *)(a1 + 176);
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = *(_QWORD *)(a1 + 168);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = *(_QWORD *)(a1 + 160);
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  v39 = *(void **)(a1 + 136);
  if ( v39 )
    sub_186B220(v39);
  v40 = *(void **)(a1 + 112);
  if ( v40 )
    sub_186B220(v40);
  v41 = *(_QWORD *)(a1 + 80);
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  v42 = *(void **)(a1 + 56);
  if ( v42 )
    sub_186B220(v42);
  v43 = *(void **)(a1 + 32);
  if ( v43 )
    sub_186B220(v43);
  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

