__m128 *__fastcall sub_8E3C10(__m128 *a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  char **exception; // r15
  _QWORD *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // rdi
  _QWORD *v18; // rbx
  unsigned int *v19; // r13
  __int64 v20; // r12
  unsigned int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // r14
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int *v29; // rax
  __int64 v30; // rax
  int v31; // esi
  __int64 v32; // rax
  __int64 *v33; // r12
  unsigned __int64 v34; // r14
  __int64 v35; // rsi
  _QWORD *v37; // rax
  int v38[2]; // [rsp+8h] [rbp-80h] BYREF
  unsigned int *v39; // [rsp+10h] [rbp-78h]
  unsigned int v40; // [rsp+1Ch] [rbp-6Ch]
  unsigned int *v41; // [rsp+28h] [rbp-60h] BYREF
  __int64 v42[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = *(_QWORD **)a2;
  v9 = *(_QWORD *)(*(_QWORD *)a2 + 8656LL);
  *(_QWORD *)v38 = *(_QWORD *)(*(_QWORD *)a2 + 104LL);
  if ( !v9
    || (v10 = *a3, v11 = *(_DWORD *)(v9 - 4), (unsigned int)v10 >= v11)
    || (v12 = *a4, (unsigned int)v12 >= v11)
    || (v13 = *(_QWORD *)(v9 + 8 * v10), v14 = *(_QWORD *)(v9 + 8 * v12), !v13)
    || !v14
    || *(_QWORD *)(v14 + 8) != *(_QWORD *)(v13 + 8) )
  {
    v15 = sub_15E1B70(v38[0]);
    *a1 = _mm_loadh_ps((const double *)v38);
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    return a1;
  }
  v17 = v8[1125];
  v41 = nullptr;
  sub_985F00(v17, v13, v14, &v41);
  v18 = v41;
  if ( v41 )
  {
    v39 = &v41[*(v41 - 1)];
    if ( v41 != v39 )
    {
      v19 = v41;
      v18 = nullptr;
      while ( 1 )
      {
        v25 = *v19;
        v26 = v8[13];
        if ( *v19 == dword_1C7EC4C )
        {
          v20 = *(_QWORD *)(v26 + 856);
          if ( !v20 )
            goto LABEL_17;
          goto LABEL_16;
        }
        if ( v25 == dword_1C7EC48 )
          break;
        v20 = *(_QWORD *)(v8[1105] + 8LL * (v25 >> 1));
        if ( (v25 & 1) != 0 )
        {
          v20 = sub_15E1A70(v8[13]);
          if ( !v20 )
            goto LABEL_17;
LABEL_16:
          ++*(_DWORD *)(v20 + 8);
          goto LABEL_17;
        }
        if ( v20 )
          goto LABEL_16;
LABEL_17:
        if ( v18 )
        {
          v21 = *((_DWORD *)v18 - 1);
          if ( v21 == *((_DWORD *)v18 - 2) )
          {
            v27 = (3 * v21 + 1) >> 1;
            v28 = 8 * v27 + 8;
            if ( 8 * v21 + 8 >= v28 || v21 >= v27 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v42, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v42);
              sub_233E40((__int64)v42);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v40 = (3 * v21 + 1) >> 1;
            v29 = (unsigned int *)sub_186B300(v18 - 1, v28);
            v18 = v29 + 2;
            *v29 = v40;
            v30 = v29[1];
            v31 = v30;
            v24 = &v18[v30];
            v23 = (unsigned int)(v31 + 1);
          }
          else
          {
            v22 = v21;
            v23 = v21 + 1;
            v24 = &v18[v22];
          }
        }
        else
        {
          v37 = (_QWORD *)sub_186B270(0x18u);
          v18 = v37 + 1;
          *v37 = 2;
          v23 = 1;
          v24 = v37 + 1;
        }
        *v24 = v20;
        ++v19;
        *((_DWORD *)v18 - 1) = v23;
        if ( v39 == v19 )
          goto LABEL_33;
      }
      v20 = *(_QWORD *)(v26 + 864);
      if ( !v20 )
        goto LABEL_17;
      goto LABEL_16;
    }
    v18 = nullptr;
  }
  v23 = 0;
LABEL_33:
  v32 = sub_15EC1C0(*(_QWORD *)v38, v23);
  *a1 = _mm_loadh_ps((const double *)v38);
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  if ( v18 )
  {
    v33 = v18;
    v34 = (unsigned __int64)&v18[*((unsigned int *)v18 - 1)];
    if ( (unsigned __int64)v18 < v34 )
    {
      do
      {
        while ( 1 )
        {
          v35 = *v33;
          if ( *v33 )
          {
            if ( (*(_DWORD *)(v35 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v33 >= v34 )
            goto LABEL_42;
        }
        ++v33;
        sub_15D7BC0(*(_QWORD *)v38, v35);
      }
      while ( (unsigned __int64)v33 < v34 );
    }
LABEL_42:
    sub_186B220(v18 - 1);
  }
  if ( v41 )
    sub_186B220(v41 - 2);
  return a1;
}

