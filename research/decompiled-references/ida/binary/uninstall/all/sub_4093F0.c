__int64 __fastcall sub_4093F0(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4, unsigned int a5, int a6)
{
  unsigned int v6; // r15d
  int v9; // ebp
  __int64 *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rsi
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rbx
  int v18; // r8d
  int v19; // r9d
  size_t v20; // rsi
  void *v21; // rdi
  __int64 v22; // rax
  _DWORD *v23; // r12
  int v24; // ebp
  int v25; // eax
  bool v26; // zf
  int v27; // eax
  int v28; // ecx
  int v29; // esi
  int v30; // edx
  unsigned int v31; // edx
  int v32; // eax
  int v33; // eax
  int v35; // eax
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rbp
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rsi
  int v43; // ebx
  unsigned int v44; // r12d
  __int64 v45; // rax
  int v46; // ecx
  _QWORD *v47; // rbp
  __int64 v48; // rsi
  __int64 v49; // rdx
  _DWORD *v50; // rax
  int v51; // r9d
  unsigned int v52; // eax
  int i; // ebx
  int *v54; // rdi
  int v55; // eax
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rdx
  int v59; // [rsp+1Ch] [rbp-8Ch]
  _DWORD *v60; // [rsp+20h] [rbp-88h]
  __int64 v61; // [rsp+28h] [rbp-80h]
  __int64 v62; // [rsp+30h] [rbp-78h]
  int v63; // [rsp+38h] [rbp-70h]
  unsigned int v64; // [rsp+3Ch] [rbp-6Ch]
  __int64 *v65; // [rsp+40h] [rbp-68h]
  __int64 v66; // [rsp+48h] [rbp-60h]
  int v70; // [rsp+64h] [rbp-44h] BYREF
  __int64 v71; // [rsp+68h] [rbp-40h] BYREF
  unsigned int n; // [rsp+70h] [rbp-38h] BYREF
  unsigned int n_4; // [rsp+74h] [rbp-34h] BYREF

  v6 = 0;
  v9 = 1;
  v10 = *(__int64 **)(a1 + 168);
  v11 = *(_QWORD *)(a1 + 200);
  n = a5;
  v66 = 0;
  v61 = v11;
  v65 = v10;
  v64 = 0;
  v62 = 0;
  v60 = nullptr;
  v12 = sub_409340(a1);
  v13 = 1;
  if ( v12 == 1 )
    return v13;
  LOBYTE(v13) = 0;
  if ( !a2 )
    return v13;
  while ( 1 )
  {
    if ( !a6 )
      goto LABEL_7;
    if ( (a6 & 0x80000) != 0 )
    {
      v62 = *v65;
      if ( v61 )
      {
        *v65 = v61;
        *(_QWORD *)(a1 + 200) = 0;
      }
      else
      {
        *v65 = *(_QWORD *)(a1 + 40);
      }
      goto LABEL_7;
    }
    if ( (a6 & 0x20000) != 0 )
    {
      v36 = *(__int64 **)(a1 + 192);
      if ( v66 == 0 && v36 != v65 )
        break;
    }
LABEL_7:
    v14 = *a3;
    v17 = sub_47D100(a1, *a3);
    if ( !v17 )
      goto LABEL_66;
LABEL_8:
    if ( v62 )
    {
      *v65 = v62;
    }
    else if ( *(_QWORD *)(a1 + 928) )
    {
      *(_QWORD *)(a1 + 928) = 0;
    }
    v63 = 0;
    if ( *(_QWORD *)(a1 + 440) || (*(_BYTE *)(v17 + 80) & 4) != 0 )
      v63 = 1;
    if ( v9 == 0 || v63 == 0 )
    {
LABEL_29:
      ++*(_DWORD *)(v17 + 16);
      ++*(_DWORD *)(a1 + 320);
      if ( !v6 && !*(_DWORD *)(a1 + 776) )
        v64 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD *))(v17 + 32))(
                *(_QWORD *)(v17 + 40),
                a1,
                a2,
                a3);
      if ( **(_DWORD **)(a1 + 1216) )
        v64 = sub_4BF430(a1, v64);
      if ( !v64 )
      {
        v28 = *(_DWORD *)(a1 + 768);
        if ( v28 )
        {
          if ( (v29 = *(_DWORD *)(a1 + 772) + 1, *(_DWORD *)(a1 + 772) = v29, (v28 & 1) != 0)
            && ((v57 = *(_DWORD *)(a1 + 792), v57 == 1) || !(v29 % v57))
            || (v28 & 2) != 0 && ((v30 = *(_DWORD *)(a1 + 824), v30 == 1) || !(v29 % v30)) )
          {
            v64 = sub_45ADB0(a1);
          }
        }
      }
      if ( v63 )
      {
        v31 = *(_DWORD *)(v17 + 80);
        if ( (v31 & 1) == 0 )
        {
          if ( ((v31 >> 2) & (v6 == 0)) != 0 )
            v6 = sub_499B90(a1, a4, n, v17, v64, 2, a2, (__int64)a3);
          if ( v6 == 0 && *(_QWORD *)(a1 + 440) != 0 )
            v6 = sub_499010(a1, a4, n, v17, v64, 2, a2, (__int64)a3);
        }
        if ( !v6 )
          v6 = v64;
        v64 = v6;
        if ( v60 )
        {
          v32 = *v60 - 1;
          v26 = *v60 == 1;
          *v60 = v32;
          if ( v32 < 0 || v26 )
            sub_47B120(v60);
        }
      }
      v33 = *(_DWORD *)(v17 + 16) - 1;
      v26 = *(_DWORD *)(v17 + 16) == 1;
      *(_DWORD *)(v17 + 16) = v33;
      if ( v33 < 0 || v26 )
        Tcl_Free(v17);
      if ( **(_BYTE **)a1 )
        sub_48B5D0(a1);
      goto LABEL_56;
    }
    v20 = n;
    v21 = (void *)a4;
    v59 = *(_DWORD *)(v17 + 20);
    n_4 = n;
    if ( a4 )
    {
      if ( a4 == -1 )
      {
        v56 = sub_449F60(a1, &n_4);
        v20 = n_4;
        v21 = (void *)v56;
      }
      v22 = sub_48DF10(v21, v20);
    }
    else
    {
      v22 = sub_46EEB0(a2, a3);
    }
    v23 = (_DWORD *)v22;
    v60 = (_DWORD *)v22;
    if ( *(_QWORD *)(v22 + 8) )
    {
      a4 = *(_QWORD *)(v22 + 8);
      n = *(_DWORD *)(v22 + 16);
    }
    else
    {
      a4 = sub_47ACD0(v22, &n);
    }
    ++*(_DWORD *)(v17 + 16);
    if ( v6 == 0 && *(_QWORD *)(a1 + 440) != 0 )
      v6 = sub_499010(a1, a4, n, v17, 0, 1, a2, (__int64)a3);
    if ( ((*(_DWORD *)(v17 + 80) >> 2) & (v6 == 0)) != 0 )
    {
      v6 = sub_499B90(a1, a4, n, v17, 0, 1, a2, (__int64)a3);
      v24 = *(_DWORD *)(v17 + 20);
      v35 = *(_DWORD *)(v17 + 16) - 1;
      v26 = *(_DWORD *)(v17 + 16) == 1;
      *(_DWORD *)(v17 + 16) = v35;
      if ( v35 >= 0 && !v26 )
        goto LABEL_24;
    }
    else
    {
      v24 = *(_DWORD *)(v17 + 20);
      v25 = *(_DWORD *)(v17 + 16) - 1;
      v26 = *(_DWORD *)(v17 + 16) == 1;
      *(_DWORD *)(v17 + 16) = v25;
      if ( v25 >= 0 && !v26 )
        goto LABEL_24;
    }
    Tcl_Free(v17);
