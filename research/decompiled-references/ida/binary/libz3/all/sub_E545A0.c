__int64 __fastcall sub_E545A0(__int64 a1, __int64 *a2, __int64 **a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v8; // rdx
  unsigned int v9; // r13d
  __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rsi
  int v13; // eax
  _QWORD *v14; // rsi
  unsigned int v15; // eax
  __int64 *v16; // r8
  __int64 v17; // r13
  __int64 *v18; // r14
  unsigned int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r9
  __int64 *v23; // rbx
  __int64 v24; // rsi
  bool v25; // zf
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 *v28; // rbx
  unsigned __int64 v29; // rbp
  __int64 v30; // rsi
  unsigned int v32; // r15d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  char **exception; // rbp
  __int64 *v38; // [rsp+8h] [rbp-90h]
  unsigned int v39; // [rsp+14h] [rbp-84h]
  __int64 v40; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v41; // [rsp+38h] [rbp-60h]
  __int64 v42; // [rsp+40h] [rbp-58h] BYREF
  __int64 v43; // [rsp+48h] [rbp-50h]

  v5 = *a2;
  v6 = a2[1];
  v41 = nullptr;
  v40 = v5;
  if ( v6 )
  {
    v8 = nullptr;
    v9 = 0;
    do
    {
      if ( v9 >= *(_DWORD *)(v6 - 4) )
        break;
      v10 = *(_QWORD *)(v6 + 8LL * v9);
      if ( v10 )
        ++*(_DWORD *)(v10 + 8);
      if ( v8 )
      {
        v11 = *((_DWORD *)v8 - 1);
        if ( v11 == *((_DWORD *)v8 - 2) )
        {
          v32 = (3 * v11 + 1) >> 1;
          v33 = 8 * v32 + 8;
          if ( 8 * v11 + 8 >= (unsigned int)v33 || v11 >= v32 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v42, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v42);
            sub_233E40((__int64)&v42);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v34 = (unsigned int *)sub_186B300(v8 - 1, v33);
          v35 = v34[1];
          v8 = v34 + 2;
          *v34 = v32;
          v41 = v8;
          LODWORD(v34) = v35;
          v14 = &v8[v35];
          v6 = a2[1];
          v13 = (_DWORD)v34 + 1;
        }
        else
        {
          v12 = v11;
          v13 = v11 + 1;
          v14 = &v8[v12];
        }
      }
      else
      {
        v36 = (_QWORD *)sub_186B270(0x18u);
        v8 = v36 + 1;
        *v36 = 2;
        v6 = a2[1];
        v13 = 1;
        v41 = v8;
        v14 = v8;
      }
      *v14 = v10;
      ++v9;
      *((_DWORD *)v8 - 1) = v13;
    }
    while ( v6 );
  }
  sub_E4F4E0(a1, &v40);
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 **))(**(_QWORD **)(a1 + 104) + 280LL))(
          *(_QWORD *)(a1 + 104),
          &v40,
          a3);
  v16 = *a3;
  v39 = v15;
  if ( *a3 )
  {
    v17 = 2LL * *((unsigned int *)v16 - 1);
    v38 = &v16[v17];
    if ( &v16[v17] != v16 )
    {
      v18 = *a3;
      do
      {
        v42 = 0;
        v19 = 0;
        v43 = *(_QWORD *)(a1 + 96);
        v20 = v18[1];
        if ( v20 )
        {
          do
          {
            if ( v19 >= *(_DWORD *)(v20 - 4) )
              break;
            sub_14EA2A0(a1 + 480, *(_QWORD *)(v20 + 8LL * v19), &v42);
            v20 = v18[1];
            v21 = v42;
            v22 = *v18;
            v23 = (__int64 *)(v20 + 8LL * v19);
            if ( v42 )
              ++*(_DWORD *)(v42 + 8);
            v24 = *v23;
            if ( *v23 )
            {
              v25 = (*(_DWORD *)(v24 + 8))-- == 1;
              if ( v25 )
              {
                sub_15D7BC0(v22, v24);
                v20 = v18[1];
              }
            }
            *v23 = v21;
            ++v19;
          }
          while ( v20 );
          v26 = v42;
          v27 = v43;
          if ( v42 )
          {
            v25 = (*(_DWORD *)(v42 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v27, v26);
          }
        }
        v18 += 2;
      }
      while ( v38 != v18 );
    }
  }
  v28 = v41;
  if ( v41 )
  {
    v29 = (unsigned __int64)&v41[*((unsigned int *)v41 - 1)];
    if ( (unsigned __int64)v41 >= v29 )
      goto LABEL_33;
    do
    {
      while ( 1 )
      {
        v30 = *v28;
        if ( *v28 )
        {
          v25 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( (unsigned __int64)++v28 >= v29 )
          goto LABEL_32;
      }
      sub_15D7BC0(v40, v30);
      ++v28;
    }
    while ( (unsigned __int64)v28 < v29 );
LABEL_32:
    v28 = v41;
    if ( v41 )
LABEL_33:
      sub_186B220(v28 - 1);
  }
  return v39;
}

