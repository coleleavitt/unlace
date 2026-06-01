__int64 __fastcall sub_20521E0(unsigned __int8 *a1, __int64 a2)
{
  int v2; // eax
  __int64 *v4; // rax
  __int64 v5; // r14
  const void *v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // r13
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 *v27; // rcx
  __int64 v28; // rax
  unsigned __int8 v29; // r13
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rbp
  __int64 *v33; // rcx
  __int64 v34; // rsi
  __int64 *v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // r13
  __int64 v38; // rax
  unsigned __int8 v39; // r12
  __int16 v40; // r14
  int v41; // edx
  __int64 *v42; // rax
  __int64 v43; // rbp
  __int64 v44; // r12
  __int64 v45; // r13
  int v46; // eax
  __int64 *v47; // rax
  __int64 v48; // rbp
  __int64 v49; // r12
  int v50; // eax
  __int64 v51; // rax
  __int64 *v52; // rcx
  __int64 v53; // rax
  __int16 v54; // r13
  int v55; // eax
  __int64 v56; // [rsp+0h] [rbp-A8h]
  __int64 *v57; // [rsp+8h] [rbp-A0h]
  __int64 v58; // [rsp+10h] [rbp-98h] BYREF
  int v59; // [rsp+18h] [rbp-90h]
  __int64 v60; // [rsp+20h] [rbp-88h]
  int v61; // [rsp+28h] [rbp-80h]
  char v62; // [rsp+30h] [rbp-78h]
  __int64 v63; // [rsp+40h] [rbp-68h] BYREF
  int v64; // [rsp+48h] [rbp-60h]
  __int64 v65; // [rsp+50h] [rbp-58h]
  int v66; // [rsp+58h] [rbp-50h]
  char v67; // [rsp+60h] [rbp-48h]

  v2 = *a1;
  if ( (_BYTE)v2 == 61 )
  {
    v47 = *((__int64 **)a1 + 1);
    v48 = *v47;
    v49 = v47[1];
    v9 = sub_20C9AC0(24, unk_2673574);
    sub_20CA190(v9, *(_QWORD *)(*(_QWORD *)(v48 + 8) + 24LL), 18);
    v50 = *(_DWORD *)(v9 + 4);
    *(_WORD *)(v9 + 2) = 61;
    *(_DWORD *)(v9 + 4) = v50 & 0x38000000 | 2;
    sub_20166C0((_QWORD *)(v9 - 64), v48);
    sub_20166C0((_QWORD *)(v9 - 32), v49);
    return v9;
  }
  if ( (unsigned __int8)v2 > 0x3Du )
  {
    if ( (_BYTE)v2 == 62 )
    {
      v42 = *((__int64 **)a1 + 1);
      v43 = *v42;
      v44 = v42[1];
      v45 = v42[2];
      v9 = sub_20C9AC0(24, unk_2673570);
      sub_20CA190(v9, *(_QWORD *)(v43 + 8), 18);
      v46 = *(_DWORD *)(v9 + 4);
      *(_WORD *)(v9 + 2) = 62;
      *(_DWORD *)(v9 + 4) = v46 & 0x38000000 | 3;
      sub_20166C0((_QWORD *)(v9 - 96), v43);
      sub_20166C0((_QWORD *)(v9 - 64), v44);
      sub_20166C0((_QWORD *)(v9 - 32), v45);
      return v9;
    }
    if ( (_BYTE)v2 == 63 )
    {
      v4 = *((__int64 **)a1 + 1);
      v5 = *((_QWORD *)a1 + 4);
      v6 = *((const void **)a1 + 3);
      v7 = *v4;
      v8 = v4[1];
      v9 = sub_20C9AC0(64, unk_267356C);
      v10 = *(_QWORD *)(v7 + 8);
      v11 = *(_BYTE *)(v10 + 8) == 18;
      v12 = *(_QWORD *)(v10 + 24);
      LODWORD(v63) = v5;
      BYTE4(v63) = v11;
      v17 = sub_20C5270(v12, v63, v13, v14, v15, v16);
      sub_20CA190(v9, v17, 18);
      v18 = *(_DWORD *)(v9 + 4);
      *(_WORD *)(v9 + 2) = 63;
      *(_QWORD *)(v9 + 24) = v9 + 40;
      *(_DWORD *)(v9 + 4) = v18 & 0x38000000 | 2;
      *(_QWORD *)(v9 + 32) = 0x400000000LL;
      sub_20166C0((_QWORD *)(v9 - 64), v7);
      v19 = v8;
      v20 = 4 * v5;
      sub_20166C0((_QWORD *)(v9 - 32), v19);
      v21 = *(unsigned int *)(v9 + 36);
      v22 = 0;
      v23 = (4 * v5) >> 2;
      *(_DWORD *)(v9 + 32) = 0;
      LODWORD(v24) = 0;
      if ( v23 > v21 )
      {
        sub_2237220(v9 + 24, v9 + 40, v20 >> 2, 4);
        v24 = *(unsigned int *)(v9 + 32);
        v22 = 4 * v24;
      }
      if ( v20 )
      {
        memcpy((void *)(*(_QWORD *)(v9 + 24) + v22), v6, 4 * v5);
        LODWORD(v24) = *(_DWORD *)(v9 + 32);
      }
      v25 = *(_QWORD *)(v9 + 8);
      *(_DWORD *)(v9 + 32) = v24 + v23;
      *(_QWORD *)(v9 + 56) = sub_2090B40(v6, v5, v25);
      return v9;
    }
LABEL_18:
    v35 = *((__int64 **)a1 + 1);
    v36 = *v35;
    if ( (unsigned int)(v2 - 38) <= 0xC )
    {
      v53 = sub_20C9AC0(24, unk_267357C);
      v54 = *a1;
      v9 = v53;
      sub_20CA190(v53, a2, 18);
      v55 = *(_DWORD *)(v9 + 4);
      *(_WORD *)(v9 + 2) = v54;
      *(_DWORD *)(v9 + 4) = v55 & 0x38000000 | 1;
      sub_20166C0((_QWORD *)(v9 - 32), v36);
    }
    else
    {
      v37 = v35[1];
      v38 = sub_20C9AC0(24, unk_2673578);
      v39 = a1[1];
      v9 = v38;
      v40 = *a1;
      sub_20CA190(v38, *(_QWORD *)(v36 + 8), 18);
      v41 = *(_DWORD *)(v9 + 4);
      *(_WORD *)(v9 + 2) = v40;
      *(_DWORD *)(v9 + 4) = v41 & 0x38000000 | 2;
      sub_20166C0((_QWORD *)(v9 - 64), v36);
      sub_20166C0((_QWORD *)(v9 - 32), v37);
      *(_BYTE *)(v9 + 1) = (2 * v39) | *(_BYTE *)(v9 + 1) & 1;
    }
    return v9;
  }
  if ( (_BYTE)v2 != 34 )
    goto LABEL_18;
  v11 = a1[80] == 0;
  v62 = 0;
  if ( v11 )
  {
    v27 = *((__int64 **)a1 + 1);
    v28 = *((_QWORD *)a1 + 2);
    v29 = a1[1];
    v30 = *((_QWORD *)a1 + 5);
    v31 = *v27;
    v67 = 0;
    v32 = v28 - 1;
    v33 = v27 + 1;
    v34 = (unsigned int)v28;
  }
  else
  {
    sub_20150B0((__int64)&v58, (__int64)(a1 + 48));
    v51 = *((_QWORD *)a1 + 2);
    v52 = *((__int64 **)a1 + 1);
    v62 = 1;
    v29 = a1[1];
    v30 = *((_QWORD *)a1 + 5);
    v32 = v51 - 1;
    LODWORD(v51) = v59;
    v31 = *v52;
    v33 = v52 + 1;
    v34 = (unsigned int)(v32 + 1);
    v59 = 0;
    v64 = v51;
    v67 = 1;
    v63 = v58;
    LODWORD(v51) = v61;
    v61 = 0;
    v66 = v51;
    v65 = v60;
  }
  v57 = v33;
  v56 = v31;
  v9 = sub_20C9AC0(80, v34);
  sub_2051BE0(v9, v30, v56, v57, v32, a2, (__int64)&v63, v34 & 0x7FFFFFF);
  if ( v67 )
    sub_200ED00((__int64)&v63);
  v11 = v62 == 0;
  *(_BYTE *)(v9 + 1) = (2 * v29) | *(_BYTE *)(v9 + 1) & 1;
  if ( !v11 )
    sub_200ED00((__int64)&v58);
  return v9;
}
