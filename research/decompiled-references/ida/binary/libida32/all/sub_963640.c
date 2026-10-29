__int64 __fastcall sub_963640(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  double v6; // xmm0_8
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // r12
  __int64 v16; // r10
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  int v32; // r15d
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rax
  _QWORD *v40; // rdi
  __int64 v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rax
  _QWORD *v44; // rdi
  __int64 v45; // rax
  __int64 v47; // rdx
  __int64 v48; // [rsp+10h] [rbp-88h]
  __int64 v49; // [rsp+10h] [rbp-88h]
  char v50; // [rsp+1Fh] [rbp-79h]
  int v51; // [rsp+20h] [rbp-78h]
  __int64 v52; // [rsp+28h] [rbp-70h]
  int v53; // [rsp+28h] [rbp-70h]
  int v54; // [rsp+30h] [rbp-68h]
  __int64 v55; // [rsp+38h] [rbp-60h]
  _QWORD *v56; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v57[9]; // [rsp+50h] [rbp-48h] BYREF

  v3 = a2;
  v6 = sub_B52330(a2);
  v7 = 0;
  if ( v8 == 3 )
  {
    v9 = *(_QWORD *)(a2[6] & 0xFFFFFFFFFFFFFFF0LL);
    v10 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 25;
    if ( (unsigned int)v10 > 1 )
      v9 = sub_F3F310(v9, a2, v10, v4, v5);
    v11 = *(_QWORD *)(v9 + 24);
    v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v13 + 16) == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1B4 )
    {
      v50 = 1;
    }
    else
    {
      a2 = a1;
      v50 = 0;
      if ( !(unsigned __int8)sub_F3D240(v12, a1, v6) )
        return 0;
    }
    v14 = (__int64 *)v3[15];
    v15 = v14[2];
    v16 = *v14;
    v17 = v14[1];
    v18 = *(_QWORD *)(v15 + 48);
    v19 = *(_QWORD *)(v17 + 48);
    v52 = *(_QWORD *)(*v14 + 48);
    v51 = v19;
    v20 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v20 + 16) != 42 )
    {
      v49 = v16;
      v47 = *(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v47 + 16) != 42 )
        return 0;
      v20 = sub_F3F310(v20, a2, v47, v19, v5);
      v16 = v49;
      if ( !v20 )
        return 0;
    }
    v55 = v16;
    v48 = *(_QWORD *)(v20 + 32);
    v56 = a1;
    v21 = sub_963580(&v56, v15, 0, v19, v5);
    v22 = sub_BE66A0((_DWORD)v56, v18, 4, v21, 0, 0, 0);
    v23 = sub_BE6000((_DWORD)v56, v22, 5, v48, 1, 0, 0, 0, 0);
    v54 = sub_BE66A0((_DWORD)v56, v48, 4, v23, 0, 0, 0);
    v26 = sub_963580(&v56, v55, 0, v24, v25);
    v27 = sub_BE66A0((_DWORD)v56, v52, 4, v26, 0, 0, 0);
    if ( (*(_BYTE *)(v56[290] + 1LL) & 8) != 0 )
      v28 = v56[2330];
    else
      v28 = v56[2340];
    v53 = sub_BE61D0((_DWORD)v56, v27, v54, 14, v28, 0, 0, 0, 0);
    v31 = sub_963580(&v56, v17, 0, v29, v30);
    v32 = sub_BE66A0((_DWORD)v56, v51, 4, v31, 0, 0, 0);
    v35 = sub_963580(&v56, v15, 0, v33, v34);
    v36 = sub_BE66A0((_DWORD)v56, v18, 4, v35, 0, 0, 0);
    v37 = sub_BE6000((_DWORD)v56, v36, 5, v48, 1, 0, 0, 0, 0);
    v57[0] = sub_BE61D0((_DWORD)v56, v37, v32, 21, v51, 0, 0, 0, 0);
    v39 = sub_963400((__int64 *)&v56, 1, v38);
    v40 = v56;
    if ( v50 )
    {
      v39 = sub_BE66A0((_DWORD)v56, v56[2330], 28, v39, 0, 0, 0);
      v40 = v56;
    }
    else if ( *(_QWORD *)(v39 + 8) != v11 )
    {
      v39 = sub_BE66A0((_DWORD)v56, v11, 27, v39, 0, 0, 0);
      v40 = v56;
    }
    v57[1] = sub_ECB360(v40, 0, v39, 0);
    v41 = sub_ECB820(v56, v57, 2, 0, 0, 0);
    v43 = sub_963400((__int64 *)&v56, 0, v42);
    v44 = v56;
    if ( v50 )
    {
      v43 = sub_BE66A0((_DWORD)v56, v56[2330], 28, v43, 0, 0, 0);
      v44 = v56;
    }
    else if ( v11 != *(_QWORD *)(v43 + 8) )
    {
      v43 = sub_BE66A0((_DWORD)v56, v11, 27, v43, 0, 0, 0);
      v44 = v56;
    }
    v45 = sub_ECB360(v44, 0, v43, 0);
    return sub_ECBDB0((_DWORD)a1, 0, 0, 0, 0, v53, 0, 0, v41, 0, v45);
  }
  return v7;
}

