__int64 __fastcall sub_5AB0B0(__int64 a1, _QWORD *a2, __m128i a3)
{
  __int64 *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned int *v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  void *v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  void *v21; // r13
  __int64 i; // rbp
  void *v23; // rbx
  __int64 v24; // rsi
  void *v25; // rdi
  unsigned int v27; // ebx
  __int64 v28; // rbp
  int v29; // ebx
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  _QWORD *v35; // rcx
  __int64 (__fastcall *v36)(void (__fastcall ***)(_QWORD)); // rdx
  unsigned int v37; // ebx
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // ebp
  size_t v42; // rsi
  unsigned int *v43; // rax
  _DWORD *v44; // rdx
  __int64 v45; // rax
  int v46; // ebx
  void (***v47)(void); // rdi
  void *v48; // rbx
  __int64 (__fastcall *v49)(__int64, __m128i); // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  void (***v53)(void); // rax
  void (***v54)(void); // rbx
  char **exception; // rbp
  char **v56; // rbp
  void *v57; // [rsp+8h] [rbp-C0h]
  int v58[2]; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+28h] [rbp-A0h]
  void *v60; // [rsp+30h] [rbp-98h]
  __int64 v61; // [rsp+38h] [rbp-90h]
  _QWORD *v62; // [rsp+40h] [rbp-88h] BYREF
  void *v63; // [rsp+48h] [rbp-80h] BYREF
  void *v64; // [rsp+50h] [rbp-78h] BYREF
  int v65[2]; // [rsp+58h] [rbp-70h]
  unsigned int *v66; // [rsp+60h] [rbp-68h] BYREF
  int v67; // [rsp+68h] [rbp-60h]
  __int64 v68; // [rsp+70h] [rbp-58h] BYREF
  void *v69; // [rsp+78h] [rbp-50h]

  v5 = *(__int64 **)(a2[13] + 8LL);
  v61 = a2[13];
  v6 = v5[3];
  v7 = sub_4D6490(*(_QWORD *)(a2[1] + 24LL));
  v8 = *(_QWORD *)(a1 + 8);
  v9 = a2[13];
  v57 = (void *)v7;
  if ( v8 )
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 16LL))(v8, v9);
  else
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 72LL))(v9);
  v60 = (void *)v10;
  v66 = nullptr;
  if ( *(_QWORD *)(v10 + 16) )
  {
    v11 = v10;
    sub_577180(&v66, (_QWORD *)(v10 + 16));
    v12 = v66;
    v67 = *(_DWORD *)(v11 + 24);
    if ( v66 )
    {
      v13 = *(v66 - 1);
      if ( v13 != *(v66 - 2) )
        goto LABEL_6;
    }
  }
  else
  {
    v67 = *(_DWORD *)(v10 + 24);
  }
  sub_5A7FF0(&v66);
  v12 = v66;
  v13 = *(v66 - 1);
LABEL_6:
  *(_QWORD *)&v12[2 * v13] = 0x7FFFFFFF;
  *(v12 - 1) = v13 + 1;
  v14 = *v5;
  v67 = 1;
  ptr = (void *)(*(__int64 (__fastcall **)(__int64 *, unsigned int **))(v14 + 40))(v5, &v66);
  v62 = nullptr;
  (*(void (__fastcall **)(void **))(*(_QWORD *)v60 + 200LL))(&v63);
  (*(void (__fastcall **)(void **))(*(_QWORD *)v60 + 208LL))(&v64);
  *(_QWORD *)v58 = 0;
  while ( 1 )
  {
    v15 = v64;
    v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v63 + 40LL);
    if ( v16 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v63 + 16LL))() )
        goto LABEL_11;
      v17 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    else
    {
      v17 = v16((__int64)v63, (__int64)v64);
    }
    if ( v17 )
      break;
LABEL_11:
    v18 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v63 + 24LL))(v63);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
    v19 = 0xFFFFFFFFLL;
    if ( v62 )
      v19 = (unsigned int)(*((_DWORD *)v62 - 1) - 1);
    v20 = *(_QWORD *)(a2[14] + 8LL * LODWORD(v62[v19]));
    v21 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 72LL))(v20);
    for ( i = 0; (unsigned int)i < *(_DWORD *)(a1 + 16); ++i )
    {
      while ( 1 )
      {
        v68 = 0;
        v69 = v57;
        sub_4C4190(v6, (_QWORD *)(a2[8] + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 32) + 4 * i)), &v62[i], &v68);
        *(_QWORD *)v65 = v68;
        v23 = (void *)sub_4C4AC0(v6, (__int64)v21);
        (*(void (__fastcall **)(void *, void *))(*(_QWORD *)v23 + 16LL))(v23, v21);
        (**(void (__fastcall ***)(void *))v23)(v23);
        sub_186B220(v23);
        v24 = v68;
        if ( v68 )
        {
          v25 = v69;
          if ( (*(_DWORD *)(v68 + 8))-- == 1 )
            break;
        }
        if ( (unsigned int)++i >= *(_DWORD *)(a1 + 16) )
          goto LABEL_19;
      }
      sub_15D7BC0(v25, v24);
    }
