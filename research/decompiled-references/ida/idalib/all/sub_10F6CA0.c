_QWORD *__fastcall sub_10F6CA0(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // r13
  size_t v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // r14d
  __int64 *v11; // r8
  __int64 v12; // r13
  _QWORD *result; // rax
  __int64 v14; // rax
  __int64 *v15; // r8
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdi
  int v19; // eax
  size_t v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rdx
  size_t v23; // rax
  int v24; // eax
  _QWORD *v25; // rbx
  int v26; // eax
  size_t v27; // rbx
  const void *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rbx
  _QWORD *v31; // rbx
  _QWORD *v32; // [rsp+8h] [rbp-60h]
  _QWORD *v33; // [rsp+8h] [rbp-60h]
  _QWORD *v34; // [rsp+8h] [rbp-60h]
  _QWORD *v35; // [rsp+8h] [rbp-60h]
  _QWORD *v36; // [rsp+8h] [rbp-60h]
  _QWORD *v37; // [rsp+8h] [rbp-60h]
  _QWORD *v38; // [rsp+8h] [rbp-60h]
  _QWORD *v39; // [rsp+8h] [rbp-60h]
  _QWORD *v40; // [rsp+8h] [rbp-60h]
  _QWORD *v41; // [rsp+8h] [rbp-60h]
  _QWORD *v42; // [rsp+8h] [rbp-60h]
  _QWORD *v43; // [rsp+8h] [rbp-60h]
  _QWORD *v44; // [rsp+8h] [rbp-60h]
  _QWORD *v45; // [rsp+8h] [rbp-60h]
  _QWORD *v46; // [rsp+8h] [rbp-60h]
  _QWORD *v47; // [rsp+8h] [rbp-60h]
  _QWORD *v48; // [rsp+8h] [rbp-60h]
  _QWORD *v49; // [rsp+8h] [rbp-60h]
  _QWORD *v50; // [rsp+8h] [rbp-60h]
  _QWORD *v51; // [rsp+8h] [rbp-60h]
  _QWORD *v52; // [rsp+8h] [rbp-60h]
  _QWORD *v53; // [rsp+8h] [rbp-60h]
  _QWORD *v54; // [rsp+8h] [rbp-60h]
  _QWORD *v55; // [rsp+8h] [rbp-60h]
  _QWORD *v56; // [rsp+8h] [rbp-60h]
  _QWORD *v57; // [rsp+8h] [rbp-60h]
  _QWORD *v58; // [rsp+8h] [rbp-60h]
  _QWORD *v59; // [rsp+8h] [rbp-60h]
  _QWORD *v60; // [rsp+8h] [rbp-60h]
  _QWORD *v61; // [rsp+8h] [rbp-60h]
  _QWORD *v62; // [rsp+8h] [rbp-60h]
  _QWORD *v63; // [rsp+8h] [rbp-60h]
  _QWORD *v64; // [rsp+8h] [rbp-60h]
  _QWORD *v65; // [rsp+8h] [rbp-60h]
  _QWORD *v66; // [rsp+8h] [rbp-60h]
  _QWORD *v67; // [rsp+8h] [rbp-60h]
  _QWORD *v68; // [rsp+8h] [rbp-60h]
  _QWORD *v69; // [rsp+8h] [rbp-60h]
  _QWORD *v70; // [rsp+8h] [rbp-60h]
  _QWORD *v71; // [rsp+8h] [rbp-60h]
  _QWORD *v72; // [rsp+8h] [rbp-60h]
  _QWORD *v73; // [rsp+8h] [rbp-60h]
  _QWORD *v74; // [rsp+8h] [rbp-60h]
  _QWORD *v75; // [rsp+8h] [rbp-60h]
  _QWORD *v76; // [rsp+8h] [rbp-60h]
  _QWORD *v77; // [rsp+8h] [rbp-60h]
  _QWORD *v78; // [rsp+8h] [rbp-60h]
  _QWORD *v79; // [rsp+8h] [rbp-60h]
  _QWORD *v80; // [rsp+8h] [rbp-60h]
  _QWORD *v81; // [rsp+8h] [rbp-60h]
  _QWORD *v82; // [rsp+8h] [rbp-60h]
  _QWORD *v83; // [rsp+8h] [rbp-60h]
  __int64 *v84; // [rsp+10h] [rbp-58h]
  _QWORD *v85; // [rsp+18h] [rbp-50h]
  __int64 *v86[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(const void **)a3;
  v5 = *(_QWORD *)(a3 + 8);
  v6 = sub_2244B30(*(_QWORD *)a3, v5);
  v7 = (unsigned int)sub_2244CB0(a1 + 1176, v4, v5, v6);
  v10 = v7;
  v11 = (__int64 *)(*(_QWORD *)(a1 + 1176) + 8 * v7);
  if ( !*v11 )
  {
LABEL_6:
    v84 = v11;
    v14 = sub_22300B0(v5 + 17, 8, v7, v8, v11, v9);
    v15 = v84;
    v16 = (_QWORD *)v14;
    if ( v5 )
    {
      v85 = (_QWORD *)v14;
      memcpy((void *)(v14 + 16), v4, v5);
      v16 = v85;
      v15 = v84;
    }
    *((_BYTE *)v16 + v5 + 16) = 0;
    *v16 = v5;
    v16[1] = 0;
    *v15 = (__int64)v16;
    ++*(_DWORD *)(a1 + 1188);
    v17 = sub_22450D0(a1 + 1176, v10);
    sub_10F6C60(v86, (__int64 *)(*(_QWORD *)(a1 + 1176) + 8LL * v17), 0);
    v12 = *v86[0];
    result = *(_QWORD **)(*v86[0] + 8);
    if ( result )
      return result;
    goto LABEL_4;
  }
  if ( *v11 == -8 )
  {
    --*(_DWORD *)(a1 + 1192);
    goto LABEL_6;
  }
  sub_10F6C60(v86, v11, 0);
  v12 = *v86[0];
  result = *(_QWORD **)(*v86[0] + 8);
  if ( result )
    return result;
LABEL_4:
  switch ( *(_DWORD *)(a3 + 44) )
  {
    case 1:
    case 5:
    case 9:
    case 0x1B:
    case 0x1C:
    case 0x1E:
    case 0x1F:
      v33 = (_QWORD *)operator new(0x1010u);
      sub_11F45F0(v33, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v33;
      *(_QWORD *)(v12 + 8) = v33;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 2:
      v34 = (_QWORD *)operator new(0x1378u);
      sub_11FC6E0(v34, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v34;
      *(_QWORD *)(v12 + 8) = v34;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 3:
      if ( (unsigned int)(*(_DWORD *)(a3 + 32) - 21) > 3 )
      {
        v73 = (_QWORD *)operator new(0x1378u);
        sub_120AE90(v73, a1, a3, a2);
        v18 = *(_QWORD *)(v12 + 8);
        result = v73;
        *(_QWORD *)(v12 + 8) = v73;
        if ( v18 )
          goto LABEL_143;
      }
      else
      {
        v35 = (_QWORD *)operator new(0x1378u);
        sub_120AE90(v35, a1, a3, a2);
        result = v35;
        *v35 = off_2C42478;
        v18 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v12 + 8) = v35;
        if ( v18 )
          goto LABEL_143;
      }
      return result;
    case 4:
      v36 = (_QWORD *)operator new(0x950u);
      sub_1210B60(v36, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v36;
      *(_QWORD *)(v12 + 8) = v36;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 7:
    case 0x1A:
      v19 = *(_DWORD *)(a3 + 32);
      if ( v19 == 12 )
      {
        v72 = (_QWORD *)operator new(0x1420u);
        sub_124D400(v72, a1, a3, a2);
        v18 = *(_QWORD *)(v12 + 8);
        result = v72;
        *(_QWORD *)(v12 + 8) = v72;
        if ( v18 )
          goto LABEL_143;
        return result;
      }
      if ( *(_DWORD *)(a3 + 40) != 7 )
        goto LABEL_23;
      v27 = j__strlen(&byte_22F0C30);
      v28 = (const void *)sub_22B76B0(a3);
      if ( v27 == v29 && (!v27 || !memcmp(v28, &byte_22F0C30, v27)) )
      {
        v78 = (_QWORD *)operator new(0x13B0u);
        sub_126FBC0(v78, a1, a3, a2);
        v18 = *(_QWORD *)(v12 + 8);
        result = v78;
        *(_QWORD *)(v12 + 8) = v78;
        if ( v18 )
          goto LABEL_143;
      }
      else
      {
        v19 = *(_DWORD *)(a3 + 32);
LABEL_23:
        if ( (unsigned int)(v19 - 21) > 3 )
        {
          if ( v19 == 59 )
          {
            v80 = (_QWORD *)operator new(0x1390u);
            sub_12B86E0(v80, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = v80;
            *(_QWORD *)(v12 + 8) = v80;
            if ( v18 )
              goto LABEL_143;
          }
          else if ( *(_DWORD *)(a3 + 48) == 49 || *(_DWORD *)(a3 + 44) == 39 )
          {
            v77 = (_QWORD *)operator new(0x1438u);
            sub_129E9F0(v77, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = v77;
            *(_QWORD *)(v12 + 8) = v77;
            if ( v18 )
              goto LABEL_143;
          }
          else
          {
            v74 = (_QWORD *)operator new(0x1390u);
            sub_1269780(v74, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = v74;
            *(_QWORD *)(v12 + 8) = v74;
            if ( v18 )
              goto LABEL_143;
          }
        }
        else
        {
          v37 = (_QWORD *)operator new(0x1390u);
          sub_12C6830(v37, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v37;
          *(_QWORD *)(v12 + 8) = v37;
          if ( v18 )
            goto LABEL_143;
        }
      }
      break;
    case 0xA:
      v38 = (_QWORD *)operator new(0x1390u);
      sub_126CFD0(v38, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v38;
      *(_QWORD *)(v12 + 8) = v38;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0xB:
      v39 = (_QWORD *)operator new(0x1378u);
      sub_129A360(v39, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v39;
      *(_QWORD *)(v12 + 8) = v39;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0xC:
      v40 = (_QWORD *)operator new(0x1378u);
      sub_12A4D70(v40, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v40;
      *(_QWORD *)(v12 + 8) = v40;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0xD:
      v41 = (_QWORD *)operator new(0x1378u);
      sub_12B0A40(v41, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v41;
      *(_QWORD *)(v12 + 8) = v41;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0xE:
      v42 = (_QWORD *)operator new(0x950u);
      sub_12B6970(v42, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v42;
      *(_QWORD *)(v12 + 8) = v42;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0xF:
      switch ( *(_DWORD *)(a3 + 48) )
      {
        case 0:
        case 0x1B:
          v20 = j__strlen(&byte_22F0C30);
          v21 = (__int64 *)sub_21B7BC0(a2, 1916, &byte_22F0C30, v20);
          v86[1] = v22;
          v86[0] = v21;
          v23 = j__strlen("bfd");
          if ( (unsigned __int8)sub_2246340(v86, "bfd", v23) )
          {
            v57 = (_QWORD *)operator new(0x1378u);
            sub_11D1270(v57, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = v57;
            *(_QWORD *)(v12 + 8) = v57;
            if ( v18 )
              goto LABEL_143;
          }
          else
          {
            v76 = (_QWORD *)operator new(0xF98u);
            sub_1289DC0(v76, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = v76;
            *(_QWORD *)(v12 + 8) = v76;
            if ( v18 )
              goto LABEL_143;
          }
          break;
        case 1:
          v56 = (_QWORD *)operator new(0x1020u);
          sub_12796B0(v56, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v56;
          *(_QWORD *)(v12 + 8) = v56;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x1C:
          v55 = (_QWORD *)operator new(0x1378u);
          sub_11D1270(v55, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v55;
          *(_QWORD *)(v12 + 8) = v55;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x1D:
          v54 = (_QWORD *)operator new(0x1378u);
          sub_11E2130(v54, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v54;
          *(_QWORD *)(v12 + 8) = v54;
          if ( v18 )
            goto LABEL_143;
          break;
        default:
          v24 = *(_DWORD *)(a3 + 52);
          if ( v24 == 3 )
          {
            v30 = (_QWORD *)operator new(0x1378u);
            sub_121FCF0(v30, a1, a3, a2);
            *v30 = off_2C3B350;
            v18 = *(_QWORD *)(v12 + 8);
            result = v30;
            *(_QWORD *)(v12 + 8) = v30;
            if ( v18 )
              goto LABEL_143;
          }
          else if ( v24 == 5 )
          {
            v79 = (_QWORD *)operator new(0x980u);
            sub_11F4340(v79, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = v79;
            *(_QWORD *)(v12 + 8) = v79;
            if ( v18 )
              goto LABEL_143;
          }
          else
          {
            v58 = (_QWORD *)operator new(0x1378u);
            sub_121FCF0(v58, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = v58;
            *(_QWORD *)(v12 + 8) = v58;
            if ( v18 )
              goto LABEL_143;
          }
          break;
      }
      return result;
    case 0x10:
      v43 = (_QWORD *)operator new(0x950u);
      sub_12C90D0(v43, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v43;
      *(_QWORD *)(v12 + 8) = v43;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x11:
      v52 = (_QWORD *)operator new(0x1378u);
      sub_1232070(v52, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v52;
      *(_QWORD *)(v12 + 8) = v52;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x13:
      v53 = (_QWORD *)operator new(0x1398u);
      sub_1292D20(v53, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v53;
      *(_QWORD *)(v12 + 8) = v53;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x14:
      v44 = (_QWORD *)operator new(0x958u);
      sub_1168900(v44, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v44;
      *(_QWORD *)(v12 + 8) = v44;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x15:
      v45 = (_QWORD *)operator new(0xA08u);
      sub_11E1F00(v45, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v45;
      *(_QWORD *)(v12 + 8) = v45;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x17:
      if ( *(_DWORD *)(a3 + 32) == 51 )
      {
        v71 = (_QWORD *)operator new(0x13A8u);
        sub_123DF20(v71, a1, a3, a2);
        v18 = *(_QWORD *)(v12 + 8);
        result = v71;
        *(_QWORD *)(v12 + 8) = v71;
        if ( v18 )
          goto LABEL_143;
      }
      else
      {
        if ( sub_10D90C0(a2, (unsigned __int8 (__fastcall *)(_QWORD))sub_12CCC70)
          || sub_10D90C0(a2, (unsigned __int8 (__fastcall *)(_QWORD))sub_12CCCB0) )
        {
          v46 = (_QWORD *)operator new(0x13A8u);
          sub_1176DD0(v46, a1, a3, a2);
          result = v46;
        }
        else
        {
          v75 = (_QWORD *)operator new(0x13A8u);
          sub_116C940(v75, a1, a3, a2);
          result = v75;
        }
        v18 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v12 + 8) = result;
        if ( v18 )
          goto LABEL_143;
      }
      return result;
    case 0x18:
      v47 = (_QWORD *)operator new(0x13B8u);
      sub_12AEF90(v47, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v47;
      *(_QWORD *)(v12 + 8) = v47;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x19:
      v48 = (_QWORD *)operator new(0x13B8u);
      sub_12AEFC0(v48, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v48;
      *(_QWORD *)(v12 + 8) = v48;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x20:
    case 0x21:
      v49 = (_QWORD *)operator new(0x13A8u);
      sub_116C940(v49, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v49;
      *(_QWORD *)(v12 + 8) = v49;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x23:
      v50 = (_QWORD *)operator new(0x1390u);
      sub_1261490(v50, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v50;
      *(_QWORD *)(v12 + 8) = v50;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x26:
    case 0x29:
      v51 = (_QWORD *)operator new(0x960u);
      sub_124F970(v51, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v51;
      *(_QWORD *)(v12 + 8) = v51;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x27:
      v32 = (_QWORD *)operator new(0x1438u);
      sub_129E9F0(v32, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = v32;
      *(_QWORD *)(v12 + 8) = v32;
      if ( v18 )
      {
LABEL_143:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18);
        return *(_QWORD **)(v12 + 8);
      }
      return result;
    default:
      switch ( *(_DWORD *)(a3 + 32) )
      {
        case 7:
          v66 = (_QWORD *)operator new(0x1388u);
          sub_117D950(v66, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v66;
          *(_QWORD *)(v12 + 8) = v66;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0xA:
          v65 = (_QWORD *)operator new(0x1378u);
          sub_11D5FC0(v65, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v65;
          *(_QWORD *)(v12 + 8) = v65;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0xC:
          v64 = (_QWORD *)operator new(0x1420u);
          sub_124D400(v64, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v64;
          *(_QWORD *)(v12 + 8) = v64;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x14:
          v63 = (_QWORD *)operator new(0x1378u);
          sub_127FCF0(v63, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v63;
          *(_QWORD *)(v12 + 8) = v63;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x1B:
        case 0x1C:
          v62 = (_QWORD *)operator new(0x13D0u);
          sub_11877D0(v62, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v62;
          *(_QWORD *)(v12 + 8) = v62;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x21:
          v61 = (_QWORD *)operator new(0x950u);
          sub_12B6100(v61, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v61;
          *(_QWORD *)(v12 + 8) = v61;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x22:
          v60 = (_QWORD *)operator new(0x950u);
          sub_12B6380(v60, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v60;
          *(_QWORD *)(v12 + 8) = v60;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x27:
          v69 = (_QWORD *)operator new(0x950u);
          sub_12C5610(v69, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v69;
          *(_QWORD *)(v12 + 8) = v69;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x32:
        case 0x33:
          v68 = (_QWORD *)operator new(0x960u);
          sub_12B3480(v68, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v68;
          *(_QWORD *)(v12 + 8) = v68;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x36:
          v25 = (_QWORD *)operator new(0x1378u);
          sub_121FCF0(v25, a1, a3, a2);
          *v25 = off_2C35F20;
          v18 = *(_QWORD *)(v12 + 8);
          result = v25;
          *(_QWORD *)(v12 + 8) = v25;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x37:
        case 0x38:
          v67 = (_QWORD *)operator new(0x950u);
          sub_12C4140(v67, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v67;
          *(_QWORD *)(v12 + 8) = v67;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x3B:
          v59 = (_QWORD *)operator new(0x1390u);
          sub_12B86E0(v59, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = v59;
          *(_QWORD *)(v12 + 8) = v59;
          if ( v18 )
            goto LABEL_143;
          break;
        default:
          if ( (unsigned __int8)sub_117F4A0(a3) )
          {
            v81 = (_QWORD *)operator new(0x13D0u);
            sub_11877D0(v81, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = v81;
            *(_QWORD *)(v12 + 8) = v81;
            if ( v18 )
              goto LABEL_143;
          }
          else
          {
            v26 = *(_DWORD *)(a3 + 52);
            if ( v26 == 3 )
            {
              v31 = (_QWORD *)operator new(0x1378u);
              sub_121FCF0(v31, a1, a3, a2);
              *v31 = off_2C3B350;
              v18 = *(_QWORD *)(v12 + 8);
              result = v31;
              *(_QWORD *)(v12 + 8) = v31;
              if ( v18 )
                goto LABEL_143;
            }
            else if ( *(_DWORD *)(a3 + 40) == 1 && v26 == 5 )
            {
              v83 = (_QWORD *)operator new(0xF58u);
              sub_11F44B0(v83, a1, a3, a2);
              v18 = *(_QWORD *)(v12 + 8);
              result = v83;
              *(_QWORD *)(v12 + 8) = v83;
              if ( v18 )
                goto LABEL_143;
            }
            else if ( v26 == 5 )
            {
              v82 = (_QWORD *)operator new(0x980u);
              sub_11F4340(v82, a1, a3, a2);
              v18 = *(_QWORD *)(v12 + 8);
              result = v82;
              *(_QWORD *)(v12 + 8) = v82;
              if ( v18 )
                goto LABEL_143;
            }
            else
            {
              v70 = (_QWORD *)operator new(0x1378u);
              sub_121FCF0(v70, a1, a3, a2);
              v18 = *(_QWORD *)(v12 + 8);
              result = v70;
              *(_QWORD *)(v12 + 8) = v70;
              if ( v18 )
                goto LABEL_143;
            }
          }
          break;
      }
      return result;
  }
  return result;
}
