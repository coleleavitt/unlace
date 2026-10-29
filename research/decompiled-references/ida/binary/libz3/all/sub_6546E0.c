__int64 __fastcall sub_6546E0(__int64 a1, __int64 a2, _QWORD *a3, double a4, double a5, __m128 a6)
{
  char **v6; // rbp
  __int64 v7; // rdx
  char **exception; // rbp
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 *v13; // rbp
  __int64 *v14; // rbx
  __int64 *v15; // r15
  __int64 v16; // rsi
  int v17; // eax
  __int64 *v18; // rsi
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // r8d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rsi
  _QWORD *v31; // rax
  unsigned int v32; // ecx
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned __int64 v38; // rbx
  __int64 v39; // rsi
  _QWORD *v40; // rax
  __int64 v41; // [rsp+10h] [rbp-88h]
  unsigned int v42; // [rsp+10h] [rbp-88h]
  __int64 v43; // [rsp+10h] [rbp-88h]
  unsigned int v44; // [rsp+1Ch] [rbp-7Ch]
  __int64 *v45; // [rsp+20h] [rbp-78h] BYREF
  __int64 *v46; // [rsp+28h] [rbp-70h]
  __int64 v47; // [rsp+30h] [rbp-68h] BYREF
  __int64 v48; // [rsp+38h] [rbp-60h]
  __int64 v49[11]; // [rsp+40h] [rbp-58h] BYREF

  v45 = (__int64 *)(a1 + 656);
  v46 = nullptr;
  sub_654200(a1, 0);
  (*(void (__fastcall **)(_QWORD, __int64 **))(**(_QWORD **)(a1 + 2976) + 136LL))(*(_QWORD *)(a1 + 2976), &v45);
  result = *(_QWORD *)a1;
  v13 = v46;
  v47 = 0;
  v48 = result;
  if ( !v46 )
    return result;
  v14 = v46;
  v15 = &v46[*((unsigned int *)v46 - 1)];
  if ( v15 == v46 )
    return sub_186B220(v13 - 1);
  do
  {
    v23 = *v14;
    sub_62E310(a1 + 656, *v14, &v47, a4, a5, a6);
    v24 = v47;
    if ( v47 )
      ++*(_DWORD *)(v47 + 8);
    v25 = *(__int64 **)(a2 + 8);
    if ( !v25 )
    {
      v43 = v24;
      v40 = (_QWORD *)sub_186B270(0x18u);
      v25 = v40 + 1;
      *v40 = 2;
      v24 = v43;
      v17 = 1;
      *(_QWORD *)(a2 + 8) = v25;
      v18 = v25;
LABEL_5:
      *v18 = v24;
      *((_DWORD *)v25 - 1) = v17;
      v19 = (_QWORD *)*a3;
      if ( !*a3 )
        goto LABEL_16;
      goto LABEL_6;
    }
    v26 = *((_DWORD *)v25 - 1);
    if ( v26 != *((_DWORD *)v25 - 2) )
    {
      v16 = v26;
      v17 = v26 + 1;
      v18 = &v25[v16];
      goto LABEL_5;
    }
    v27 = (3 * v26 + 1) >> 1;
    v28 = 8 * v27 + 8;
    if ( 8 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_104888(v49, "Overflow encountered when expanding vector", v9);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v49);
      sub_233E40((__int64)v49);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v44 = (3 * v26 + 1) >> 1;
    v41 = v24;
    v29 = (unsigned int *)sub_186B300(v25 - 1, v28);
    v30 = v29[1];
    *(_QWORD *)(a2 + 8) = v29 + 2;
    *v29 = v44;
    *(_QWORD *)&v29[2 * v30 + 2] = v41;
    v29[1] = v30 + 1;
    v19 = (_QWORD *)*a3;
    if ( !*a3 )
    {
LABEL_16:
      v31 = (_QWORD *)sub_186B270(0x18u);
      v19 = v31 + 1;
      *v31 = 2;
      result = 1;
      *a3 = v19;
      v22 = v19;
      goto LABEL_8;
    }
LABEL_6:
    v20 = *((_DWORD *)v19 - 1);
    if ( v20 == *((_DWORD *)v19 - 2) )
    {
      v32 = (3 * v20 + 1) >> 1;
      v33 = 8 * v32 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v33 || v20 >= v32 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_104888(v49, "Overflow encountered when expanding vector", v7);
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (3 * v20 + 1) >> 1;
      v34 = (unsigned int *)sub_186B300(v19 - 1, v33);
      v19 = v34 + 2;
      *a3 = v34 + 2;
      *v34 = v42;
      LODWORD(v34) = v34[1];
      v22 = &v19[(unsigned int)v34];
      result = (unsigned int)((_DWORD)v34 + 1);
    }
    else
    {
      v21 = v20;
      result = v20 + 1;
      v22 = &v19[v21];
    }
LABEL_8:
    ++v14;
    *v22 = *(_QWORD *)(v23 + 72);
    *((_DWORD *)v19 - 1) = result;
  }
  while ( v15 != v14 );
  v35 = v47;
  v36 = v48;
  if ( v47 )
  {
    if ( (*(_DWORD *)(v47 + 8))-- == 1 )
      result = sub_15D7BC0(v36, v35);
  }
  v13 = v46;
  if ( v46 )
  {
    v38 = (unsigned __int64)&v46[*((unsigned int *)v46 - 1)];
    if ( (unsigned __int64)v46 >= v38 )
      return sub_186B220(v13 - 1);
    do
    {
      v39 = *v13++;
      result = sub_62A410(v45, v39);
    }
    while ( (unsigned __int64)v13 < v38 );
    v13 = v46;
    if ( v46 )
      return sub_186B220(v13 - 1);
  }
  return result;
}

