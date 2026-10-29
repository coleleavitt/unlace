/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100039928
// Address: 0x0000000100039928

//----- (0000000100039928) ----------------------------------------------------
__int64 __fastcall sub_100039928(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int8x16x2_t a9)
{
  int16x4_t *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  int16x4_t *v18; // x20
  __int64 v19; // x19
  int16x4_t *v20; // x0
  __int64 v22; // x8
  int v23; // w9
  __int64 v24; // x22
  unsigned int v25; // w0
  unsigned int v26; // w19
  int v27; // w8
  int v28; // w0
  __int64 v30; // x22
  int v31; // w0
  int v32; // w19
  int v33; // w8
  int v34; // w0
  int v36; // w0
  int v38; // w0
  int v40; // w0
  __int64 v42; // x22
  int v43; // w0
  int v44; // w19
  int v45; // w8
  __int64 v46; // x22
  int v47; // w0
  int v48; // w19
  int v49; // w8
  __int64 v50; // x8
  int v51; // w9
  __int64 v52; // x22
  int v53; // w0
  int v54; // w19
  int v55; // w8
  int v56; // w0
  unsigned __int8 *v57; // x0
  int v58; // w0
  __int64 v60; // x21
  int v61; // w0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  __int64 v66; // x5
  __int64 v67; // x6
  __int64 v68; // x7
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  __int64 v73; // x5
  __int64 v74; // x6
  __int64 v75; // x7
  __int64 v76; // x20
  unsigned __int8 *v77; // x0
  int v78; // w8
  __int64 v79; // x21
  int v80; // w0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  __int64 v85; // x5
  __int64 v86; // x6
  __int64 v87; // x7
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  __int64 v92; // x5
  __int64 v93; // x6
  __int64 v94; // x7
  __int64 v95; // x21
  int v96; // w0
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  __int64 v101; // x5
  __int64 v102; // x6
  __int64 v103; // x7
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  __int64 v108; // x5
  __int64 v109; // x6
  __int64 v110; // x7
  int v111; // w0
  bool v113; // zf
  __int64 v114; // x8
  __int64 v115; // x22
  int v116; // w0
  int v117; // w19
  int v118; // w8
  unsigned __int8 *v119; // x0
  unsigned __int8 *v120; // x0
  char v121; // w21
  int v122; // w8
  int v123; // w8
  int v124; // w0
  int v125; // w0
  int v126; // w0
  int v127; // w8
  _Unwind_Exception *v128; // x0
  int v129; // w1
  int16x4_t v130; // [xsp+8h] [xbp-68h] BYREF
  __int64 v131; // [xsp+10h] [xbp-60h] BYREF
  __int64 v132; // [xsp+18h] [xbp-58h]
  __int64 v133; // [xsp+20h] [xbp-50h]
  unsigned __int8 v134[32]; // [xsp+28h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]
  int8x16x2_t v136; // 0:q0.32
  int8x16x2_t v137; // 0:q0.32
  int8x16x2_t v138; // 0:q0.32
  int8x16x2_t v139; // 0:q0.32
  int8x16x2_t v140; // 0:q0.32
  int8x16x2_t v141; // 0:q0.32
  int8x16x2_t v142; // 0:q0.32

  if ( (unsigned int)(a2 - 176) > 0x21 )
  {
LABEL_311:
    if ( under_debugger != 1 )
      goto LABEL_313;
    goto LABEL_312;
  }
  switch ( (int)a2 )
  {
    case 176:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v10 = (int16x4_t *)deref_idcv((unsigned __int8 *)(*a1 + 32 * a1[1] - 32), 2);
      v18 = v10;
      if ( v10->i8[0] == 7 )
      {
        v19 = idcv_string((unsigned __int8 *)&v130, v136, v11, v12, v13, v14, v15, v16, v17);
        if ( (_DWORD)v19 )
          goto LABEL_168;
        sub_100038E3C(&v18[1], (__int64)&v131);
      }
      else
      {
        sub_10003B02C(v10, &v130);
      }
      v19 = 0;
LABEL_168:
      if ( v130.u8[0] == 5 )
        goto LABEL_292;
      if ( v130.u8[0] == 7 )
        goto LABEL_170;
      return v19;
    case 177:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v95 = *a1 + 32 * a1[1];
      v96 = sub_10003B280((int16x4_t *)(v95 - 32), &v130);
      if ( v96 <= 5 )
      {
        switch ( v96 )
        {
          case 2:
            goto LABEL_256;
          case 3:
            v126 = eadd((unsigned __int16 *)(v95 - 24), (unsigned __int16 *)&v131, (int16x4_t *)(v95 - 24), 1, v141);
            v19 = 0;
            if ( v126 > 3 )
            {
              if ( v126 != 5 && v126 != 4 )
                goto LABEL_295;
              goto LABEL_294;
            }
            if ( v126 != 1 )
            {
              if ( v126 != 2 )
                goto LABEL_295;
              goto LABEL_294;
            }
            break;
          case 5:
            v19 = sub_10003EC6C((unsigned __int8 *)(v95 - 32), (__int64)&v130);
            if ( (_DWORD)v19 )
              goto LABEL_295;
            break;
        }
      }
      else
      {
        if ( v96 <= 7 )
        {
          if ( v96 != 6 )
          {
            v19 = idcv_int64((unsigned __int8 *)(v95 - 32), v141, v97, v98, v99, v100, v101, v102, v103);
            if ( !(_DWORD)v19 )
            {
              v19 = idcv_int64((unsigned __int8 *)&v130, v142, v104, v105, v106, v107, v108, v109, v110);
              if ( !(_DWORD)v19 )
                goto LABEL_256;
            }
LABEL_295:
            v127 = v130.u8[0];
            if ( v130.u8[0] != 5 )
            {
LABEL_296:
              if ( v127 == 7 )
LABEL_170:
                sub_100006678(&v131);
              return v19;
            }
            goto LABEL_292;
          }
LABEL_294:
          v19 = set_qerrno();
          goto LABEL_295;
        }
        if ( v96 == 8 )
          goto LABEL_294;
        if ( v96 == 9 )
        {
LABEL_256:
          *(_QWORD *)(v95 - 24) -= v131;
          v19 = 0;
          goto LABEL_295;
        }
      }
      v19 = 0;
      goto LABEL_295;
    case 178:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v60 = *a1 + 32 * a1[1];
      v61 = sub_10003B280((int16x4_t *)(v60 - 32), &v130);
      if ( v61 > 5 )
      {
        if ( v61 <= 7 )
        {
          if ( v61 != 6 )
          {
            v19 = idcv_int64((unsigned __int8 *)(v60 - 32), v137, v62, v63, v64, v65, v66, v67, v68);
            if ( !(_DWORD)v19 )
            {
              v19 = idcv_int64((unsigned __int8 *)&v130, v138, v69, v70, v71, v72, v73, v74, v75);
              if ( !(_DWORD)v19 )
                goto LABEL_248;
            }
            goto LABEL_291;
          }
          goto LABEL_290;
        }
        if ( v61 != 8 )
        {
          if ( v61 == 9 )
            goto LABEL_248;
LABEL_269:
          v19 = 0;
          goto LABEL_291;
        }
        goto LABEL_290;
      }
      switch ( v61 )
      {
        case 2:
LABEL_248:
          *(_QWORD *)(v60 - 24) *= v131;
          v19 = 0;
          break;
        case 3:
          v124 = emul(v60 - 24, (__int64)&v131, v60 - 24);
          v19 = 0;
          if ( v124 <= 3 )
          {
            if ( v124 != 1 )
            {
              if ( v124 != 2 )
                break;
              goto LABEL_290;
            }
            goto LABEL_269;
          }
          if ( v124 == 5 || v124 == 4 )
LABEL_290:
            v19 = set_qerrno();
          break;
        case 5:
          v19 = set_qerrno();
          if ( !(_DWORD)v19 )
            goto LABEL_269;
          break;
        default:
          goto LABEL_269;
      }
LABEL_291:
      v127 = v130.u8[0];
      if ( v130.u8[0] != 5 )
        goto LABEL_296;
      goto LABEL_292;
    case 179:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v79 = *a1 + 32 * a1[1];
      v80 = sub_10003B280((int16x4_t *)(v79 - 32), &v130);
      if ( v80 <= 5 )
      {
        if ( v80 == 2 )
          goto LABEL_251;
        if ( v80 != 3 )
        {
          if ( v80 != 5 )
            goto LABEL_253;
          v19 = set_qerrno();
          if ( !(_DWORD)v19 )
            goto LABEL_253;
          goto LABEL_285;
        }
        v125 = ediv(v79 - 24, (__int16 *)&v131, v79 - 24);
        v19 = 0;
        if ( v125 > 3 )
        {
          if ( v125 != 5 && v125 != 4 )
            goto LABEL_285;
        }
        else
        {
          if ( v125 == 1 )
            goto LABEL_253;
          if ( v125 != 2 )
            goto LABEL_285;
        }
      }
      else if ( v80 > 7 )
      {
        if ( v80 != 8 )
        {
          if ( v80 != 9 )
          {
LABEL_253:
            v19 = 0;
            goto LABEL_285;
          }
          goto LABEL_251;
        }
      }
      else if ( v80 != 6 )
      {
        v19 = idcv_int64((unsigned __int8 *)(v79 - 32), v139, v81, v82, v83, v84, v85, v86, v87);
        if ( !(_DWORD)v19 )
        {
          v19 = idcv_int64((unsigned __int8 *)&v130, v140, v88, v89, v90, v91, v92, v93, v94);
          if ( !(_DWORD)v19 )
          {
LABEL_251:
            if ( v131 )
            {
              *(__int64 *)(v79 - 24) /= v131;
              goto LABEL_253;
            }
            goto LABEL_284;
          }
        }
LABEL_285:
        v127 = v130.u8[0];
        if ( v130.u8[0] != 5 )
          goto LABEL_296;
LABEL_292:
        sub_10003307C(v131, (unsigned __int8 *)&v130);
        return v19;
      }
LABEL_284:
      v19 = set_qerrno();
      goto LABEL_285;
    case 180:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v19 = *a1 + 32 * a1[1];
      v56 = sub_10003B280((int16x4_t *)(v19 - 32), &v130);
      if ( (v56 == 2 || v56 == 9) && v131 )
      {
        *(__int64 *)(v19 - 24) %= v131;
        v121 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v121 = 0;
      }
      v122 = v130.u8[0];
      if ( v130.u8[0] != 5 )
        goto LABEL_259;
      goto LABEL_200;
    case 181:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v19 = *a1 + 32 * a1[1];
      v58 = sub_10003B280((int16x4_t *)(v19 - 32), &v130);
      if ( v58 == 2 || v58 == 9 )
      {
        *(_QWORD *)(v19 - 24) = (*(_QWORD *)(v19 - 24) | v131) != 0;
        v121 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v121 = 0;
      }
      v122 = v130.u8[0];
      if ( v130.u8[0] == 5 )
        goto LABEL_200;
      goto LABEL_259;
    case 182:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v19 = *a1 + 32 * a1[1];
      v111 = sub_10003B280((int16x4_t *)(v19 - 32), &v130);
      if ( v111 == 2 || v111 == 9 )
      {
        if ( *(_QWORD *)(v19 - 24) )
          v113 = v131 == 0;
        else
          v113 = 1;
        v114 = !v113;
        *(_QWORD *)(v19 - 24) = v114;
        v121 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v121 = 0;
      }
      v122 = v130.u8[0];
      if ( v130.u8[0] == 5 )
        goto LABEL_200;
      goto LABEL_259;
    case 183:
      v76 = *a1 + 32 * a1[1];
      v77 = deref_idcv((unsigned __int8 *)(v76 - 32), 0);
      if ( v77 && *v77 == 5 )
      {
        sub_1000329B0((unsigned __int8 *)(v76 - 32));
        *(_QWORD *)(v76 - 24) = 1;
      }
      v78 = *(unsigned __int8 *)(v76 - 32);
      if ( v78 != 9 && v78 != 2 )
        goto LABEL_162;
      v19 = 0;
      *(_QWORD *)(v76 - 24) = *(_QWORD *)(v76 - 24) == 0;
      return v19;
    case 184:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v19 = *a1 + 32 * a1[1];
      v38 = sub_10003B280((int16x4_t *)(v19 - 32), &v130);
      if ( v38 == 2 || v38 == 9 )
      {
        *(_QWORD *)(v19 - 24) |= v131;
        v121 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v121 = 0;
      }
      v122 = v130.u8[0];
      if ( v130.u8[0] == 5 )
        goto LABEL_200;
      goto LABEL_259;
    case 185:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v19 = *a1 + 32 * a1[1];
      v28 = sub_10003B280((int16x4_t *)(v19 - 32), &v130);
      if ( v28 == 2 || v28 == 9 )
      {
        *(_QWORD *)(v19 - 24) &= v131;
        v121 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v121 = 0;
      }
      v122 = v130.u8[0];
      if ( v130.u8[0] == 5 )
        goto LABEL_200;
      goto LABEL_259;
    case 186:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v19 = *a1 + 32 * a1[1];
      v36 = sub_10003B280((int16x4_t *)(v19 - 32), &v130);
      if ( v36 == 2 || v36 == 9 )
      {
        *(_QWORD *)(v19 - 24) ^= v131;
        v121 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v121 = 0;
      }
      v122 = v130.u8[0];
      if ( v130.u8[0] == 5 )
        goto LABEL_200;
      goto LABEL_259;
    case 187:
      v22 = *a1 + 32 * a1[1];
      v23 = *(unsigned __int8 *)(v22 - 32);
      if ( v23 != 9 && v23 != 2 )
        goto LABEL_162;
      v19 = 0;
      *(_QWORD *)(v22 - 24) = ~*(_QWORD *)(v22 - 24);
      return v19;
    case 188:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v19 = *a1 + 32 * a1[1];
      v34 = sub_10003B280((int16x4_t *)(v19 - 32), &v130);
      if ( v34 == 2 || v34 == 9 )
      {
        *(__int64 *)(v19 - 24) >>= v131;
        v121 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v121 = 0;
      }
      v122 = v130.u8[0];
      if ( v130.u8[0] == 5 )
        goto LABEL_200;
      goto LABEL_259;
    case 189:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v19 = *a1 + 32 * a1[1];
      v40 = sub_10003B280((int16x4_t *)(v19 - 32), &v130);
      if ( v40 == 2 || v40 == 9 )
      {
        *(_QWORD *)(v19 - 24) <<= v131;
        v121 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v121 = 0;
      }
      v122 = v130.u8[0];
      if ( v130.u8[0] == 5 )
      {
LABEL_200:
        sub_10003307C(v131, (unsigned __int8 *)&v130);
      }
      else
      {
LABEL_259:
        if ( v122 == 7 )
          sub_100006678(&v131);
      }
      if ( (v121 & 1) != 0 )
        return 0;
      return v19;
    case 190:
      v50 = *a1 + 32 * a1[1];
      v51 = *(unsigned __int8 *)(v50 - 32);
      if ( v51 == 2 || v51 == 9 )
      {
        v19 = 0;
        *(_QWORD *)(v50 - 24) = -*(_QWORD *)(v50 - 24);
        return v19;
      }
      if ( v51 != 3 )
      {
LABEL_162:
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return set_qerrno();
      }
      if ( !*(_WORD *)(v50 - 10) )
        return 0;
      v19 = 0;
      *(_WORD *)(v50 - 10) ^= 0x8000u;
      return v19;
    case 191:
      v57 = (unsigned __int8 *)(*a1 + 32 * a1[1] - 32);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return idcv_string(v57, a9, a2, a3, a4, a5, a6, a7, a8);
    case 200:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v52 = *a1 + 32 * a1[1];
      v53 = sub_10003B44C((int16x4_t *)(v52 - 32), &v130);
      if ( v52 == 32 )
      {
        if ( under_debugger != 1 )
LABEL_310:
          interr(2656);
LABEL_312:
        __break(1u);
LABEL_313:
        interr(1448);
        if ( v129 )
          sub_10000150C(v128);
        _Unwind_Resume(v128);
      }
      v54 = v53;
      v55 = *(unsigned __int8 *)(v52 - 32);
      if ( v55 == 5 )
      {
        sub_10003307C(*(_QWORD *)(v52 - 24), (unsigned __int8 *)(v52 - 32));
      }
      else if ( v55 == 7 )
      {
        sub_100006678((_QWORD *)(v52 - 24));
      }
      *(_BYTE *)(v52 - 32) = 2;
      *(_QWORD *)(v52 - 24) = 0;
      if ( v130.u8[0] == 5 )
      {
        sub_10003307C(v131, (unsigned __int8 *)&v130);
      }
      else if ( v130.u8[0] == 7 )
      {
        sub_100006678(&v131);
      }
      v130.i8[0] = 2;
      v131 = 0;
      *(_QWORD *)(v52 - 24) = v54 == 0;
      v123 = v130.u8[0];
      if ( v130.u8[0] == 5 )
      {
LABEL_240:
        sub_10003307C(v131, (unsigned __int8 *)&v130);
        return 0;
      }
LABEL_243:
      if ( v123 != 7 )
        return 0;
      sub_100006678(&v131);
      return 0;
    case 201:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v42 = *a1 + 32 * a1[1];
      v43 = sub_10003B44C((int16x4_t *)(v42 - 32), &v130);
      if ( v42 != 32 )
      {
        v44 = v43;
        v45 = *(unsigned __int8 *)(v42 - 32);
        if ( v45 == 5 )
        {
          sub_10003307C(*(_QWORD *)(v42 - 24), (unsigned __int8 *)(v42 - 32));
        }
        else if ( v45 == 7 )
        {
          sub_100006678((_QWORD *)(v42 - 24));
        }
        *(_BYTE *)(v42 - 32) = 2;
        *(_QWORD *)(v42 - 24) = 0;
        if ( v130.u8[0] == 5 )
        {
          sub_10003307C(v131, (unsigned __int8 *)&v130);
        }
        else if ( v130.u8[0] == 7 )
        {
          sub_100006678(&v131);
        }
        v130.i8[0] = 2;
        v131 = 0;
        *(_QWORD *)(v42 - 24) = v44 != 0;
        v123 = v130.u8[0];
        if ( v130.u8[0] == 5 )
          goto LABEL_240;
        goto LABEL_243;
      }
      if ( under_debugger != 1 )
        goto LABEL_310;
      goto LABEL_312;
    case 202:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v115 = *a1 + 32 * a1[1];
      v116 = sub_10003B44C((int16x4_t *)(v115 - 32), &v130);
      if ( v115 != 32 )
      {
        v117 = v116;
        v118 = *(unsigned __int8 *)(v115 - 32);
        if ( v118 == 5 )
        {
          sub_10003307C(*(_QWORD *)(v115 - 24), (unsigned __int8 *)(v115 - 32));
        }
        else if ( v118 == 7 )
        {
          sub_100006678((_QWORD *)(v115 - 24));
        }
        *(_BYTE *)(v115 - 32) = 2;
        *(_QWORD *)(v115 - 24) = 0;
        if ( v130.u8[0] == 5 )
        {
          sub_10003307C(v131, (unsigned __int8 *)&v130);
        }
        else if ( v130.u8[0] == 7 )
        {
          sub_100006678(&v131);
        }
        v130.i8[0] = 2;
        v131 = 0;
        *(_QWORD *)(v115 - 24) = v117 < 1;
        v123 = v130.u8[0];
        if ( v130.u8[0] == 5 )
          goto LABEL_240;
        goto LABEL_243;
      }
      if ( under_debugger != 1 )
        goto LABEL_310;
      goto LABEL_312;
    case 203:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v30 = *a1 + 32 * a1[1];
      v31 = sub_10003B44C((int16x4_t *)(v30 - 32), &v130);
      if ( v30 != 32 )
      {
        v32 = v31;
        v33 = *(unsigned __int8 *)(v30 - 32);
        if ( v33 == 5 )
        {
          sub_10003307C(*(_QWORD *)(v30 - 24), (unsigned __int8 *)(v30 - 32));
        }
        else if ( v33 == 7 )
        {
          sub_100006678((_QWORD *)(v30 - 24));
        }
        *(_BYTE *)(v30 - 32) = 2;
        *(_QWORD *)(v30 - 24) = 0;
        if ( v130.u8[0] == 5 )
        {
          sub_10003307C(v131, (unsigned __int8 *)&v130);
        }
        else if ( v130.u8[0] == 7 )
        {
          sub_100006678(&v131);
        }
        v130.i8[0] = 2;
        v131 = 0;
        *(_QWORD *)(v30 - 24) = v32 >= 0;
        v123 = v130.u8[0];
        if ( v130.u8[0] == 5 )
          goto LABEL_240;
        goto LABEL_243;
      }
      if ( under_debugger != 1 )
        goto LABEL_310;
      goto LABEL_312;
    case 204:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v24 = *a1 + 32 * a1[1];
      v25 = sub_10003B44C((int16x4_t *)(v24 - 32), &v130);
      if ( v24 != 32 )
      {
        v26 = v25;
        v27 = *(unsigned __int8 *)(v24 - 32);
        if ( v27 == 5 )
        {
          sub_10003307C(*(_QWORD *)(v24 - 24), (unsigned __int8 *)(v24 - 32));
        }
        else if ( v27 == 7 )
        {
          sub_100006678((_QWORD *)(v24 - 24));
        }
        *(_BYTE *)(v24 - 32) = 2;
        *(_QWORD *)(v24 - 24) = 0;
        if ( v130.u8[0] == 5 )
        {
          sub_10003307C(v131, (unsigned __int8 *)&v130);
        }
        else if ( v130.u8[0] == 7 )
        {
          sub_100006678(&v131);
        }
        v130.i8[0] = 2;
        v131 = 0;
        *(_QWORD *)(v24 - 24) = v26 >> 31;
        v123 = v130.u8[0];
        if ( v130.u8[0] == 5 )
          goto LABEL_240;
        goto LABEL_243;
      }
      if ( under_debugger != 1 )
        goto LABEL_310;
      goto LABEL_312;
    case 205:
      v130.i8[0] = 2;
      v132 = 0;
      v133 = 0;
      v131 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v130, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003E970(a1, (__int64)v134);
        sub_1000329B0(v134);
      }
      v46 = *a1 + 32 * a1[1];
      v47 = sub_10003B44C((int16x4_t *)(v46 - 32), &v130);
      if ( v46 != 32 )
      {
        v48 = v47;
        v49 = *(unsigned __int8 *)(v46 - 32);
        if ( v49 == 5 )
        {
          sub_10003307C(*(_QWORD *)(v46 - 24), (unsigned __int8 *)(v46 - 32));
        }
        else if ( v49 == 7 )
        {
          sub_100006678((_QWORD *)(v46 - 24));
        }
        *(_BYTE *)(v46 - 32) = 2;
        *(_QWORD *)(v46 - 24) = 0;
        if ( v130.u8[0] == 5 )
        {
          sub_10003307C(v131, (unsigned __int8 *)&v130);
        }
        else if ( v130.u8[0] == 7 )
        {
          sub_100006678(&v131);
        }
        v130.i8[0] = 2;
        v131 = 0;
        *(_QWORD *)(v46 - 24) = v48 > 0;
        v123 = v130.u8[0];
        if ( v130.u8[0] == 5 )
          goto LABEL_240;
        goto LABEL_243;
      }
      if ( under_debugger != 1 )
        goto LABEL_310;
      goto LABEL_312;
    case 206:
      v120 = (unsigned __int8 *)(*a1 + 32 * a1[1] - 32);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return idcv_long(v120, a9, a2, a3, a4, a5, a6, a7, a8);
    case 208:
      v20 = (int16x4_t *)(*a1 + 32 * a1[1] - 32);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return idcv_float(v20, a9);
    case 209:
      v119 = (unsigned __int8 *)(*a1 + 32 * a1[1] - 32);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return idcv_int64(v119, a9, a2, a3, a4, a5, a6, a7, a8);
    default:
      goto LABEL_311;
  }
}
// 10003A154: conditional instruction was optimized away because w0.4==7
// 10003A2FC: conditional instruction was optimized away because w0.4==7
// 10003A25C: conditional instruction was optimized away because w0.4==7
// 1000399E8: variable 'v136' is possibly undefined
// 1000399E8: variable 'v11' is possibly undefined
// 1000399E8: variable 'v12' is possibly undefined
// 1000399E8: variable 'v13' is possibly undefined
// 1000399E8: variable 'v14' is possibly undefined
// 1000399E8: variable 'v15' is possibly undefined
// 1000399E8: variable 'v16' is possibly undefined
// 1000399E8: variable 'v17' is possibly undefined
// 10003A15C: variable 'v137' is possibly undefined
// 10003A15C: variable 'v62' is possibly undefined
// 10003A15C: variable 'v63' is possibly undefined
// 10003A15C: variable 'v64' is possibly undefined
// 10003A15C: variable 'v65' is possibly undefined
// 10003A15C: variable 'v66' is possibly undefined
// 10003A15C: variable 'v67' is possibly undefined
// 10003A15C: variable 'v68' is possibly undefined
// 10003A16C: variable 'v138' is possibly undefined
// 10003A16C: variable 'v69' is possibly undefined
// 10003A16C: variable 'v70' is possibly undefined
// 10003A16C: variable 'v71' is possibly undefined
// 10003A16C: variable 'v72' is possibly undefined
// 10003A16C: variable 'v73' is possibly undefined
// 10003A16C: variable 'v74' is possibly undefined
// 10003A16C: variable 'v75' is possibly undefined
// 10003A264: variable 'v139' is possibly undefined
// 10003A264: variable 'v81' is possibly undefined
// 10003A264: variable 'v82' is possibly undefined
// 10003A264: variable 'v83' is possibly undefined
// 10003A264: variable 'v84' is possibly undefined
// 10003A264: variable 'v85' is possibly undefined
// 10003A264: variable 'v86' is possibly undefined
// 10003A264: variable 'v87' is possibly undefined
// 10003A274: variable 'v140' is possibly undefined
// 10003A274: variable 'v88' is possibly undefined
// 10003A274: variable 'v89' is possibly undefined
// 10003A274: variable 'v90' is possibly undefined
// 10003A274: variable 'v91' is possibly undefined
// 10003A274: variable 'v92' is possibly undefined
// 10003A274: variable 'v93' is possibly undefined
// 10003A274: variable 'v94' is possibly undefined
// 10003A304: variable 'v141' is possibly undefined
// 10003A304: variable 'v97' is possibly undefined
// 10003A304: variable 'v98' is possibly undefined
// 10003A304: variable 'v99' is possibly undefined
// 10003A304: variable 'v100' is possibly undefined
// 10003A304: variable 'v101' is possibly undefined
// 10003A304: variable 'v102' is possibly undefined
// 10003A304: variable 'v103' is possibly undefined
// 10003A314: variable 'v142' is possibly undefined
// 10003A314: variable 'v104' is possibly undefined
// 10003A314: variable 'v105' is possibly undefined
// 10003A314: variable 'v106' is possibly undefined
// 10003A314: variable 'v107' is possibly undefined
// 10003A314: variable 'v108' is possibly undefined
// 10003A314: variable 'v109' is possibly undefined
// 10003A314: variable 'v110' is possibly undefined
// 10003ADE0: variable 'v129' is possibly undefined
// 10003ADE8: variable 'v128' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
