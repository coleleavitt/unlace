__int64 __fastcall sub_4D2010(_QWORD *a1, __int64 a2, __int64 *a3)
{
  char **exception; // rbp
  __int64 v4; // rdx
  __int64 (*v8)(void); // rax
  __int64 v9; // r12
  __int64 (__fastcall *v10)(__int64, __int64); // rdx
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r12d
  __int64 i; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rsi
  int v22; // eax
  __int64 *v23; // rsi
  __int64 result; // rax
  __int64 *v25; // rbx
  unsigned __int64 v26; // rbp
  __int64 v27; // rsi
  unsigned int v29; // r8d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rsi
  char *v33; // rdi
  int v34; // ecx
  char *v35; // rdx
  unsigned int v36; // esi
  char *v37; // rax
  unsigned int v38; // r15d
  __int64 v39; // rax
  __int64 v40; // rdx
  void *v41; // rcx
  _QWORD *v42; // rax
  unsigned int v43; // esi
  __int64 v44; // rax
  unsigned int v45; // [rsp+Ch] [rbp-6Ch]
  __int64 v46; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v47; // [rsp+18h] [rbp-60h]
  __int64 v48[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = *(__int64 (**)(void))(*a1 + 192LL);
  if ( (char *)v8 == (char *)sub_4D0080 )
    v9 = (__int64)(a1 + 8);
  else
    v9 = v8();
  if ( *(_DWORD *)(v9 + 156) )
  {
    v33 = *(char **)(v9 + 144);
    v34 = 0;
    v35 = &v33[8 * *(unsigned int *)(v9 + 152)];
    v36 = *(_DWORD *)(v9 + 152);
    v37 = v33;
    if ( v33 == v35 )
      goto LABEL_41;
    do
    {
      while ( *(_QWORD *)v37 )
      {
        *(_QWORD *)v37 = 0;
        v37 += 8;
        if ( v35 == v37 )
          goto LABEL_35;
      }
      v37 += 8;
      ++v34;
    }
    while ( v35 != v37 );
LABEL_35:
    if ( v36 <= 0x10 || 3 * v36 >= 4 * v34 )
      goto LABEL_41;
    if ( v33 )
    {
      sub_186B220(v33);
      v38 = *(_DWORD *)(v9 + 152);
      *(_QWORD *)(v9 + 144) = 0;
      v38 >>= 1;
      *(_DWORD *)(v9 + 152) = v38;
      v39 = sub_186B270(8LL * v38);
      v40 = v38;
      v41 = (void *)v39;
      if ( !v38 )
      {
LABEL_40:
        *(_QWORD *)(v9 + 144) = v41;
LABEL_41:
        *(_QWORD *)(v9 + 156) = 0;
        goto LABEL_4;
      }
    }
    else
    {
      *(_QWORD *)(v9 + 144) = 0;
      v43 = v36 >> 1;
      *(_DWORD *)(v9 + 152) = v43;
      v44 = sub_186B270(8LL * v43);
      v40 = v43;
      v41 = (void *)v44;
    }
    v41 = memset(v41, 0, 8 * v40);
    goto LABEL_40;
  }
LABEL_4:
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 208LL);
  if ( v10 == sub_4D0440 )
  {
    v11 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
    if ( v11 == sub_4D0080 )
      v12 = (__int64)(a1 + 8);
    else
      v12 = v11((__int64)a1);
    v13 = sub_4C7190(v12, a2);
  }
  else
  {
    v13 = v10((__int64)a1, a2);
  }
  if ( *(_DWORD *)(*(_QWORD *)(v13 + 8) + 32LL) == 1 )
    return sub_4FCA20(v13, a3);
  v14 = a1[7];
  v15 = 0;
  v47 = nullptr;
  v46 = v14;
  for ( i = *a3; *a3; i = *a3 )
  {
    if ( v15 >= *(_DWORD *)(i - 4) )
      break;
    v17 = sub_1625BE0(a1[6] + 56LL, *(_QWORD *)(i + 8LL * v15), *(_QWORD *)(a2 + 8LL * v15 + 48));
    v18 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v19 = v47;
    if ( v47 )
    {
      v20 = *((_DWORD *)v47 - 1);
      if ( v20 == *((_DWORD *)v47 - 2) )
      {
        v29 = (3 * v20 + 1) >> 1;
        v30 = 8 * v29 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v30 || v20 >= v29 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_E08B0(v48, "Overflow encountered when expanding vector", v4);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v48);
          sub_233E40((__int64)v48);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v45 = (3 * v20 + 1) >> 1;
        v31 = (unsigned int *)sub_186B300(v47 - 1, v30);
        v32 = v31[1];
        v19 = v31 + 2;
        v47 = v31 + 2;
        *v31 = v45;
        LODWORD(v31) = v32;
        v23 = &v19[v32];
        v22 = (_DWORD)v31 + 1;
      }
      else
      {
        v21 = v20;
        v22 = v20 + 1;
        v23 = &v47[v21];
      }
    }
    else
    {
      v42 = (_QWORD *)sub_186B270(0x18u);
      v19 = v42 + 1;
      *v42 = 2;
      v22 = 1;
      v47 = v19;
      v23 = v19;
    }
    *v23 = v18;
    ++v15;
    *((_DWORD *)v19 - 1) = v22;
  }
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*a1 + 272LL))(a1, a2, &v46);
  v25 = v47;
  if ( v47 )
  {
    result = *((unsigned int *)v47 - 1);
    v26 = (unsigned __int64)&v47[result];
    if ( (unsigned __int64)v47 >= v26 )
      return sub_186B220(v25 - 1);
    do
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
        {
          if ( (*(_DWORD *)(v27 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v25 >= v26 )
          goto LABEL_24;
      }
      result = sub_15D7BC0(v46, v27);
      ++v25;
    }
    while ( (unsigned __int64)v25 < v26 );
LABEL_24:
    v25 = v47;
    if ( v47 )
      return sub_186B220(v25 - 1);
  }
  return result;
}

