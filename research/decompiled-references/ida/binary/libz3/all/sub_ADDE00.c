__int64 __fastcall sub_ADDE00(__int64 a1)
{
  char **v1; // rbp
  char **exception; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // r12d
  unsigned int v7; // r13d
  unsigned int v8; // ecx
  __int64 v9; // rbp
  _QWORD *v11; // rdi
  __int64 v12; // rax
  unsigned int *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  float v16; // xmm3_4
  char v17; // di
  __int64 v18; // rsi
  float v19; // xmm0_4
  __int64 v20; // r13
  __int64 v21; // rbp
  _QWORD *v22; // rdi
  __int64 v23; // rax
  _DWORD *v24; // rax
  unsigned int v25; // r12d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r14d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 1040);
  v6 = *(unsigned __int8 *)(v4 + 109);
  if ( (_BYTE)v6 )
  {
    if ( !v5 )
      return v6;
    v14 = *(unsigned int *)(v5 - 4);
    if ( !(_DWORD)v14 )
      return v6;
    v15 = *(_QWORD *)(a1 + 1040);
    v16 = 0.0;
    v17 = 0;
    v18 = v5 + 16 * v14;
    while ( 1 )
    {
      if ( *(char *)(v15 + 15) < 0 )
        goto LABEL_19;
      v19 = *(float *)(v15 + 8);
      if ( *(double *)(v4 + 72) < v19 )
        goto LABEL_19;
      if ( v17 )
      {
        v16 = fminf(v19, v16);
LABEL_19:
        v15 += 16;
        if ( v15 == v18 )
          goto LABEL_24;
      }
      else
      {
        v15 += 16;
        v16 = v19;
        v17 = *(_BYTE *)(v4 + 109);
        if ( v15 == v18 )
        {
LABEL_24:
          v20 = 0;
          while ( 1 )
          {
            v21 = v5 + 16 * v20;
            if ( *(char *)(v21 + 15) >= 0 && v16 >= *(float *)(v21 + 8) )
            {
              v22 = *(_QWORD **)(a1 + 1064);
              if ( v22 )
              {
                v23 = *((unsigned int *)v22 - 1);
                if ( (_DWORD)v23 == *((_DWORD *)v22 - 2) )
                {
                  v25 = (unsigned int)(3 * v23 + 1) >> 1;
                  v26 = 4 * v25 + 8;
                  if ( 4 * (int)v23 + 8 >= (unsigned int)v26 || (unsigned int)v23 >= v25 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v35, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v35);
                    sub_233E40((__int64)v35);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v27 = (unsigned int *)sub_186B300(v22 - 1, v26);
                  v22 = v27 + 2;
                  *v27 = v25;
                  v28 = v27[1];
                  *(_QWORD *)(a1 + 1064) = v22;
                  v24 = (_DWORD *)v22 + v28;
                }
                else
                {
                  v24 = (_DWORD *)v22 + v23;
                }
              }
              else
              {
                v33 = (_QWORD *)sub_186B270(0x10u);
                v22 = v33 + 1;
                *v33 = 2;
                *(_QWORD *)(a1 + 1064) = v33 + 1;
                v24 = v33 + 1;
              }
              *v24 = v20;
              v6 = 0;
              ++*((_DWORD *)v22 - 1);
              ++*(_DWORD *)(a1 + 36);
              sub_ADC860(a1, (__int64 **)v21);
            }
            if ( v14 == ++v20 )
              break;
            v5 = *(_QWORD *)(a1 + 1040);
          }
          return v6;
        }
      }
    }
  }
  if ( !v5 )
    return 1;
  v7 = 0;
  v8 = 1;
  while ( v7 < *(_DWORD *)(v5 - 4) )
  {
    while ( 1 )
    {
      v9 = v5 + 16LL * v7;
      if ( *(char *)(v9 + 15) >= 0 && *(double *)(*(_QWORD *)(a1 + 24) + 72LL) >= *(float *)(v9 + 8) )
        break;
      if ( ++v7 >= *(_DWORD *)(v5 - 4) )
        return v8;
    }
    v11 = *(_QWORD **)(a1 + 1064);
    if ( v11 )
    {
      v12 = *((unsigned int *)v11 - 1);
      if ( (_DWORD)v12 == *((_DWORD *)v11 - 2) )
      {
        v29 = (unsigned int)(3 * v12 + 1) >> 1;
        v30 = 4 * v29 + 8;
        if ( 4 * (int)v12 + 8 >= (unsigned int)v30 || (unsigned int)v12 >= v29 )
        {
          v1 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v35, "Overflow encountered when expanding vector");
          *v1 = (char *)off_1C63128;
          sub_2333C0(v1 + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v11 - 1, v30);
        v11 = v31 + 2;
        *v31 = v29;
        v32 = v31[1];
        *(_QWORD *)(a1 + 1064) = v11;
        v13 = (unsigned int *)v11 + v32;
      }
      else
      {
        v13 = (unsigned int *)v11 + v12;
      }
    }
    else
    {
      v34 = (_QWORD *)sub_186B270(0x10u);
      v11 = v34 + 1;
      *v34 = 2;
      *(_QWORD *)(a1 + 1064) = v34 + 1;
      v13 = (unsigned int *)(v34 + 1);
    }
    *v13 = v7;
    ++*((_DWORD *)v11 - 1);
    ++*(_DWORD *)(a1 + 36);
    sub_ADC860(a1, (__int64 **)v9);
    v5 = *(_QWORD *)(a1 + 1040);
    if ( !v5 )
      return v6;
    ++v7;
    v8 = 0;
  }
  return v8;
}

