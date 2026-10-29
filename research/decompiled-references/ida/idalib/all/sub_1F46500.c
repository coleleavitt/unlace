void __fastcall sub_1F46500(__int64 *a1, __int64 a2)
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
  int v14; // r15d
  _QWORD *v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // r14
  __int64 v22; // rax
  char v23; // r15
  __int64 v24; // rax
  unsigned __int64 *v25; // rdx
  __int64 (__fastcall *v26)(__int64); // rdx
  __int64 v27; // rax
  unsigned __int64 *v28; // r9
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r15
  __int64 v35; // rdi
  bool v36; // zf
  unsigned __int64 v37; // r13
  int v38; // eax
  unsigned __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r15
  __int64 v43; // rdi
  __int64 v44; // rcx
  unsigned __int64 v45; // r13
  int v46; // eax
  unsigned __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  _QWORD *v51; // r13
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r13
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 v62; // rax
  unsigned __int64 **v63; // rax
  __int64 v64; // r14
  unsigned __int64 v65; // rax
  _QWORD *v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned __int64 v73; // [rsp+8h] [rbp-80h]
  int v74; // [rsp+8h] [rbp-80h]
  bool v75; // [rsp+17h] [rbp-71h]
  unsigned __int64 *v76; // [rsp+18h] [rbp-70h]
  _BYTE v77[16]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v78; // [rsp+30h] [rbp-58h]

  v3 = (unsigned __int64 *)(a2 + 48);
  if ( !a2 )
    v3 = nullptr;
  v9 = sub_1EE13A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16), (__int64 *)(a1[2] + 32), (_DWORD *)(a1[2] + 24));
  v73 = a1[5];
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
      v75 = (_DWORD)v13 == 1;
      v74 = v13 - 1;
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
        while ( v14 != v74 );
        v5 = *(unsigned int *)(v10 + 24);
        v12 = *(_QWORD *)(v10 + 32);
      }
      v6 = (unsigned int)(v5 + 1);
      v73 = v9;
      *(_DWORD *)(v10 + 24) = v6;
      v22 = *(_QWORD *)(v12 + 8 * v5);
      if ( v22 )
      {
        v23 = 1;
        v9 = a1[4] - v22;
      }
      else
      {
        v9 = 0;
        v23 = 1;
      }
    }
    else
    {
      v64 = *(_QWORD *)(v10 + 8);
      v75 = v9 == v73;
      v23 = 0;
      v65 = sub_1EE13A0(v64, *(_QWORD *)(v10 + 16), (__int64 *)(v10 + 32), (_DWORD *)(v10 + 24));
      v66 = (_QWORD *)v64;
      v21 = nullptr;
      sub_1EDB980(v66, v65, v67, v68, v69, v70);
      v73 = v9;
      v9 = 0;
    }
  }
  else
  {
    v75 = 1;
    v23 = 1;
    v21 = nullptr;
  }
  v24 = sub_1EDB980((_QWORD *)*a1, v73, v5, v6, v7, v8);
  v25 = (unsigned __int64 *)(v24 + 48);
  if ( !v24 )
    v25 = nullptr;
  if ( v3 != v25 )
  {
    *v3 = v24 & 0xFFFFFFFFFFFFFFFCLL;
    v26 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL);
    if ( v26 == sub_B94C00 )
      v27 = *(_QWORD *)(v24 + 56);
    else
      v27 = v26(v24);
    v3[1] = v27;
    goto LABEL_18;
  }
  if ( v3 )
  {
LABEL_18:
    v28 = v3 - 6;
    goto LABEL_19;
  }
  v28 = nullptr;
