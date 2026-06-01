__int64 __fastcall sub_D697C0(__int64 a1, _DWORD *a2, unsigned __int8 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // bl
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rdx
  _BYTE *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned int v51; // ecx
  __int64 v52; // rsi
  char v53; // cl
  int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // [rsp+0h] [rbp-A8h]
  __int64 v59; // [rsp+0h] [rbp-A8h]
  __int64 v60; // [rsp+0h] [rbp-A8h]
  _BYTE *v61; // [rsp+0h] [rbp-A8h]
  _WORD *v62; // [rsp+0h] [rbp-A8h]
  _WORD *v63; // [rsp+0h] [rbp-A8h]
  _DWORD *v64; // [rsp+0h] [rbp-A8h]
  _DWORD *v65; // [rsp+0h] [rbp-A8h]
  _QWORD *v66; // [rsp+0h] [rbp-A8h]
  _QWORD *v67; // [rsp+0h] [rbp-A8h]
  __int64 v68; // [rsp+0h] [rbp-A8h]
  __int64 v69; // [rsp+0h] [rbp-A8h]
  __int64 v70; // [rsp+0h] [rbp-A8h]
  __int64 v71; // [rsp+8h] [rbp-A0h]
  __int64 v72; // [rsp+8h] [rbp-A0h]
  _BYTE v73[48]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v74[104]; // [rsp+40h] [rbp-68h] BYREF

  v5 = (unsigned int)(**(_DWORD **)a1 + a2[2]);
  sub_DFF4E0(v73, *(_QWORD *)(*(_QWORD *)a1 + 32LL), v5, (unsigned int)v5);
  v9 = sub_CC2440(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL), *(_QWORD *)(*(_QWORD *)a2 + 48LL), v6, v7, v8);
  if ( BYTE4(v9) )
  {
    v10 = HIDWORD(v9);
    switch ( v9 )
    {
      case 0LL:
        v23 = *(_QWORD *)(a1 + 16);
        v24 = (unsigned int)(*(_DWORD *)v23 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v23 + 32), v24, (unsigned int)v24);
        v61 = (_BYTE *)sub_CE8890((__int64)v74);
        v25 = (_BYTE *)sub_CE8890((__int64)v73);
        goto LABEL_12;
      case 1LL:
        v26 = *(_QWORD *)(a1 + 16);
        v27 = (unsigned int)(*(_DWORD *)v26 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v26 + 32), v27, (unsigned int)v27);
        v61 = (_BYTE *)sub_CE8AA0((__int64)v74);
        v25 = (_BYTE *)sub_CE8AA0((__int64)v73);
        goto LABEL_12;
      case 2LL:
        v28 = *(_QWORD *)(a1 + 16);
        v29 = (unsigned int)(*(_DWORD *)v28 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v28 + 32), v29, (unsigned int)v29);
        v62 = (_WORD *)sub_CE8E90((__int64)v74);
        *(_WORD *)sub_CE8E90((__int64)v73) = *v62;
        goto LABEL_4;
      case 3LL:
        v30 = *(_QWORD *)(a1 + 16);
        v31 = (unsigned int)(*(_DWORD *)v30 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v30 + 32), v31, (unsigned int)v31);
        v63 = (_WORD *)sub_CE90A0((__int64)v74);
        *(_WORD *)sub_CE90A0((__int64)v73) = *v63;
        goto LABEL_4;
      case 4LL:
        v32 = *(_QWORD *)(a1 + 16);
        v33 = (unsigned int)(*(_DWORD *)v32 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v32 + 32), v33, (unsigned int)v33);
        v64 = (_DWORD *)sub_CE9490((__int64)v74);
        *(_DWORD *)sub_CE9490((__int64)v73) = *v64;
        goto LABEL_4;
      case 5LL:
        v34 = *(_QWORD *)(a1 + 16);
        v35 = (unsigned int)(*(_DWORD *)v34 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v34 + 32), v35, (unsigned int)v35);
        v65 = (_DWORD *)sub_CE96A0((__int64)v74);
        *(_DWORD *)sub_CE96A0((__int64)v73) = *v65;
        goto LABEL_4;
      case 6LL:
        v36 = *(_QWORD *)(a1 + 16);
        v37 = (unsigned int)(*(_DWORD *)v36 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v36 + 32), v37, (unsigned int)v37);
        v66 = (_QWORD *)sub_CE9C80((__int64)v74);
        *(_QWORD *)sub_CE9C80((__int64)v73) = *v66;
        goto LABEL_4;
      case 7LL:
        v38 = *(_QWORD *)(a1 + 16);
        v39 = (unsigned int)(*(_DWORD *)v38 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v38 + 32), v39, (unsigned int)v39);
        v67 = (_QWORD *)sub_CE9E90((__int64)v74);
        *(_QWORD *)sub_CE9E90((__int64)v73) = *v67;
        goto LABEL_4;
      case 8LL:
        v40 = *(_QWORD *)(a1 + 16);
        v41 = (unsigned int)(*(_DWORD *)v40 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v40 + 32), v41, (unsigned int)v41);
        v68 = sub_CEA4A0((__int64)v74);
        v42 = sub_CEA4A0((__int64)v73);
        goto LABEL_21;
      case 9LL:
        v43 = *(_QWORD *)(a1 + 16);
        v44 = (unsigned int)(*(_DWORD *)v43 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v43 + 32), v44, (unsigned int)v44);
        v68 = sub_CEA4F0((__int64)v74);
        v42 = sub_CEA4F0((__int64)v73);
        goto LABEL_21;
      case 10LL:
        v45 = *(_QWORD *)(a1 + 16);
        v46 = (unsigned int)(*(_DWORD *)v45 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v45 + 32), v46, (unsigned int)v46);
        v61 = (_BYTE *)sub_CEAA70((__int64)v74);
        v25 = (_BYTE *)sub_CEAA70((__int64)v73);
