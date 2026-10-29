unsigned int **__fastcall sub_BB9A80(unsigned int **a1, _QWORD *a2, unsigned int *a3, __int64 *a4)
{
  char **exception; // r12
  __int64 v5; // rdx
  unsigned int *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int *v13; // r13
  unsigned int *v14; // r14
  unsigned int *v15; // r12
  __int64 v16; // rax
  unsigned int *v17; // rsi
  unsigned int *v18; // rdi
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  unsigned int **v25; // rcx
  unsigned int v26; // r13d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v32[9]; // [rsp+10h] [rbp-48h] BYREF

  v9 = (unsigned int *)a2[3];
  v10 = a2[20];
  *a1 = nullptr;
  a1[1] = v9;
  if ( v10 )
  {
    v11 = *a3;
    if ( (unsigned int)v11 < *(_DWORD *)(v10 - 4) )
    {
      v12 = v10 + 24 * v11;
      v13 = *(unsigned int **)(v12 + 8);
      if ( v13 )
      {
        v14 = *(unsigned int **)(v12 + 16);
        if ( v13 != a3 )
        {
          v15 = (unsigned int *)*a4;
          if ( *a4 )
          {
            if ( v15 != v14 && v14 )
            {
              v16 = sub_180C100(a2[15], 24);
              *v15 = (*v15 + 1) & 0x3FFFFFFF | *v15 & 0xC0000000;
              *v14 = (*v14 + 1) & 0x3FFFFFFF | *v14 & 0xC0000000;
              *(_QWORD *)v16 = 0;
              v17 = *a1;
              v18 = a1[1];
              *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v14);
              *a4 = v16;
              ++v13[2];
              if ( v17 )
              {
                if ( v17[2]-- == 1 )
                  sub_15D7BC0(v18, v17);
              }
              goto LABEL_11;
            }
          }
          else
          {
            *a4 = (__int64)v14;
          }
        }
        ++v13[2];
LABEL_11:
        *a1 = v13;
        return a1;
      }
    }
  }
  v21 = (_QWORD *)a2[536];
  if ( v21 )
  {
    v22 = *((_DWORD *)v21 - 1);
    if ( v22 == *((_DWORD *)v21 - 2) )
    {
      v26 = (3 * v22 + 1) >> 1;
      v27 = 8 * v26 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v27 || v22 >= v26 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v32, "Overflow encountered when expanding vector", v5);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v28 = (unsigned int *)sub_186B300(v21 - 1, v27);
      v29 = v28[1];
      v21 = v28 + 2;
      *v28 = v26;
      a2[536] = v28 + 2;
      LODWORD(v28) = v29;
      v25 = (unsigned int **)&v21[v29];
      v24 = (_DWORD)v28 + 1;
    }
    else
    {
      v23 = v22;
      v24 = v22 + 1;
      v25 = (unsigned int **)&v21[v23];
    }
  }
  else
  {
    v30 = (_QWORD *)sub_186B270(0x18u);
    v21 = v30 + 1;
    *v30 = 2;
    v24 = 1;
    a2[536] = v21;
    v25 = (unsigned int **)v21;
  }
  *v25 = a3;
  *((_DWORD *)v21 - 1) = v24;
  return a1;
}

