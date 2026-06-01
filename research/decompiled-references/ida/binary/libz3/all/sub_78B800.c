int *__fastcall sub_78B800(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  unsigned __int8 v7; // r15
  _DWORD *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int *result; // rax
  __int64 v18; // rax
  int v19; // esi
  char *v20; // rcx
  unsigned int v21; // edx
  char *v22; // r11
  __int64 v23; // rdx
  char *v24; // r13
  char *i; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  char *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // edx
  char *v31; // rdi
  __int64 v32; // rdx
  char *v33; // r11
  char *j; // rax
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 (__fastcall *v37)(__int64, unsigned __int8); // rax
  unsigned int v38; // eax
  unsigned int v39; // r13d
  __int64 v40; // rax
  unsigned int v41; // r13d
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  int v55; // ebx
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // ebp
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // r9
  _QWORD *v69; // rax
  _QWORD *v70; // rdi
  __int64 v71; // rax
  unsigned int **v72; // rax
  unsigned int *v73; // rax
  __int64 v74; // rdx
  unsigned int *v75; // rcx
  unsigned int v76; // eax
  unsigned int v77; // r11d
  unsigned int v78; // edx
  size_t v79; // rsi
  unsigned int *v80; // rax
  unsigned int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rsi
  _QWORD *v84; // rax
  char **exception; // rbp
  __int64 v86; // [rsp+8h] [rbp-90h]
  unsigned int **v87; // [rsp+8h] [rbp-90h]
  unsigned int *v88; // [rsp+8h] [rbp-90h]
  __int64 v89; // [rsp+10h] [rbp-88h]
  unsigned int v90; // [rsp+10h] [rbp-88h]
  __int64 v91; // [rsp+10h] [rbp-88h]
  unsigned int v92; // [rsp+18h] [rbp-80h]
  __int64 v93; // [rsp+18h] [rbp-80h]
  __int64 v94; // [rsp+20h] [rbp-78h]
  unsigned int v95; // [rsp+2Ch] [rbp-6Ch]
  int v96; // [rsp+3Ch] [rbp-5Ch] BYREF
  unsigned __int64 v97; // [rsp+40h] [rbp-58h] BYREF
  int v98; // [rsp+48h] [rbp-50h]

  v6 = a2;
  v7 = a4;
  v9 = *(_DWORD **)(a1 + 88);
  if ( v9 )
  {
    v10 = *(v9 - 1);
    v11 = v9[v10 - 3];
    a4 = (unsigned int)(v10 - 3);
    v12 = v9[v10 - 2];
    v13 = v9[v10 - 1];
    *(v9 - 1) = a4;
  }
  else
  {
    v11 = MEMORY[0x3FFFFFFF4];
    v12 = MEMORY[0x3FFFFFFF8];
    v13 = MEMORY[0x3FFFFFFFC];
  }
  if ( a3 )
  {
    LODWORD(v97) = v11 ^ 1;
    if ( v7 )
    {
      v13 ^= 1u;
      HIDWORD(v97) = v12 ^ 1;
    }
    else
    {
      HIDWORD(v97) = v12;
    }
    sub_7872D0(a1, 2u, (__int64)&v97, a4, a2, a6);
    v97 = __PAIR64__(v13, v11);
    return (int *)sub_7872D0(a1, 2u, (__int64)&v97, v14, v15, v16);
  }
  v18 = *(unsigned int *)(a1 + 104);
  v19 = *(_DWORD *)(a2 + 12);
  v20 = *(char **)(a1 + 96);
  v21 = v18 - 1;
  v18 *= 16;
  v22 = &v20[v18];
  v23 = 16LL * (v19 & v21);
  v24 = &v20[v23];
  if ( v23 != v18 )
  {
    for ( i = &v20[v23]; v22 != i; i += 16 )
    {
      v26 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v26 + 12) == v19 && v6 == v26 )
          goto LABEL_34;
      }
      else if ( !v26 )
      {
        goto LABEL_15;
      }
    }
  }
  if ( v20 == v24 )
    goto LABEL_15;
  v57 = *(_QWORD *)v20;
  if ( *(_QWORD *)v20 <= 1u )
    goto LABEL_43;
