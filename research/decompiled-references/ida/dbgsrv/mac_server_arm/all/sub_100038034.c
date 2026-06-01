/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100038034
// Address: 0x0000000100038034

//----- (0000000100038034) ----------------------------------------------------
__int64 __fastcall sub_100038034(
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
  __int64 v21; // x8
  int v22; // w9
  __int64 v23; // x22
  unsigned int v24; // w0
  unsigned int v25; // w19
  int v26; // w8
  int v27; // w0
  __int64 v29; // x22
  int v30; // w0
  int v31; // w19
  int v32; // w8
  int v33; // w0
  int v35; // w0
  int v37; // w0
  int v39; // w0
  __int64 v41; // x22
  int v42; // w0
  int v43; // w19
  int v44; // w8
  __int64 v45; // x22
  int v46; // w0
  int v47; // w19
  int v48; // w8
  __int64 v49; // x8
  int v50; // w9
  __int64 v51; // x22
  int v52; // w0
  int v53; // w19
  int v54; // w8
  int v55; // w0
  int v56; // w0
  __int64 v58; // x21
  int v59; // w0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x5
  __int64 v65; // x6
  __int64 v66; // x7
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  __int64 v71; // x5
  __int64 v72; // x6
  __int64 v73; // x7
  __int64 v74; // x20
  unsigned __int8 *v75; // x0
  int v76; // w8
  __int64 v77; // x21
  int v78; // w0
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  __int64 v83; // x5
  __int64 v84; // x6
  __int64 v85; // x7
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  __int64 v90; // x5
  __int64 v91; // x6
  __int64 v92; // x7
  __int64 v93; // x21
  int v94; // w0
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  __int64 v99; // x5
  __int64 v100; // x6
  __int64 v101; // x7
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  __int64 v106; // x5
  __int64 v107; // x6
  __int64 v108; // x7
  int v109; // w0
  bool v111; // zf
  __int64 v112; // x8
  __int64 v113; // x22
  int v114; // w0
  int v115; // w19
  int v116; // w8
  char v117; // w21
  int v118; // w8
  int v119; // w8
  int v120; // w0
  int v121; // w0
  int v122; // w0
  int v123; // w8
  _Unwind_Exception *v124; // x0
  int v125; // w1
  int16x4_t v126; // [xsp+8h] [xbp-68h] BYREF
  __int64 v127; // [xsp+10h] [xbp-60h] BYREF
  __int64 v128; // [xsp+18h] [xbp-58h]
  __int64 v129; // [xsp+20h] [xbp-50h]
  unsigned __int8 v130[32]; // [xsp+28h] [xbp-48h] BYREF
  int8x16x2_t v131; // 0:q0.32
  int8x16x2_t v132; // 0:q0.32
  int8x16x2_t v133; // 0:q0.32
  int8x16x2_t v134; // 0:q0.32
  int8x16x2_t v135; // 0:q0.32
  int8x16x2_t v136; // 0:q0.32
  int8x16x2_t v137; // 0:q0.32

  switch ( (int)a2 )
  {
    case 176:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v10 = (int16x4_t *)deref_idcv((unsigned __int8 *)(*a1 + 32 * a1[1] - 32), 2);
      v18 = v10;
      if ( v10->i8[0] == 7 )
      {
        v19 = idcv_string((unsigned __int8 *)&v126, v131, v11, v12, v13, v14, v15, v16, v17);
        if ( (_DWORD)v19 )
          goto LABEL_157;
        sub_100037568(&v18[1], (__int64)&v127);
      }
      else
      {
        sub_100039650(v10, &v126);
      }
      v19 = 0;
LABEL_157:
      if ( v126.u8[0] == 5 )
        goto LABEL_281;
      if ( v126.u8[0] == 7 )
        goto LABEL_159;
      return v19;
    case 177:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v93 = *a1 + 32 * a1[1];
      v94 = sub_100039890((int16x4_t *)(v93 - 32), &v126);
      if ( v94 <= 5 )
      {
        switch ( v94 )
        {
          case 2:
            goto LABEL_245;
          case 3:
            v122 = eadd((unsigned __int16 *)(v93 - 24), (unsigned __int16 *)&v127, (int16x4_t *)(v93 - 24), 1, v136);
            v19 = 0;
            if ( v122 > 3 )
            {
              if ( v122 != 5 && v122 != 4 )
                goto LABEL_284;
              goto LABEL_283;
            }
            if ( v122 != 1 )
            {
              if ( v122 != 2 )
                goto LABEL_284;
              goto LABEL_283;
            }
            break;
          case 5:
            v19 = sub_10003CDEC((unsigned __int8 *)(v93 - 32), (__int64)&v126);
            if ( (_DWORD)v19 )
              goto LABEL_284;
            break;
        }
      }
      else
      {
        if ( v94 <= 7 )
        {
          if ( v94 != 6 )
          {
            v19 = idcv_int64((unsigned __int8 *)(v93 - 32), v136, v95, v96, v97, v98, v99, v100, v101);
            if ( !(_DWORD)v19 )
            {
              v19 = idcv_int64((unsigned __int8 *)&v126, v137, v102, v103, v104, v105, v106, v107, v108);
              if ( !(_DWORD)v19 )
                goto LABEL_245;
            }
LABEL_284:
            v123 = v126.u8[0];
            if ( v126.u8[0] != 5 )
            {
LABEL_285:
              if ( v123 == 7 )
LABEL_159:
                sub_100006228(&v127);
              return v19;
            }
            goto LABEL_281;
          }
LABEL_283:
          v19 = set_qerrno();
          goto LABEL_284;
        }
        if ( v94 == 8 )
          goto LABEL_283;
        if ( v94 == 9 )
        {
LABEL_245:
          *(_QWORD *)(v93 - 24) -= v127;
          v19 = 0;
          goto LABEL_284;
        }
      }
      v19 = 0;
      goto LABEL_284;
    case 178:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v58 = *a1 + 32 * a1[1];
      v59 = sub_100039890((int16x4_t *)(v58 - 32), &v126);
      if ( v59 > 5 )
      {
        if ( v59 <= 7 )
        {
          if ( v59 != 6 )
          {
            v19 = idcv_int64((unsigned __int8 *)(v58 - 32), v132, v60, v61, v62, v63, v64, v65, v66);
            if ( !(_DWORD)v19 )
            {
              v19 = idcv_int64((unsigned __int8 *)&v126, v133, v67, v68, v69, v70, v71, v72, v73);
              if ( !(_DWORD)v19 )
                goto LABEL_237;
            }
            goto LABEL_280;
          }
          goto LABEL_279;
        }
        if ( v59 != 8 )
        {
          if ( v59 == 9 )
            goto LABEL_237;
LABEL_258:
          v19 = 0;
          goto LABEL_280;
        }
        goto LABEL_279;
      }
      switch ( v59 )
      {
        case 2:
LABEL_237:
          *(_QWORD *)(v58 - 24) *= v127;
          v19 = 0;
          break;
        case 3:
          v120 = emul(v58 - 24, (__int64)&v127, v58 - 24);
          v19 = 0;
          if ( v120 <= 3 )
          {
            if ( v120 != 1 )
            {
              if ( v120 != 2 )
                break;
              goto LABEL_279;
            }
            goto LABEL_258;
          }
          if ( v120 == 5 || v120 == 4 )
LABEL_279:
            v19 = set_qerrno();
          break;
        case 5:
          v19 = set_qerrno();
          if ( !(_DWORD)v19 )
            goto LABEL_258;
          break;
        default:
          goto LABEL_258;
      }
LABEL_280:
      v123 = v126.u8[0];
      if ( v126.u8[0] != 5 )
        goto LABEL_285;
      goto LABEL_281;
    case 179:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v77 = *a1 + 32 * a1[1];
      v78 = sub_100039890((int16x4_t *)(v77 - 32), &v126);
      if ( v78 <= 5 )
      {
        if ( v78 == 2 )
          goto LABEL_240;
        if ( v78 != 3 )
        {
          if ( v78 != 5 )
            goto LABEL_242;
          v19 = set_qerrno();
          if ( !(_DWORD)v19 )
            goto LABEL_242;
          goto LABEL_274;
        }
        v121 = ediv(v77 - 24, (__int16 *)&v127, v77 - 24);
        v19 = 0;
        if ( v121 > 3 )
        {
          if ( v121 != 5 && v121 != 4 )
            goto LABEL_274;
        }
        else
        {
          if ( v121 == 1 )
            goto LABEL_242;
          if ( v121 != 2 )
            goto LABEL_274;
        }
      }
      else if ( v78 > 7 )
      {
        if ( v78 != 8 )
        {
          if ( v78 != 9 )
          {
LABEL_242:
            v19 = 0;
            goto LABEL_274;
          }
          goto LABEL_240;
        }
      }
      else if ( v78 != 6 )
      {
        v19 = idcv_int64((unsigned __int8 *)(v77 - 32), v134, v79, v80, v81, v82, v83, v84, v85);
        if ( !(_DWORD)v19 )
        {
          v19 = idcv_int64((unsigned __int8 *)&v126, v135, v86, v87, v88, v89, v90, v91, v92);
          if ( !(_DWORD)v19 )
          {
LABEL_240:
            if ( v127 )
            {
              *(__int64 *)(v77 - 24) /= v127;
              goto LABEL_242;
            }
            goto LABEL_273;
          }
        }
LABEL_274:
        v123 = v126.u8[0];
        if ( v126.u8[0] != 5 )
          goto LABEL_285;
LABEL_281:
        sub_100031978(v127, (unsigned __int8 *)&v126);
        return v19;
      }
LABEL_273:
      v19 = set_qerrno();
      goto LABEL_274;
    case 180:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v19 = *a1 + 32 * a1[1];
      v55 = sub_100039890((int16x4_t *)(v19 - 32), &v126);
      if ( (v55 == 2 || v55 == 9) && v127 )
      {
        *(__int64 *)(v19 - 24) %= v127;
        v117 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v117 = 0;
      }
      v118 = v126.u8[0];
      if ( v126.u8[0] != 5 )
        goto LABEL_248;
      goto LABEL_189;
    case 181:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v19 = *a1 + 32 * a1[1];
      v56 = sub_100039890((int16x4_t *)(v19 - 32), &v126);
      if ( v56 == 2 || v56 == 9 )
      {
        *(_QWORD *)(v19 - 24) = (*(_QWORD *)(v19 - 24) | v127) != 0;
        v117 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v117 = 0;
      }
      v118 = v126.u8[0];
      if ( v126.u8[0] == 5 )
        goto LABEL_189;
      goto LABEL_248;
    case 182:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v19 = *a1 + 32 * a1[1];
      v109 = sub_100039890((int16x4_t *)(v19 - 32), &v126);
      if ( v109 == 2 || v109 == 9 )
      {
        if ( *(_QWORD *)(v19 - 24) )
          v111 = v127 == 0;
        else
          v111 = 1;
        v112 = !v111;
        *(_QWORD *)(v19 - 24) = v112;
        v117 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v117 = 0;
      }
      v118 = v126.u8[0];
      if ( v126.u8[0] == 5 )
        goto LABEL_189;
      goto LABEL_248;
    case 183:
      v74 = *a1 + 32 * a1[1];
      v75 = deref_idcv((unsigned __int8 *)(v74 - 32), 0);
      if ( v75 && *v75 == 5 )
      {
        sub_1000312E4((unsigned __int8 *)(v74 - 32));
        *(_QWORD *)(v74 - 24) = 1;
      }
      v76 = *(unsigned __int8 *)(v74 - 32);
      if ( v76 != 9 && v76 != 2 )
        return set_qerrno();
      v19 = 0;
      *(_QWORD *)(v74 - 24) = *(_QWORD *)(v74 - 24) == 0;
      return v19;
    case 184:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v19 = *a1 + 32 * a1[1];
      v37 = sub_100039890((int16x4_t *)(v19 - 32), &v126);
      if ( v37 == 2 || v37 == 9 )
      {
        *(_QWORD *)(v19 - 24) |= v127;
        v117 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v117 = 0;
      }
      v118 = v126.u8[0];
      if ( v126.u8[0] == 5 )
        goto LABEL_189;
      goto LABEL_248;
    case 185:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v19 = *a1 + 32 * a1[1];
      v27 = sub_100039890((int16x4_t *)(v19 - 32), &v126);
      if ( v27 == 2 || v27 == 9 )
      {
        *(_QWORD *)(v19 - 24) &= v127;
        v117 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v117 = 0;
      }
      v118 = v126.u8[0];
      if ( v126.u8[0] == 5 )
        goto LABEL_189;
      goto LABEL_248;
    case 186:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v19 = *a1 + 32 * a1[1];
      v35 = sub_100039890((int16x4_t *)(v19 - 32), &v126);
      if ( v35 == 2 || v35 == 9 )
      {
        *(_QWORD *)(v19 - 24) ^= v127;
        v117 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v117 = 0;
      }
      v118 = v126.u8[0];
      if ( v126.u8[0] == 5 )
        goto LABEL_189;
      goto LABEL_248;
    case 187:
      v21 = *a1 + 32 * a1[1];
      v22 = *(unsigned __int8 *)(v21 - 32);
      if ( v22 != 9 && v22 != 2 )
        return set_qerrno();
      v19 = 0;
      *(_QWORD *)(v21 - 24) = ~*(_QWORD *)(v21 - 24);
      return v19;
    case 188:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v19 = *a1 + 32 * a1[1];
      v33 = sub_100039890((int16x4_t *)(v19 - 32), &v126);
      if ( v33 == 2 || v33 == 9 )
      {
        *(__int64 *)(v19 - 24) >>= v127;
        v117 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v117 = 0;
      }
      v118 = v126.u8[0];
      if ( v126.u8[0] == 5 )
        goto LABEL_189;
      goto LABEL_248;
    case 189:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v19 = *a1 + 32 * a1[1];
      v39 = sub_100039890((int16x4_t *)(v19 - 32), &v126);
      if ( v39 == 2 || v39 == 9 )
      {
        *(_QWORD *)(v19 - 24) <<= v127;
        v117 = 1;
      }
      else
      {
        v19 = set_qerrno();
        v117 = 0;
      }
      v118 = v126.u8[0];
      if ( v126.u8[0] == 5 )
      {
LABEL_189:
        sub_100031978(v127, (unsigned __int8 *)&v126);
      }
      else
      {
LABEL_248:
        if ( v118 == 7 )
          sub_100006228(&v127);
      }
      if ( (v117 & 1) != 0 )
        return 0;
      return v19;
    case 190:
      v49 = *a1 + 32 * a1[1];
      v50 = *(unsigned __int8 *)(v49 - 32);
      if ( v50 == 2 || v50 == 9 )
      {
        v19 = 0;
        *(_QWORD *)(v49 - 24) = -*(_QWORD *)(v49 - 24);
      }
      else
      {
        if ( v50 != 3 )
          return set_qerrno();
        if ( !*(_WORD *)(v49 - 10) )
          return 0;
        v19 = 0;
        *(_WORD *)(v49 - 10) ^= 0x8000u;
      }
      return v19;
    case 191:
      return idcv_string((unsigned __int8 *)(*a1 + 32 * a1[1] - 32), a9, a2, a3, a4, a5, a6, a7, a8);
    case 200:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v51 = *a1 + 32 * a1[1];
      v52 = sub_100039A58((int16x4_t *)(v51 - 32), &v126);
      if ( v51 == 32 )
      {
        if ( under_debugger != 1 )
LABEL_299:
          interr(2656);
LABEL_301:
        __break(1u);
LABEL_302:
        interr(1448);
        if ( v125 )
          sub_1000013F4(v124);
        _Unwind_Resume(v124);
      }
      v53 = v52;
      v54 = *(unsigned __int8 *)(v51 - 32);
      if ( v54 == 5 )
      {
        sub_100031978(*(_QWORD *)(v51 - 24), (unsigned __int8 *)(v51 - 32));
      }
      else if ( v54 == 7 )
      {
        sub_100006228((_QWORD *)(v51 - 24));
      }
      *(_BYTE *)(v51 - 32) = 2;
      *(_QWORD *)(v51 - 24) = 0;
      if ( v126.u8[0] == 5 )
      {
        sub_100031978(v127, (unsigned __int8 *)&v126);
      }
      else if ( v126.u8[0] == 7 )
      {
        sub_100006228(&v127);
      }
      v126.i8[0] = 2;
      v127 = 0;
      *(_QWORD *)(v51 - 24) = v53 == 0;
      v119 = v126.u8[0];
      if ( v126.u8[0] == 5 )
      {
LABEL_229:
        sub_100031978(v127, (unsigned __int8 *)&v126);
        return 0;
      }
LABEL_232:
      if ( v119 != 7 )
        return 0;
      sub_100006228(&v127);
      return 0;
    case 201:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v41 = *a1 + 32 * a1[1];
      v42 = sub_100039A58((int16x4_t *)(v41 - 32), &v126);
      if ( v41 != 32 )
      {
        v43 = v42;
        v44 = *(unsigned __int8 *)(v41 - 32);
        if ( v44 == 5 )
        {
          sub_100031978(*(_QWORD *)(v41 - 24), (unsigned __int8 *)(v41 - 32));
        }
        else if ( v44 == 7 )
        {
          sub_100006228((_QWORD *)(v41 - 24));
        }
        *(_BYTE *)(v41 - 32) = 2;
        *(_QWORD *)(v41 - 24) = 0;
        if ( v126.u8[0] == 5 )
        {
          sub_100031978(v127, (unsigned __int8 *)&v126);
        }
        else if ( v126.u8[0] == 7 )
        {
          sub_100006228(&v127);
        }
        v126.i8[0] = 2;
        v127 = 0;
        *(_QWORD *)(v41 - 24) = v43 != 0;
        v119 = v126.u8[0];
        if ( v126.u8[0] == 5 )
          goto LABEL_229;
        goto LABEL_232;
      }
      if ( under_debugger != 1 )
        goto LABEL_299;
      goto LABEL_301;
    case 202:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v113 = *a1 + 32 * a1[1];
      v114 = sub_100039A58((int16x4_t *)(v113 - 32), &v126);
      if ( v113 != 32 )
      {
        v115 = v114;
        v116 = *(unsigned __int8 *)(v113 - 32);
        if ( v116 == 5 )
        {
          sub_100031978(*(_QWORD *)(v113 - 24), (unsigned __int8 *)(v113 - 32));
        }
        else if ( v116 == 7 )
        {
          sub_100006228((_QWORD *)(v113 - 24));
        }
        *(_BYTE *)(v113 - 32) = 2;
        *(_QWORD *)(v113 - 24) = 0;
        if ( v126.u8[0] == 5 )
        {
          sub_100031978(v127, (unsigned __int8 *)&v126);
        }
        else if ( v126.u8[0] == 7 )
        {
          sub_100006228(&v127);
        }
        v126.i8[0] = 2;
        v127 = 0;
        *(_QWORD *)(v113 - 24) = v115 < 1;
        v119 = v126.u8[0];
        if ( v126.u8[0] == 5 )
          goto LABEL_229;
        goto LABEL_232;
      }
      if ( under_debugger != 1 )
        goto LABEL_299;
      goto LABEL_301;
    case 203:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v29 = *a1 + 32 * a1[1];
      v30 = sub_100039A58((int16x4_t *)(v29 - 32), &v126);
      if ( v29 != 32 )
      {
        v31 = v30;
        v32 = *(unsigned __int8 *)(v29 - 32);
        if ( v32 == 5 )
        {
          sub_100031978(*(_QWORD *)(v29 - 24), (unsigned __int8 *)(v29 - 32));
        }
        else if ( v32 == 7 )
        {
          sub_100006228((_QWORD *)(v29 - 24));
        }
        *(_BYTE *)(v29 - 32) = 2;
        *(_QWORD *)(v29 - 24) = 0;
        if ( v126.u8[0] == 5 )
        {
          sub_100031978(v127, (unsigned __int8 *)&v126);
        }
        else if ( v126.u8[0] == 7 )
        {
          sub_100006228(&v127);
        }
        v126.i8[0] = 2;
        v127 = 0;
        *(_QWORD *)(v29 - 24) = v31 >= 0;
        v119 = v126.u8[0];
        if ( v126.u8[0] == 5 )
          goto LABEL_229;
        goto LABEL_232;
      }
      if ( under_debugger != 1 )
        goto LABEL_299;
      goto LABEL_301;
    case 204:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v23 = *a1 + 32 * a1[1];
      v24 = sub_100039A58((int16x4_t *)(v23 - 32), &v126);
      if ( v23 != 32 )
      {
        v25 = v24;
        v26 = *(unsigned __int8 *)(v23 - 32);
        if ( v26 == 5 )
        {
          sub_100031978(*(_QWORD *)(v23 - 24), (unsigned __int8 *)(v23 - 32));
        }
        else if ( v26 == 7 )
        {
          sub_100006228((_QWORD *)(v23 - 24));
        }
        *(_BYTE *)(v23 - 32) = 2;
        *(_QWORD *)(v23 - 24) = 0;
        if ( v126.u8[0] == 5 )
        {
          sub_100031978(v127, (unsigned __int8 *)&v126);
        }
        else if ( v126.u8[0] == 7 )
        {
          sub_100006228(&v127);
        }
        v126.i8[0] = 2;
        v127 = 0;
        *(_QWORD *)(v23 - 24) = v25 >> 31;
        v119 = v126.u8[0];
        if ( v126.u8[0] == 5 )
          goto LABEL_229;
        goto LABEL_232;
      }
      if ( under_debugger != 1 )
        goto LABEL_299;
      goto LABEL_301;
    case 205:
      v126.i8[0] = 2;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if ( !(unsigned int)move_idcv((unsigned __int8 *)&v126, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_10003CB10(a1, (__int64)v130);
        sub_1000312E4(v130);
      }
      v45 = *a1 + 32 * a1[1];
      v46 = sub_100039A58((int16x4_t *)(v45 - 32), &v126);
      if ( v45 != 32 )
      {
        v47 = v46;
        v48 = *(unsigned __int8 *)(v45 - 32);
        if ( v48 == 5 )
        {
          sub_100031978(*(_QWORD *)(v45 - 24), (unsigned __int8 *)(v45 - 32));
        }
        else if ( v48 == 7 )
        {
          sub_100006228((_QWORD *)(v45 - 24));
        }
        *(_BYTE *)(v45 - 32) = 2;
        *(_QWORD *)(v45 - 24) = 0;
        if ( v126.u8[0] == 5 )
        {
          sub_100031978(v127, (unsigned __int8 *)&v126);
        }
        else if ( v126.u8[0] == 7 )
        {
          sub_100006228(&v127);
        }
        v126.i8[0] = 2;
        v127 = 0;
        *(_QWORD *)(v45 - 24) = v47 > 0;
        v119 = v126.u8[0];
        if ( v126.u8[0] == 5 )
          goto LABEL_229;
        goto LABEL_232;
      }
      if ( under_debugger != 1 )
        goto LABEL_299;
      goto LABEL_301;
    case 206:
      return idcv_long((unsigned __int8 *)(*a1 + 32 * a1[1] - 32), a9, a2, a3, a4, a5, a6, a7, a8);
    case 208:
      return idcv_float((int16x4_t *)(*a1 + 32 * a1[1] - 32), a9);
    case 209:
      return idcv_int64((unsigned __int8 *)(*a1 + 32 * a1[1] - 32), a9, a2, a3, a4, a5, a6, a7, a8);
    default:
      if ( under_debugger == 1 )
        goto LABEL_301;
      goto LABEL_302;
  }
}
// 100038834: conditional instruction was optimized away because w0.4==7
// 1000389DC: conditional instruction was optimized away because w0.4==7
// 10003893C: conditional instruction was optimized away because w0.4==7
// 1000380E8: variable 'v131' is possibly undefined
// 1000380E8: variable 'v11' is possibly undefined
// 1000380E8: variable 'v12' is possibly undefined
// 1000380E8: variable 'v13' is possibly undefined
// 1000380E8: variable 'v14' is possibly undefined
// 1000380E8: variable 'v15' is possibly undefined
// 1000380E8: variable 'v16' is possibly undefined
// 1000380E8: variable 'v17' is possibly undefined
// 10003883C: variable 'v132' is possibly undefined
// 10003883C: variable 'v60' is possibly undefined
// 10003883C: variable 'v61' is possibly undefined
// 10003883C: variable 'v62' is possibly undefined
// 10003883C: variable 'v63' is possibly undefined
// 10003883C: variable 'v64' is possibly undefined
// 10003883C: variable 'v65' is possibly undefined
// 10003883C: variable 'v66' is possibly undefined
// 10003884C: variable 'v133' is possibly undefined
// 10003884C: variable 'v67' is possibly undefined
// 10003884C: variable 'v68' is possibly undefined
// 10003884C: variable 'v69' is possibly undefined
// 10003884C: variable 'v70' is possibly undefined
// 10003884C: variable 'v71' is possibly undefined
// 10003884C: variable 'v72' is possibly undefined
// 10003884C: variable 'v73' is possibly undefined
// 100038944: variable 'v134' is possibly undefined
// 100038944: variable 'v79' is possibly undefined
// 100038944: variable 'v80' is possibly undefined
// 100038944: variable 'v81' is possibly undefined
// 100038944: variable 'v82' is possibly undefined
// 100038944: variable 'v83' is possibly undefined
// 100038944: variable 'v84' is possibly undefined
// 100038944: variable 'v85' is possibly undefined
// 100038954: variable 'v135' is possibly undefined
// 100038954: variable 'v86' is possibly undefined
// 100038954: variable 'v87' is possibly undefined
// 100038954: variable 'v88' is possibly undefined
// 100038954: variable 'v89' is possibly undefined
// 100038954: variable 'v90' is possibly undefined
// 100038954: variable 'v91' is possibly undefined
// 100038954: variable 'v92' is possibly undefined
// 1000389E4: variable 'v136' is possibly undefined
// 1000389E4: variable 'v95' is possibly undefined
// 1000389E4: variable 'v96' is possibly undefined
// 1000389E4: variable 'v97' is possibly undefined
// 1000389E4: variable 'v98' is possibly undefined
// 1000389E4: variable 'v99' is possibly undefined
// 1000389E4: variable 'v100' is possibly undefined
// 1000389E4: variable 'v101' is possibly undefined
// 1000389F4: variable 'v137' is possibly undefined
// 1000389F4: variable 'v102' is possibly undefined
// 1000389F4: variable 'v103' is possibly undefined
// 1000389F4: variable 'v104' is possibly undefined
// 1000389F4: variable 'v105' is possibly undefined
// 1000389F4: variable 'v106' is possibly undefined
// 1000389F4: variable 'v107' is possibly undefined
// 1000389F4: variable 'v108' is possibly undefined
// 100039490: variable 'v125' is possibly undefined
// 100039498: variable 'v124' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
