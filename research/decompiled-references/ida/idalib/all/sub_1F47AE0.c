__int64 *__fastcall sub_1F47AE0(__int64 *a1, __int64 a2)
{
  unsigned __int64 *v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // r14d
  _QWORD *v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 *v24; // rdx
  __int64 (__fastcall *v25)(__int64); // rdx
  __int64 v26; // rax
  unsigned __int64 *v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdi
  bool v32; // zf
  unsigned __int64 v33; // r13
  __int64 v34; // rsi
  int v35; // eax
  unsigned __int64 v36; // r13
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 (__fastcall *v41)(__int64); // rax
  __int64 v42; // rax
  __int64 *result; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rax
  unsigned __int64 **v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 (__fastcall *v52)(__int64); // rax
  __int64 v53; // rbp
  __int64 (__fastcall *v54)(__int64); // rax
  __int64 v55; // rax
  __int64 v56; // rbp
  __int64 *v57; // rdx
  __int64 v58; // rdi
  __int64 *v59; // rcx
  __int64 *v60; // rcx
  __int64 *v61; // rdx
  _QWORD *v62; // r14
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  unsigned __int64 v71; // [rsp+0h] [rbp-88h]
  int v72; // [rsp+0h] [rbp-88h]
  char v73; // [rsp+8h] [rbp-80h]
  __int64 v74; // [rsp+8h] [rbp-80h]
  __int64 v75; // [rsp+8h] [rbp-80h]
  bool v76; // [rsp+17h] [rbp-71h]
  unsigned __int64 *v77; // [rsp+18h] [rbp-70h]
  _BYTE v78[16]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v79; // [rsp+30h] [rbp-58h]

  v3 = (unsigned __int64 *)(a2 + 88);
  if ( !a2 )
    v3 = nullptr;
  v9 = sub_1EE13A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16), (__int64 *)(a1[2] + 32), (_DWORD *)(a1[2] + 24));
  v71 = a1[5];
  if ( v9 )
  {
    v10 = a1[2];
    v11 = *(unsigned int *)(v10 + 24);
    v12 = *(_QWORD *)(v10 + 32);
    v5 = (unsigned int)(v11 + 1);
    v13 = *(_QWORD *)(v12 + 8 * v11);
    *(_DWORD *)(v10 + 24) = v5;
    if ( (_DWORD)v13 )
    {
      v76 = (_DWORD)v13 == 1;
      v72 = v13 - 1;
      if ( (_DWORD)v13 == 1 )
      {
        v21 = nullptr;
      }
      else
      {
        v14 = 0;
        do
        {
          v15 = *(_QWORD **)(v10 + 8);
          ++v14;
          v16 = sub_1EE13A0((__int64)v15, *(_QWORD *)(v10 + 16), (__int64 *)(v10 + 32), (_DWORD *)(v10 + 24));
          v21 = (_QWORD *)sub_1EDB980(v15, v16, v17, v18, v19, v20);
          v10 = a1[2];
        }
        while ( v72 != v14 );
        v5 = *(unsigned int *)(v10 + 24);
        v12 = *(_QWORD *)(v10 + 32);
      }
      v6 = (unsigned int)(v5 + 1);
      v71 = v9;
      *(_DWORD *)(v10 + 24) = v6;
      v22 = *(_QWORD *)(v12 + 8 * v5);
      if ( v22 )
      {
        v73 = 1;
        v9 = a1[4] - v22;
      }
      else
      {
        v9 = 0;
        v73 = 1;
      }
    }
    else
    {
      v62 = *(_QWORD **)(v10 + 8);
      v76 = v9 == v71;
      v21 = nullptr;
      v63 = sub_1EE13A0((__int64)v62, *(_QWORD *)(v10 + 16), (__int64 *)(v10 + 32), (_DWORD *)(v10 + 24));
      sub_1EDB980(v62, v63, v64, v65, v66, v67);
      v71 = v9;
      v9 = 0;
      v73 = 0;
    }
  }
  else
  {
    v73 = 1;
    v21 = nullptr;
    v76 = 1;
  }
  v23 = sub_1EDB980((_QWORD *)*a1, v71, v5, v6, v7, v8);
  v24 = (unsigned __int64 *)(v23 + 88);
  if ( !v23 )
    v24 = nullptr;
  if ( v3 == v24 )
  {
    if ( !v3 )
    {
      v27 = nullptr;
      goto LABEL_19;
    }
  }
  else
  {
    *v3 = v23 & 0xFFFFFFFFFFFFFFFCLL;
    v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL);
    if ( v25 == sub_A55E70 )
      v26 = *(_QWORD *)(v23 + 96);
    else
      v26 = v25(v23);
    v3[1] = v26;
  }
  v27 = v3 - 11;
