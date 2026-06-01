__int64 *__fastcall sub_408090(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD **v11; // r12
  _QWORD **v12; // rbp
  _DWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r15
  unsigned int i; // r14d
  int v21; // eax
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v27; // rax
  __int64 v28; // r12
  void *v29; // r14
  __int64 v30; // rax
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // r15
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rsi
  _DWORD *v38; // rax
  __int64 v39; // r9
  __int64 v40; // rcx
  void (**v41)(void); // rsi
  __int64 v42; // rax
  int v43; // edi
  void (**v44)(void); // rdx
  __int64 v45; // rdi
  void (**v46)(void); // r8
  void (**j)(void); // rax
  void (*v48)(void); // rdi
  __int64 v49; // rbx
  __int64 v50; // rbx
  void (**v52)(void); // rsi
  __int64 v53; // rax
  int v54; // edx
  void (**v55)(void); // rdi
  __int64 v56; // rdx
  void (**v57)(void); // r8
  void (**v58)(void); // rax
  void (*v59)(void); // rdx
  void (*v60)(void); // rax
  int v61; // [rsp+0h] [rbp-D8h]
  __int64 v62; // [rsp+8h] [rbp-D0h] BYREF
  int v63[2]; // [rsp+10h] [rbp-C8h]
  int v64[2]; // [rsp+18h] [rbp-C0h]
  int v65[2]; // [rsp+20h] [rbp-B8h]
  char v66[8]; // [rsp+28h] [rbp-B0h]
  __int64 v67; // [rsp+30h] [rbp-A8h]
  int v68[2]; // [rsp+38h] [rbp-A0h]
  void (***v69)(void); // [rsp+40h] [rbp-98h] BYREF
  void *v70; // [rsp+48h] [rbp-90h] BYREF
  int v71[2]; // [rsp+50h] [rbp-88h] BYREF
  char v72[8]; // [rsp+58h] [rbp-80h] BYREF
  int v73[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v74; // [rsp+68h] [rbp-70h]

  v8 = (_QWORD *)a2;
  v9 = *(_QWORD *)(a2 + 8);
  v67 = a3;
  v62 = v9;
  v10 = *(_QWORD *)(v9 + 856);
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v62);
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v11 = *(_QWORD ***)(a2 + 192);
  *(_QWORD *)v71 = v62;
  if ( !v11 )
    goto LABEL_63;
  v12 = &v11[*((unsigned int *)v11 - 1)];
  if ( v11 == v12 )
    goto LABEL_63;
  *(_QWORD *)v66 = 0;
  *(_QWORD *)v63 = v73;
  do
  {
    while ( 1 )
    {
      v13 = *v11;
      if ( a4 == *((_DWORD *)*v11 + 24) )
        break;
      if ( v12 == ++v11 )
        goto LABEL_11;
    }
    sub_407990(*v11, a2, a3, a4, a5, a6);
    v14 = *((_QWORD *)v13 + 2);
    *(_QWORD *)v73 = v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    a2 = *(_QWORD *)v63;
    *(_QWORD *)v72 = *(_QWORD *)v66;
    sub_407600((unsigned int **)v72, *(_QWORD **)v63);
    ++v11;
    *(_QWORD *)v66 = *(_QWORD *)v72;
  }
  while ( v12 != v11 );
LABEL_11:
  if ( *(_QWORD *)v66 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v66 - 4LL) )
    {
      *(_QWORD *)v72 = *(_QWORD *)v66;
      *(_QWORD *)v63 = v73;
      *(_QWORD *)v68 = v71;
      sub_41C800(v73, v71);
      v15 = *a1;
      v16 = v74;
      *a1 = *(_QWORD *)v73;
      sub_3FCDF0(v15, v16);
    }
    else
    {
      *(_QWORD *)v63 = v73;
      *(_QWORD *)v68 = v71;
    }
  }
  else
  {
LABEL_63:
    *(_QWORD *)v66 = 0;
    *(_QWORD *)v63 = v73;
    *(_QWORD *)v68 = v71;
  }
  sub_1694970(*(_QWORD *)v63, v8[1]);
  v17 = v8[6];
  if ( !v17 )
  {
    v25 = 0;
    v28 = 0;
LABEL_28:
    v18 = v8[1];
    goto LABEL_29;
  }
  *(_QWORD *)v64 = 0;
  v18 = v8[1];
  v19 = 0;
  for ( i = 0; i < *(_DWORD *)(v17 - 4); v19 = v25 )
  {
    *(_QWORD *)v65 = v18;
    v21 = sub_439010(*v8 + 8LL, *(_QWORD *)(v17 + 8LL * i), 1, 0);
    v24 = sub_15DC610(v65[0], v21, 0, 0, v22, v23, v61, v62, v63[0], v64[0], v65[0], v66[0], v67, v68[0], (int)v69, v70);
    v25 = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    if ( v19 )
    {
      if ( (*(_DWORD *)(v19 + 8))-- == 1 )
        sub_15D7BC0(v62, v19);
    }
    v27 = sub_15DB5C0(v8[1], i, *(_QWORD *)(*(_QWORD *)(v8[6] + 8LL * i) + 40LL));
    v28 = v27;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    sub_3FCDF0(*(__int64 *)v64, v62);
    sub_1692DB0(*(_QWORD *)v63, v25, v28, 0, 0);
    v17 = v8[6];
    ++i;
    if ( !v17 )
      goto LABEL_28;
    *(_QWORD *)v64 = v28;
    v18 = v8[1];
  }
  v28 = *(_QWORD *)v64;
  v25 = v19;
