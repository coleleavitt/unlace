__int64 __fastcall sub_847B90(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  _QWORD *v10; // rbx
  _QWORD *i; // r13
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 result; // rax
  __int64 v17; // rbx
  int v18; // r9d
  __int64 v19; // rbp
  __int64 v20; // rsi
  void *v21; // rdi
  __int64 v22; // r8
  unsigned int v23; // r12d
  int v24; // ecx
  __int64 v25; // rbx
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  int v35; // [rsp+0h] [rbp-2B8h]
  _QWORD *v36; // [rsp+8h] [rbp-2B0h]
  __int64 v38; // [rsp+10h] [rbp-2A8h]
  unsigned __int8 v39; // [rsp+18h] [rbp-2A0h]
  __int64 *v40; // [rsp+18h] [rbp-2A0h]
  _QWORD *v41; // [rsp+20h] [rbp-298h]
  _QWORD *v42; // [rsp+28h] [rbp-290h]
  __int64 v43; // [rsp+30h] [rbp-288h] BYREF
  void *v44; // [rsp+38h] [rbp-280h]
  __int64 v45[2]; // [rsp+40h] [rbp-278h] BYREF
  _QWORD v46[19]; // [rsp+50h] [rbp-268h] BYREF
  int v47; // [rsp+E8h] [rbp-1D0h]
  __int64 v48; // [rsp+F0h] [rbp-1C8h]
  _QWORD v49[19]; // [rsp+F8h] [rbp-1C0h] BYREF
  int v50; // [rsp+190h] [rbp-128h]
  _QWORD v51[18]; // [rsp+198h] [rbp-120h] BYREF
  int v52; // [rsp+228h] [rbp-90h]
  __int64 v53; // [rsp+230h] [rbp-88h]
  __int64 v54; // [rsp+238h] [rbp-80h]
  __int64 v55; // [rsp+240h] [rbp-78h]
  __int64 v56; // [rsp+248h] [rbp-70h]
  __int64 v57; // [rsp+250h] [rbp-68h]
  __int64 v58; // [rsp+258h] [rbp-60h]
  __int64 v59; // [rsp+260h] [rbp-58h]
  _BYTE v60[80]; // [rsp+268h] [rbp-50h] BYREF

  v5 = (_QWORD *)a3[8];
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = a3[7];
          v9 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_8;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_8:
    v5 = (_QWORD *)a3[8];
    if ( v5 )
LABEL_9:
      *((_DWORD *)v5 - 1) = 0;
  }
  sub_13744E0(a1[22]);
  v39 = sub_13608A0(a2 + 128);
  sub_1360B80(a2 + 128, 1);
  v10 = (_QWORD *)a3[1];
  if ( v10 )
  {
    for ( i = &v10[*((unsigned int *)v10 - 1)]; i != v10; ++v10 )
    {
      while ( 1 )
      {
        v12 = *v10;
        v13 = a1[22];
        sub_1374250(v46, a2, *v10);
        sub_135F9B0(v13, *(_QWORD *)(v12 + 16), v46[0]);
        v14 = v46[0];
        if ( v46[0] )
        {
          v15 = v46[1];
          v9 = (*(_DWORD *)(v46[0] + 8LL))-- == 1;
          if ( v9 )
            break;
        }
        if ( i == ++v10 )
          goto LABEL_17;
      }
      sub_15D7BC0(v15, v14);
    }
  }
LABEL_17:
  sub_1360B80(a2 + 128, v39);
  sub_792010(*a1, a1 + 22);
  result = a3[9];
  if ( !result )
    return result;
  result = *(unsigned int *)(result - 4);
  if ( !(_DWORD)result )
    return result;
  v17 = a1[2];
  v36 = v46;
  sub_1584DD0(v46, v17, 0);
  v46[0] = &off_1C4CA60;
  v46[18] = v60;
  v41 = v49;
  v47 = 0;
  v48 = 0;
  sub_1584DD0(v49, v17, 0);
  v49[18] = 0;
  v50 = 0;
  v49[0] = &off_1C61DB8;
  v42 = v51;
  sub_1584DD0(v51, v17, 0);
  v19 = a3[9];
  v52 = 0;
  v53 = 0;
  v54 = v17;
  v51[0] = &off_1C61DE0;
  v55 = 0;
  v56 = v17;
  v57 = 0;
  v58 = v17;
  v59 = 0;
  v46[0] = &off_1C4CA80;
  v60[8] = 1;
  if ( !v19 || (v40 = &v43, v38 = v19 + 16LL * *(unsigned int *)(v19 - 4), v38 == v19) )
  {
    v46[0] = &off_1C4CA60;
    goto LABEL_39;
  }
  do
  {
    v22 = a3[1];
    v23 = *(_DWORD *)(v19 + 8);
    if ( v22 )
      v24 = *(_DWORD *)(v22 - 4);
    else
      v24 = 0;
    sub_157BE40(
      (int)v40,
      (int)v36,
      *(_QWORD *)v19,
      v24,
      v22,
      v18,
      v35,
      (__int64)v36,
      v38,
      (int)v40,
      (int)v41,
      (int)v42,
      v43,
      v44);
    v25 = v43;
    v26 = a1[2];
    if ( v43 )
      ++*(_DWORD *)(v43 + 8);
    sub_1374250(v45, a1[22], *(_QWORD *)(v25 + 8LL * v23 + 32));
    if ( (unsigned __int8)sub_15D26C0(a1[2], v45[0]) )
      sub_843BF0((__int64)(a1 + 4), v25, v23, v45[0], (__int64)(a3 + 7));
    v27 = v45[0];
    if ( v45[0] && (v28 = v45[1], v9 = *(_DWORD *)(v45[0] + 8) == 1, --*(_DWORD *)(v45[0] + 8), v9) )
    {
      sub_15D7BC0(v28, v27);
      v9 = (*(_DWORD *)(v25 + 8))-- == 1;
      if ( v9 )
LABEL_36:
        sub_15D7BC0(v26, v25);
    }
    else
    {
      v9 = (*(_DWORD *)(v25 + 8))-- == 1;
      if ( v9 )
        goto LABEL_36;
    }
    v20 = v43;
    if ( v43 )
    {
      v21 = v44;
      v9 = (*(_DWORD *)(v43 + 8))-- == 1;
      if ( v9 )
        sub_15D7BC0(v21, v20);
    }
    v19 += 16;
  }
  while ( v38 != v19 );
  v46[0] = &off_1C4CA60;
  if ( v59 )
    sub_186B220((void *)(v59 - 8));
LABEL_39:
  v29 = v57;
  if ( v57 )
  {
    v30 = v58;
    v9 = (*(_DWORD *)(v57 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v30, v29);
  }
  v31 = v55;
  if ( v55 )
  {
    v32 = v56;
    v9 = (*(_DWORD *)(v55 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v32, v31);
  }
  v33 = v53;
  if ( v53 )
  {
    v34 = v54;
    v9 = (*(_DWORD *)(v53 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v34, v33);
  }
  v51[0] = &qword_1C637E8;
  sub_15841B0(v42);
  v49[0] = &qword_1C637E8;
  sub_15841B0(v41);
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  return sub_15841B0(v36);
}

