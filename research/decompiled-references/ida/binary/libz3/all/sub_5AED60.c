__int64 __fastcall sub_5AED60(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __m128i a5)
{
  _QWORD *v5; // r14
  _DWORD *v7; // rcx
  __int64 v8; // r15
  _DWORD *v9; // rdx
  __int64 v10; // rdi
  _DWORD *v11; // rsi
  _DWORD *v12; // rax
  __int64 (__fastcall *v13)(__int64); // rax
  _QWORD *v14; // rax
  __int64 *v15; // r13
  int v16; // eax
  void (***v17)(void); // r12
  __int64 v18; // rsi
  __int64 v19; // rax
  bool v20; // zf
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rax
  void (***v24)(void); // r12
  void (***v25)(void); // rdi
  __int64 v26; // rax
  char *v27; // r12
  void (***v28)(void); // r12
  void *v29; // r12
  _QWORD *v30; // rax
  void (***v31)(void); // r13
  __int64 (__fastcall *v32)(__int64, __m128i); // rax
  char v33; // al
  char v34; // al
  __int64 v35; // rax
  void (***v36)(void); // rdi
  _QWORD *v37; // rdx
  __int64 v38; // rax
  void (***v39)(void); // r13
  void (***v40)(void); // rdi
  __int64 result; // rax
  __int64 (__fastcall *v42)(void (__fastcall ***)(_QWORD)); // rdx
  _DWORD *v43; // rax
  int v44; // edx
  _DWORD *v45; // rdx
  unsigned int *v46; // r8
  unsigned int v47; // ecx
  char *v48; // rax
  void (***v49)(void); // rdi
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rax
  void (***v53)(void); // r12
  __int64 v54; // rax
  int v55; // r13d
  int v56; // r13d
  unsigned int *v57; // r8
  unsigned int v58; // ecx
  void (***v59)(void); // rdi
  void (***v60)(void); // rax
  void (***v61)(void); // rdi
  __int64 v62; // rax
  unsigned int v63; // edx
  unsigned int v64; // eax
  void (***v65)(void); // rax
  void (***v66)(void); // r13
  __int64 v67; // rax
  void (***v68)(void); // r13
  char **exception; // r15
  char v70; // [rsp+7h] [rbp-B9h]
  void *v71; // [rsp+8h] [rbp-B8h]
  void *v72; // [rsp+18h] [rbp-A8h]
  _QWORD *ptr; // [rsp+20h] [rbp-A0h]
  void *v74; // [rsp+28h] [rbp-98h]
  void *v75; // [rsp+28h] [rbp-98h]
  _QWORD *v77; // [rsp+38h] [rbp-88h]
  _QWORD *v78; // [rsp+40h] [rbp-80h]
  int v79; // [rsp+40h] [rbp-80h]
  _QWORD *v81; // [rsp+48h] [rbp-78h]
  unsigned int v82; // [rsp+58h] [rbp-68h] BYREF
  unsigned int v83; // [rsp+5Ch] [rbp-64h] BYREF
  __int64 *v84; // [rsp+60h] [rbp-60h] BYREF
  __int64 v85; // [rsp+68h] [rbp-58h] BYREF
  unsigned __int64 v86; // [rsp+70h] [rbp-50h] BYREF
  int v87; // [rsp+78h] [rbp-48h]

  v5 = a3;
  v7 = (_DWORD *)a2[6];
  v8 = *(_QWORD *)(a2[1] + 24LL);
  v9 = (_DWORD *)a3[6];
  if ( !v7 )
  {
    if ( !v9 )
    {
      if ( !a4 )
        goto LABEL_90;
      v43 = *(_DWORD **)(a4 + 48);
      v10 = 0;
      if ( !v43 )
        goto LABEL_57;
      goto LABEL_55;
    }
    v10 = (unsigned int)*(v9 - 1);
    if ( (_DWORD)v10 )
      goto LABEL_8;
LABEL_85:
    if ( !a4 )
      goto LABEL_90;
    v43 = *(_DWORD **)(a4 + 48);
    if ( !v43 )
      goto LABEL_57;
LABEL_55:
    v44 = *(v43 - 1);
    goto LABEL_56;
  }
  v10 = (unsigned int)*(v7 - 1);
  if ( !v9 )
  {
    if ( (_DWORD)v10 )
      goto LABEL_8;
    goto LABEL_85;
  }
  if ( (_DWORD)v10 != *(v9 - 1) )
    goto LABEL_8;
  v11 = &v7[(unsigned int)v10];
  if ( v7 != v11 )
  {
    v12 = v7;
    while ( *v12 == *v9 )
    {
      ++v12;
      ++v9;
      if ( v11 == v12 )
        goto LABEL_53;
    }
    goto LABEL_8;
  }
LABEL_53:
  if ( !a4 )
    goto LABEL_90;
  v43 = *(_DWORD **)(a4 + 48);
  if ( v43 )
    goto LABEL_55;
  v44 = 0;
LABEL_56:
  if ( (_DWORD)v10 == v44 )
  {
LABEL_57:
    v45 = &v7[v10];
    if ( v7 != v45 )
    {
      while ( *v7 == *v43 )
      {
        ++v7;
        ++v43;
        if ( v45 == v7 )
        {
          ptr = nullptr;
          goto LABEL_15;
        }
      }
      goto LABEL_8;
    }
LABEL_90:
    ptr = nullptr;
    goto LABEL_15;
  }
LABEL_8:
  v13 = *(__int64 (__fastcall **)(__int64))(*v5 + 72LL);
  if ( v13 == sub_5A4890 )
  {
    ptr = (_QWORD *)sub_186B270(0xA0u);
    sub_5A4550((__int64)ptr, (__int64)v5);
  }
  else
  {
    ptr = (_QWORD *)v13((__int64)v5);
  }
  v14 = (_QWORD *)sub_186B270(0x18u);
  v15 = v14 + 1;
  v14[1] = ptr;
  v14[2] = a2;
  *v14 = 0x200000002LL;
  if ( a4 )
  {
    v84 = v14 + 1;
    sub_5AAFD0((unsigned int **)&v84);
    v15 = v84;
    v16 = *((_DWORD *)v84 - 1);
    v84[v16] = a4;
    *((_DWORD *)v15 - 1) = v16 + 1;
  }
  v84 = v15;
  if ( !(unsigned __int8)sub_5A6000(&v84) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0((__int64 *)&v86, "finite_product_relation union: cannot convert relations to common specification");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v86);
    sub_233E40((__int64)&v86);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  sub_186B220(v15 - 1);
  if ( ptr )
    v5 = ptr;
LABEL_15:
  v17 = *(void (****)(void))(a1 + 24);
  v18 = a2[13];
  v74 = *(void **)(v18 + 8);
  if ( v17 )
    goto LABEL_16;
  v54 = a2[4];
  if ( v54 )
  {
    v55 = *(_DWORD *)(v54 - 4);
    LODWORD(v86) = 0;
    v79 = v55 - 1;
    if ( v55 == 1 )
      goto LABEL_77;
  }
  else
  {
    LODWORD(v86) = 0;
    v79 = -1;
  }
  v56 = 1;
  sub_5A21E0((unsigned int **)(a1 + 16), (unsigned int *)&v86);
  while ( 1 )
  {
    LODWORD(v86) = v56;
    if ( v79 == v56 )
      break;
    ++v56;
    sub_5A21E0((unsigned int **)(a1 + 16), (unsigned int *)&v86);
  }
  v18 = a2[13];
LABEL_77:
  v57 = *(unsigned int **)(a1 + 16);
  if ( v57 )
    v58 = *(v57 - 1);
  else
    v58 = 0;
  v17 = (void (***)(void))sub_4C9510(v8, v18, v18, v58, v57, v57, v58, *(unsigned int **)(a1 + 16));
  v59 = *(void (****)(void))(a1 + 24);
  if ( v59 != v17 )
  {
    sub_568110(v59);
    *(_QWORD *)(a1 + 24) = v17;
  }
  v18 = a2[13];
LABEL_16:
  v19 = ((__int64 (__fastcall *)(void (***)(void), __int64, _QWORD))(*v17)[2])(v17, v18, v5[13]);
  v20 = *(_BYTE *)(a1 + 8) == 0;
  v77 = (_QWORD *)v19;
  v85 = 0;
  if ( v20 )
  {
    v75 = nullptr;
  }
  else
  {
    v86 = 0;
    v87 = 0;
    v21 = (_QWORD *)sub_186B270(0x18u);
    v21[1] = 0x7FFFFFFF;
    v86 = (unsigned __int64)(v21 + 1);
    *v21 = 0x100000002LL;
    sub_5A2120(&v86, &qword_18BDFE8);
    v87 = 1;
    v75 = (void *)(*(__int64 (__fastcall **)(void *, unsigned __int64 *))(*(_QWORD *)v74 + 40LL))(v74, &v86);
    if ( v86 )
      sub_186B220((void *)(v86 - 8));
  }
  v22 = (_QWORD *)sub_186B270(0x38u);
  *v22 = &off_1C521C0;
  v22[1] = a1;
  v22[2] = a2;
  v22[3] = v5;
  v22[4] = v75;
  v22[5] = &v85;
  v23 = *(_QWORD *)v8;
  v22[6] = 0;
  v24 = (void (***)(void))(*(__int64 (__fastcall **)(__int64, _QWORD *))(v23 + 16))(v8, v77);
  ((void (__fastcall *)(void (***)(void), _QWORD *))(*v24)[2])(v24, v77);
  sub_568170(v24);
  v25 = *(void (****)(void))(a1 + 56);
  if ( !v25 )
  {
    v50 = v77[2];
    v51 = v50 ? *(_DWORD *)(v50 - 4) - 1 : -1;
    LODWORD(v86) = v51;
    v52 = sub_4C5900(v8, (__int64)v77, 1u, (unsigned int *)&v86);
    v25 = *(void (****)(void))(a1 + 56);
    v53 = (void (***)(void))v52;
    if ( (void (***)(void))v52 != v25 )
    {
      sub_4CFE00(v25);
      *(_QWORD *)(a1 + 56) = v53;
      v25 = v53;
    }
  }
  v26 = ((__int64 (__fastcall *)(void (***)(void), _QWORD *))(*v25)[2])(v25, v77);
  v27 = *(char **)(a1 + 48);
  v78 = (_QWORD *)v26;
  if ( !v27 )
  {
    v46 = *(unsigned int **)(a1 + 16);
    v47 = v46 ? *(v46 - 1) : 0;
    v48 = sub_4C67E0(v8, a2[13], v26, v47, v46, *(unsigned int **)(a1 + 16));
    v49 = *(void (****)(void))(a1 + 48);
    v27 = v48;
    if ( v49 != (void (***)(void))v48 )
    {
      sub_5681A0(v49);
      *(_QWORD *)(a1 + 48) = v27;
    }
  }
  (*(void (__fastcall **)(char *, _QWORD, _QWORD *))(*(_QWORD *)v27 + 16LL))(v27, a2[13], v78);
  v28 = *(void (****)(void))(a1 + 40);
  if ( !v28 )
  {
    v60 = (void (***)(void))sub_4C4B50(v8, a2[13], a2[13], 0);
    v61 = *(void (****)(void))(a1 + 40);
    v28 = v60;
    if ( v61 != v60 )
    {
      sub_568140(v61);
      *(_QWORD *)(a1 + 40) = v28;
    }
  }
  ((void (__fastcall *)(void (***)(void), _QWORD, _QWORD *, _QWORD))(*v28)[2])(v28, a2[13], v78, 0);
  v29 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v5[13] + 72LL))(v5[13]);
  (*(void (__fastcall **)(_QWORD, void *, _QWORD *))(**(_QWORD **)(a1 + 48) + 16LL))(*(_QWORD *)(a1 + 48), v29, v78);
  if ( *(_BYTE *)(a1 + 8) )
    v72 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v29 + 72LL))(v29);
  else
    v72 = nullptr;
  v30 = (_QWORD *)sub_186B270(0x18u);
  *v30 = off_1C521E8;
  v30[2] = v5;
  v30[1] = a2;
  v31 = (void (***)(void))(*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 16LL))(v8, v29);
  ((void (__fastcall *)(void (***)(void), void *))(*v31)[2])(v31, v29);
  sub_568170(v31);
  (*(void (__fastcall **)(_QWORD, _QWORD, void *, _QWORD))(**(_QWORD **)(a1 + 40) + 16LL))(
    *(_QWORD *)(a1 + 40),
    a2[13],
    v29,
    0);
  if ( *(_BYTE *)(a1 + 8) )
  {
    v32 = *(__int64 (__fastcall **)(__int64, __m128i))(*(_QWORD *)a4 + 24LL);
    if ( v32 == sub_5A3C10 )
    {
      sub_5A3680(a4, 1, a5);
      v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a4 + 104) + 24LL))(*(_QWORD *)(a4 + 104));
    }
    else
    {
      v33 = ((__int64 (__fastcall *)(__int64))v32)(a4);
    }
    v34 = v33 ^ 1;
    v20 = v34 == 0;
    v70 = v34;
    v35 = a4;
    if ( !v20 )
      v35 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a4 + 8) + 48LL))(
              *(_QWORD *)(a4 + 8),
              a4 + 16,
              *(unsigned int *)(a4 + 24));
    v36 = *(void (****)(void))(a1 + 72);
    v81 = (_QWORD *)v35;
    if ( !v36 )
    {
      v62 = v78[2];
      if ( v62 )
      {
        v63 = *(_DWORD *)(v62 - 4);
        v64 = v63 - 1;
      }
      else
      {
        v64 = -1;
        v63 = 0;
      }
      v82 = v64;
      v86 = __PAIR64__(v63, v64);
      v83 = 0;
      v65 = (void (***)(void))sub_4C9510(v8, (__int64)v78, (__int64)v75, 1u, &v82, &v83, 2u, (unsigned int *)&v86);
      v36 = *(void (****)(void))(a1 + 72);
      v66 = v65;
      if ( v65 != v36 )
      {
        sub_568110(v36);
        *(_QWORD *)(a1 + 72) = v66;
        v36 = v66;
      }
    }
    v71 = (void *)((__int64 (__fastcall *)(void (***)(void), _QWORD *, void *))(*v36)[2])(v36, v78, v75);
    sub_5A3D20((__int64)v81, (__int64)v71, &v85, 1, a5);
    v37 = (_QWORD *)sub_186B270(0x18u);
    *v37 = off_1C521E8;
    v38 = *(_QWORD *)v8;
    v37[2] = v5;
    v37[1] = v81;
    v39 = (void (***)(void))(*(__int64 (__fastcall **)(__int64, void *))(v38 + 16))(v8, v72);
    ((void (__fastcall *)(void (***)(void), void *))(*v39)[2])(v39, v72);
    sub_568170(v39);
    (*(void (__fastcall **)(_QWORD, _QWORD, void *, _QWORD))(**(_QWORD **)(a1 + 40) + 16LL))(
      *(_QWORD *)(a1 + 40),
      v81[13],
      v72,
      0);
    if ( v70 )
    {
      v40 = *(void (****)(void))(a1 + 64);
      if ( !v40 )
      {
        v67 = sub_4C4940(v8, a4, (__int64)v81, 0);
        v40 = *(void (****)(void))(a1 + 64);
        v68 = (void (***)(void))v67;
        if ( (void (***)(void))v67 != v40 )
        {
          sub_54D7B0(v40);
          *(_QWORD *)(a1 + 64) = v68;
          v40 = v68;
        }
      }
      ((void (__fastcall *)(void (***)(void), __int64, _QWORD *, _QWORD))(*v40)[2])(v40, a4, v81, 0);
      (*(void (__fastcall **)(_QWORD *))(*v81 + 16LL))(v81);
    }
    if ( v71 )
      sub_4D63E0(v71);
  }
  if ( v72 )
    sub_4D63E0(v72);
  if ( v29 )
    sub_4D63E0(v29);
  if ( v78 )
    sub_4D63E0(v78);
  if ( v85 )
    sub_186B220((void *)(v85 - 8));
  if ( v75 )
    sub_4D63E0(v75);
  result = (__int64)v77;
  if ( v77 )
    result = sub_4D63E0(v77);
  if ( ptr )
  {
    v42 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*ptr + 16LL);
    if ( v42 == sub_4C9C10 )
    {
      (*(void (__fastcall **)(_QWORD *))*ptr)(ptr);
      return sub_186B220(ptr);
    }
    else
    {
      return v42((void (__fastcall ***)(_QWORD))ptr);
    }
  }
  return result;
}

