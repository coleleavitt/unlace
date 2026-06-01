__int64 __fastcall sub_819390(__int64 a1, unsigned int a2, __int64 *a3)
{
  char **exception; // rbx
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 **v8; // rdx
  __int64 v9; // r13
  __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 **v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rdx
  _QWORD *v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rbp
  __m128 v28; // xmm0
  __int64 result; // rax
  __int64 v30; // rdx
  unsigned int v31; // r13d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // r14d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  char *v41; // rax
  unsigned int v42; // esi
  __int64 v43; // [rsp+0h] [rbp-78h]
  __int64 v45; // [rsp+20h] [rbp-58h] BYREF
  __m128 v46; // [rsp+28h] [rbp-50h]

  do
  {
    v4 = a2;
    v5 = a2;
    a2 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * a2);
  }
  while ( v5 != a2 );
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v4);
  if ( *(_BYTE *)(sub_7E4EB0(a1) + 414) )
    goto LABEL_6;
  v7 = *(_QWORD *)(v6 + 24);
  v8 = *(__int64 ***)(v6 + 8);
  if ( v7 )
  {
    LODWORD(v7) = *(_DWORD *)(v7 - 4);
    if ( v8 )
      goto LABEL_5;
    if ( !(_DWORD)v7 )
    {
LABEL_35:
      v10 = *(_QWORD *)(a1 + 80);
      v9 = v6 + 8;
      goto LABEL_36;
    }
LABEL_6:
    v9 = v6 + 8;
    sub_818A40(a1, v6);
    v8 = *(__int64 ***)(v6 + 8);
    v10 = *(_QWORD *)(a1 + 80);
    if ( v8 )
      goto LABEL_7;
LABEL_36:
    v39 = (_QWORD *)sub_186B270(0x18u);
    v8 = (__int64 **)(v39 + 1);
    *v39 = 2;
    v13 = 1;
    *(_QWORD *)(v6 + 8) = v8;
    v14 = v8;
    goto LABEL_9;
  }
  if ( !v8 )
    goto LABEL_35;
LABEL_5:
  if ( (_DWORD)v7 + 2 * *((_DWORD *)v8 - 1) )
    goto LABEL_6;
  v10 = *(_QWORD *)(a1 + 80);
  v9 = v6 + 8;
LABEL_7:
  v11 = *((_DWORD *)v8 - 1);
  if ( v11 == *((_DWORD *)v8 - 2) )
  {
    v35 = (3 * v11 + 1) >> 1;
    v36 = 8 * v35 + 8;
    if ( 8 * v11 + 8 >= (unsigned int)v36 || v11 >= v35 )
      goto LABEL_48;
    v37 = (unsigned int *)sub_186B300(v8 - 1, v36);
    v38 = v37[1];
    v8 = (__int64 **)(v37 + 2);
    *(_QWORD *)(v6 + 8) = v37 + 2;
    *v37 = v35;
    LODWORD(v37) = v38;
    v14 = &v8[v38];
    v13 = (_DWORD)v37 + 1;
  }
  else
  {
    v12 = v11;
    v13 = v11 + 1;
    v14 = &v8[v12];
  }
LABEL_9:
  *v14 = a3;
  *((_DWORD *)v8 - 1) = v13;
  v15 = (_QWORD *)sub_180C100(v10 + 2144, 16);
  v18 = *(_QWORD **)(v10 + 2128);
  v19 = v15;
  *v15 = off_1C54F38;
  v15[1] = v9;
  if ( !v18 )
  {
    v40 = (_QWORD *)sub_186B270(0x18u);
    v18 = v40 + 1;
    *v40 = 2;
    v22 = 1;
    *(_QWORD *)(v10 + 2128) = v18;
    v23 = v18;
    goto LABEL_12;
  }
  v20 = *((_DWORD *)v18 - 1);
  if ( v20 == *((_DWORD *)v18 - 2) )
  {
    v31 = (3 * v20 + 1) >> 1;
    v32 = 8 * v31 + 8;
    if ( 8 * v20 + 8 < (unsigned int)v32 && v20 < v31 )
    {
      v33 = (unsigned int *)sub_186B300(v18 - 1, v32);
      v34 = v33[1];
      v18 = v33 + 2;
      *(_QWORD *)(v10 + 2128) = v33 + 2;
      *v33 = v31;
      LODWORD(v33) = v34;
      v23 = &v18[v34];
      v22 = (_DWORD)v33 + 1;
      goto LABEL_12;
    }
LABEL_48:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(&v45, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v45);
    sub_233E40((__int64)&v45);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v21 = v20;
  v22 = v20 + 1;
  v23 = &v18[v21];
LABEL_12:
  *v23 = v19;
  *((_DWORD *)v18 - 1) = v22;
  v24 = *(_QWORD *)(v6 + 24);
  if ( v24 )
  {
    v25 = *(unsigned int *)(v24 - 4);
    v26 = v24 + 8 * v25;
    if ( v24 != v26 )
    {
      v27 = *(_QWORD *)(v6 + 24);
      do
      {
        v27 += 8;
        v28 = _mm_loadh_ps((const double *)(v27 - 8));
        v45 = 1;
        v46 = v28;
        sub_865240(a1, &v45, v25, v23, v16, v17, v43);
      }
      while ( v26 != v27 );
    }
  }
  if ( !*(_BYTE *)(sub_7E4EB0(a1) + 414) )
  {
    result = *(_QWORD *)(v6 + 24);
    v30 = *(_QWORD *)(v6 + 8);
    if ( result )
    {
      result = *(unsigned int *)(result - 4);
      if ( !v30 )
        goto LABEL_20;
    }
    else if ( !v30 )
    {
      return result;
    }
    result = (unsigned int)(result + 2 * *(_DWORD *)(v30 - 4));
LABEL_20:
    if ( !(_DWORD)result )
      return result;
  }
  result = *a3;
  if ( !*(_WORD *)(*a3 + 4) )
  {
    result = *(_QWORD *)(*(_QWORD *)(result + 16) + 24LL);
    if ( result )
    {
      if ( *(_DWORD *)(a1 + 112) == *(_DWORD *)result )
      {
        result = *(unsigned int *)(result + 4);
        if ( !(_DWORD)result )
        {
          v41 = (char *)(a3[22] + 88);
          if ( *(int *)v41 >> 8 == -1 )
          {
LABEL_47:
            v42 = -1;
          }
          else
          {
            while ( *(_DWORD *)(a1 + 12) != *v41 )
            {
              v41 = *((char **)v41 + 1);
              if ( !v41 )
                goto LABEL_47;
            }
            v42 = *(int *)v41 >> 8;
          }
          return sub_818860((_QWORD *)a1, v42);
        }
      }
    }
  }
  return result;
}

