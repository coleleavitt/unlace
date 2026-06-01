void __fastcall sub_17D0CF0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  int v8; // r14d
  int v9; // r13d
  __int64 v11; // rbp
  __int64 v13; // r8
  __int64 i; // r15
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // r15d
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // eax
  __int64 v42; // rbp
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned int v49; // eax
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // eax
  __int64 v58; // r15
  __int64 v59; // rax
  _QWORD *v60; // rax
  unsigned int v61; // eax
  __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // rsi
  unsigned __int64 v65; // r15
  unsigned __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rsi
  unsigned __int64 v71; // r15
  unsigned __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned int v74; // eax
  __int64 v75; // [rsp+8h] [rbp-C0h]
  int v76; // [rsp+8h] [rbp-C0h]
  __int64 v77; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int64 v78; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v79; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v80; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v81; // [rsp+30h] [rbp-98h] BYREF
  int v82; // [rsp+38h] [rbp-90h]
  int v83; // [rsp+3Ch] [rbp-8Ch]
  __int64 v84; // [rsp+40h] [rbp-88h]
  unsigned __int64 v85; // [rsp+50h] [rbp-78h] BYREF
  int v86; // [rsp+58h] [rbp-70h]
  int v87; // [rsp+5Ch] [rbp-6Ch]
  __int64 v88; // [rsp+60h] [rbp-68h]
  unsigned __int64 v89; // [rsp+70h] [rbp-58h] BYREF
  int v90; // [rsp+78h] [rbp-50h]
  int v91; // [rsp+7Ch] [rbp-4Ch]
  __int64 v92; // [rsp+80h] [rbp-48h]

  v8 = a3;
  v9 = a4;
  v11 = a2;
  v13 = a5 & 1;
  if ( !(_DWORD)v13 )
    goto LABEL_2;
  for ( i = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL); ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v15 = sub_F63050(i, a2, a3, a4);
    if ( !v15 )
      break;
    i = v15;
  }
  v16 = sub_F63240(i, a2, a3, a4, v13, a6);
  if ( v16 && sub_F58550((__int64)v16) )
  {
    v81 = a2;
    v82 = v8;
    v83 = v9;
    v84 = a1;
    v77 = a2;
    v17 = sub_F67720(&v77, a2, a3, a4, v13, a6);
    a2 = v77;
    v18 = v17;
    v75 = v77;
    v19 = *(_QWORD **)(v84 + 248);
    v20 = sub_A72040(v19, v77);
    if ( v20
      && (v21 = v20,
          v78 = sub_A71600(*(_QWORD *)(v84 + 248), v20),
          v26 = sub_F67720(&v78, v21, v22, v23, v24, v25),
          a2 = v78,
          v18 = v26,
          v75 = v78,
          v19 = *(_QWORD **)(v84 + 248),
          (v27 = sub_A72040(v19, v78)) != 0) )
    {
      v28 = v27;
      v89 = sub_A71600(*(_QWORD *)(v84 + 248), v27);
      v33 = sub_F67720(&v89, v28, v29, v30, v31, v32);
      a2 = v33;
      sub_17BE000((__int64)&v81, v33, v89, 0, 0);
    }
    else if ( v18 > 2 )
    {
      if ( v18 != 3 )
      {
LABEL_49:
        sub_17D1270((_DWORD)v19, a2, a3, a4, v13, a6, a7, a8);
        return;
      }
      a2 = v75;
      sub_17BD820((__int64)&v81, v75, 0, a4, v13, a6);
    }
  }