LABEL_39:
  if ( *(_DWORD *)(v57 + 12) != v19 || v6 != v57 )
  {
    do
    {
      v20 += 16;
      if ( v24 == v20 )
        break;
      v57 = *(_QWORD *)v20;
      if ( *(_QWORD *)v20 > 1u )
        goto LABEL_39;
LABEL_43:
      ;
    }
    while ( v57 );
LABEL_15:
    v27 = *(_QWORD *)(a1 + 216);
    if ( v27 )
    {
      v28 = *(char **)v27;
      v29 = *(unsigned int *)(v27 + 8);
      v30 = v29 - 1;
      v29 *= 16;
      v31 = &v28[v29];
      v32 = 16LL * (v19 & v30);
      v33 = &v28[v32];
      if ( v32 != v29 )
      {
        for ( j = &v28[v32]; v31 != j; j += 16 )
        {
          v35 = *(_QWORD *)j;
          if ( *(_QWORD *)j > 1u )
          {
            if ( *(_DWORD *)(v35 + 12) == v19 && v6 == v35 )
            {
LABEL_50:
              v39 = *((_DWORD *)j + 2);
              goto LABEL_26;
            }
          }
          else if ( !v35 )
          {
            goto LABEL_23;
          }
        }
      }
      for ( ; v33 != v28; v28 += 16 )
      {
        v62 = *(_QWORD *)v28;
        if ( *(_QWORD *)v28 > 1u )
        {
          if ( *(_DWORD *)(v62 + 12) == v19 && v6 == v62 )
          {
            j = v28;
            goto LABEL_50;
          }
        }
        else if ( !v62 )
        {
          break;
        }
      }
    }
LABEL_23:
    v36 = *(_QWORD *)(a1 + 192);
    v86 = v6;
    v37 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v36 + 24LL);
    if ( v37 == sub_788600 )
      v38 = sub_11CA540(v36, 0, 1);
    else
      v38 = v37(v36, 0);
    v6 = v86;
    v39 = v38;
    if ( *(_BYTE *)(a1 + 273) )
    {
      v69 = sub_789F10(a1);
      v6 = v86;
      v70 = v69;
      v71 = v69[3];
      if ( v71 )
      {
        if ( *(_BYTE *)(v71 + 352) )
        {
          v89 = v86;
          sub_7A4170(v70);
          v72 = (unsigned int **)sub_789F10(a1);
          v6 = v86;
          v87 = v72;
          v73 = v72[297];
          if ( !v73 || (v74 = *(v73 - 1), (_DWORD)v74 == *(v73 - 2)) )
          {
            sub_2FD3F0(v87 + 297);
            v6 = v89;
            v73 = v87[297];
            v74 = *(v73 - 1);
          }
          v73[v74] = v39;
          ++*(v73 - 1);
          v75 = v87[291];
          if ( v75 )
          {
            v76 = *(v75 - 1);
            v95 = v76;
            if ( v39 >= v76 )
            {
              v77 = v39 + 1;
              if ( v76 < v39 + 1 )
                goto LABEL_70;
              *(v75 - 1) = v77;
            }
          }
          else if ( v39 != -1 )
          {
            v93 = v6;
            v84 = (_QWORD *)sub_186B270(0x18u);
            v77 = v39 + 1;
            v6 = v93;
            v95 = 0;
            *v84 = 2;
            v75 = (unsigned int *)(v84 + 1);
            v87[291] = (unsigned int *)(v84 + 1);
LABEL_70:
            while ( 1 )
            {
              v81 = *(v75 - 2);
              if ( v81 >= v77 )
                break;
              v78 = (3 * v81 + 1) >> 1;
              v79 = 8 * v78 + 8;
              if ( 8 * v81 + 8 >= (unsigned int)v79 || v81 >= v78 )
                goto LABEL_78;
              v94 = v6;
              v92 = v77;
              v90 = (3 * v81 + 1) >> 1;
              v80 = (unsigned int *)sub_186B300(v75 - 2, v79);
              v75 = v80 + 2;
              v77 = v92;
              v6 = v94;
              v87[291] = v80 + 2;
              *v80 = v90;
            }
            *(v75 - 1) = v77;
            v82 = 8LL * v77;
            v83 = 8LL * v95;
            if ( v83 != v82 )
            {
              v91 = v6;
              v88 = v75;
              memset(&v75[(unsigned __int64)v83 / 4], 0, v82 - v83);
              v6 = v91;
              v75 = v88;
            }
          }
          *(_QWORD *)&v75[2 * v39] = v6;
        }
      }
    }