LABEL_29:
  v29 = (void *)sub_1434DE0(v18, 0);
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v29 + 24LL))(v29, *(_QWORD *)v63);
  v30 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v29 + 16LL))(v29);
  v34 = *a1;
  *(_QWORD *)v64 = v30;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  sub_1435270((_DWORD)v29, v34, (_DWORD)a1, v31, v32, v33, v61, v62, *(__int64 *)v63, *(__int64 *)v64, *(__int64 *)v65);
  sub_3FCDF0(v34, *(__int64 *)v64);
  v35 = sub_186B270(0xA0u);
  sub_1373200(v35, v8[1]);
  v36 = *a1;
  v37 = v8[3];
  v69 = (void (***)(void))v35;
  ++*(_DWORD *)(v35 + 16);
  sub_135F9B0(v35, v37, v36);
  v38 = *(_DWORD **)(v8[2] + 624LL);
  v70 = v38;
  if ( v38 )
    ++v38[2];
  sub_1336CD0(&v70, &v69);
  v40 = *(unsigned int *)(v67 + 12);
  if ( *(_DWORD *)(v67 + 32) )
  {
    v41 = v69[6];
    v42 = *((unsigned int *)v69 + 14);
    v43 = v42 - 1;
    v42 *= 16;
    v44 = (void (**)(void))((char *)v41 + v42);
    v45 = 16LL * ((unsigned int)v40 & v43);
    v46 = &v41[(unsigned __int64)v45 / 8];
    if ( v45 != v42 )
    {
      v39 = v67;
      for ( j = &v41[(unsigned __int64)v45 / 8]; v44 != j; j += 2 )
      {
        v48 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *((_DWORD *)v48 + 3) == (_DWORD)v40 && (void (*)(void))v67 == v48 )
            goto LABEL_45;
        }
        else if ( !v48 )
        {
          goto LABEL_41;
        }
      }
    }
    if ( v41 == v46 )
    {
LABEL_54:
      v48 = nullptr;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v48 = *v41;
          if ( (unsigned __int64)*v41 > 1 )
            break;
          if ( !v48 )
            goto LABEL_41;
          v41 += 2;
          if ( v46 == v41 )
            goto LABEL_54;
        }
        if ( *((_DWORD *)v48 + 3) == (_DWORD)v40 && (void (*)(void))v67 == v48 )
          break;
        v41 += 2;
        if ( v46 == v41 )
          goto LABEL_54;
      }
      j = v41;
LABEL_45:
      v48 = j[1];
    }
LABEL_41:
    v49 = sub_1348CA0(v48, v41, v44, v40, v46, v39);
    if ( v49 )
      goto LABEL_42;
    goto LABEL_43;
  }
  v52 = v69[3];
  v53 = *((unsigned int *)v69 + 8);
  v54 = v53 - 1;
  v53 *= 24;
  v55 = (void (**)(void))((char *)v52 + v53);
  v56 = 24LL * ((unsigned int)v40 & v54);
  v57 = &v52[(unsigned __int64)v56 / 8];
  if ( v56 == v53 )
  {
LABEL_67:
    while ( v57 != v52 )
    {
      v60 = *v52;
      if ( (unsigned __int64)*v52 > 1 )
      {
        if ( *((_DWORD *)v60 + 3) == (_DWORD)v40 && (void (*)(void))v67 == v60 )
        {
          v58 = v52;
          goto LABEL_65;
        }
      }
      else if ( !v60 )
      {
        v49 = 0;
        goto LABEL_43;
      }
      v52 += 3;
    }
LABEL_62:
    v49 = 0;
    goto LABEL_43;
  }
  v58 = &v52[(unsigned __int64)v56 / 8];
  while ( 1 )
  {
    v59 = *v58;
    if ( (unsigned __int64)*v58 > 1 )
      break;
    if ( !v59 )
      goto LABEL_62;
LABEL_59:
    v58 += 3;
    if ( v55 == v58 )
      goto LABEL_67;
  }
  if ( *((_DWORD *)v59 + 3) != (_DWORD)v40 || (void (*)(void))v67 != v59 )
    goto LABEL_59;
LABEL_65:
  v49 = (__int64)v58[2];
  if ( !v49 )
    goto LABEL_43;
LABEL_42:
  ++*(_DWORD *)(v49 + 8);
LABEL_43:
  sub_3FCDF0(*a1, a1[1]);
  *a1 = v49;
  sub_3FCFA0((void (***)(void))v70);
  sub_3FCDA0(v69);
  (**(void (__fastcall ***)(void *))v29)(v29);
  sub_186B220(v29);
  sub_1695230(*(_QWORD *)v63);
  *(_QWORD *)v72 = *(_QWORD *)v66;
  sub_2334C0(*(__int64 **)v68);
  v50 = v62;
  sub_3FCDF0(v25, v62);
  sub_3FCDF0(v28, v50);
  return a1;
}

