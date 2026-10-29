__int64 __fastcall sub_D51DB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, int a6)
{
  __int16 v9; // ax
  __int64 v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rdx
  _DWORD *v14; // rdx
  int v15; // ecx
  _DWORD *v16; // rax
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 result; // rax
  _DWORD *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // [rsp+0h] [rbp-118h]
  __int64 v32; // [rsp+0h] [rbp-118h]
  __int64 v33; // [rsp+8h] [rbp-110h]
  __int64 v34; // [rsp+8h] [rbp-110h]
  __int64 v35; // [rsp+10h] [rbp-108h]
  __int64 v36; // [rsp+10h] [rbp-108h]
  __int64 v37; // [rsp+18h] [rbp-100h]
  __int64 v38; // [rsp+18h] [rbp-100h]
  __int64 v39; // [rsp+20h] [rbp-F8h]
  __int64 v40; // [rsp+20h] [rbp-F8h]
  int v41; // [rsp+28h] [rbp-F0h]
  __int64 v42; // [rsp+28h] [rbp-F0h]
  __int64 v43; // [rsp+30h] [rbp-E8h]
  __int64 v44; // [rsp+38h] [rbp-E0h]
  __int64 v45; // [rsp+38h] [rbp-E0h]
  __int64 v46; // [rsp+40h] [rbp-D8h]
  __int64 v47; // [rsp+40h] [rbp-D8h]
  __int64 v48; // [rsp+48h] [rbp-D0h]
  __int64 v49; // [rsp+48h] [rbp-D0h]
  __int64 v50; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-C0h]
  __int64 v52; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+68h] [rbp-B0h]
  __int64 v54; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+78h] [rbp-A0h]
  __int64 v56; // [rsp+80h] [rbp-98h] BYREF
  __int64 v57; // [rsp+88h] [rbp-90h]
  __int64 v58; // [rsp+90h] [rbp-88h] BYREF
  __int64 v59; // [rsp+98h] [rbp-80h]
  __int64 v60; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-70h]
  __int64 v62; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-60h]
  __int64 v64; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v65; // [rsp+C8h] [rbp-50h]
  int v66[2]; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-40h]

  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(_WORD *)(a3 + 4);
      if ( v9 )
      {
LABEL_4:
        if ( *(_WORD *)(a4 + 4) )
          goto LABEL_5;
        goto LABEL_9;
      }
      v10 = *(_QWORD *)(a3 + 16);
      v11 = *(_DWORD **)(v10 + 24);
      if ( !v11 )
        break;
      if ( *v11 || v11[1] != 4 )
        goto LABEL_4;
      sub_D51DB0(
        a1,
        *(_QWORD *)(a3 + 32),
        *(_QWORD *)(a3 + 40),
        *(_QWORD *)(a3 + 48),
        (_DWORD)a5,
        a6,
        v31,
        v33,
        v35,
        v37,
        v39,
        v41,
        v43,
        v44,
        v46,
        v48,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65,
        *(__int64 *)v66);
      a3 = *a5;
    }
    if ( *(_WORD *)(a4 + 4) )
    {
      v9 = *(_WORD *)(a4 + 4);
      goto LABEL_13;
    }
LABEL_9:
    v13 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
    if ( !v13 || *v13 || v13[1] != 4 )
      break;
    sub_D51DB0(
      a1,
      *(_QWORD *)(a4 + 32),
      *(_QWORD *)(a4 + 40),
      *(_QWORD *)(a4 + 48),
      (_DWORD)a5,
      a6,
      v31,
      v33,
      v35,
      v37,
      v39,
      v41,
      v43,
      v44,
      v46,
      v48,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65,
      *(__int64 *)v66);
    a4 = *a5;
  }
  if ( v9 )
    goto LABEL_5;
  v10 = *(_QWORD *)(a3 + 16);
LABEL_13:
  v14 = *(_DWORD **)(v10 + 24);
  if ( !v14
    || (v15 = *(_DWORD *)(a1 + 448), v15 != *v14)
    || v14[1] != 37
    || v9
    || (v16 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL)) == nullptr
    || v15 != *v16
    || v16[1] != 37 )
  {
LABEL_5:
    v12 = *(_DWORD **)(sub_15D1F10(a3) + 24);
    if ( !v12
      || *(_DWORD *)(a1 + 448) != *v12
      || v12[1] != 1
      || (v25 = *(_DWORD **)(sub_15D1F10(a4) + 24)) == nullptr
      || *(_DWORD *)(a1 + 448) != *v25
      || v25[1] != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 128);
    }
    sub_D81E50(a1 + 16, a2, *(_QWORD *)(a3 + 32), *(_QWORD *)(a4 + 32), a5);
    v26 = *(unsigned int *)(a1 + 448);
    v27 = *(_QWORD *)(a1 + 432);
    *(_QWORD *)v66 = *a5;
    v28 = sub_15D2CD0(v27, v26, 1, 0, 0);
    v29 = sub_15DCAD0(v27, (int)v66, v28);
    v30 = v29;
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    result = sub_D50200(*a5, a5[1]);
    *a5 = v30;
    return result;
  }
  v17 = *(_QWORD *)(a1 + 8);
  v50 = 0;
  v51 = v17;
  v54 = 0;
  v55 = v17;
  v52 = 0;
  v53 = v17;
  sub_D51BC0(a1, a3, &v50, &v54, &v52);
  v56 = 0;
  v38 = v50;
  v57 = v17;
  v36 = v52;
  v60 = 0;
  v49 = v53;
  v61 = v17;
  v34 = v54;
  v58 = 0;
  v47 = v55;
  v59 = v17;
  v45 = v51;
  sub_D51BC0(a1, a4, &v56, &v60, &v58);
  v62 = 0;
  v42 = v59;
  v40 = v56;
  v18 = v58;
  v32 = v61;
  v19 = *(_QWORD *)(a1 + 8);
  v20 = v60;
  v21 = v57;
  v64 = 0;
  v63 = v19;
  v65 = v19;
  v67 = v19;
  *(_QWORD *)v66 = 0;
  sub_D81E50(a1 + 16, a2, v38, v56, &v62);
  sub_D81E50(a1 + 16, a2, v36, v18, &v64);
  sub_D81E50(a1 + 16, a2, v34, v20, v66);
  v22 = sub_15E1BF0(*(_QWORD *)(a1 + 432));
  v23 = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  sub_D50200(*a5, a5[1]);
  *a5 = v23;
  sub_D50200(*(__int64 *)v66, v67);
  sub_D50200(v64, v65);
  sub_D50200(v62, v63);
  sub_D50200(v20, v32);
  sub_D50200(v18, v42);
  sub_D50200(v40, v21);
  sub_D50200(v34, v47);
  sub_D50200(v36, v49);
  return sub_D50200(v38, v45);
}

