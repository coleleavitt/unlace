unsigned __int64 __fastcall sub_AC430(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _DWORD *v7; // r10
  __int64 v8; // r11
  unsigned int v11; // ecx
  __int64 v12; // r15
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // esi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  unsigned __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  char v29; // [rsp-8h] [rbp-C0h]
  __int64 v30; // [rsp+8h] [rbp-B0h]
  __int64 v31; // [rsp+8h] [rbp-B0h]
  __int64 v32; // [rsp+10h] [rbp-A8h]
  _DWORD *v33; // [rsp+10h] [rbp-A8h]
  char v34; // [rsp+18h] [rbp-A0h]
  __int64 v35; // [rsp+18h] [rbp-A0h]
  __int64 v36; // [rsp+18h] [rbp-A0h]
  __int64 v37; // [rsp+18h] [rbp-A0h]
  int v38; // [rsp+20h] [rbp-98h]
  __int64 v39; // [rsp+20h] [rbp-98h]
  __int64 v40; // [rsp+28h] [rbp-90h]
  _DWORD *v42; // [rsp+40h] [rbp-78h]
  _DWORD *v43; // [rsp+48h] [rbp-70h]
  __int64 v44; // [rsp+48h] [rbp-70h]
  _DWORD v45[4]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-58h]
  __int64 v47; // [rsp+68h] [rbp-50h]
  unsigned __int64 v48; // [rsp+78h] [rbp-40h]

  v7 = a4;
  v8 = a6;
  v11 = a4[7];
  v12 = a1[3];
  v48 = __readfsqword(0x28u);
  v13 = a1[2];
  v14 = v7[18];
  if ( v11 <= 7 )
  {
    if ( v14 == 1 )
    {
      v34 = 0;
    }
    else
    {
      if ( v14 == 2 || v11 == 1 && v7[6] )
        goto LABEL_4;
      v34 = 0;
    }
  }
  else if ( v14 == 1 )
  {
    v34 = 2;
  }
  else
  {
    if ( v14 == 2 )
    {
LABEL_4:
      *(_QWORD *)a3 = *(_QWORD *)a2;
      *(_QWORD *)(a3 + 2056) = *(_QWORD *)(a2 + 2056);
      qmemcpy(
        (void *)((a3 + 8) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(a2 - (a3 - ((a3 + 8) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)a3 - (((_DWORD)a3 + 8) & 0xFFFFFFF8) + 2064) >> 3));
      *(_DWORD *)a5 = 0;
      *(_QWORD *)(a5 + 136) = 0;
      goto LABEL_5;
    }
    v34 = 2;
  }
  v45[0] = 255;
  v32 = a6 + 1024;
  v30 = a7 - 1024;
  v38 = *(_DWORD *)(a2 + 2056);
  *(_QWORD *)a3 = *(_QWORD *)a2;
  *(_QWORD *)(a3 + 2056) = *(_QWORD *)(a2 + 2056);
  v40 = a3 + 8;
  v21 = 6;
  qmemcpy(
    (void *)((a3 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)(a2 - (a3 - ((a3 + 8) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)a3 - (((_DWORD)a3 + 8) & 0xFFFFFFF8) + 2064) >> 3));
  if ( *(_DWORD *)(a2 + 2056) != 2 )
    v21 = 63;
  v22 = v12 - v13;
  if ( v22 <= v21 )
    goto LABEL_25;
  v43 = v7;
  v23 = sub_1193E0(a6, v45, v13, v22, a6, a7);
  v15 = v23;
  if ( v23 > 0xFFFFFFFFFFFFFF88LL )
  {
LABEL_18:
    *(_QWORD *)(a5 + 136) = v15;
    return v15;
  }
  v8 = a6;
  v7 = v43;
  if ( v22 == v23 )
  {
    *(_DWORD *)a5 = 1;
    *(_QWORD *)(a5 + 136) = 0;
    goto LABEL_5;
  }
  if ( v23 <= (v22 >> 7) + 4 )
  {
LABEL_25:
    *(_DWORD *)a5 = 0;
    *(_QWORD *)(a5 + 136) = 0;
    v15 = (a1[1] - *a1) >> 3;
    if ( !v15 )
      goto LABEL_6;
LABEL_26:
    sub_A9EF0(
      (__int64)v45,
      a1,
      v15,
      (_DWORD *)(a2 + 2064),
      (_DWORD *)(a3 + 2064),
      a5 + 156,
      a5 + 289,
      v7[7],
      v8,
      v8 + 212,
      a7 - 212);
    v15 = v46;
    if ( v46 > 0xFFFFFFFFFFFFFF88LL )
    {
      *(_QWORD *)(a5 + 296) = v46;
      return v15;
    }
    v19 = v45[0];
    v18 = v45[1];
    v17 = v45[2];
    v16 = v47;
    goto LABEL_7;
  }
  v42 = v43;
  if ( v38 == 1 )
  {
    v39 = v8;
    if ( !(unsigned int)sub_11CCF0(a2, v8, v45[0]) )
    {
      *(_QWORD *)a3 = 0;
      *(_QWORD *)(a3 + 2048) = 0;
      memset(
        (void *)(v40 & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8 * ((unsigned __int64)((unsigned int)a3 - (v40 & 0xFFFFFFF8) + 2056) >> 3));
      v26 = sub_11CD30(11, v22, v45[0], v32, v30, a3, v39, v34);
      v15 = sub_11C490(a3, v39, v45[0], v26, v32, v30);
      if ( v15 > 0xFFFFFFFFFFFFFF88LL )
        goto LABEL_18;
      v37 = sub_11CCB0(a3, v39, v45[0]);
      v15 = sub_11BE70((int)a5 + 4, 128, a3, v45[0], v15, v32, v30);
      v8 = v39;
      v25 = v15 + v37;
      v7 = v43;
      goto LABEL_33;
    }
    *(_QWORD *)a3 = 0;
    *(_QWORD *)(a3 + 2048) = 0;
    memset(
      (void *)(v40 & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8 * ((unsigned __int64)((unsigned int)a3 - (v40 & 0xFFFFFFF8) + 2056) >> 3));
    v27 = sub_11CD30(11, v22, v45[0], v32, v30, a3, v39, v34);
    v15 = sub_11C490(a3, v39, v45[0], v27, v32, v30);
    if ( v15 > 0xFFFFFFFFFFFFFF88LL )
      goto LABEL_18;
    v36 = sub_11CCB0(a3, v39, v45[0]);
    v15 = sub_11BE70((int)a5 + 4, 128, a3, v45[0], v15, v32, v30);
    v8 = v39;
    v7 = v43;
  }
  else
  {
    *(_QWORD *)a3 = 0;
    *(_QWORD *)(a3 + 2048) = 0;
    memset(
      (void *)(v40 & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8 * ((unsigned __int64)((unsigned int)a3 - (v40 & 0xFFFFFFF8) + 2056) >> 3));
    v29 = v34;
    v35 = v8;
    v24 = sub_11CD30(11, v22, v45[0], v32, v30, a3, v8, v29);
    v15 = sub_11C490(a3, v35, v45[0], v24, v32, v30);
    if ( v15 > 0xFFFFFFFFFFFFFF88LL )
      goto LABEL_18;
    v44 = v35;
    v36 = sub_11CCB0(a3, v35, v45[0]);
    v15 = sub_11BE70((int)a5 + 4, 128, a3, v45[0], v15, v32, v30);
    v8 = v44;
    v7 = v42;
    v25 = v36 + v15;
    if ( !v38 )
      goto LABEL_33;
  }
  v33 = v7;
  v31 = v8;
  v28 = sub_11CCB0(a2, v8, v45[0]);
  v8 = v31;
  v7 = v33;
  v25 = v15 + v36;
  if ( v22 > v28 && (v25 >= v28 || v22 <= v15 + 12) )
  {
    *(_QWORD *)a3 = *(_QWORD *)a2;
    *(_QWORD *)(a3 + 2056) = *(_QWORD *)(a2 + 2056);
    qmemcpy(
      (void *)(v40 & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)(a2 - (a3 - (v40 & 0xFFFFFFFFFFFFFFF8LL))),
      8 * ((unsigned __int64)((unsigned int)a3 - (v40 & 0xFFFFFFF8) + 2064) >> 3));
    *(_DWORD *)a5 = 3;
    *(_QWORD *)(a5 + 136) = 0;
    goto LABEL_5;
  }
LABEL_33:
  if ( v22 <= v25 )
  {
    *(_QWORD *)a3 = *(_QWORD *)a2;
    *(_QWORD *)(a3 + 2056) = *(_QWORD *)(a2 + 2056);
    qmemcpy(
      (void *)(v40 & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)(a2 - (a3 - (v40 & 0xFFFFFFFFFFFFFFF8LL))),
      8 * ((unsigned __int64)((unsigned int)a3 - (v40 & 0xFFFFFFF8) + 2064) >> 3));
    goto LABEL_25;
  }
  *(_DWORD *)a5 = 2;
  *(_DWORD *)(a3 + 2056) = 1;
  *(_QWORD *)(a5 + 136) = v15;
  if ( v15 > 0xFFFFFFFFFFFFFF88LL )
    return v15;
LABEL_5:
  v15 = (a1[1] - *a1) >> 3;
  if ( v15 )
    goto LABEL_26;
LABEL_6:
  *(_DWORD *)(a3 + 5612) = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  *(_QWORD *)(a3 + 5604) = 0;
  v19 = 0;
LABEL_7:
  *(_DWORD *)(a5 + 144) = v19;
  *(_DWORD *)(a5 + 148) = v18;
  *(_DWORD *)(a5 + 152) = v17;
  *(_QWORD *)(a5 + 304) = v16;
  *(_QWORD *)(a5 + 296) = v15;
  return 0;
}

