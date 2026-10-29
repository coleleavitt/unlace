__int64 __fastcall sub_5AA550(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4, int *a5, int *a6)
{
  __int64 v6; // r14
  int *v9; // rbx
  int *v10; // r15
  _DWORD *v11; // rax
  _DWORD *v12; // rdx
  int v13; // esi
  int v14; // r8d
  __int64 v15; // rax
  unsigned int v16; // edi
  unsigned int v17; // r9d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // rax
  int *v22; // r15
  _DWORD *v23; // rdx
  int v24; // ecx
  int v25; // edi
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rax
  unsigned int *v32; // rbx
  unsigned int *v33; // r15
  unsigned int *v34; // r14
  unsigned int *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned int v40; // edx
  __int64 v41; // r8
  unsigned int v42; // ecx
  void (***v43)(void); // r13
  void (***v44)(void); // rdi
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rdi
  unsigned int v49; // edx
  unsigned int v50; // ecx
  void (***v51)(void); // rbx
  void (***v52)(void); // rdi
  unsigned int v53; // ecx
  __int64 result; // rax
  __int64 v55; // rbx
  void (***v56)(void); // rdi
  unsigned int *v57; // r8
  unsigned int *v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rbx
  void (***v61)(void); // rdi
  char **exception; // r14
  char **v63; // r12
  __int64 v65; // [rsp+8h] [rbp-88h]
  __int64 v66; // [rsp+10h] [rbp-80h]
  __int64 v67; // [rsp+10h] [rbp-80h]
  unsigned int v69; // [rsp+20h] [rbp-70h]
  unsigned int *v71; // [rsp+38h] [rbp-58h] BYREF
  unsigned int *v72[10]; // [rsp+40h] [rbp-50h] BYREF

  v6 = a4;
  *(_QWORD *)a1 = &off_1C52330;
  *(_QWORD *)(a1 + 8) = 0;
  if ( a4 )
  {
    v9 = a5;
    v66 = a4;
    v10 = &a5[v66];
    v11 = (_DWORD *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v11 - 1) = 2;
    v12 = v11;
    *(_QWORD *)(a1 + 8) = v11;
    while ( 1 )
    {
      v13 = *v9++;
      *v11 = v13;
      v14 = *(v12 - 1);
      v15 = (unsigned int)(v14 + 1);
      *(v12 - 1) = v15;
      if ( v10 == v9 )
        break;
      v16 = *(v12 - 2);
      if ( v16 == (_DWORD)v15 )
      {
        v17 = (3 * v16 + 1) >> 1;
        v18 = 4 * v17 + 8;
        if ( 4 * v14 + 12 >= (unsigned int)v18 || v16 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v72, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v72);
          sub_233E40((__int64)v72);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300(v12 - 2, v18);
        v12 = v19 + 2;
        *v19 = (3 * v16 + 1) >> 1;
        v20 = v19[1];
        *(_QWORD *)(a1 + 8) = v12;
        v11 = &v12[v20];
      }
      else
      {
        v11 = &v12[v15];
      }
    }
    *(_QWORD *)(a1 + 16) = 0;
    v21 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v22 = a6;
    *((_QWORD *)v21 - 1) = 2;
    v23 = v21;
    *(_QWORD *)(a1 + 16) = v21;
    while ( 1 )
    {
      v24 = *v22++;
      *v21 = v24;
      v25 = *(v23 - 1);
      v26 = (unsigned int)(v25 + 1);
      *(v23 - 1) = v26;
      if ( v22 == &a6[v66] )
        break;
      v27 = *(v23 - 2);
      if ( v27 == (_DWORD)v26 )
      {
        v28 = (3 * v27 + 1) >> 1;
        v29 = 4 * v28 + 8;
        if ( 4 * v25 + 12 >= (unsigned int)v29 || v27 >= v28 )
        {
          v63 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v72, "Overflow encountered when expanding vector");
          *v63 = (char *)off_1C63128;
          sub_2333C0(v63 + 1, v72);
          sub_233E40((__int64)v72);
          __cxa_throw(v63, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v69 = (3 * v27 + 1) >> 1;
        v30 = (unsigned int *)sub_186B300(v23 - 2, v29);
        v23 = v30 + 2;
        *v30 = v69;
        v31 = v30[1];
        *(_QWORD *)(a1 + 16) = v23;
        v21 = &v23[v31];
      }
      else
      {
        v21 = &v23[v26];
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0;
  }
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 96) = 1;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  v65 = a2[13];
  v67 = *(_QWORD *)(a2[1] + 24LL);
  if ( (_DWORD)v6 )
  {
    v32 = (unsigned int *)a5;
    v33 = (unsigned int *)a6;
    v34 = (unsigned int *)&a5[v6];
    do
    {
      while ( 1 )
      {
        v35 = (unsigned int *)(a2[7] + 4LL * *v32);
        if ( *v35 == -1 || *(_DWORD *)(a3[7] + 4LL * *v33) == -1 )
          break;
        sub_5A21E0((unsigned int **)(a1 + 104), v35);
        sub_5A21E0((unsigned int **)(a1 + 112), (unsigned int *)(a3[7] + 4LL * *v33));
        ++v32;
        ++v33;
        if ( v34 == v32 )
          goto LABEL_23;
      }
      ++v32;
      ++v33;
      *(_BYTE *)(a1 + 96) = 0;
    }
    while ( v34 != v32 );
LABEL_23:
    if ( !*(_BYTE *)(a1 + 96) )
    {
      v36 = a3[2];
      v71 = nullptr;
      if ( v36 )
        v37 = *(unsigned int *)(v36 - 4);
      else
        v37 = 0;
      v38 = a2[2];
      if ( v38 )
        v39 = *(unsigned int *)(v38 - 4);
      else
        v39 = 0;
      sub_647A70(v39, v37, &v71);
      if ( v71 )
        v40 = *(v71 - 1);
      else
        v40 = 0;
      v41 = *(_QWORD *)(a1 + 8);
      if ( v41 )
        v42 = *(_DWORD *)(v41 - 4);
      else
        v42 = 0;
      v43 = (void (***)(void))sub_4C9050(v67, (__int64)a2, (__int64)a3, v42, v41, *(_QWORD *)(a1 + 16), v40, v71, 0);
      v44 = *(void (****)(void))(a1 + 40);
      if ( v44 != v43 )
      {
        sub_4CFDD0(v44);
        *(_QWORD *)(a1 + 40) = v43;
      }
      v45 = a2[4];
      v72[0] = nullptr;
      if ( v45 )
        v46 = (unsigned int)(*(_DWORD *)(v45 - 4) - 1);
      else
        v46 = 0xFFFFFFFFLL;
      sub_647A70(0, v46, v72);
      if ( v71 )
        *(v71 - 1) = 0;
      v47 = a2[4];
      if ( v47 )
        v48 = (unsigned int)(*(_DWORD *)(v47 - 4) - 1);
      else
        v48 = 0xFFFFFFFFLL;
      sub_647A70(v48, (unsigned int)v48, &v71);
      if ( v71 )
        v49 = *(v71 - 1);
      else
        v49 = 0;
      if ( v72[0] )
        v50 = *(v72[0] - 1);
      else
        v50 = 0;
      v51 = (void (***)(void))sub_4C9510(v67, v65, v65, v50, v72[0], v72[0], v49, v71);
      v52 = *(void (****)(void))(a1 + 48);
      if ( v52 != v51 )
      {
        sub_568110(v52);
        *(_QWORD *)(a1 + 48) = v51;
      }
      if ( v72[0] )
        v53 = *(v72[0] - 1);
      else
        v53 = 0;
      result = (__int64)sub_4C67E0(v67, v65, v65, v53, v72[0], v72[0]);
      v55 = result;
      v56 = *(void (****)(void))(a1 + 64);
      if ( (void (***)(void))result != v56 )
      {
        result = sub_5681A0(v56);
        *(_QWORD *)(a1 + 64) = v55;
      }
      if ( v72[0] )
        result = sub_186B220(v72[0] - 2);
      if ( v71 )
        return sub_186B220(v71 - 2);
      return result;
    }
    v57 = *(unsigned int **)(a1 + 104);
    v58 = *(unsigned int **)(a1 + 112);
    v59 = a3[13];
    if ( v57 )
      LODWORD(v6) = *(v57 - 1);
    else
      LODWORD(v6) = 0;
  }
  else
  {
    v59 = a3[13];
    v57 = nullptr;
    v58 = nullptr;
  }
  result = (__int64)sub_4C67E0(v67, v65, v59, v6, v57, v58);
  v60 = result;
  v61 = *(void (****)(void))(a1 + 24);
  if ( (void (***)(void))result != v61 )
  {
    result = sub_5681A0(v61);
    *(_QWORD *)(a1 + 24) = v60;
  }
  return result;
}

