unsigned __int64 __fastcall sub_16BE8B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r15
  unsigned int v18; // r13d
  unsigned int v19; // eax
  unsigned __int64 v20; // r12
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // eax
  unsigned __int64 v37; // rbp
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // eax
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // eax
  __int64 v54; // r12
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned int v61; // eax
  __int64 v62; // rbp
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r12
  unsigned __int64 v70; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v71; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v72; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v73; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v74; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v75; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int8 *v76; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v77; // [rsp+38h] [rbp-50h]

  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), v6, a3, a4, a5, a6);
  result = sub_B7E900((__int64)v7, v6, v8, v9, v10, v11);
  v17 = result;
  if ( result )
  {
LABEL_2:
    v18 = *(_DWORD *)(v17 + 24);
    v70 = *(_QWORD *)(v17 + 48);
    v19 = sub_F67800(&v70, v6, v13, v14, v15, v16);
    v20 = v70;
    v21 = v19;
    v6 = v70;
    v22 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), v70);
    if ( v22 )
    {
      v23 = v22;
      v71 = sub_A71600(*(_QWORD *)(a1[1] + 248LL), v22);
      v28 = sub_F67800(&v71, v23, v24, v25, v26, v27);
      v20 = v71;
      v29 = v28;
      v6 = v71;
      v30 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), v71);
      if ( !v30 )
      {
        switch ( v29 )
        {
          case 0LL:
          case 1LL:
            goto LABEL_10;
          case 2LL:
          case 3LL:
          case 4LL:
            goto LABEL_13;
          case 5LL:
            goto LABEL_16;
          default:
            goto LABEL_23;
        }
      }
      v31 = v30;
      v72 = sub_A71600(*(_QWORD *)(a1[1] + 248LL), v30);
      v36 = sub_F67800(&v72, v31, v32, v33, v34, v35);
      v37 = v72;
      v38 = v36;
      v6 = v72;
      v39 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), v72);
      if ( !v39 )
      {
        switch ( v38 )
        {
          case 0LL:
          case 1LL:
            goto LABEL_10;
          case 2LL:
          case 3LL:
          case 4LL:
            goto LABEL_13;
          case 5LL:
LABEL_21:
            v6 = v37;
            sub_16BE8B0(a1, v37);
            goto LABEL_10;
          default:
            goto LABEL_23;
        }
      }
      v40 = v39;
      v73 = sub_A71600(*(_QWORD *)(a1[1] + 248LL), v39);
      v45 = sub_F67800(&v73, v40, v41, v42, v43, v44);
      v37 = v73;
      v46 = v45;
      v6 = v73;
      v47 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), v73);
      if ( !v47 )
      {
        switch ( v46 )
        {
          case 0LL:
          case 1LL:
            goto LABEL_10;
          case 2LL:
          case 3LL:
          case 4LL:
            goto LABEL_13;
          case 5LL:
            goto LABEL_21;
          default:
            goto LABEL_23;
        }
      }
      v48 = v47;
      v74 = sub_A71600(*(_QWORD *)(a1[1] + 248LL), v47);
      v53 = sub_F67800(&v74, v48, v49, v50, v51, v52);
      v37 = v74;
      v54 = v53;
      v6 = v74;
      v55 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), v74);
      if ( !v55 )
      {
        switch ( v54 )
        {
          case 0LL:
          case 1LL:
            goto LABEL_10;
          case 2LL:
          case 3LL:
          case 4LL:
            goto LABEL_13;
          case 5LL:
            goto LABEL_21;
          default:
            goto LABEL_23;
        }
      }
      v56 = v55;
      v75 = sub_A71600(*(_QWORD *)(a1[1] + 248LL), v55);
      v61 = sub_F67800(&v75, v56, v57, v58, v59, v60);
      v20 = v75;
      v62 = v61;
      v6 = v75;
      v63 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), v75);
      if ( !v63 )
      {
        switch ( v62 )
        {
          case 0LL:
          case 1LL:
            goto LABEL_10;
          case 2LL:
          case 3LL:
          case 4LL:
            goto LABEL_13;
          case 5LL:
            goto LABEL_16;
        }
        goto LABEL_10;
      }
      v64 = v63;
      v76 = (unsigned __int8 *)sub_A71600(*(_QWORD *)(a1[1] + 248LL), v63);
      v6 = (unsigned int)sub_F67800(&v76, v64, v65, v66, v67, v68);
      sub_16BEC20(a1, v6, v76, v18);
      result = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v17 = result;
      if ( result )
        goto LABEL_9;
    }
    else
    {
      switch ( v21 )
      {
        case 0LL:
        case 1LL:
          break;
        case 2LL:
        case 3LL:
        case 4LL:
LABEL_13:
          v69 = a1[1];
          sub_168B9B0((__int64)&v76, v69 + 8, 6130);
          sub_16B71B0(&v76, 0);
          sub_18CAED0(v69, v18, *a1, &v76);
          v6 = (unsigned __int64)v76;
          if ( v76 )
          {
            if ( v77 )
              sub_1580C40(v77, (unsigned __int64)v76);
          }
          break;
        case 5LL:
LABEL_16:
          v6 = v20;
          sub_16BE8B0(a1, v20);
          break;
        default:
LABEL_23:
          BUG();
      }
LABEL_10:
      while ( 1 )
      {
        result = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v17 = result;
        if ( !result )
          break;
LABEL_9:
        if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_2;
      }
    }
  }
  return result;
}
