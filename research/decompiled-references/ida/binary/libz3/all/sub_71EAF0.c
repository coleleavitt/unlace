__int64 __fastcall sub_71EAF0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v9; // r15
  int v10; // eax
  __int64 v11; // r13
  _DWORD *v12; // rdx
  __int64 result; // rax
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  _QWORD *v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  _QWORD *v23; // rdx
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // r15
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // edx
  int v32; // esi
  __int64 v33; // r13
  __int64 v34; // r15
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r14
  bool v41; // zf
  unsigned int v42; // ebx
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // ebx
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  char **exception; // rbp
  int v53; // [rsp+0h] [rbp-B8h]
  int v54; // [rsp+0h] [rbp-B8h]
  int v55[2]; // [rsp+8h] [rbp-B0h]
  int v56; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v57; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v58; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v59; // [rsp+8h] [rbp-B0h]
  int v60; // [rsp+10h] [rbp-A8h]
  __int64 v61; // [rsp+10h] [rbp-A8h]
  int v62; // [rsp+18h] [rbp-A0h]
  __int64 v63; // [rsp+18h] [rbp-A0h]
  int v64; // [rsp+20h] [rbp-98h]
  int v65[2]; // [rsp+20h] [rbp-98h]
  _QWORD *v66; // [rsp+28h] [rbp-90h]
  int v67; // [rsp+30h] [rbp-88h]
  __int64 *v68; // [rsp+30h] [rbp-88h]
  int v69; // [rsp+38h] [rbp-80h]
  int v70[2]; // [rsp+38h] [rbp-80h]
  int v71[2]; // [rsp+38h] [rbp-80h]
  int v72[2]; // [rsp+40h] [rbp-78h]
  int v73[2]; // [rsp+40h] [rbp-78h]
  void *ptra; // [rsp+48h] [rbp-70h]
  void *ptr; // [rsp+48h] [rbp-70h]
  int v76[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v77[11]; // [rsp+60h] [rbp-58h] BYREF

  if ( *(_WORD *)(a3 + 4) )
    return 0;
  if ( a3 == *a2 )
  {
    if ( a4 )
      ++*(_DWORD *)(a4 + 8);
    v14 = (_QWORD *)a1[4];
    if ( v14 )
    {
      v15 = *((_DWORD *)v14 - 1);
      if ( v15 == *((_DWORD *)v14 - 2) )
      {
        v42 = (3 * v15 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v43 || v15 >= v42 )
          goto LABEL_55;
        v44 = (unsigned int *)sub_186B300(v14 - 1, v43);
        v45 = v44[1];
        v14 = v44 + 2;
        *v44 = v42;
        a1[4] = v44 + 2;
        LODWORD(v44) = v45;
        v18 = &v14[v45];
        v17 = (_DWORD)v44 + 1;
      }
      else
      {
        v16 = v15;
        v17 = v15 + 1;
        v18 = &v14[v16];
      }
    }
    else
    {
      v50 = (_QWORD *)sub_186B270(0x18u);
      v14 = v50 + 1;
      *v50 = 2;
      v17 = 1;
      a1[4] = v14;
      v18 = v14;
    }
    *v18 = a4;
    *((_DWORD *)v14 - 1) = v17;
    if ( a5 )
      ++*(_DWORD *)(a5 + 8);
    v19 = (_QWORD *)a1[14];
    if ( !v19 )
    {
      v51 = (_QWORD *)sub_186B270(0x18u);
      v19 = v51 + 1;
      *v51 = 2;
      v22 = 1;
      a1[14] = v19;
      v23 = v19;
      goto LABEL_19;
    }
    v20 = *((_DWORD *)v19 - 1);
    if ( v20 != *((_DWORD *)v19 - 2) )
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v19[v21];
LABEL_19:
      *v23 = a5;
      *((_DWORD *)v19 - 1) = v22;
      return 1;
    }
    v46 = (3 * v20 + 1) >> 1;
    v47 = 8 * v46 + 8;
    if ( 8 * v20 + 8 < (unsigned int)v47 && v20 < v46 )
    {
      v48 = (unsigned int *)sub_186B300(v19 - 1, v47);
      v49 = v48[1];
      v19 = v48 + 2;
      *v48 = v46;
      a1[14] = v48 + 2;
      LODWORD(v48) = v49;
      v23 = &v19[v49];
      v22 = (_DWORD)v48 + 1;
      goto LABEL_19;
    }
LABEL_55:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v77, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v77);
    sub_233E40((__int64)v77);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v9 = a1 + 22;
  v10 = sub_15F0200(a1 + 22);
  if ( *(_WORD *)(a3 + 4) )
    return 0;
  v11 = *(_QWORD *)(a3 + 16);
  v12 = *(_DWORD **)(v11 + 24);
  if ( !v12 || v10 != *v12 || v12[1] )
    return 0;
  *(_QWORD *)v72 = *a1;
  v24 = sub_15F0A30(v9, *(_QWORD *)(a3 + 16));
  v64 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v25 = sub_15FB1F0(v9, v11);
  v26 = *a1;
  ptra = (void *)*a1;
  *(_QWORD *)v76 = a4;
  sub_15DC610(v26, v64, 1, (int)v76, v27, v28, v53, (int)a2, v60, v62, v64, v25, v67, v69, v72[0], ptra);
  v29 = sub_15E1B70(v26);
  v63 = v29;
  v30 = v29;
  if ( v29 )
  {
    v31 = *(_DWORD *)(v29 + 8);
    v32 = *(_DWORD *)(a3 + 24);
    *(_DWORD *)(v29 + 8) = v31 + 1;
    if ( !v32 )
    {
      result = 0;
      goto LABEL_36;
    }
  }
  else if ( !*(_DWORD *)(a3 + 24) )
  {
    result = 0;
    goto LABEL_38;
  }
  v33 = 0;
  v61 = *(_QWORD *)v55 + 32LL;
  v68 = v77;
  while ( 1 )
  {
    v34 = *(_QWORD *)(a3 + 8LL * (unsigned int)v33 + 32);
    if ( (unsigned __int8)sub_168D740(v61, v34) )
      break;
LABEL_25:
    if ( (unsigned int)++v33 >= *(_DWORD *)(a3 + 24) )
    {
      result = 0;
      goto LABEL_34;
    }
  }
  v37 = *a1;
  *(_QWORD *)v70 = *a1;
  v38 = *(_QWORD *)(*v66 + 8 * v33);
  v77[0] = a4;
  v39 = sub_15DC610(
          v37,
          v38,
          1,
          (int)v68,
          v35,
          v36,
          v54,
          v55[0],
          v61,
          v63,
          v65[0],
          (char)v66,
          (int)v68,
          v70[0],
          v73[0],
          ptr);
  v40 = v39;
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  result = sub_71EAF0(a1, *(_QWORD *)v55, v34, v39, v63);
  if ( !(_BYTE)result )
  {
    if ( v40 )
    {
      v41 = (*(_DWORD *)(v40 + 8))-- == 1;
      if ( v41 )
        sub_15D7BC0(*(_QWORD *)v71, v40);
    }
    goto LABEL_25;
  }
  if ( v40 )
  {
    v41 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v41 )
    {
      v59 = result;
      sub_15D7BC0(*(_QWORD *)v71, v40);
      result = v59;
    }
  }
LABEL_34:
  if ( v63 )
  {
    v30 = v63;
    v31 = *(_DWORD *)(v63 + 8) - 1;
LABEL_36:
    *(_DWORD *)(v30 + 8) = v31;
    if ( !v31 )
    {
      v58 = result;
      sub_15D7BC0(ptr, v30);
      result = v58;
    }
  }
LABEL_38:
  if ( *(_QWORD *)v65 )
  {
    v56 = *(_DWORD *)(*(_QWORD *)v65 + 8LL);
    *(_DWORD *)(*(_QWORD *)v65 + 8LL) = v56 - 1;
    if ( v56 == 1 )
    {
      v57 = result;
      sub_15D7BC0(*(_QWORD *)v73, *(_QWORD *)v65);
      return v57;
    }
  }
  return result;
}

