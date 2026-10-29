_QWORD *__fastcall sub_10D2F60(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+8h] [rbp-60h]
  __int64 v34; // [rsp+8h] [rbp-60h]
  _QWORD *v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  __int64 v37; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+8h] [rbp-60h]
  __int64 v39; // [rsp+8h] [rbp-60h]
  __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+8h] [rbp-60h]
  __int64 v45; // [rsp+8h] [rbp-60h]
  __int64 v46; // [rsp+8h] [rbp-60h]
  __int64 v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  __int64 v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+8h] [rbp-60h]
  __int64 v52; // [rsp+8h] [rbp-60h]
  __int64 v53; // [rsp+8h] [rbp-60h]
  __int64 v54; // [rsp+8h] [rbp-60h]
  __int64 v55; // [rsp+8h] [rbp-60h]
  __int64 v56; // [rsp+8h] [rbp-60h]
  __int64 v57; // [rsp+8h] [rbp-60h]
  __int64 v58; // [rsp+8h] [rbp-60h]
  __int64 v59; // [rsp+8h] [rbp-60h]
  __int64 v60; // [rsp+8h] [rbp-60h]
  __int64 v61; // [rsp+8h] [rbp-60h]
  __int64 v62; // [rsp+8h] [rbp-60h]
  __int64 v63; // [rsp+8h] [rbp-60h]
  __int64 v64; // [rsp+8h] [rbp-60h]
  __int64 v65; // [rsp+8h] [rbp-60h]
  __int64 v66; // [rsp+8h] [rbp-60h]
  __int64 v67; // [rsp+8h] [rbp-60h]
  __int64 v68; // [rsp+8h] [rbp-60h]
  __int64 v69; // [rsp+8h] [rbp-60h]
  __int64 v70; // [rsp+8h] [rbp-60h]
  __int64 v71; // [rsp+8h] [rbp-60h]
  __int64 v72; // [rsp+8h] [rbp-60h]
  __int64 v73; // [rsp+8h] [rbp-60h]
  __int64 v74; // [rsp+8h] [rbp-60h]
  __int64 v75; // [rsp+8h] [rbp-60h]
  __int64 v76; // [rsp+8h] [rbp-60h]
  __int64 v77; // [rsp+8h] [rbp-60h]
  __int64 v78; // [rsp+8h] [rbp-60h]
  __int64 v79; // [rsp+8h] [rbp-60h]
  __int64 v80; // [rsp+8h] [rbp-60h]
  __int64 v81; // [rsp+8h] [rbp-60h]
  __int64 v82; // [rsp+8h] [rbp-60h]
  __int64 v83; // [rsp+8h] [rbp-60h]
  __int64 *v84; // [rsp+10h] [rbp-58h]
  _QWORD *v85; // [rsp+18h] [rbp-50h]
  __int64 *v86[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(const void **)a3;
  v5 = *(_QWORD *)(a3 + 8);
  v6 = sub_2220DF0(*(_QWORD *)a3, v5);
  v7 = (unsigned int)sub_2220F70(a1 + 1176, v4, v5, v6);
  v10 = v7;
  v11 = (__int64 *)(*(_QWORD *)(a1 + 1176) + 8 * v7);
  if ( !*v11 )
  {
LABEL_6:
    v84 = v11;
    v14 = sub_220C370(v5 + 17, 8, v7, v8, v11, v9);
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
    v17 = sub_2221390(a1 + 1176, v10);
    sub_10D2F20(v86, (__int64 *)(*(_QWORD *)(a1 + 1176) + 8LL * v17), 0);
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
  sub_10D2F20(v86, v11, 0);
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
      v33 = operator new(0x1010u);
      sub_11D08B0(v33, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v33;
      *(_QWORD *)(v12 + 8) = v33;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 2:
      v34 = operator new(0x1378u);
      sub_11D89A0(v34, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v34;
      *(_QWORD *)(v12 + 8) = v34;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 3:
      if ( (unsigned int)(*(_DWORD *)(a3 + 32) - 21) > 3 )
      {
        v73 = operator new(0x1378u);
        sub_11E7150(v73, a1, a3, a2);
        v18 = *(_QWORD *)(v12 + 8);
        result = (_QWORD *)v73;
        *(_QWORD *)(v12 + 8) = v73;
        if ( v18 )
          goto LABEL_143;
      }
      else
      {
        v35 = (_QWORD *)operator new(0x1378u);
        sub_11E7150(v35, a1, a3, a2);
        result = v35;
        *v35 = off_2C18478;
        v18 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v12 + 8) = v35;
        if ( v18 )
          goto LABEL_143;
      }
      return result;
    case 4:
      v36 = operator new(0x950u);
      sub_11ECE20(v36, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v36;
      *(_QWORD *)(v12 + 8) = v36;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 7:
    case 0x1A:
      v19 = *(_DWORD *)(a3 + 32);
      if ( v19 == 12 )
      {
        v72 = operator new(0x1420u);
        sub_12296C0(v72, a1, a3, a2);
        v18 = *(_QWORD *)(v12 + 8);
        result = (_QWORD *)v72;
        *(_QWORD *)(v12 + 8) = v72;
        if ( v18 )
          goto LABEL_143;
        return result;
      }
      if ( *(_DWORD *)(a3 + 40) != 7 )
        goto LABEL_23;
      v27 = j__strlen(&byte_22CD811);
      v28 = (const void *)sub_2293970(a3);
      if ( v27 == v29 && (!v27 || !memcmp(v28, &byte_22CD811, v27)) )
      {
        v78 = operator new(0x13B0u);
        sub_124BE80(v78, a1, a3, a2);
        v18 = *(_QWORD *)(v12 + 8);
        result = (_QWORD *)v78;
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
            v80 = operator new(0x1390u);
            sub_12949A0(v80, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = (_QWORD *)v80;
            *(_QWORD *)(v12 + 8) = v80;
            if ( v18 )
              goto LABEL_143;
          }
          else if ( *(_DWORD *)(a3 + 48) == 49 || *(_DWORD *)(a3 + 44) == 39 )
          {
            v77 = operator new(0x1438u);
            sub_127ACB0(v77, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = (_QWORD *)v77;
            *(_QWORD *)(v12 + 8) = v77;
            if ( v18 )
              goto LABEL_143;
          }
          else
          {
            v74 = operator new(0x1390u);
            sub_1245A40(v74, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = (_QWORD *)v74;
            *(_QWORD *)(v12 + 8) = v74;
            if ( v18 )
              goto LABEL_143;
          }
        }
        else
        {
          v37 = operator new(0x1390u);
          sub_12A2AF0(v37, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v37;
          *(_QWORD *)(v12 + 8) = v37;
          if ( v18 )
            goto LABEL_143;
        }
      }
      break;
    case 0xA:
      v38 = operator new(0x1390u);
      sub_1249290(v38, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v38;
      *(_QWORD *)(v12 + 8) = v38;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0xB:
      v39 = operator new(0x1378u);
      sub_1276620(v39, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v39;
      *(_QWORD *)(v12 + 8) = v39;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0xC:
      v40 = operator new(0x1378u);
      sub_1281030(v40, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v40;
      *(_QWORD *)(v12 + 8) = v40;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0xD:
      v41 = operator new(0x1378u);
      sub_128CD00(v41, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v41;
      *(_QWORD *)(v12 + 8) = v41;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0xE:
      v42 = operator new(0x950u);
      sub_1292C30(v42, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v42;
      *(_QWORD *)(v12 + 8) = v42;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0xF:
      switch ( *(_DWORD *)(a3 + 48) )
      {
        case 0:
        case 0x1B:
          v20 = j__strlen(&byte_22CD811);
          v21 = (__int64 *)sub_2193E80(a2, 1916, &byte_22CD811, v20);
          v86[1] = v22;
          v86[0] = v21;
          v23 = j__strlen("bfd");
          if ( (unsigned __int8)sub_2222600(v86, "bfd", v23) )
          {
            v57 = operator new(0x1378u);
            sub_11AD530(v57, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = (_QWORD *)v57;
            *(_QWORD *)(v12 + 8) = v57;
            if ( v18 )
              goto LABEL_143;
          }
          else
          {
            v76 = operator new(0xF98u);
            sub_1266080(v76, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = (_QWORD *)v76;
            *(_QWORD *)(v12 + 8) = v76;
            if ( v18 )
              goto LABEL_143;
          }
          break;
        case 1:
          v56 = operator new(0x1020u);
          sub_1255970(v56, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v56;
          *(_QWORD *)(v12 + 8) = v56;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x1C:
          v55 = operator new(0x1378u);
          sub_11AD530(v55, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v55;
          *(_QWORD *)(v12 + 8) = v55;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x1D:
          v54 = operator new(0x1378u);
          sub_11BE3F0(v54, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v54;
          *(_QWORD *)(v12 + 8) = v54;
          if ( v18 )
            goto LABEL_143;
          break;
        default:
          v24 = *(_DWORD *)(a3 + 52);
          if ( v24 == 3 )
          {
            v30 = (_QWORD *)operator new(0x1378u);
            sub_11FBFB0(v30, a1, a3, a2);
            *v30 = off_2C11350;
            v18 = *(_QWORD *)(v12 + 8);
            result = v30;
            *(_QWORD *)(v12 + 8) = v30;
            if ( v18 )
              goto LABEL_143;
          }
          else if ( v24 == 5 )
          {
            v79 = operator new(0x980u);
            sub_11D0600(v79, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = (_QWORD *)v79;
            *(_QWORD *)(v12 + 8) = v79;
            if ( v18 )
              goto LABEL_143;
          }
          else
          {
            v58 = operator new(0x1378u);
            sub_11FBFB0(v58, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = (_QWORD *)v58;
            *(_QWORD *)(v12 + 8) = v58;
            if ( v18 )
              goto LABEL_143;
          }
          break;
      }
      return result;
    case 0x10:
      v43 = operator new(0x950u);
      sub_12A5390(v43, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v43;
      *(_QWORD *)(v12 + 8) = v43;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x11:
      v52 = operator new(0x1378u);
      sub_120E330(v52, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v52;
      *(_QWORD *)(v12 + 8) = v52;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x13:
      v53 = operator new(0x1398u);
      sub_126EFE0(v53, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v53;
      *(_QWORD *)(v12 + 8) = v53;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x14:
      v44 = operator new(0x958u);
      sub_1144BC0(v44, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v44;
      *(_QWORD *)(v12 + 8) = v44;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x15:
      v45 = operator new(0xA08u);
      sub_11BE1C0(v45, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v45;
      *(_QWORD *)(v12 + 8) = v45;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x17:
      if ( *(_DWORD *)(a3 + 32) == 51 )
      {
        v71 = operator new(0x13A8u);
        sub_121A1E0(v71, a1, a3, a2);
        v18 = *(_QWORD *)(v12 + 8);
        result = (_QWORD *)v71;
        *(_QWORD *)(v12 + 8) = v71;
        if ( v18 )
          goto LABEL_143;
      }
      else
      {
        if ( sub_10B5380(a2, (unsigned __int8 (__fastcall *)(_QWORD))sub_12A8F30)
          || sub_10B5380(a2, (unsigned __int8 (__fastcall *)(_QWORD))sub_12A8F70) )
        {
          v46 = operator new(0x13A8u);
          sub_1153090(v46, a1, a3, a2);
          result = (_QWORD *)v46;
        }
        else
        {
          v75 = operator new(0x13A8u);
          sub_1148C00(v75, a1, a3, a2);
          result = (_QWORD *)v75;
        }
        v18 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v12 + 8) = result;
        if ( v18 )
          goto LABEL_143;
      }
      return result;
    case 0x18:
      v47 = operator new(0x13B8u);
      sub_128B250(v47, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v47;
      *(_QWORD *)(v12 + 8) = v47;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x19:
      v48 = operator new(0x13B8u);
      sub_128B280(v48, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v48;
      *(_QWORD *)(v12 + 8) = v48;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x20:
    case 0x21:
      v49 = operator new(0x13A8u);
      sub_1148C00(v49, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v49;
      *(_QWORD *)(v12 + 8) = v49;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x23:
      v50 = operator new(0x1390u);
      sub_123D750(v50, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v50;
      *(_QWORD *)(v12 + 8) = v50;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x26:
    case 0x29:
      v51 = operator new(0x960u);
      sub_122BC30(v51, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v51;
      *(_QWORD *)(v12 + 8) = v51;
      if ( v18 )
        goto LABEL_143;
      return result;
    case 0x27:
      v32 = operator new(0x1438u);
      sub_127ACB0(v32, a1, a3, a2);
      v18 = *(_QWORD *)(v12 + 8);
      result = (_QWORD *)v32;
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
          v66 = operator new(0x1388u);
          sub_1159C10(v66, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v66;
          *(_QWORD *)(v12 + 8) = v66;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0xA:
          v65 = operator new(0x1378u);
          sub_11B2280(v65, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v65;
          *(_QWORD *)(v12 + 8) = v65;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0xC:
          v64 = operator new(0x1420u);
          sub_12296C0(v64, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v64;
          *(_QWORD *)(v12 + 8) = v64;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x14:
          v63 = operator new(0x1378u);
          sub_125BFB0(v63, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v63;
          *(_QWORD *)(v12 + 8) = v63;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x1B:
        case 0x1C:
          v62 = operator new(0x13D0u);
          sub_1163A90(v62, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v62;
          *(_QWORD *)(v12 + 8) = v62;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x21:
          v61 = operator new(0x950u);
          sub_12923C0(v61, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v61;
          *(_QWORD *)(v12 + 8) = v61;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x22:
          v60 = operator new(0x950u);
          sub_1292640(v60, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v60;
          *(_QWORD *)(v12 + 8) = v60;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x27:
          v69 = operator new(0x950u);
          sub_12A18D0(v69, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v69;
          *(_QWORD *)(v12 + 8) = v69;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x32:
        case 0x33:
          v68 = operator new(0x960u);
          sub_128F740(v68, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v68;
          *(_QWORD *)(v12 + 8) = v68;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x36:
          v25 = (_QWORD *)operator new(0x1378u);
          sub_11FBFB0(v25, a1, a3, a2);
          *v25 = off_2C0BF20;
          v18 = *(_QWORD *)(v12 + 8);
          result = v25;
          *(_QWORD *)(v12 + 8) = v25;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x37:
        case 0x38:
          v67 = operator new(0x950u);
          sub_12A0400(v67, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v67;
          *(_QWORD *)(v12 + 8) = v67;
          if ( v18 )
            goto LABEL_143;
          break;
        case 0x3B:
          v59 = operator new(0x1390u);
          sub_12949A0(v59, a1, a3, a2);
          v18 = *(_QWORD *)(v12 + 8);
          result = (_QWORD *)v59;
          *(_QWORD *)(v12 + 8) = v59;
          if ( v18 )
            goto LABEL_143;
          break;
        default:
          if ( (unsigned __int8)sub_115B760(a3) )
          {
            v81 = operator new(0x13D0u);
            sub_1163A90(v81, a1, a3, a2);
            v18 = *(_QWORD *)(v12 + 8);
            result = (_QWORD *)v81;
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
              sub_11FBFB0(v31, a1, a3, a2);
              *v31 = off_2C11350;
              v18 = *(_QWORD *)(v12 + 8);
              result = v31;
              *(_QWORD *)(v12 + 8) = v31;
              if ( v18 )
                goto LABEL_143;
            }
            else if ( *(_DWORD *)(a3 + 40) == 1 && v26 == 5 )
            {
              v83 = operator new(0xF58u);
              sub_11D0770(v83, a1, a3, a2);
              v18 = *(_QWORD *)(v12 + 8);
              result = (_QWORD *)v83;
              *(_QWORD *)(v12 + 8) = v83;
              if ( v18 )
                goto LABEL_143;
            }
            else if ( v26 == 5 )
            {
              v82 = operator new(0x980u);
              sub_11D0600(v82, a1, a3, a2);
              v18 = *(_QWORD *)(v12 + 8);
              result = (_QWORD *)v82;
              *(_QWORD *)(v12 + 8) = v82;
              if ( v18 )
                goto LABEL_143;
            }
            else
            {
              v70 = operator new(0x1378u);
              sub_11FBFB0(v70, a1, a3, a2);
              v18 = *(_QWORD *)(v12 + 8);
              result = (_QWORD *)v70;
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

