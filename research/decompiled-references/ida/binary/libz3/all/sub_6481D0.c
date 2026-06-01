void __fastcall sub_6481D0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  char **exception; // r12
  char **v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r12
  void *v11; // r13
  __int64 v12; // r14
  __int64 v14; // r12
  unsigned __int64 v15; // r15
  _QWORD *v16; // rax
  int v17; // r8d
  int v18; // r9d
  _QWORD *v19; // rbp
  unsigned int v20; // ecx
  unsigned int v21; // r13d
  int v22; // edx
  unsigned __int64 *v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // r13
  _QWORD *v27; // rax
  unsigned __int64 v28; // r13
  __int64 *v29; // rbx
  __int64 v30; // rsi
  __int64 v32; // rax
  __int64 v33; // r15
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 *v36; // rax
  unsigned int v37; // ecx
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rax
  int v41; // edx
  unsigned int v42; // ecx
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rax
  int v46; // edx
  _QWORD *v47; // rax
  int v48; // [rsp-Ch] [rbp-88h]
  int v49; // [rsp-4h] [rbp-80h]
  unsigned int v50; // [rsp+0h] [rbp-7Ch]
  unsigned int v51; // [rsp+0h] [rbp-7Ch]
  int v52; // [rsp+4h] [rbp-78h]
  __int64 v53; // [rsp+Ch] [rbp-70h]
  int v54; // [rsp+1Ch] [rbp-60h]
  __int64 v55; // [rsp+24h] [rbp-58h] BYREF
  int v56; // [rsp+2Ch] [rbp-50h]
  int v57; // [rsp+34h] [rbp-48h]
  int v58; // [rsp+3Ch] [rbp-40h]
  __int64 v59; // [rsp+44h] [rbp-38h]
  __int64 v60; // [rsp+4Ch] [rbp-30h]
  __int64 v61; // [rsp+54h] [rbp-28h]
  __int64 v62; // [rsp+5Ch] [rbp-20h]
  void *v63; // [rsp+64h] [rbp-18h]
  __int64 v64; // [rsp+6Ch] [rbp-10h]

  if ( !a1 )
    return;
  v64 = v12;
  v63 = v11;
  v62 = v10;
  v61 = v9;
  v60 = v8;
  v14 = *(_QWORD *)(a1 + 32);
  if ( a3 == -1 )
  {
    v26 = *(_QWORD *)(v14 + 864);
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
  }
  else
  {
    if ( a3 != 1 )
    {
      if ( !*(_DWORD *)(a2 + 56) )
      {
        sub_13342D0(
          a1,
          *(_QWORD *)(a2 + 40),
          0,
          0,
          a5,
          a6,
          v48,
          v49,
          v52,
          v53,
          v14,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
        return;
      }
      v15 = *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 80) & 7LL) == 1 )
      {
        v19 = nullptr;
        v21 = 0;
        goto LABEL_31;
      }
      if ( *(_QWORD *)(a2 + 80) <= 7u )
        v15 = 0;
      else
        ++*(_DWORD *)(v15 + 8);
      v16 = (_QWORD *)sub_186B270(0x18u);
      v19 = v16 + 1;
      v20 = *(_DWORD *)(a2 + 56);
      v21 = 0;
      v22 = 1;
      *v16 = 2;
      v23 = v16 + 1;
LABEL_9:
      *v23 = v15;
      *((_DWORD *)v19 - 1) = v22;
      while ( ++v21 < v20 )
      {
        v15 = *(_QWORD *)(a2 + 8LL * v21 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 8LL * v21 + 80) & 7LL) == 1 )
        {
LABEL_31:
          v32 = sub_15E1A70(v14);
          v33 = v32;
          if ( v32 )
            ++*(_DWORD *)(v32 + 8);
          if ( v19 )
          {
            v34 = *((_DWORD *)v19 - 1);
            if ( v34 == *((_DWORD *)v19 - 2) )
            {
              v42 = (3 * v34 + 1) >> 1;
              v43 = 8 * v42 + 8;
              if ( 8 * v34 + 8 >= (unsigned int)v43 || v34 >= v42 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v55, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v55);
                sub_233E40((__int64)&v55);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v51 = (3 * v34 + 1) >> 1;
              v44 = (unsigned int *)sub_186B300(v19 - 1, v43);
              v19 = v44 + 2;
              *v44 = v51;
              v45 = v44[1];
              v46 = v45;
              v36 = &v19[v45];
              v22 = v46 + 1;
            }
            else
            {
              v35 = v34;
              v22 = v34 + 1;
              v36 = &v19[v35];
            }
          }
          else
          {
            v47 = (_QWORD *)sub_186B270(0x18u);
            v19 = v47 + 1;
            *v47 = 2;
            v22 = 1;
            v36 = v47 + 1;
          }
          *v36 = v33;
          v20 = *(_DWORD *)(a2 + 56);
          *((_DWORD *)v19 - 1) = v22;
        }
        else
        {
          if ( *(_QWORD *)(a2 + 8LL * v21 + 80) <= 7u )
            v15 = 0;
          else
            ++*(_DWORD *)(v15 + 8);
          v24 = *((_DWORD *)v19 - 1);
          if ( v24 == *((_DWORD *)v19 - 2) )
          {
            v37 = (3 * v24 + 1) >> 1;
            v38 = 8 * v37 + 8;
            if ( 8 * v24 + 8 >= (unsigned int)v38 || v24 >= v37 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v55, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, &v55);
              sub_233E40((__int64)&v55);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v50 = (3 * v24 + 1) >> 1;
            v39 = (unsigned int *)sub_186B300(v19 - 1, v38);
            v19 = v39 + 2;
            *v39 = v50;
            v40 = v39[1];
            v20 = *(_DWORD *)(a2 + 56);
            v41 = v40;
            v23 = &v19[v40];
            v22 = v41 + 1;
            goto LABEL_9;
          }
          v25 = v24;
          v22 = v24 + 1;
          v19[v25] = v15;
          *((_DWORD *)v19 - 1) = v22;
        }
      }
      goto LABEL_19;
    }
    v26 = *(_QWORD *)(v14 + 856);
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
  }
  v27 = (_QWORD *)sub_186B270(0x18u);
  v27[1] = v26;
  v19 = v27 + 1;
  *v27 = 0x100000002LL;
  v22 = 1;
LABEL_19:
  sub_13342D0(
    a1,
    *(_QWORD *)(a2 + 40),
    v22,
    (int)v19,
    v17,
    v18,
    v48,
    v49,
    v52,
    v53,
    v14,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v28 = (unsigned __int64)&v19[*((unsigned int *)v19 - 1)];
  if ( (unsigned __int64)v19 < v28 )
  {
    v29 = v19;
    do
    {
      while ( 1 )
      {
        v30 = *v29;
        if ( *v29 )
        {
          if ( (*(_DWORD *)(v30 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v29 >= v28 )
          goto LABEL_25;
      }
      ++v29;
      sub_15D7BC0(v14, v30);
    }
    while ( (unsigned __int64)v29 < v28 );
  }
LABEL_25:
  sub_186B220(v19 - 1);
}

