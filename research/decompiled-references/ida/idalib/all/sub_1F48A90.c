__int64 __fastcall sub_1F48A90(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r14
  int v17; // r14d
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rax
  char v25; // r14
  __int64 v26; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // r10
  unsigned __int64 *v29; // rdx
  __int64 (__fastcall *v30)(__int64); // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r13
  __int64 v35; // r9
  __int64 v36; // rdi
  __int64 v37; // rdx
  bool v38; // zf
  __int64 v39; // rsi
  unsigned __int64 v40; // rbx
  int v41; // ecx
  unsigned __int64 v42; // rbx
  int v43; // ecx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  __int64 *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // r9
  __int64 v51; // rcx
  int v52; // edx
  __int64 v53; // rax
  _QWORD *v54; // rbx
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v61; // r13
  _QWORD *v62; // rax
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rax
  _QWORD *v68; // r14
  __int64 v69; // rax
  unsigned __int64 **v70; // rax
  __int64 v71; // r14
  unsigned __int64 v72; // rax
  _QWORD *v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  _QWORD *v78; // rdi
  __int64 v79; // rsi
  bool v80; // [rsp+Fh] [rbp-49h]
  _QWORD *v81; // [rsp+10h] [rbp-48h]
  unsigned __int64 v82; // [rsp+10h] [rbp-48h]
  unsigned __int64 v83; // [rsp+10h] [rbp-48h]
  int v84; // [rsp+18h] [rbp-40h]
  __int64 v85; // [rsp+18h] [rbp-40h]
  __int64 v86; // [rsp+18h] [rbp-40h]

  v6 = (unsigned __int64 *)(a3 + 64);
  if ( !a3 )
    v6 = nullptr;
  v7 = sub_1EE13A0(
         *(_QWORD *)(a2[2] + 8LL),
         *(_QWORD *)(a2[2] + 16LL),
         (__int64 *)(a2[2] + 32LL),
         (_DWORD *)(a2[2] + 24LL));
  v11 = a2[5];
  v12 = v7;
  if ( v7 )
  {
    v13 = a2[2];
    v14 = *(unsigned int *)(v13 + 24);
    v15 = *(_QWORD *)(v13 + 32);
    v16 = *(_QWORD *)(v15 + 8 * v14);
    v8 = (unsigned int)(v14 + 1);
    *(_DWORD *)(v13 + 24) = v8;
    if ( (_DWORD)v16 )
    {
      v80 = (_DWORD)v16 == 1;
      v84 = v16 - 1;
      if ( (_DWORD)v16 == 1 )
      {
        v23 = 0;
      }
      else
      {
        v17 = 0;
        do
        {
          ++v17;
          v81 = *(_QWORD **)(v13 + 8);
          v18 = sub_1EE13A0((__int64)v81, *(_QWORD *)(v13 + 16), (__int64 *)(v13 + 32), (_DWORD *)(v13 + 24));
          v23 = sub_1EDB980(v81, v18, v19, v20, v21, v22);
          v13 = a2[2];
        }
        while ( v17 != v84 );
        v8 = *(unsigned int *)(v13 + 24);
        v15 = *(_QWORD *)(v13 + 32);
      }
      v9 = (unsigned int)(v8 + 1);
      v11 = v12;
      *(_DWORD *)(v13 + 24) = v9;
      v24 = *(_QWORD *)(v15 + 8 * v8);
      if ( v24 )
      {
        v25 = 1;
        v12 = a2[4] - v24;
      }
      else
      {
        v12 = 0;
        v25 = 1;
      }
    }
    else
    {
      v71 = *(_QWORD *)(v13 + 8);
      v80 = v12 == v11;
      v72 = sub_1EE13A0(v71, *(_QWORD *)(v13 + 16), (__int64 *)(v13 + 32), (_DWORD *)(v13 + 24));
      v73 = (_QWORD *)v71;
      v25 = 0;
      sub_1EDB980(v73, v72, v74, v75, v76, v77);
      v11 = v12;
      v23 = 0;
      v12 = 0;
    }
  }
  else
  {
    v80 = 1;
    v25 = 1;
    v23 = 0;
  }
  v85 = v23;
  v82 = v11;
  v26 = sub_1EDB980((_QWORD *)*a2, v11, v8, v9, v10, v11);
  v27 = v82;
  v28 = v85;
  v29 = (unsigned __int64 *)(v26 + 64);
  if ( !v26 )
    v29 = nullptr;
  if ( v6 != v29 )
  {
    *v6 = v26 & 0xFFFFFFFFFFFFFFFCLL;
    v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL);
    if ( v30 == sub_B708D0 )
    {
      v31 = *(_QWORD *)(v26 + 72);
    }
    else
    {
      v31 = v30(v26);
      v28 = v85;
      v27 = v82;
    }
    v6[1] = v31;
    goto LABEL_18;
  }
  if ( v6 )