LABEL_12:
        *v25 = *v61;
        goto LABEL_4;
      case 11LL:
        v47 = *(_QWORD *)(a1 + 16);
        v48 = (unsigned int)(*(_DWORD *)v47 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v47 + 32), v48, (unsigned int)v48);
        v69 = sub_CEB480((__int64)v74);
        v49 = sub_CEB480((__int64)v73);
        v50 = v69;
        if ( *(_DWORD *)(v49 + 8) <= 0x40u && (v51 = *(_DWORD *)(v69 + 8), v51 <= 0x40) )
        {
          v57 = *(_QWORD *)v69;
          *(_DWORD *)(v49 + 8) = v51;
          *(_QWORD *)v49 = v57;
        }
        else
        {
          v52 = v69;
          v72 = v69;
          v70 = v49;
          sub_21E1960(v49, v52);
          v50 = v72;
          v49 = v70;
        }
        v53 = *(_BYTE *)(v50 + 12);
        v54 = *(_DWORD *)(v50 + 16);
        *(_BYTE *)(v49 + 12) = v53;
        *(_DWORD *)(v49 + 16) = v54;
        goto LABEL_4;
      case 12LL:
        v55 = *(_QWORD *)(a1 + 16);
        v56 = (unsigned int)(*(_DWORD *)v55 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v55 + 32), v56, (unsigned int)v56);
        v68 = sub_CEA540((__int64)v74);
        v42 = sub_CEA540((__int64)v73);
LABEL_21:
        *(_QWORD *)v42 = *(_QWORD *)v68;
        *(_DWORD *)(v42 + 8) = *(_DWORD *)(v68 + 8);
        goto LABEL_4;
      case 13LL:
        v11 = *(_QWORD *)(a1 + 16);
        v12 = (unsigned int)(*(_DWORD *)v11 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v11 + 32), v12, (unsigned int)v12);
        v58 = sub_CEACF0((__int64)v74);
        v13 = sub_CEACF0((__int64)v73);
        sub_DFF5C0(v13, v58);
        goto LABEL_4;
      case 14LL:
        v18 = *(_QWORD *)(a1 + 16);
        v19 = (unsigned int)(*(_DWORD *)v18 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v18 + 32), v19, (unsigned int)v19);
        v59 = sub_CEB200((__int64)v74);
        v20 = sub_CEB200((__int64)v73);
        v21 = v59;
        v60 = v20;
        v71 = v21;
        sub_DFF5C0(v20, v21);
        v22 = *(_DWORD *)(v71 + 56);
        *(_QWORD *)(v60 + 48) = *(_QWORD *)(v71 + 48);
        *(_DWORD *)(v60 + 56) = v22;
LABEL_4:
        sub_DFF560(v74);
        v14 = *(_QWORD *)(a1 + 16);
        v15 = (unsigned int)(*(_DWORD *)v14 + a2[2]);
        sub_DFF4E0(v74, *(_QWORD *)(v14 + 32), v15, (unsigned int)v15);
        v16 = sub_DFFEE0(v74);
        sub_DFF560(v74);
        if ( v16 )
          sub_E00FC0(v73);
        if ( a3 )
          sub_DFFFB0(v73);
        break;
      default:
        break;
    }
  }
  else
  {
    sub_DFF4E0(
      v74,
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
      (unsigned int)(**(_DWORD **)(a1 + 16) + a2[2]),
      (unsigned int)(**(_DWORD **)(a1 + 16) + a2[2]));
    v10 = sub_D69F60(*(_QWORD *)(a1 + 8), **(_QWORD **)(a1 + 24), v74, v73, a3);
    sub_DFF560(v74);
  }
  sub_DFF560(v73);
  return v10;
}