LABEL_19:
  if ( v73 )
  {
    v46 = *a1;
    v47 = *(unsigned int *)(*a1 + 11032);
    if ( v47 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 11036) )
    {
      v77 = v27;
      v75 = *a1;
      sub_2237220(v46 + 11024, v46 + 11040, v47 + 1, 16);
      v46 = v75;
      v27 = v77;
      v47 = *(unsigned int *)(v75 + 11032);
    }
    v48 = (unsigned __int64 **)(*(_QWORD *)(v46 + 11024) + 16 * v47);
    *v48 = v27;
    v48[1] = (unsigned __int64 *)v9;
    ++*(_DWORD *)(v46 + 11032);
  }
  sub_1F458C0((__int64)a1, a2);
  v28 = a1[2];
  v29 = *(unsigned int *)(v28 + 24);
  v30 = *(_QWORD *)(v28 + 16);
  v31 = *(_QWORD *)(v28 + 8);
  v32 = *(_QWORD *)(v30 + 856) == 0;
  *(_DWORD *)(v28 + 24) = v29 + 1;
  v33 = *(_QWORD *)(*(_QWORD *)(v28 + 32) + 8 * v29);
  v34 = v30;
  if ( !v32 )
  {
    v74 = v30;
    sub_1EDF870(v31, v30);
    v28 = a1[2];
    v30 = v74;
    v31 = *(_QWORD *)(v28 + 8);
    v34 = *(_QWORD *)(v28 + 16);
  }
  v35 = __ROR4__(v33, 1);
  v36 = HIDWORD(v33);
  if ( v36 )
    v30 = *(_QWORD *)(*(_QWORD *)(v30 + 3320) + 8LL * (unsigned int)(v36 - 1));
  if ( v35 )
    v35 = v35 + *(_DWORD *)(v30 + 1648) - 2;
  *(_DWORD *)(a2 + 60) = v35;
  *(_QWORD *)(a2 + 80) = sub_1EEDED0(v31, v34, (_QWORD *)(v28 + 32), (_DWORD *)(v28 + 24));
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL) + 21LL) & 2) != 0
    && ((*(_BYTE *)v3 | (unsigned __int8)((__int64)*v3 >> 1)) & 1) != 0 )
  {
    v44 = (__int64)(v3 - 11);
    if ( v21 )
    {
      v45 = 0;
      if ( v3 != (unsigned __int64 *)&qword_58 )
        v44 = (__int64)v3;
      if ( v76 )
        v45 = v71;
      sub_1F3DB50(a1 + 1, v44, v21, v45, v37, v38);
    }
    else
    {
      sub_1F43500((__int64)v78, (__int64)a1, (__int64)(v3 - 11));
      if ( v79 && (*((_BYTE *)v79 + 28) & 0x7F) == 0x13 )
      {
        v70 = (__int64)(v3 - 11);
        if ( v3 != (unsigned __int64 *)&qword_58 )
          v70 = (__int64)v3;
        if ( v76 )
          v21 = (_QWORD *)v71;
        sub_1F3DB50(a1 + 1, v70, v79, (__int64)v21, v68, v69);
      }
      sub_1F42E40((__int64)v78);
    }
  }
  v39 = a1[2];
  v40 = *(unsigned int *)(v39 + 24);
  *(_DWORD *)(v39 + 24) = v40 + 1;
  if ( !*(_QWORD *)(*(_QWORD *)(v39 + 32) + 8 * v40) )
  {
    v41 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
    if ( v41 == sub_A55E70 )
      v42 = *(_QWORD *)(a2 + 96);
    else
      v42 = v41(a2);
    result = *(__int64 **)(v42 + 104);
    *(_QWORD *)(a2 + 104) = result;
    return result;
  }
  sub_BA9DD0(a2);
  sub_1F1F4F0(a1, *(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL);
  v52 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v52 == sub_A55E70 )
    v53 = *(_QWORD *)(a2 + 96);
  else
    v53 = v52(a2);
  if ( (*(_QWORD *)(v53 + 104) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    sub_1F3EF50(a1 + 1, v53, *(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL, v49, v50, v51);
    *(_QWORD *)(a2 + 104) = *(_QWORD *)(v53 + 104);
  }
  else
  {
    v54 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
    if ( v54 == sub_A55E70 )
      v55 = *(_QWORD *)(a2 + 96);
    else
      v55 = v54(a2);
    *(_QWORD *)(v55 + 104) = *(_QWORD *)(a2 + 104);
  }
  v56 = *a1;
  if ( !*(_BYTE *)(*a1 + 4028) )
    goto LABEL_67;
  v57 = *(__int64 **)(v56 + 4008);
  v58 = *(unsigned int *)(v56 + 4020);
  v59 = &v57[v58];
  if ( v57 != v59 )
  {
    result = *(__int64 **)(v56 + 4008);
    if ( a2 == *v57 )
      goto LABEL_56;
    do
    {
      if ( v59 == ++result )
        break;
    }
    while ( a2 != *result );
  }
  if ( (unsigned int)v58 < *(_DWORD *)(v56 + 4016) )
  {
    *(_DWORD *)(v56 + 4020) = v58 + 1;
    *v59 = a2;
    v57 = *(__int64 **)(v56 + 4008);
    result = &v57[v58];
  }
  else
  {
LABEL_67:
    result = (__int64 *)sub_2236760(v56 + 4008, a2);
    v57 = *(__int64 **)(v56 + 4008);
    if ( !*(_BYTE *)(v56 + 4028) )
    {
      v60 = &v57[*(unsigned int *)(v56 + 4016)];
      goto LABEL_57;
    }
  }
LABEL_56:
  v60 = &v57[*(unsigned int *)(v56 + 4020)];
LABEL_57:
  if ( v60 != result && (unsigned __int64)*result >= 0xFFFFFFFFFFFFFFFELL )
  {
    ++result;
    do
    {
      v61 = result;
      if ( v60 == result )
        break;
      ++result;
    }
    while ( (unsigned __int64)*v61 >= 0xFFFFFFFFFFFFFFFELL );
  }
  return result;
}
