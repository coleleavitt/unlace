__int64 __fastcall sub_120980(int a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // r14
  unsigned __int64 v11; // rbp
  bool v12; // zf
  char *v13; // r13
  int v14; // esi
  unsigned int v15; // r14d
  unsigned int v17; // r13d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r12
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // r14
  int v40; // eax
  int v41; // r12d
  bool v42; // cf
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // ecx
  __int64 v46; // r8
  __int64 v47; // rdx
  int v48; // ecx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned int v64; // eax
  __int64 v65; // rdi
  char v66; // [rsp+7h] [rbp-1F1h]
  __int64 v67; // [rsp+8h] [rbp-1F0h]
  __m128i v68; // [rsp+10h] [rbp-1E8h] BYREF
  unsigned __int64 v69; // [rsp+28h] [rbp-1D0h] BYREF
  __int128 v70; // [rsp+30h] [rbp-1C8h] BYREF
  __m128i v71; // [rsp+40h] [rbp-1B8h] BYREF
  _QWORD v72[2]; // [rsp+50h] [rbp-1A8h] BYREF
  _QWORD v73[2]; // [rsp+60h] [rbp-198h] BYREF
  _QWORD v74[2]; // [rsp+70h] [rbp-188h] BYREF
  _QWORD v75[2]; // [rsp+80h] [rbp-178h] BYREF
  _QWORD v76[2]; // [rsp+90h] [rbp-168h] BYREF
  _QWORD v77[2]; // [rsp+A0h] [rbp-158h] BYREF
  __m128i v78; // [rsp+B0h] [rbp-148h] BYREF
  _QWORD v79[2]; // [rsp+C0h] [rbp-138h] BYREF
  __m128i v80; // [rsp+D0h] [rbp-128h] BYREF
  _QWORD v81[2]; // [rsp+E0h] [rbp-118h] BYREF
  __m128i v82; // [rsp+F0h] [rbp-108h] BYREF
  _QWORD v83[2]; // [rsp+100h] [rbp-F8h] BYREF
  _QWORD v84[2]; // [rsp+110h] [rbp-E8h] BYREF
  __m128i v85; // [rsp+120h] [rbp-D8h] BYREF
  _QWORD v86[2]; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v87; // [rsp+140h] [rbp-B8h] BYREF
  __int128 v88; // [rsp+148h] [rbp-B0h]
  unsigned __int64 *v89; // [rsp+160h] [rbp-98h] BYREF
  __int128 v90; // [rsp+168h] [rbp-90h]
  unsigned __int64 *v91; // [rsp+180h] [rbp-78h] BYREF
  __int128 v92; // [rsp+188h] [rbp-70h]
  __int64 v93; // [rsp+1A0h] [rbp-58h] BYREF
  __int128 v94; // [rsp+1A8h] [rbp-50h]
  unsigned __int64 v95; // [rsp+1B8h] [rbp-40h]

  v95 = __readfsqword(0x28u);
  if ( (a2[1] & 0x10) != 0 )
    return 0;
  v6 = *a2;
  if ( *a2 > 0x29 )
  {
    v66 = 0;
    if ( v6 - 45 > 7 )
      return 0;
    goto LABEL_4;
  }
  if ( v6 > 0x21 )
  {
    v66 = 1;
LABEL_4:
    if ( (unsigned __int8)sub_11D940((char *)a2 + 48, &v69, 0) )
      goto LABEL_5;
    return 0;
  }
  if ( v6 != 29 )
    return 0;
  v69 = 0;
  v66 = 1;
LABEL_5:
  v8 = 8 * a2[9];
  v9 = (unsigned int)(v8 - 1);
  if ( (unsigned __int64)(int)v9 <= 0x3F )
  {
    v11 = 1LL << ((unsigned __int8)v8 - 1);
    v10 = 2 * v11;
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  v12 = *((_BYTE *)a2 + 32) == 4;
  v68 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  if ( v12 )
  {
    v13 = (char *)*((_QWORD *)a2 + 5);
    v14 = *(_DWORD *)v13;
    switch ( *(_DWORD *)v13 )
    {
      case 6:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
        v87 = 0;
        v88 = 0;
        *(_QWORD *)&v70 = 0;
        *((_QWORD *)&v70 + 1) = 2;
        sub_313630(&v87, &v70, a3, v9, a5, a6);
        v67 = 2;
        goto LABEL_19;
      case 8:
      case 9:
        v41 = *((_DWORD *)v13 + 9);
        v87 = 0;
        v88 = 0;
        v8 = 8 * v41;
        v33 = v8;
        if ( v14 == 8 )
          goto LABEL_71;
        goto LABEL_36;
      case 0x13:
      case 0x14:
        if ( !(unsigned __int8)sub_11D940(v13 + 48, &v93, 0) )
          goto LABEL_15;
        v40 = log2floor();
        v12 = *(_DWORD *)v13 == 19;
        v87 = 0;
        v9 = (unsigned int)(v40 + 1);
        v88 = 0;
        if ( !v12 )
        {
          if ( (unsigned __int64)(int)v9 > 0x3F )
            goto LABEL_18;
          v67 = 1LL << ((unsigned __int8)v40 + 1);
          goto LABEL_38;
        }
        if ( (unsigned __int64)(int)v9 > 0x3F )
        {
          v67 = 0;
          v36 = 0;
          v37 = 0;
          goto LABEL_44;
        }
        v67 = 1LL << ((unsigned __int8)v40 + 1);
        v37 = v67;
        goto LABEL_75;
      case 0x17:
      case 0x18:
        if ( !(unsigned __int8)sub_1502B0(*((_QWORD *)a2 + 5), &v93) || (int)v93 <= 0 )
        {
LABEL_15:
          v8 = 8 * a2[9];
          goto LABEL_16;
        }
        v9 = *((unsigned int *)v13 + 9);
        v8 = 8 * v9 - v93;
        v12 = *(_DWORD *)v13 == 24;
        v88 = 0;
        v87 = 0;
        v33 = v8;
        if ( v12 )
        {
LABEL_71:
          v34 = 1LL << v8;
          v42 = v33 < 0x40;
          v43 = 0;
          if ( v42 )
            v43 = 1LL << v8;
          v67 = v43;
          goto LABEL_42;
        }
LABEL_36:
        if ( v33 > 0x3F )
          goto LABEL_18;
        break;
      default:
        goto LABEL_16;
    }
LABEL_37:
    v9 = (unsigned int)v8;
    v67 = 1LL << v8;
LABEL_38:
    *(_QWORD *)&v70 = 0;
    *((_QWORD *)&v70 + 1) = v67;
    sub_313630(&v87, &v70, a3, v9, a5, a6);
    goto LABEL_19;
  }
LABEL_16:
  v17 = *a2;
  v18 = sub_32B5C0(*a2);
  a3 = v8;
  v87 = 0;
  v88 = 0;
  if ( v17 == v18 )
  {
    v34 = 0;
    if ( (unsigned __int64)v8 < 0x40 )
      v34 = 1LL << v8;
    v67 = v34;
LABEL_42:
    v35 = (unsigned int)(v8 - 1);
    if ( (unsigned __int64)(int)v35 <= 0x3F )
    {
      *(_QWORD *)&v70 = 0;
      v37 = 1LL << ((unsigned __int8)v8 - 1);
      *((_QWORD *)&v70 + 1) = 1LL << v35;
      sub_313630(&v87, &v70, v34, v35, a5, a6);
LABEL_75:
      a3 = -v37;
      v36 = -v37 & (v10 - 1);
    }
    else
    {
      v70 = 0;
      sub_313630(&v87, &v70, v34, v35, a5, a6);
      v36 = 0;
      v37 = 0;
    }
LABEL_44:
    *(_QWORD *)&v90 = v37;
    v89 = (unsigned __int64 *)v36;
    sub_313630(&v87, &v89, a3, v9, a5, a6);
    goto LABEL_19;
  }
  if ( (unsigned __int64)v8 <= 0x3F )
    goto LABEL_37;
LABEL_18:
  v70 = 0;
  sub_313630(&v87, &v70, a3, v9, a5, a6);
  v67 = 0;
LABEL_19:
  v23 = *a2;
  v89 = 0;
  v90 = 0;
  switch ( v23 )
  {
    case 0x1Du:
    case 0x28u:
    case 0x33u:
      v38 = v69;
      if ( v69 == v11 )
        goto LABEL_78;
      if ( v11 >= v69 )
      {
        v82 = _mm_load_si128(&v68);
        sub_313630(&v89, &v82, v19, v20, v21, v22);
        if ( v38 )
        {
          v83[0] = 0;
          v83[1] = v38;
          sub_313630(&v89, v83, v60, v61, v62, v63);
        }
      }
      else
      {
        v81[0] = v11;
        v81[1] = v69 - v11;
        sub_313630(&v89, v81, v19, v20, v21, v22);
      }
      goto LABEL_20;
    case 0x22u:
    case 0x2Du:
      v71 = _mm_unpacklo_epi64((__m128i)v69, (__m128i)(v10 - v69));
      sub_313630(&v89, &v71, v19, v20, v21, v22);
      goto LABEL_20;
    case 0x23u:
    case 0x2Eu:
      v15 = 2;
      if ( !v69 )
        goto LABEL_30;
      v72[1] = v69;
      v72[0] = 0;
      sub_313630(&v89, v72, v19, v20, v21, v22);
      goto LABEL_20;
    case 0x24u:
    case 0x2Fu:
      if ( v10 - 1 == v69 )
        goto LABEL_78;
      v73[0] = v69 + 1;
      v73[1] = v10 - v69 - 1;
      sub_313630(&v89, v73, v69 + 1, v20, v21, v22);
      goto LABEL_20;
    case 0x25u:
    case 0x30u:
      v74[0] = 0;
      v74[1] = v69 + 1;
      sub_313630(&v89, v74, v19, v20, v21, v22);
      goto LABEL_20;
    case 0x26u:
    case 0x31u:
      if ( v11 - 1 == v69 )
      {
LABEL_78:
        v15 = 2;
        goto LABEL_30;
      }
      if ( v69 >= v11 - 1 )
      {
        v68.m128i_i64[0] = v69;
        v76[1] = v11;
        v76[0] = 0;
        sub_313630(&v89, v76, v69, v20, v21, v22);
        if ( v68.m128i_i64[0] < (unsigned __int64)(v10 - 1) )
        {
          v77[0] = v68.m128i_i64[0] + 1;
          v77[1] = v10 - v68.m128i_i64[0] - 1;
          sub_313630(&v89, v77, v68.m128i_i64[0], v57, v58, v59);
        }
      }
      else
      {
        v75[0] = v69 + 1;
        v75[1] = v11 - v69 - 1;
        sub_313630(&v89, v75, v69, v20, v21, v22);
      }
LABEL_20:
      sub_314B70(&v89, &v87);
      v15 = 2;
      if ( !(_QWORD)v90 )
        goto LABEL_28;
      if ( !(unsigned int)sub_313A00(&v89, &v87) )
      {
        v15 = 3;
        goto LABEL_28;
      }
      if ( (_QWORD)v90 == 1 && v89[1] == 1 )
      {
        v45 = a2[9];
        v46 = *((_QWORD *)a2 + 3);
        v69 = *v89;
        v44 = v69;
        *a2 = v66 == 0 ? 44 : 33;
        sub_11E5D0((__int64)(a2 + 12), a1, v44, v45, v46, 0);
        v15 = 1;
        goto LABEL_28;
      }
      v91 = 0;
      v93 = 0;
      *(_QWORD *)&v94 = v67;
      v92 = 0;
      sub_313630(&v91, &v93, v24, v25, v26, v27);
      sub_314710(&v91, &v89);
      if ( (_QWORD)v92 == 1 && v91[1] == 1 )
      {
        v48 = a2[9];
        v49 = *((_QWORD *)a2 + 3);
        v69 = *v91;
        v47 = v69;
        *a2 = v66 == 0 ? 43 : 32;
        sub_11E5D0((__int64)(a2 + 12), a1, v47, v48, v49, 0);
        goto LABEL_81;
      }
      v28 = *a2;
      if ( v28 == (unsigned int)sub_32B690(*a2) )
        goto LABEL_25;
      v93 = 0;
      v86[0] = 0;
      v86[1] = v11;
      v94 = 0;
      sub_313630(&v93, v86, v29, v30, v31, v32);
      if ( !(unsigned __int8)sub_3149F0(&v93, &v87) )
      {
        if ( v93 )
        {
          *(_QWORD *)&v94 = 0;
          qfree();
        }
LABEL_25:
        v15 = 0;
        goto LABEL_26;
      }
      v64 = sub_32B690(*a2);
      v65 = v93;
      *a2 = v64;
      if ( v65 )
      {
        *(_QWORD *)&v94 = 0;
        qfree();
      }
LABEL_81:
      v15 = 1;
LABEL_26:
      if ( v91 )
      {
        *(_QWORD *)&v92 = 0;
        qfree();
      }
LABEL_28:
      if ( v89 )
      {
        *(_QWORD *)&v90 = 0;
        qfree();
      }
LABEL_30:
      if ( v87 )
      {
        *(_QWORD *)&v88 = 0;
        qfree();
      }
      return v15;
    case 0x27u:
    case 0x32u:
      if ( v69 >= v11 )
      {
        v68.m128i_i64[0] = v69;
        v79[1] = v11;
        v79[0] = 0;
        sub_313630(&v89, v79, v69, v20, v21, v22);
        v80 = _mm_unpacklo_epi64((__m128i)v68.m128i_u64[0], (__m128i)(unsigned __int64)(v10 - v68.m128i_i64[0]));
        sub_313630(&v89, &v80, v68.m128i_i64[0], v54, v55, v56);
      }
      else
      {
        v78 = _mm_unpacklo_epi64((__m128i)v69, (__m128i)(v11 - v69));
        sub_313630(&v89, &v78, v69, v20, v21, v22);
      }
      goto LABEL_20;
    case 0x29u:
    case 0x34u:
      v39 = v69;
      if ( v69 < v11 )
      {
        v85 = _mm_load_si128(&v68);
        sub_313630(&v89, &v85, v19, v20, v21, v22);
        v91 = 0;
        *(_QWORD *)&v92 = v39 + 1;
        sub_313630(&v89, &v91, v50, v51, v52, v53);
      }
      else
      {
        v84[0] = v11;
        v84[1] = v69 + 1 - v11;
        sub_313630(&v89, v84, v19, v20, v21, v22);
      }
      goto LABEL_20;
    default:
      goto LABEL_20;
  }
}
