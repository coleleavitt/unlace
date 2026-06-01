__int64 __fastcall sub_B52D10(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r15
  bool v10; // zf
  unsigned int *v12; // r12
  __int64 v13; // r15
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rax
  __int64 v18; // r14
  unsigned int *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  int v30; // eax
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  unsigned int v42; // eax
  __int64 v43; // r15
  unsigned int v44; // r14d
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int *v47; // rax
  unsigned int *v48; // rax
  unsigned int *v49; // r14
  int v50; // eax
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // r15
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // [rsp+8h] [rbp-70h]
  __int64 v64; // [rsp+10h] [rbp-68h]
  int v65; // [rsp+10h] [rbp-68h]
  unsigned int v66; // [rsp+10h] [rbp-68h]
  unsigned int *v67; // [rsp+10h] [rbp-68h]
  unsigned int *v68; // [rsp+18h] [rbp-60h]
  unsigned int v69; // [rsp+18h] [rbp-60h]
  int v70; // [rsp+20h] [rbp-58h]
  unsigned int v71; // [rsp+20h] [rbp-58h]
  int v72; // [rsp+24h] [rbp-54h]
  __int64 v73; // [rsp+28h] [rbp-50h]
  unsigned int *v74; // [rsp+30h] [rbp-48h] BYREF

  v2 = a1[3];
  v3 = sub_B52C90((__int64)a1, *a2);
  ++*((_DWORD *)v3 + 2);
  v4 = v3;
  if ( (unsigned __int8)sub_15C5420(*(_QWORD *)(a1[173] + 8LL), v3)
    || (unsigned __int8)sub_15C5180(*(_QWORD *)(a1[173] + 8LL), (_DWORD)v4, v5, v6, v7, v8) )
  {
    v9 = sub_186B270(0x10u);
    *(_QWORD *)v9 = off_1C559A8;
    *(_QWORD *)(v9 + 8) = v4;
    goto LABEL_4;
  }
  v63 = a1[3];
  sub_D56BF0(&v74, a1 + 9, v4);
  v12 = v74;
  v13 = a1[173];
  if ( !*((_WORD *)v4 + 2) )
  {
    v14 = *(_DWORD **)(v4[2] + 24LL);
    if ( v14 )
    {
      if ( *v14 == *(_DWORD *)(v13 + 16) )
      {
        if ( v14[1] == 37 )
        {
          v73 = a1[3];
          v47 = (unsigned int *)v4[4];
          v67 = v47;
          if ( v47 )
            ++v47[2];
          v48 = (unsigned int *)v4[5];
          v68 = v48;
          if ( v48 )
            ++v48[2];
          v49 = (unsigned int *)v4[6];
          if ( v49 )
            ++v49[2];
          v50 = sub_15D1F10(v4);
          v70 = sub_15C5540(v13, v50, v51, v52, v53, v54);
          v55 = a1[173];
          v56 = sub_15D1F10(v4);
          v72 = sub_15C5560(v55, v56);
          v57 = (_QWORD *)sub_186B270(0x140u);
          v57[1] = a1;
          v9 = (__int64)v57;
          *v57 = &off_1C57468;
          v58 = a1[3];
          *(_DWORD *)(v9 + 316) = v72;
          *(_QWORD *)(v9 + 16) = v58;
          v59 = a1[173];
          v60 = *v67;
          *(_BYTE *)(v9 + 56) = 0;
          *(_QWORD *)(v9 + 24) = v59;
          v61 = a1[174];
          *(_BYTE *)(v9 + 72) = 0;
          *(_QWORD *)(v9 + 32) = v61;
          *(_QWORD *)(v9 + 40) = v9 + 56;
          *(_BYTE *)(v9 + 88) = 0;
          *(_DWORD *)(v9 + 312) = v70;
          v62 = *(_QWORD *)(a1[2] + 8656LL);
          *(_QWORD *)(v9 + 64) = *(_QWORD *)(*(_QWORD *)(v62 + 8 * v60) + 8LL);
          *(_QWORD *)(v9 + 80) = *(_QWORD *)(*(_QWORD *)(v62 + 8LL * *v68) + 8LL);
          *(_QWORD *)(v9 + 96) = *(_QWORD *)(*(_QWORD *)(v62 + 8LL * *v49) + 8LL);
          v10 = v49[2]-- == 1;
          *(_QWORD *)(v9 + 48) = 0x1000000003LL;
          if ( v10 )
            sub_15D7BC0(v73, v49);
          v71 = v68[2];
          v68[2] = v71 - 1;
          if ( v71 == 1 )
            sub_15D7BC0(v73, v68);
          v69 = v67[2];
          v67[2] = v69 - 1;
          if ( v69 == 1 )
            sub_15D7BC0(v73, v67);
        }
        else
        {
          if ( v14[1] != 49 )
            goto LABEL_10;
          v19 = (unsigned int *)v4[4];
          v64 = a1[3];
          if ( v19 )
            ++v19[2];
          v9 = sub_186B270(0x138u);
          v20 = *v19;
          *(_QWORD *)v9 = &off_1C574A0;
          v21 = a1[3];
          *(_QWORD *)(v9 + 8) = a1;
          *(_QWORD *)(v9 + 16) = v21;
          v22 = a1[173];
          *(_BYTE *)(v9 + 56) = 0;
          *(_QWORD *)(v9 + 24) = v22;
          *(_QWORD *)(v9 + 32) = a1[174];
          *(_QWORD *)(v9 + 40) = v9 + 56;
          v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[2] + 8656LL) + 8 * v20) + 8LL);
          v10 = v19[2]-- == 1;
          *(_QWORD *)(v9 + 64) = v23;
          *(_QWORD *)(v9 + 48) = 0x1000000001LL;
          if ( v10 )
            sub_15D7BC0(v64, v19);
        }
        if ( !v12 )
          goto LABEL_4;
        goto LABEL_18;
      }
    }
  }
