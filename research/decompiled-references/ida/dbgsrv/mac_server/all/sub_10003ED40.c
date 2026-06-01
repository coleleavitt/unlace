/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003ED40
// Address: 0x000000010003ED40

//----- (000000010003ED40) ----------------------------------------------------
__int64 __fastcall sub_10003ED40(__int64 *a1, int a2)
{
  unsigned __int8 *v2; // rax
  unsigned __int8 *v3; // r15
  unsigned __int8 *v4; // rbx
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned __int8 *v10; // r14
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // r14
  int v16; // eax
  char v17; // r14
  __int64 v18; // r15
  __int64 v19; // r12
  unsigned __int8 *v20; // r14
  int v21; // eax
  int v22; // ebx
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // r14
  int v28; // eax
  __int64 v29; // r14
  int v30; // eax
  __int64 v31; // r14
  int v32; // eax
  __int64 v33; // r15
  __int64 v34; // r12
  unsigned __int8 *v35; // r14
  int v36; // eax
  int v37; // ebx
  __int64 v38; // r15
  int v39; // eax
  __int64 v40; // r15
  __int64 v41; // r12
  unsigned __int8 *v42; // r14
  int v43; // eax
  int v44; // ebx
  __int64 v45; // r15
  int v46; // eax
  __int64 v47; // rax
  int v48; // ecx
  __int16 v49; // cx
  __int64 v50; // r15
  __int64 v51; // r12
  unsigned __int8 *v52; // r14
  int v53; // eax
  int v54; // ebx
  __int64 v55; // r15
  int v56; // eax
  __int64 v57; // r14
  int v58; // eax
  unsigned __int8 *v59; // r14
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r14
  int v63; // eax
  __int64 v64; // r12
  __int64 v65; // r15
  __int64 v66; // r14
  unsigned __int8 *v67; // rbx
  unsigned __int8 *v68; // rax
  int v69; // eax
  __int64 v70; // r12
  __int64 v71; // r15
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r12
  __int64 v75; // r15
  __int64 v76; // r14
  int v77; // eax
  __int64 v78; // r15
  __int64 v79; // r12
  unsigned __int8 *v80; // r14
  int v81; // eax
  int v82; // ebx
  __int64 v83; // r15
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  _Unwind_Exception *v88; // rax
  int v89; // edx
  unsigned __int8 v90[8]; // [rsp+8h] [rbp-68h] BYREF
  void *__p[2]; // [rsp+10h] [rbp-60h] BYREF
  __int64 v92; // [rsp+20h] [rbp-50h]
  unsigned __int8 v93[32]; // [rsp+28h] [rbp-48h] BYREF

  switch ( a2 )
  {
    case 176:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v2 = deref_idcv((unsigned __int8 *)(*a1 + 32 * a1[1] - 32), 2);
      v3 = v2;
      if ( *v2 == 7 )
      {
        LODWORD(v4) = idcv_string((__int64)v90);
        if ( (_DWORD)v4 )
          goto LABEL_123;
        sub_10003E280((void **)v3 + 1, (__int64)__p);
      }
      else
      {
        sub_1000404C0((__int64)v2, (__int64)v90);
      }
      LODWORD(v4) = 0;
LABEL_123:
      v85 = v90[0];
      if ( v90[0] == 5 )
      {
LABEL_196:
        sub_1000380B0((unsigned __int8 **)__p[0], v90);
      }
      else
      {
LABEL_229:
        if ( v85 == 7 )
          sub_100006E30(__p);
      }
      return (unsigned int)v4;
    case 177:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v74 = 32 * a1[1];
      v4 = (unsigned __int8 *)(*a1 + v74 - 32);
      v75 = v74 + *a1;
      switch ( (unsigned int)sub_1000406E0((__int64)v4, (__int64)v90) )
      {
        case 2u:
        case 9u:
          goto LABEL_104;
        case 3u:
          LODWORD(v4) = 0;
          switch ( (unsigned int)eadd(v75 - 24, (__int64)__p, v75 - 24, 1) )
          {
            case 1u:
              goto LABEL_105;
            case 2u:
            case 4u:
            case 5u:
              goto LABEL_194;
            default:
              goto LABEL_195;
          }
          goto LABEL_195;
        case 5u:
          LODWORD(v4) = sub_100044470(v4, (__int64)v90);
          if ( !(_DWORD)v4 )
            goto LABEL_105;
          goto LABEL_195;
        case 6u:
        case 8u:
LABEL_194:
          LODWORD(v4) = set_qerrno();
          goto LABEL_195;
        case 7u:
          LODWORD(v4) = idcv_int64(v4);
          if ( (_DWORD)v4 )
            goto LABEL_195;
          LODWORD(v4) = idcv_int64(v90);
          if ( (_DWORD)v4 )
            goto LABEL_195;
LABEL_104:
          *(_QWORD *)(v75 - 24) -= __p[0];
LABEL_105:
          LODWORD(v4) = 0;
LABEL_195:
          v85 = v90[0];
          if ( v90[0] == 5 )
            goto LABEL_196;
          goto LABEL_229;
        default:
          goto LABEL_105;
      }
    case 178:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v64 = 32 * a1[1];
      v4 = (unsigned __int8 *)(*a1 + v64 - 32);
      v65 = v64 + *a1;
      switch ( (unsigned int)sub_1000406E0((__int64)v4, (__int64)v90) )
      {
        case 2u:
        case 9u:
          goto LABEL_87;
        case 3u:
          LODWORD(v4) = 0;
          switch ( (unsigned int)emul((__int16 *)(v65 - 24), (__int16 *)__p, v65 - 24) )
          {
            case 1u:
              goto LABEL_88;
            case 2u:
            case 4u:
            case 5u:
              goto LABEL_191;
            default:
              goto LABEL_192;
          }
          goto LABEL_192;
        case 5u:
          LODWORD(v4) = set_qerrno();
          if ( !(_DWORD)v4 )
            goto LABEL_88;
          goto LABEL_192;
        case 6u:
        case 8u:
LABEL_191:
          LODWORD(v4) = set_qerrno();
          goto LABEL_192;
        case 7u:
          LODWORD(v4) = idcv_int64(v4);
          if ( (_DWORD)v4 )
            goto LABEL_192;
          LODWORD(v4) = idcv_int64(v90);
          if ( (_DWORD)v4 )
            goto LABEL_192;
LABEL_87:
          *(_QWORD *)(v65 - 24) *= (_QWORD)__p[0];
LABEL_88:
          LODWORD(v4) = 0;
LABEL_192:
          v85 = v90[0];
          if ( v90[0] == 5 )
            goto LABEL_196;
          goto LABEL_229;
        default:
          goto LABEL_88;
      }
    case 179:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v70 = 32 * a1[1];
      v4 = (unsigned __int8 *)(*a1 + v70 - 32);
      v71 = v70 + *a1;
      switch ( (unsigned int)sub_1000406E0((__int64)v4, (__int64)v90) )
      {
        case 2u:
        case 9u:
          goto LABEL_98;
        case 3u:
          LODWORD(v4) = 0;
          switch ( (unsigned int)ediv((__int16 *)(v71 - 24), (__int16 *)__p, v71 - 24) )
          {
            case 1u:
              goto LABEL_227;
            case 2u:
            case 4u:
            case 5u:
              goto LABEL_207;
            default:
              goto LABEL_228;
          }
          goto LABEL_228;
        case 5u:
          LODWORD(v4) = set_qerrno();
          if ( !(_DWORD)v4 )
            goto LABEL_227;
          goto LABEL_228;
        case 6u:
        case 8u:
          goto LABEL_207;
        case 7u:
          LODWORD(v4) = idcv_int64(v4);
          if ( (_DWORD)v4 )
            goto LABEL_228;
          LODWORD(v4) = idcv_int64(v90);
          if ( (_DWORD)v4 )
            goto LABEL_228;
LABEL_98:
          if ( __p[0] )
          {
            v72 = *(_QWORD *)(v71 - 24);
            if ( ((unsigned __int64)__p[0] | v72) >> 32 )
              v73 = v72 / (__int64)__p[0];
            else
              v73 = (unsigned int)v72 / LODWORD(__p[0]);
            *(_QWORD *)(v71 - 24) = v73;
LABEL_227:
            LODWORD(v4) = 0;
          }
          else
          {
LABEL_207:
            LODWORD(v4) = set_qerrno();
          }
LABEL_228:
          v85 = v90[0];
          if ( v90[0] != 5 )
            goto LABEL_229;
          goto LABEL_196;
        default:
          goto LABEL_227;
      }
    case 180:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v57 = *a1;
      v4 = (unsigned __int8 *)(32 * a1[1]);
      v58 = sub_1000406E0((__int64)&v4[*a1 - 32], (__int64)v90);
      if ( (v58 == 2 || v58 == 9) && __p[0] )
      {
        v59 = &v4[v57];
        v60 = *((_QWORD *)v59 - 3);
        if ( ((unsigned __int64)__p[0] | v60) >> 32 )
          v61 = v60 % (__int64)__p[0];
        else
          v61 = (unsigned int)v60 % LODWORD(__p[0]);
        *((_QWORD *)v59 - 3) = v61;
        v17 = 1;
      }
      else
      {
        LODWORD(v4) = set_qerrno();
        v17 = 0;
      }
      v86 = v90[0];
      if ( v90[0] != 5 )
        goto LABEL_200;
      goto LABEL_145;
    case 181:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v62 = *a1;
      v4 = (unsigned __int8 *)(32 * a1[1]);
      v63 = sub_1000406E0((__int64)&v4[*a1 - 32], (__int64)v90);
      if ( v63 == 2 || v63 == 9 )
      {
        *(_QWORD *)&v4[v62 - 24] = (*(_QWORD *)&v4[v62 - 24] | (__int64)__p[0]) != 0;
        v17 = 1;
      }
      else
      {
        LODWORD(v4) = set_qerrno();
        v17 = 0;
      }
      v86 = v90[0];
      if ( v90[0] == 5 )
        goto LABEL_145;
      goto LABEL_200;
    case 182:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v76 = *a1;
      v4 = (unsigned __int8 *)(32 * a1[1]);
      v77 = sub_1000406E0((__int64)&v4[*a1 - 32], (__int64)v90);
      if ( v77 == 2 || v77 == 9 )
      {
        *(_QWORD *)&v4[v76 - 24] = (*(_QWORD *)&v4[v76 - 24] != 0) & (unsigned __int8)(__p[0] != nullptr);
        v17 = 1;
      }
      else
      {
        LODWORD(v4) = set_qerrno();
        v17 = 0;
      }
      v86 = v90[0];
      if ( v90[0] == 5 )
        goto LABEL_145;
      goto LABEL_200;
    case 183:
      v66 = *a1 + 32 * a1[1];
      v67 = (unsigned __int8 *)(v66 - 32);
      v68 = deref_idcv((unsigned __int8 *)(v66 - 32), 0);
      if ( v68 && *v68 == 5 )
      {
        sub_100037A90(v67);
        *(_QWORD *)(v66 - 24) = 1;
      }
      v69 = *v67;
      if ( v69 != 9 && v69 != 2 )
        return set_qerrno();
      *(_QWORD *)(v66 - 24) = *(_QWORD *)(v66 - 24) == 0;
      goto LABEL_203;
    case 184:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v29 = *a1;
      v4 = (unsigned __int8 *)(32 * a1[1]);
      v30 = sub_1000406E0((__int64)&v4[*a1 - 32], (__int64)v90);
      if ( v30 == 2 || v30 == 9 )
      {
        *(_QWORD *)&v4[v29 - 24] |= (unsigned __int64)__p[0];
        v17 = 1;
      }
      else
      {
        LODWORD(v4) = set_qerrno();
        v17 = 0;
      }
      v86 = v90[0];
      if ( v90[0] == 5 )
        goto LABEL_145;
      goto LABEL_200;
    case 185:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v15 = *a1;
      v4 = (unsigned __int8 *)(32 * a1[1]);
      v16 = sub_1000406E0((__int64)&v4[*a1 - 32], (__int64)v90);
      if ( v16 == 2 || v16 == 9 )
      {
        *(_QWORD *)&v4[v15 - 24] &= (unsigned __int64)__p[0];
        v17 = 1;
      }
      else
      {
        LODWORD(v4) = set_qerrno();
        v17 = 0;
      }
      v86 = v90[0];
      if ( v90[0] == 5 )
        goto LABEL_145;
      goto LABEL_200;
    case 186:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v27 = *a1;
      v4 = (unsigned __int8 *)(32 * a1[1]);
      v28 = sub_1000406E0((__int64)&v4[*a1 - 32], (__int64)v90);
      if ( v28 == 2 || v28 == 9 )
      {
        *(_QWORD *)&v4[v27 - 24] ^= (unsigned __int64)__p[0];
        v17 = 1;
      }
      else
      {
        LODWORD(v4) = set_qerrno();
        v17 = 0;
      }
      v86 = v90[0];
      if ( v90[0] == 5 )
        goto LABEL_145;
      goto LABEL_200;
    case 187:
      v6 = *a1 + 32 * a1[1];
      v7 = *(unsigned __int8 *)(v6 - 32);
      if ( v7 != 9 && v7 != 2 )
        return set_qerrno();
      *(_QWORD *)(v6 - 24) = ~*(_QWORD *)(v6 - 24);
      goto LABEL_203;
    case 188:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v25 = *a1;
      v4 = (unsigned __int8 *)(32 * a1[1]);
      v26 = sub_1000406E0((__int64)&v4[*a1 - 32], (__int64)v90);
      if ( v26 == 2 || v26 == 9 )
      {
        *(__int64 *)&v4[v25 - 24] >>= SLOBYTE(__p[0]);
        v17 = 1;
      }
      else
      {
        LODWORD(v4) = set_qerrno();
        v17 = 0;
      }
      v86 = v90[0];
      if ( v90[0] == 5 )
        goto LABEL_145;
      goto LABEL_200;
    case 189:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v31 = *a1;
      v4 = (unsigned __int8 *)(32 * a1[1]);
      v32 = sub_1000406E0((__int64)&v4[*a1 - 32], (__int64)v90);
      if ( v32 == 2 || v32 == 9 )
      {
        *(_QWORD *)&v4[v31 - 24] <<= SLOBYTE(__p[0]);
        v17 = 1;
      }
      else
      {
        LODWORD(v4) = set_qerrno();
        v17 = 0;
      }
      v86 = v90[0];
      if ( v90[0] == 5 )
      {
LABEL_145:
        sub_1000380B0((unsigned __int8 **)__p[0], v90);
      }
      else
      {
LABEL_200:
        if ( v86 == 7 )
          sub_100006E30(__p);
      }
      if ( v17 )
        goto LABEL_203;
      return (unsigned int)v4;
    case 190:
      v47 = *a1 + 32 * a1[1];
      v48 = *(unsigned __int8 *)(v47 - 32);
      if ( v48 == 2 || v48 == 9 )
      {
        *(_QWORD *)(v47 - 24) = -*(_QWORD *)(v47 - 24);
        goto LABEL_203;
      }
      if ( v48 != 3 )
        return set_qerrno();
      v49 = *(_WORD *)(v47 - 10);
      LODWORD(v4) = 0;
      if ( v49 )
        *(_WORD *)(v47 - 10) = v49 ^ 0x8000;
      return (unsigned int)v4;
    case 191:
      return idcv_string(*a1 + 32 * a1[1] - 32);
    case 200:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v50 = *a1;
      v51 = 32 * a1[1];
      v52 = (unsigned __int8 *)(*a1 + v51 - 32);
      v53 = sub_1000408E0((__int64)v52, (__int64)v90);
      if ( !v52 )
      {
        if ( under_debugger == 1 )
          goto LABEL_245;
        break;
      }
      v54 = v53;
      v55 = v51 + v50;
      v56 = *v52;
      if ( v56 == 5 )
      {
        sub_1000380B0(*(unsigned __int8 ***)(v55 - 24), v52);
      }
      else if ( v56 == 7 )
      {
        sub_100006E30((void **)(v55 - 24));
      }
      *(_BYTE *)(v55 - 32) = 2;
      *(_QWORD *)(v55 - 24) = 0;
      if ( v90[0] == 5 )
      {
        sub_1000380B0((unsigned __int8 **)__p[0], v90);
      }
      else if ( v90[0] == 7 )
      {
        sub_100006E30(__p);
      }
      v90[0] = 2;
      __p[0] = nullptr;
      *(_QWORD *)(v55 - 24) = v54 == 0;
      v87 = v90[0];
      if ( v90[0] != 5 )
        goto LABEL_187;
LABEL_184:
      sub_1000380B0((unsigned __int8 **)__p[0], v90);
LABEL_203:
      LODWORD(v4) = 0;
      return (unsigned int)v4;
    case 201:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v33 = *a1;
      v34 = 32 * a1[1];
      v35 = (unsigned __int8 *)(*a1 + v34 - 32);
      v36 = sub_1000408E0((__int64)v35, (__int64)v90);
      if ( v35 )
      {
        v37 = v36;
        v38 = v34 + v33;
        v39 = *v35;
        if ( v39 == 5 )
        {
          sub_1000380B0(*(unsigned __int8 ***)(v38 - 24), v35);
        }
        else if ( v39 == 7 )
        {
          sub_100006E30((void **)(v38 - 24));
        }
        *(_BYTE *)(v38 - 32) = 2;
        *(_QWORD *)(v38 - 24) = 0;
        if ( v90[0] == 5 )
        {
          sub_1000380B0((unsigned __int8 **)__p[0], v90);
        }
        else if ( v90[0] == 7 )
        {
          sub_100006E30(__p);
        }
        v90[0] = 2;
        __p[0] = nullptr;
        *(_QWORD *)(v38 - 24) = v37 != 0;
        v87 = v90[0];
        if ( v90[0] == 5 )
          goto LABEL_184;
LABEL_187:
        if ( v87 == 7 )
          sub_100006E30(__p);
        goto LABEL_203;
      }
      if ( under_debugger == 1 )
        goto LABEL_245;
      break;
    case 202:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v78 = *a1;
      v79 = 32 * a1[1];
      v80 = (unsigned __int8 *)(*a1 + v79 - 32);
      v81 = sub_1000408E0((__int64)v80, (__int64)v90);
      if ( !v80 )
      {
        if ( under_debugger == 1 )
          goto LABEL_245;
        break;
      }
      v82 = v81;
      v83 = v79 + v78;
      v84 = *v80;
      if ( v84 == 5 )
      {
        sub_1000380B0(*(unsigned __int8 ***)(v83 - 24), v80);
      }
      else if ( v84 == 7 )
      {
        sub_100006E30((void **)(v83 - 24));
      }
      *(_BYTE *)(v83 - 32) = 2;
      *(_QWORD *)(v83 - 24) = 0;
      if ( v90[0] == 5 )
      {
        sub_1000380B0((unsigned __int8 **)__p[0], v90);
      }
      else if ( v90[0] == 7 )
      {
        sub_100006E30(__p);
      }
      v90[0] = 2;
      __p[0] = nullptr;
      *(_QWORD *)(v83 - 24) = v82 <= 0;
      v87 = v90[0];
      if ( v90[0] == 5 )
        goto LABEL_184;
      goto LABEL_187;
    case 203:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v18 = *a1;
      v19 = 32 * a1[1];
      v20 = (unsigned __int8 *)(*a1 + v19 - 32);
      v21 = sub_1000408E0((__int64)v20, (__int64)v90);
      if ( v20 )
      {
        v22 = v21;
        v23 = v19 + v18;
        v24 = *v20;
        if ( v24 == 5 )
        {
          sub_1000380B0(*(unsigned __int8 ***)(v23 - 24), v20);
        }
        else if ( v24 == 7 )
        {
          sub_100006E30((void **)(v23 - 24));
        }
        *(_BYTE *)(v23 - 32) = 2;
        *(_QWORD *)(v23 - 24) = 0;
        if ( v90[0] == 5 )
        {
          sub_1000380B0((unsigned __int8 **)__p[0], v90);
        }
        else if ( v90[0] == 7 )
        {
          sub_100006E30(__p);
        }
        v90[0] = 2;
        __p[0] = nullptr;
        *(_QWORD *)(v23 - 24) = v22 >= 0;
        v87 = v90[0];
        if ( v90[0] == 5 )
          goto LABEL_184;
        goto LABEL_187;
      }
      if ( under_debugger == 1 )
        goto LABEL_245;
      break;
    case 204:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v8 = *a1;
      v9 = 32 * a1[1];
      v10 = (unsigned __int8 *)(*a1 + v9 - 32);
      v11 = sub_1000408E0((__int64)v10, (__int64)v90);
      if ( v10 )
      {
        v12 = v11;
        v13 = v9 + v8;
        v14 = *v10;
        if ( v14 == 5 )
        {
          sub_1000380B0(*(unsigned __int8 ***)(v13 - 24), v10);
        }
        else if ( v14 == 7 )
        {
          sub_100006E30((void **)(v13 - 24));
        }
        *(_BYTE *)(v13 - 32) = 2;
        *(_QWORD *)(v13 - 24) = 0;
        if ( v90[0] == 5 )
        {
          sub_1000380B0((unsigned __int8 **)__p[0], v90);
        }
        else if ( v90[0] == 7 )
        {
          sub_100006E30(__p);
        }
        v90[0] = 2;
        __p[0] = nullptr;
        *(_QWORD *)(v13 - 24) = v12 >> 31;
        v87 = v90[0];
        if ( v90[0] == 5 )
          goto LABEL_184;
        goto LABEL_187;
      }
      if ( under_debugger == 1 )
        goto LABEL_245;
      break;
    case 205:
      v90[0] = 2;
      *(_OWORD *)__p = 0;
      v92 = 0;
      if ( !(unsigned int)move_idcv(v90, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32)) )
      {
        sub_100044190((__int64)v93, a1);
        sub_100037A90(v93);
      }
      v40 = *a1;
      v41 = 32 * a1[1];
      v42 = (unsigned __int8 *)(*a1 + v41 - 32);
      v43 = sub_1000408E0((__int64)v42, (__int64)v90);
      if ( v42 )
      {
        v44 = v43;
        v45 = v41 + v40;
        v46 = *v42;
        if ( v46 == 5 )
        {
          sub_1000380B0(*(unsigned __int8 ***)(v45 - 24), v42);
        }
        else if ( v46 == 7 )
        {
          sub_100006E30((void **)(v45 - 24));
        }
        *(_BYTE *)(v45 - 32) = 2;
        *(_QWORD *)(v45 - 24) = 0;
        if ( v90[0] == 5 )
        {
          sub_1000380B0((unsigned __int8 **)__p[0], v90);
        }
        else if ( v90[0] == 7 )
        {
          sub_100006E30(__p);
        }
        v90[0] = 2;
        __p[0] = nullptr;
        *(_QWORD *)(v45 - 24) = v44 > 0;
        v87 = v90[0];
        if ( v90[0] == 5 )
          goto LABEL_184;
        goto LABEL_187;
      }
      if ( under_debugger == 1 )
        goto LABEL_245;
      break;
    case 206:
      return idcv_long((unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
    case 208:
      return idcv_float((unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
    case 209:
      return idcv_int64((unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
    default:
      if ( under_debugger != 1 )
      {
        interr(0x5A8u);
        if ( v89 )
          sub_100001690(v88);
        _Unwind_Resume(v88);
      }
      goto LABEL_245;
  }
  interr(0xA60u);
LABEL_245:
  BUG();
}
// 10004021E: variable 'v89' is possibly undefined
// 100040223: variable 'v88' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