LABEL_18:
    v6 -= 8;
  if ( v25 )
  {
    v68 = (_QWORD *)*a2;
    v69 = *(unsigned int *)(*a2 + 11032LL);
    if ( v69 + 1 > (unsigned __int64)*(unsigned int *)(*a2 + 11036LL) )
    {
      v86 = v28;
      v83 = v27;
      sub_2237220(v68 + 1378, v68 + 1380, v69 + 1, 16);
      v28 = v86;
      v27 = v83;
      v69 = *((unsigned int *)v68 + 2758);
    }
    v70 = (unsigned __int64 **)(v68[1378] + 16 * v69);
    *v70 = v6;
    v70[1] = (unsigned __int64 *)v12;
    ++*((_DWORD *)v68 + 2758);
  }
  *(_QWORD *)(a1 + 8) = v27;
  *(_QWORD *)a1 = v28;
  *(_BYTE *)(a1 + 16) = v80;
  sub_1F458C0((__int64)a2, a3);
  v32 = a2[2];
  v33 = *(unsigned int *)(v32 + 24);
  v34 = *(_QWORD *)(v32 + 16);
  v35 = *(_QWORD *)(v32 + 32);
  v36 = *(_QWORD *)(v32 + 8);
  v37 = (unsigned int)(v33 + 1);
  v38 = *(_QWORD *)(v34 + 856) == 0;
  v39 = v34;
  *(_DWORD *)(v32 + 24) = v37;
  v40 = *(_QWORD *)(v35 + 8 * v33);
  if ( !v38 )
  {
    sub_1EDF870(v36, v34);
    v32 = a2[2];
    v37 = *(unsigned int *)(v32 + 24);
    v35 = *(_QWORD *)(v32 + 32);
    v36 = *(_QWORD *)(v32 + 8);
    v39 = *(_QWORD *)(v32 + 16);
  }
  v41 = __ROR4__(v40, 1);
  v42 = HIDWORD(v40);
  if ( v42 )
    v34 = *(_QWORD *)(*(_QWORD *)(v34 + 3320) + 8LL * (unsigned int)(v42 - 1));
  if ( v41 )
    v41 = v41 + *(_DWORD *)(v34 + 1648) - 2;
  *(_DWORD *)(a3 + 56) = v41;
  v43 = v37 + 1;
  v44 = *(_QWORD *)(v35 + 8 * v37);
  *(_DWORD *)(v32 + 24) = v43;
  v45 = sub_1EFA430(v36, v39, v44);
  v46 = a2[2];
  a2[7] = v45;
  v47 = sub_1F19370(v46);
  v48 = a2[2];
  v49 = *(unsigned int *)(v48 + 24);
  v50 = *(_QWORD *)(v48 + 32);
  v51 = (unsigned int)(v49 + 1);
  v38 = *(_QWORD *)(v50 + 8 * v49) == 0;
  v52 = *(_DWORD *)(v48 + 24);
  *(_DWORD *)(v48 + 24) = v51;
  if ( v38 )
  {
    *(_QWORD *)(a3 + 80) = (unsigned __int64)v47 & 0xFFFFFFFFFFFFFFFBLL | *(_QWORD *)(a3 + 80) & 3LL;
  }
  else
  {
    v61 = 0;
    if ( (unsigned int)v51 < *(_DWORD *)(v48 + 40) )
    {
      v78 = *(_QWORD **)(v48 + 8);
      v79 = *(_QWORD *)(v48 + 16);
      *(_DWORD *)(v48 + 24) = v52 + 2;
      v61 = sub_1F15160(v78, v79, *(_QWORD *)(v50 + 8 * v51));
    }
    v62 = (_QWORD *)sub_B8C330(a3);
    v65 = v62[294];
    v62[304] += 16LL;
    v66 = (v65 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v62[295] >= v66 + 16 && v65 )
    {
      v62[294] = v66 + 16;
      v67 = (v65 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v67 = sub_986170((__int64)(v62 + 294), 16, 16, 3, v63, v64);
      v66 = v67 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)v67 = v47;
    *(_QWORD *)(v67 + 8) = v61;
    *(_QWORD *)(a3 + 80) = v66 | *(_QWORD *)(a3 + 80) & 3LL | 4;
  }
  v53 = a2[2];
  v54 = *(_QWORD **)(v53 + 8);
  v55 = sub_1EE13A0((__int64)v54, *(_QWORD *)(v53 + 16), (__int64 *)(v53 + 32), (_DWORD *)(v53 + 24));
  sub_1EDB980(v54, v55, v56, v57, v58, v59);
  return a1;
}
