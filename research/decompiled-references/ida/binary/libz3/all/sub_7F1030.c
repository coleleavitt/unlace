void __fastcall sub_7F1030(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  char **v4; // rbp
  __int64 v6; // rax
  _QWORD *v7; // rdx
  int v8; // r13d
  _QWORD *v9; // rax
  _DWORD *i; // rax
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // r12d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // r13
  __int64 v22; // rax
  _QWORD *v23; // rdx
  unsigned int v24; // r14d
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rsi
  _DWORD *v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  unsigned int v32; // r12d
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rcx
  _DWORD *v36; // r14
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42[9]; // [rsp+2h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( !*(_DWORD *)(a1 + 32) )
      goto LABEL_50;
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD **)(a1 + 24);
    if ( v6 )
      v8 = *(_DWORD *)(v6 - 4);
    else
      v8 = 0;
    if ( v7 )
      goto LABEL_10;
    v9 = (_QWORD *)sub_186B270(0x10u);
    v7 = v9 + 1;
    *v9 = 2;
    *(_QWORD *)(a1 + 24) = v9 + 1;
    for ( i = v9 + 1; ; i = (_DWORD *)v7 + v17 )
    {
      *i = v8;
      ++*((_DWORD *)v7 - 1);
      v11 = (*(_DWORD *)(a1 + 32))-- == 1;
      if ( v11 )
        break;
      while ( 1 )
      {
        v12 = *(_QWORD *)(a1 + 16);
        v8 = v12 ? *(_DWORD *)(v12 - 4) : 0;
LABEL_10:
        v13 = *((unsigned int *)v7 - 1);
        if ( (_DWORD)v13 == *((_DWORD *)v7 - 2) )
          break;
        *((_DWORD *)v7 + v13) = v8;
        ++*((_DWORD *)v7 - 1);
        v11 = (*(_DWORD *)(a1 + 32))-- == 1;
        if ( v11 )
          goto LABEL_12;
      }
      v14 = (unsigned int)(3 * v13 + 1) >> 1;
      v15 = 4 * v14 + 8;
      if ( 4 * (int)v13 + 8 >= (unsigned int)v15 || (unsigned int)v13 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v42, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v42);
        sub_233E40((__int64)v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v7 - 1, v15);
      v7 = v16 + 2;
      *v16 = v14;
      v17 = v16[1];
      *(_QWORD *)(a1 + 24) = v7;
    }
LABEL_12:
    if ( *(_BYTE *)(a1 + 8) )
    {
LABEL_50:
      if ( !*(_BYTE *)(a2 + 16) )
      {
        v18 = *(_QWORD **)(a1 + 16);
        if ( v18 )
        {
          v19 = *((unsigned int *)v18 - 1);
          if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
          {
            v24 = (unsigned int)(3 * v19 + 1) >> 1;
            v25 = 8 * v24 + 8;
            if ( 8 * (int)v19 + 8 >= v25 || (unsigned int)v19 >= v24 )
            {
              v2 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v42, "Overflow encountered when expanding vector");
              *v2 = (char *)off_1C63128;
              sub_2333C0(v2 + 1, v42);
              sub_233E40((__int64)v42);
              __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v26 = sub_186B270(v25);
            v27 = *(_QWORD *)(a1 + 16);
            v28 = (_DWORD *)v26;
            v18 = (_QWORD *)(v26 + 8);
            if ( v27 )
            {
              v29 = *(unsigned int *)(v27 - 4);
              v30 = 0;
              v28[1] = v29;
              v31 = 8 * v29;
              if ( v31 )
              {
                do
                {
                  *(_QWORD *)&v28[v30 / 4 + 2] = *(_QWORD *)(v27 + v30);
                  v30 += 8LL;
                }
                while ( v31 != v30 );
              }
              sub_186B220((void *)(v27 - 8));
              v20 = &v18[v28[1]];
            }
            else
            {
              *(_DWORD *)(v26 + 4) = 0;
              v20 = (_QWORD *)(v26 + 8);
            }
            *(_QWORD *)(a1 + 16) = v18;
            *v28 = v24;
          }
          else
          {
            v20 = &v18[v19];
          }
        }
        else
        {
          v41 = (_QWORD *)sub_186B270(0x18u);
          *v41 = 2;
          v18 = v41 + 1;
          *(_QWORD *)(a1 + 16) = v41 + 1;
          v20 = v41 + 1;
        }
        *v20 = 1;
        v21 = *(_QWORD **)(a1 + 648);
        ++*((_DWORD *)v18 - 1);
        if ( v21 )
        {
          v22 = *((unsigned int *)v21 - 1);
          if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
          {
            v32 = (unsigned int)(3 * v22 + 1) >> 1;
            v33 = 16 * v32 + 8;
            if ( 16 * (int)v22 + 8 >= v33 || (unsigned int)v22 >= v32 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v42, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v42);
              sub_233E40((__int64)v42);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v34 = sub_186B270(v33);
            v35 = *(_QWORD *)(a1 + 648);
            v36 = (_DWORD *)v34;
            v21 = (_QWORD *)(v34 + 8);
            if ( v35 )
            {
              v37 = *(unsigned int *)(v35 - 4);
              v38 = 0;
              v36[1] = v37;
              v39 = 16 * v37;
              if ( v39 )
              {
                do
                {
                  *(__m128i *)&v36[v38 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v35 + v38));
                  v38 += 16LL;
                }
                while ( v39 != v38 );
              }
              sub_186B220((void *)(v35 - 8));
              v23 = &v21[2 * (unsigned int)v36[1]];
            }
            else
            {
              *(_DWORD *)(v34 + 4) = 0;
              v23 = (_QWORD *)(v34 + 8);
            }
            *(_QWORD *)(a1 + 648) = v21;
            *v36 = v32;
          }
          else
          {
            v23 = &v21[2 * v22];
          }
        }
        else
        {
          v40 = (_QWORD *)sub_186B270(0x28u);
          *v40 = 2;
          v21 = v40 + 1;
          *(_QWORD *)(a1 + 648) = v40 + 1;
          v23 = v40 + 1;
        }
        *(_DWORD *)v23 = -2;
        v23[1] = a2;
        ++*((_DWORD *)v21 - 1);
      }
    }
  }
}