LABEL_24:
    if ( v59 == v24 || v6 != 0 )
      goto LABEL_29;
    v9 = 0;
    if ( v23 )
    {
      v27 = *v23 - 1;
      v26 = *v23 == 1;
      *v23 = v27;
      if ( v27 < 0 || v26 )
        sub_47B120(v23);
      v60 = nullptr;
    }
  }
  v37 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = v36;
  v65 = v36;
  v14 = *a3;
  v66 = v37;
  v17 = sub_47D100(a1, *a3);
  if ( v17 )
    goto LABEL_8;
LABEL_66:
  if ( !*v65 || (v38 = *(_QWORD *)(*v65 + 408)) == 0 )
  {
    v39 = *(_QWORD *)(a1 + 40);
    if ( v39 )
    {
      v38 = *(_QWORD *)(v39 + 408);
    }
    else
    {
      sub_47D740((unsigned int)"TclEvalObjvInternal: NULL global namespace pointer", v14, v15, v16, v18, v19);
      v38 = MEMORY[0x198];
    }
    if ( !v38 )
    {
      v40 = sub_496740();
      *(_QWORD *)(v39 + 408) = v40;
      *(_DWORD *)v40 = 0;
      *(_QWORD *)(v40 + 8) = sub_40FB00(10);
      v41 = *(_QWORD *)(*(_QWORD *)(v39 + 408) + 8LL);
      *(_BYTE *)(v41 + 8) = 110;
      *(_QWORD *)v41 = 0x776F6E6B6E753A3ALL;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 408) + 8LL) + 9LL) = 0;
      v38 = *(_QWORD *)(v39 + 408);
      ++*(_DWORD *)v38;
      *(_DWORD *)(v38 + 16) = 9;
      *(_QWORD *)(v38 + 24) = 0;
    }
  }
  v42 = v38;
  v43 = 0;
  sub_46FD90(0, v42, &v70, &v71);
  v44 = v70 + a2;
  v45 = sub_4495F0(a1, 8 * (v70 + a2));
  v46 = v70;
  v47 = (_QWORD *)v45;
  if ( v70 > 0 )
  {
    v48 = v71;
    do
    {
      v49 = v43++;
      v50 = *(_DWORD **)(v48 + 8 * v49);
      ++*v50;
      v47[v49] = v50;
    }
    while ( v43 < v46 );
    v46 = v70;
  }
  memcpy(&v47[v46], a3, 8LL * a2);
  if ( sub_47D100(a1, *v47) )
  {
    ++*(_DWORD *)(a1 + 152);
    v52 = sub_4093F0(a1, v44, v47, a4, n, 0);
    --*(_DWORD *)(a1 + 152);
    v64 = v52;
  }
  else
  {
    v58 = *(_QWORD *)(*a3 + 8LL);
    if ( !v58 )
      LODWORD(v58) = sub_47B3B0(*a3);
    sub_48B710(a1, (unsigned int)"invalid command name \"", v58, (unsigned int)"\"", 0, v51);
    v64 = 1;
  }
  for ( i = 0; i < v70; ++i )
  {
    v54 = (int *)v47[i];
    v55 = *v54 - 1;
    v26 = *v54 == 1;
    *v54 = v55;
    if ( v55 < 0 || v26 )
      sub_47B120(v54);
  }
  sub_449510(a1, v47);
  if ( v62 )
    *v65 = v62;
LABEL_56:
  if ( v66 )
    *(_QWORD *)(a1 + 168) = v66;
  return v64;
}