LABEL_19:
  if ( v23 )
  {
    v61 = *a1;
    v62 = *(unsigned int *)(*a1 + 11032);
    if ( v62 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 11036) )
    {
      v76 = v28;
      sub_2237220(v61 + 11024, v61 + 11040, v62 + 1, 16);
      v62 = *(unsigned int *)(v61 + 11032);
      v28 = v76;
    }
    v63 = (unsigned __int64 **)(*(_QWORD *)(v61 + 11024) + 16 * v62);
    *v63 = v28;
    v63[1] = (unsigned __int64 *)v9;
    ++*(_DWORD *)(v61 + 11032);
  }
  v29 = a2;
  sub_1F458C0((__int64)a1, a2);
  v32 = a1[2];
  v33 = *(unsigned int *)(v32 + 24);
  v34 = *(_QWORD *)(v32 + 16);
  v35 = *(_QWORD *)(v32 + 8);
  v36 = *(_QWORD *)(v34 + 856) == 0;
  *(_DWORD *)(v32 + 24) = v33 + 1;
  v37 = *(_QWORD *)(*(_QWORD *)(v32 + 32) + 8 * v33);
  if ( !v36 )
  {
    v29 = v34;
    sub_1EDF870(v35, v34);
  }
  v38 = __ROR4__(v37, 1);
  v39 = HIDWORD(v37);
  if ( v39 )
    v34 = *(_QWORD *)(*(_QWORD *)(v34 + 3320) + 8LL * (unsigned int)(v39 - 1));
  if ( v38 )
    v38 = v38 + *(_DWORD *)(v34 + 1648) - 2;
  *(_DWORD *)(a2 + 64) = v38;
  v40 = a1[2];
  v41 = *(unsigned int *)(v40 + 24);
  v42 = *(_QWORD *)(v40 + 16);
  v43 = *(_QWORD *)(v40 + 8);
  v44 = (unsigned int)(v41 + 1);
  v36 = *(_QWORD *)(v42 + 856) == 0;
  *(_DWORD *)(v40 + 24) = v44;
  v45 = *(_QWORD *)(*(_QWORD *)(v40 + 32) + 8 * v41);
  if ( !v36 )
  {
    v29 = v42;
    sub_1EDF870(v43, v42);
  }
  v46 = __ROR4__(v45, 1);
  v47 = HIDWORD(v45);
  if ( v47 )
  {
    v41 = *(_QWORD *)(v42 + 3320);
    v44 = (unsigned int)(v47 - 1);
    v42 = *(_QWORD *)(v41 + 8 * v44);
  }
  if ( v46 )
  {
    v41 = *(unsigned int *)(v42 + 1648);
    v46 = v46 + v41 - 2;
  }
  *(_DWORD *)(a2 + 68) = v46;
  v48 = sub_1F194E0(a1[2], v29, v41, v44, v30, v31);
  *(_QWORD *)(a2 + 80) = v49;
  *(_QWORD *)(a2 + 72) = v48;
  v50 = a1[2];
  v51 = *(_QWORD **)(v50 + 8);
  v52 = sub_1EE13A0((__int64)v51, *(_QWORD *)(v50 + 16), (__int64 *)(v50 + 32), (_DWORD *)(v50 + 24));
  *(_QWORD *)(a2 + 88) = sub_1EDB980(v51, v52, v53, v54, v55, v56);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL) + 21LL) & 2) != 0
    && ((*(_BYTE *)v3 | (unsigned __int8)((__int64)*v3 >> 1)) & 1) != 0 )
  {
    v59 = (__int64)(v3 - 6);
    if ( v21 )
    {
      v60 = 0;
      if ( v3 != (unsigned __int64 *)&dword_30 )
        v59 = (__int64)v3;
      if ( v75 )
        v60 = v73;
      sub_1F3DD90(a1 + 1, v59, v21, v60, v57, v58);
    }
    else
    {
      sub_1F43500((__int64)v77, (__int64)a1, (__int64)(v3 - 6));
      if ( v78 && (*((_BYTE *)v78 + 28) & 0x7F) == 0x4D )
      {
        if ( v3 != (unsigned __int64 *)&dword_30 )
          v59 = (__int64)v3;
        if ( v75 )
          v21 = (_QWORD *)v73;
        sub_1F3DD90(a1 + 1, v59, v78, (__int64)v21, v71, v72);
      }
      sub_1F42E40((__int64)v77);
    }
  }
}