LABEL_26:
    v40 = *(_QWORD *)a1;
    v41 = 2 * v39;
    v96 = v41;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(v40 + 64))(a1, v6, v41);
    v42 = sub_78AA80(a1, v41 ^ 1, v11 ^ 1, v12);
    v98 = v12;
    HIDWORD(v97) = v11 ^ 1;
    LODWORD(v97) = v41 ^ 1;
    sub_78AC30(a1, 3u, (__int64)&v97, v42, v43, v44);
    v45 = sub_78AA80(a1, v41 ^ 1, v11, v13);
    HIDWORD(v97) = v11;
    v98 = v13;
    LODWORD(v97) = v41 ^ 1;
    sub_78AC30(a1, 3u, (__int64)&v97, v45, v46, v47);
    v48 = sub_78AA80(a1, v41, v11 ^ 1, v12 ^ 1);
    LODWORD(v97) = v41;
    HIDWORD(v97) = v11 ^ 1;
    v98 = v12 ^ 1;
    sub_78AC30(a1, 3u, (__int64)&v97, v48, v49, v50);
    v51 = sub_78AA80(a1, v41, v11, v13 ^ 1);
    v97 = __PAIR64__(v11, v41);
    v98 = v13 ^ 1;
    sub_78AC30(a1, 3u, (__int64)&v97, v51, v52, v53);
    if ( *(_BYTE *)(a1 + 224) )
    {
      v63 = sub_78AA80(a1, v12 ^ 1, v13 ^ 1, v96);
      v98 = v41;
      LODWORD(v97) = v12 ^ 1;
      HIDWORD(v97) = v13 ^ 1;
      sub_78AC30(a1, 3u, (__int64)&v97, v63, v64, v65);
      v66 = sub_78AA80(a1, v12, v13, v41 ^ 1);
      v97 = __PAIR64__(v13, v12);
      v98 = v41 ^ 1;
      sub_78AC30(a1, 3u, (__int64)&v97, v66, v67, v68);
    }
    if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 104LL))(*(_QWORD *)(a1 + 192)) )
    {
      v54 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 104LL))(*(_QWORD *)(a1 + 192));
      sub_118D130(v54, (unsigned int)v96, v11, v12, v13);
    }
    if ( v7 )
      v96 = v41 ^ 1;
    return (int *)sub_787180((_QWORD *)(a1 + 88), (unsigned int *)&v96);
  }
  i = v20;
LABEL_34:
  v55 = *((_DWORD *)i + 2) ^ v7;
  v56 = (unsigned int)*(v9 - 1);
  if ( (_DWORD)v56 == *(v9 - 2) )
  {
    v58 = (unsigned int)(3 * v56 + 1) >> 1;
    v59 = 4 * v58 + 8;
    if ( 4 * (int)v56 + 8 >= (unsigned int)v59 || (unsigned int)v56 >= v58 )
    {
LABEL_78:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v97, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v97);
      sub_233E40((__int64)&v97);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v60 = (unsigned int *)sub_186B300(v9 - 2, v59);
    v9 = v60 + 2;
    *v60 = v58;
    v61 = v60[1];
    *(_QWORD *)(a1 + 88) = v9;
    result = &v9[v61];
  }
  else
  {
    result = &v9[v56];
  }
  *result = v55;
  ++*(v9 - 1);
  return result;
}