LABEL_10:
  v15 = *(_QWORD *)(a1[2] + 8656LL);
  if ( v15 && (v16 = *v74, (unsigned int)v16 < *(_DWORD *)(v15 - 4)) && *(_QWORD *)(v15 + 8 * v16) )
  {
    v17 = *(_DWORD **)(sub_15D1F10(v4) + 24);
    if ( v17 && *(_DWORD *)(v13 + 16) == *v17 && v17[1] == 1 )
    {
      v9 = sub_186B270(0x138u);
      *(_QWORD *)v9 = &off_1C574A0;
      v46 = a1[3];
      *(_QWORD *)(v9 + 8) = a1;
      *(_QWORD *)(v9 + 16) = v46;
      *(_QWORD *)(v9 + 24) = a1[173];
      *(_QWORD *)(v9 + 32) = a1[174];
      *(_QWORD *)(v9 + 40) = v9 + 56;
    }
    else
    {
      v18 = a1[173];
      v9 = *(_QWORD *)(sub_15D1F10(v4) + 24);
      if ( !v9 )
        goto LABEL_18;
      if ( *(_DWORD *)(v18 + 16) != *(_DWORD *)v9 || *(_DWORD *)(v9 + 4) )
      {
        v9 = 0;
        goto LABEL_18;
      }
      v24 = a1[173];
      v25 = sub_15D1F10(v4);
      v30 = sub_15C5540(v24, v25, v26, v27, v28, v29);
      v31 = a1[173];
      LODWORD(v24) = v30;
      v32 = sub_15D1F10(v4);
      v65 = sub_15C5560(v31, v32);
      v9 = sub_186B270(0x140u);
      *(_QWORD *)v9 = &off_1C57468;
      v33 = a1[3];
      *(_QWORD *)(v9 + 8) = a1;
      *(_QWORD *)(v9 + 16) = v33;
      v34 = a1[173];
      *(_DWORD *)(v9 + 312) = v24;
      *(_QWORD *)(v9 + 24) = v34;
      v35 = a1[174];
      *(_DWORD *)(v9 + 316) = v65;
      *(_QWORD *)(v9 + 32) = v35;
      *(_QWORD *)(v9 + 40) = v9 + 56;
    }
    v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[2] + 8656LL) + 8LL * *v12) + 8LL);
    *(_BYTE *)(v9 + 56) = 0;
    *(_QWORD *)(v9 + 64) = v36;
    *(_QWORD *)(v9 + 48) = 0x1000000001LL;
  }
  else
  {
    v37 = sub_15D1F10(v4);
    v42 = sub_15C5540(v13, v37, v38, v39, v40, v41);
    v43 = a1[173];
    v44 = v42;
    v45 = sub_15D1F10(v4);
    v66 = sub_15C5560(v43, v45);
    v9 = sub_186B270(0x10u);
    *(_QWORD *)(v9 + 8) = sub_15CC950(a1[173], v44, v66);
    *(_QWORD *)v9 = off_1C559A8;
  }
LABEL_18:
  v10 = v12[2]-- == 1;
  if ( v10 )
    sub_15D7BC0(v63, v12);
LABEL_4:
  v10 = (*((_DWORD *)v4 + 2))-- == 1;
  if ( v10 )
    sub_15D7BC0(v2, v4);
  return v9;
}