LABEL_2:
  if ( (a5 & 2) == 0 )
    goto LABEL_3;
  v58 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  while ( 2 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v58 + 16) - 2) <= 4u )
    {
LABEL_26:
      v58 = *(_QWORD *)(*(_QWORD *)(v58 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      continue;
    }
    break;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v58 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v59 = sub_F63050(v58, a2, a3, a4);
    if ( v59 )
    {
      v58 = v59;
      goto LABEL_26;
    }
  }
  v60 = sub_F63240(v58, a2, a3, a4, v13, a6);
  if ( v60 && (unsigned __int8)sub_F58560((__int64)v60) )
  {
    v85 = v11;
    v86 = v8;
    v87 = v9;
    v88 = a1;
    v61 = sub_F65A30(v11, a2, a3, a4);
    a2 = v11;
    v62 = v61;
    v19 = *(_QWORD **)(v88 + 248);
    v63 = sub_A72040(v19, v11);
    if ( !v63 )
    {
      switch ( v62 )
      {
        case 0LL:
        case 1LL:
        case 2LL:
        case 3LL:
          goto LABEL_3;
        case 4LL:
          a2 = v11;
          sub_17B5080((__int64)&v85, v11, 0, a4, v13, a6);
          goto LABEL_3;
        default:
          goto LABEL_49;
      }
    }
    v64 = v63;
    v65 = sub_A71600(*(_QWORD *)(v88 + 248), v63);
    v68 = sub_F65A30(v65, v64, v66, v67);
    a2 = v65;
    v76 = v68;
    v19 = *(_QWORD **)(v88 + 248);
    v69 = sub_A72040(v19, v65);
    if ( !v69 )
    {
      switch ( v76 )
      {
        case 0:
        case 1:
        case 2:
        case 3:
          goto LABEL_3;
        case 4:
          a2 = v65;
          sub_17B5080((__int64)&v85, v65, 0, a4, v13, a6);
          goto LABEL_3;
        default:
          goto LABEL_49;
      }
    }
    v70 = v69;
    v71 = sub_A71600(*(_QWORD *)(v88 + 248), v69);
    v74 = sub_F65A30(v71, v70, v72, v73);
    a2 = v74;
    sub_17B56D0((__int64)&v85, v74, v71, 0, 0);
  }
LABEL_3:
  if ( (a5 & 4) == 0 )
    return;
  v34 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  while ( 2 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v34 + 16) - 2) <= 4u )
    {
LABEL_16:
      v34 = *(_QWORD *)(*(_QWORD *)(v34 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      continue;
    }
    break;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v35 = sub_F63050(v34, a2, a3, a4);
    if ( v35 )
    {
      v34 = v35;
      goto LABEL_16;
    }
  }
  v36 = sub_F63240(v34, a2, a3, a4, v13, a6);
  if ( v36 && sub_F58570((__int64)v36) )
  {
    v89 = v11;
    v79 = v11;
    v90 = v8;
    v91 = v9;
    v92 = a1;
    v41 = sub_F67800(&v79, a2, v37, v38, v39, v40);
    v42 = v79;
    v43 = v41;
    LODWORD(a2) = v79;
    v19 = *(_QWORD **)(v92 + 248);
    v44 = sub_A72040(v19, v79);
    if ( v44 )
    {
      a2 = v44;
      v80 = sub_A71600(*(_QWORD *)(v92 + 248), v44);
      v49 = sub_F67800(&v80, a2, v45, v46, v47, v48);
      v42 = v80;
      v50 = v49;
      LODWORD(a2) = v80;
      v19 = *(_QWORD **)(v92 + 248);
      v51 = sub_A72040(v19, v80);
      if ( v51 )
      {
        v52 = v51;
        v85 = sub_A71600(*(_QWORD *)(v92 + 248), v51);
        v57 = sub_F67800(&v85, v52, v53, v54, v55, v56);
        sub_17D0BA0((__int64)&v89, v57, v85, 0, 0);
      }
      else
      {
        switch ( v50 )
        {
          case 0LL:
          case 1LL:
            return;
          case 2LL:
          case 3LL:
          case 4LL:
            goto LABEL_42;
          case 5LL:
            goto LABEL_41;
          default:
            goto LABEL_49;
        }
      }
    }
    else
    {
      switch ( v43 )
      {
        case 0LL:
        case 1LL:
          return;
        case 2LL:
        case 3LL:
        case 4LL:
LABEL_42:
          sub_17D0300((__int64)&v89, v42, 0, 0);
          break;
        case 5LL:
LABEL_41:
          sub_17D0460((__int64)&v89, v42, 0, a4, v13, a6);
          break;
        default:
          goto LABEL_49;
      }
    }
  }
}