LABEL_19:
    if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v21 + 24LL))(v21) )
    {
      v36 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v21 + 16LL);
      if ( v36 == sub_4C9C10 )
      {
        (**(void (__fastcall ***)(void *))v21)(v21);
        sub_186B220(v21);
      }
      else
      {
        v36((void (__fastcall ***)(_QWORD))v21);
      }
    }
    else
    {
      if ( *(_QWORD *)v58 )
      {
        v27 = *(_DWORD *)(*(_QWORD *)v58 - 4LL);
        if ( v27 == *(_DWORD *)(*(_QWORD *)v58 - 8LL) )
        {
          v41 = (3 * v27 + 1) >> 1;
          v42 = 8 * v41 + 8;
          if ( 8 * v27 + 8 >= (unsigned int)v42 || v27 >= v41 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v68, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v68);
            sub_233E40((__int64)&v68);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v43 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v58 - 8LL), v42);
          v44 = v43 + 2;
          *v43 = v41;
          v45 = v43[1];
          v28 = v27;
          *(_QWORD *)v58 = v44;
          v46 = v45;
          v30 = &v44[2 * v45];
          v29 = v46 + 1;
        }
        else
        {
          v28 = v27;
          v29 = v27 + 1;
          v30 = (_QWORD *)(*(_QWORD *)v58 + 8 * v28);
        }
      }
      else
      {
        v51 = (_QWORD *)sub_186B270(0x18u);
        *v51 = 2;
        v30 = v51 + 1;
        v29 = 1;
        v28 = 0;
        *(_QWORD *)v58 = v30;
      }
      *v30 = v21;
      v31 = v62;
      *(_DWORD *)(*(_QWORD *)v58 - 4LL) = v29;
      if ( v31 )
      {
        v32 = *((_DWORD *)v31 - 1);
        if ( v32 == *((_DWORD *)v31 - 2) )
        {
          v37 = (3 * v32 + 1) >> 1;
          v38 = 8 * v37 + 8;
          if ( 8 * v32 + 8 >= (unsigned int)v38 || v32 >= v37 )
          {
            v56 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v68, "Overflow encountered when expanding vector");
            *v56 = (char *)off_1C63128;
            sub_2333C0(v56 + 1, &v68);
            sub_233E40((__int64)&v68);
            __cxa_throw(v56, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v39 = (unsigned int *)sub_186B300(v31 - 1, v38);
          v40 = v39[1];
          v31 = v39 + 2;
          *v39 = v37;
          v62 = v31;
          LODWORD(v39) = v40;
          v35 = &v31[v40];
          v34 = (_DWORD)v39 + 1;
        }
        else
        {
          v33 = v32;
          v34 = v32 + 1;
          v35 = &v31[v33];
        }
      }
      else
      {
        v52 = (_QWORD *)sub_186B270(0x18u);
        v31 = v52 + 1;
        *v52 = 2;
        v34 = 1;
        v62 = v31;
        v35 = v31;
      }
      *v35 = v28;
      *((_DWORD *)v31 - 1) = v34;
      (*(void (__fastcall **)(void *, _QWORD **))(*(_QWORD *)ptr + 40LL))(ptr, &v62);
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)v63 + 32LL))(v63);
  }
  v47 = *(void (****)(void))(a1 + 40);
  if ( !v47 )
  {
    v53 = (void (***)(void))sub_5A2270(v61, (__int64)ptr, (unsigned int **)(a1 + 24));
    v47 = *(void (****)(void))(a1 + 40);
    v54 = v53;
    if ( v53 != v47 )
    {
      sub_568110(v47);
      *(_QWORD *)(a1 + 40) = v54;
      v47 = v54;
    }
  }
  v48 = (void *)((__int64 (__fastcall *)(void (***)(void), _QWORD, void *))(*v47)[2])(v47, a2[13], ptr);
  v49 = *(__int64 (__fastcall **)(__int64, __m128i))(*a2 + 64LL);
  if ( v49 == sub_5AAD40 )
  {
    *(double *)a3.m128i_i64 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)a2[13] + 64LL))(a2[13]);
    sub_5A3680((__int64)a2, 0, a3);
  }
  else
  {
    ((void (__fastcall *)(_QWORD *))v49)(a2);
  }
  v68 = *(_QWORD *)v58;
  sub_5A3D20((__int64)a2, (__int64)v48, &v68, 1, a3);
  if ( v48 )
    sub_4D63E0(v48);
  sub_59FDF0((void (__fastcall ***)(_QWORD))v64);
  sub_59FDF0((void (__fastcall ***)(_QWORD))v63);
  if ( v62 )
    sub_186B220(v62 - 1);
  if ( ptr )
    sub_4D63E0(ptr);
  if ( *(_QWORD *)v58 )
    sub_186B220((void *)(*(_QWORD *)v58 - 8LL));
  if ( v66 )
    sub_186B220(v66 - 2);
  return sub_4D63E0(v60);
}

