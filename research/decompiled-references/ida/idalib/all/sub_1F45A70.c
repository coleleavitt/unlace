void __fastcall sub_1F45A70(__int64 *a1, __int64 a2)
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
  __int64 v29; // rax
  _QWORD *v30; // r13
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // r13
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _QWORD *v46; // r13
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r13
  __int64 v57; // rax
  __int64 v58; // r15
  __int64 v59; // rax
  unsigned __int64 **v60; // rax
  __int64 v61; // r14
  unsigned __int64 v62; // rax
  _QWORD *v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned __int64 v70; // [rsp+8h] [rbp-80h]
  int v71; // [rsp+8h] [rbp-80h]
  bool v72; // [rsp+17h] [rbp-71h]
  unsigned __int64 *v73; // [rsp+18h] [rbp-70h]
  _BYTE v74[16]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v75; // [rsp+30h] [rbp-58h]

  v3 = (unsigned __int64 *)(a2 + 48);
  if ( !a2 )
    v3 = nullptr;
  v9 = sub_1EE13A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16), (__int64 *)(a1[2] + 32), (_DWORD *)(a1[2] + 24));
  v70 = a1[5];
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
      v72 = (_DWORD)v13 == 1;
      v71 = v13 - 1;
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
        while ( v71 != v14 );
        v5 = *(unsigned int *)(v10 + 24);
        v12 = *(_QWORD *)(v10 + 32);
      }
      v6 = (unsigned int)(v5 + 1);
      v70 = v9;
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
      v61 = *(_QWORD *)(v10 + 8);
      v72 = v9 == v70;
      v23 = 0;
      v62 = sub_1EE13A0(v61, *(_QWORD *)(v10 + 16), (__int64 *)(v10 + 32), (_DWORD *)(v10 + 24));
      v63 = (_QWORD *)v61;
      v21 = nullptr;
      sub_1EDB980(v63, v62, v64, v65, v66, v67);
      v70 = v9;
      v9 = 0;
    }
  }
  else
  {
    v72 = 1;
    v23 = 1;
    v21 = nullptr;
  }
  v24 = sub_1EDB980((_QWORD *)*a1, v70, v5, v6, v7, v8);
  v25 = (unsigned __int64 *)(v24 + 48);
  if ( !v24 )
    v25 = nullptr;
  if ( v3 != v25 )
  {
    *v3 = v24 & 0xFFFFFFFFFFFFFFFCLL;
    v26 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL);
    if ( v26 == sub_B94C20 )
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
    v58 = *a1;
    v59 = *(unsigned int *)(*a1 + 11032);
    if ( v59 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 11036) )
    {
      v73 = v28;
      sub_2237220(v58 + 11024, v58 + 11040, v59 + 1, 16);
      v59 = *(unsigned int *)(v58 + 11032);
      v28 = v73;
    }
    v60 = (unsigned __int64 **)(*(_QWORD *)(v58 + 11024) + 16 * v59);
    *v60 = v28;
    v60[1] = (unsigned __int64 *)v9;
    ++*(_DWORD *)(v58 + 11032);
  }
  sub_1F458C0((__int64)a1, a2);
  v29 = a1[2];
  v30 = *(_QWORD **)(v29 + 8);
  v31 = sub_1EE13A0((__int64)v30, *(_QWORD *)(v29 + 16), (__int64 *)(v29 + 32), (_DWORD *)(v29 + 24));
  *(_QWORD *)(a2 + 64) = sub_1EDB980(v30, v31, v32, v33, v34, v35);
  v36 = a1[2];
  v37 = *(unsigned int *)(v36 + 24);
  *(_DWORD *)(v36 + 24) = v37 + 1;
  *(_WORD *)(a2 + 30) = *(_QWORD *)(*(_QWORD *)(v36 + 32) + 8 * v37) & 0x3FFF | *(_WORD *)(a2 + 30) & 0xC000;
  v38 = a1[2];
  v39 = *(_QWORD **)(v38 + 8);
  v40 = sub_1EE13A0((__int64)v39, *(_QWORD *)(v38 + 16), (__int64 *)(v38 + 32), (_DWORD *)(v38 + 24));
  *(_QWORD *)(a2 + 72) = sub_1EDB980(v39, v40, v41, v42, v43, v44);
  v45 = a1[2];
  v46 = *(_QWORD **)(v45 + 8);
  v47 = sub_1EE13A0((__int64)v46, *(_QWORD *)(v45 + 16), (__int64 *)(v45 + 32), (_DWORD *)(v45 + 24));
  v52 = sub_1EDB980(v46, v47, v48, v49, v50, v51);
  if ( v52 )
    sub_A96960(*(_QWORD *)(*a1 + 144), a2, v52, v53, v54, v55);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL) + 21LL) & 2) != 0
    && ((*(_BYTE *)v3 | (unsigned __int8)((__int64)*v3 >> 1)) & 1) != 0 )
  {
    v56 = (__int64)(v3 - 6);
    if ( v21 )
    {
      v57 = 0;
      if ( v3 != (unsigned __int64 *)&dword_30 )
        v56 = (__int64)v3;
      if ( v72 )
        v57 = v70;
      sub_1F3DEB0(a1 + 1, v56, v21, v57, v54, v55);
    }
    else
    {
      sub_1F43500((__int64)v74, (__int64)a1, (__int64)(v3 - 6));
      if ( v75 && (*((_BYTE *)v75 + 28) & 0x7Fu) - 53 <= 1 )
      {
        if ( v3 != (unsigned __int64 *)&dword_30 )
          v56 = (__int64)v3;
        if ( v72 )
          v21 = (_QWORD *)v70;
        sub_1F3DEB0(a1 + 1, v56, v75, (__int64)v21, v68, v69);
      }
      sub_1F42E40((__int64)v74);
    }
  }
}
