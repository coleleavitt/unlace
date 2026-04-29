__int64 __fastcall sub_13350(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  __int64 result; // rax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 **v16; // rdx
  __int64 *v17; // rbx
  __m128i *v18; // rsi
  __m128i si128; // xmm0
  unsigned int v20; // edx
  __int64 *v21; // rcx
  unsigned int v22; // edx
  __int64 *v23; // rcx
  unsigned int v24; // edx
  _QWORD **v25; // rcx
  unsigned int v26; // edx
  __int64 *v27; // rcx
  unsigned int v28; // ecx
  __int64 v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  unsigned int v32; // edx
  _QWORD *v33; // rcx
  unsigned int v34; // edx
  __int64 *v35; // rcx
  unsigned int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  _QWORD *v40; // rdx
  unsigned int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdi
  _DWORD *v45; // rdx
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rbx
  _QWORD *v49; // rax
  unsigned int v50; // edx
  __int64 *v51; // rcx
  __int64 v52; // rdi
  unsigned int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // rdi
  unsigned int v56; // edx
  __int64 *v57; // rcx
  unsigned int v58; // edx
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 *v61; // rbp
  __int64 v62; // rsi
  __int64 v63; // r12
  unsigned int *v64; // rcx
  unsigned int v65; // r13d
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  _QWORD *v74; // rcx
  _QWORD *v75; // rdx
  __int64 *v76; // rcx
  __int64 *v77; // rdx
  __int64 *v78; // rcx
  __int64 *v79; // rcx
  __int64 *v80; // rdx
  __int64 *v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // [rsp+8h] [rbp-50h]
  __int64 v85; // [rsp+10h] [rbp-48h] BYREF
  __int128 v86; // [rsp+18h] [rbp-40h]
  unsigned __int64 v87; // [rsp+28h] [rbp-30h]

  v87 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0LL:
      netnode_check(a1 + 144, "$ cli", 0, 1);
      hook_event_listener(3, a1 + 120, &LPH, 0);
      return 0;
    case 1LL:
      unhook_event_listener(3, a1 + 120);
      return 0;
    case 10LL:
      v20 = *(_DWORD *)a3;
      if ( v20 > 0x2F )
      {
        v21 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v21 + 1;
      }
      else
      {
        v21 = (__int64 *)(*(_QWORD *)(a3 + 16) + v20);
        *(_DWORD *)a3 = v20 + 8;
      }
      return (int)sub_4100(a1, *v21);
    case 11LL:
      v22 = *(_DWORD *)a3;
      if ( v22 > 0x2F )
      {
        v23 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v23 + 1;
      }
      else
      {
        v23 = (__int64 *)(*(_QWORD *)(a3 + 16) + v22);
        *(_DWORD *)a3 = v22 + 8;
      }
      if ( !(unsigned int)sub_48C0(a1, *v23) )
        return -1;
      return 1;
    case 12LL:
      v24 = *(_DWORD *)a3;
      if ( v24 <= 0x2F )
      {
        v25 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v24);
        *(_DWORD *)a3 = v24 + 8;
      }
      else
      {
        v25 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v25 + 1;
      }
      sub_10B00(*v25, a4, a5, a6, a7, a8, a9, a10, a11);
      return 1;
    case 13LL:
      v26 = *(_DWORD *)a3;
      if ( v26 > 0x2F )
      {
        v27 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v27 + 1;
      }
      else
      {
        v27 = (__int64 *)(*(_QWORD *)(a3 + 16) + v26);
        *(_DWORD *)a3 = v26 + 8;
      }
      sub_5A70(*v27);
      return 1;
    case 14LL:
      v28 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v29 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v29;
LABEL_29:
        *(_QWORD *)(a3 + 8) = v29 + 8;
        goto LABEL_30;
      }
      *(_DWORD *)a3 = v28 + 8;
      if ( v28 + 8 > 0x2F )
      {
        v29 = *(_QWORD *)(a3 + 8);
        goto LABEL_29;
      }
      *(_DWORD *)a3 = v28 + 16;
LABEL_30:
      nullsub_2();
      return 1;
    case 15LL:
      v30 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v31 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v31;
LABEL_33:
        *(_QWORD *)(a3 + 8) = v31 + 8;
        goto LABEL_34;
      }
      *(_DWORD *)a3 = v30 + 8;
      if ( v30 + 8 > 0x2F )
      {
        v31 = *(_QWORD *)(a3 + 8);
        goto LABEL_33;
      }
      *(_DWORD *)a3 = v30 + 16;
LABEL_34:
      nullsub_3();
      return 1;
    case 17LL:
      v32 = *(_DWORD *)a3;
      if ( v32 <= 0x2F )
      {
        v33 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v32);
        *(_DWORD *)a3 = v32 + 8;
      }
      else
      {
        v33 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v33 + 1;
      }
      sub_12FD0(*v33);
      return 1;
    case 18LL:
      v34 = *(_DWORD *)a3;
      if ( v34 > 0x2F )
      {
        v35 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v35 + 1;
      }
      else
      {
        v35 = (__int64 *)(*(_QWORD *)(a3 + 16) + v34);
        *(_DWORD *)a3 = v34 + 8;
      }
      sub_4FF0(*v35);
      return 1;
    case 19LL:
      v36 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v81 = *(__int64 **)(a3 + 8);
        v40 = v81 + 1;
        *(_QWORD *)(a3 + 8) = v81 + 1;
        v39 = *v81;
      }
      else
      {
        v37 = *(_QWORD *)(a3 + 16);
        v38 = v36 + 8;
        *(_DWORD *)a3 = v38;
        v39 = *(_QWORD *)(v37 + v36);
        if ( (unsigned int)v38 <= 0x2F )
        {
          v40 = (_QWORD *)(v38 + v37);
          *(_DWORD *)a3 = v36 + 16;
          goto LABEL_44;
        }
        v40 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v40 + 1;
LABEL_44:
      if ( !(unsigned __int8)sub_DC30(v39, *v40) )
        return -1;
      return 1;
    case 20LL:
      v41 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v78 = *(__int64 **)(a3 + 8);
        v45 = v78 + 1;
        *(_QWORD *)(a3 + 8) = v78 + 1;
        v44 = *v78;
      }
      else
      {
        v42 = *(_QWORD *)(a3 + 16);
        v43 = v41 + 8;
        *(_DWORD *)a3 = v43;
        v44 = *(_QWORD *)(v42 + v41);
        if ( (unsigned int)v43 <= 0x2F )
        {
          v45 = (_DWORD *)(v43 + v42);
          *(_DWORD *)a3 = v41 + 16;
          goto LABEL_49;
        }
        v45 = *(_DWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v45 + 2;
LABEL_49:
      sub_12FE0(v44, *v45 != 0, a4, a5, a6, a7, a8, a9, a10, a11);
      return 1;
    case 21LL:
      v46 = *(_DWORD *)a3;
      if ( v46 <= 0x2F )
      {
        v47 = *(_QWORD *)(a3 + 16) + v46;
        *(_DWORD *)a3 = v46 + 8;
      }
      else
      {
        v47 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v47 + 8;
      }
      v48 = *(_QWORD *)(*(_QWORD *)v47 + 16LL);
      v49 = (_QWORD *)getseg(v48);
      if ( !v49 )
        return 0;
      return -(__int64)(*v49 == v48);
    case 22LL:
      v50 = *(_DWORD *)a3;
      if ( v50 > 0x2F )
      {
        v79 = *(__int64 **)(a3 + 8);
        v80 = v79 + 1;
        *(_QWORD *)(a3 + 8) = v79 + 1;
        v52 = *v79;
      }
      else
      {
        v51 = (__int64 *)(*(_QWORD *)(a3 + 16) + v50);
        *(_DWORD *)a3 = v50 + 8;
        v52 = *v51;
        if ( v50 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v50 + 16;
          goto LABEL_57;
        }
        v80 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v80 + 1;
LABEL_57:
      sub_12FE0(v52, 0, a4, a5, a6, a7, a8, a9, a10, a11);
      return 1;
    case 32LL:
      v53 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v76 = *(__int64 **)(a3 + 8);
        v77 = v76 + 1;
        *(_QWORD *)(a3 + 8) = v76 + 1;
        v55 = *v76;
      }
      else
      {
        v54 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v53 + 8;
        v55 = *(_QWORD *)(v54 + v53);
        if ( v53 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v53 + 16;
          goto LABEL_61;
        }
        v77 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v77 + 1;
LABEL_61:
      if ( (unsigned int)sub_49D0(v55) == 1 )
        return 1;
      return -1;
    case 43LL:
      v56 = *(_DWORD *)a3;
      if ( v56 > 0x2F )
      {
        v57 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v57 + 1;
      }
      else
      {
        v57 = (__int64 *)(*(_QWORD *)(a3 + 16) + v56);
        *(_DWORD *)a3 = v56 + 8;
      }
      return (int)sub_4A40(*v57);
    case 50LL:
      v58 = *(_DWORD *)a3;
      if ( v58 > 0x2F )
      {
        v74 = *(_QWORD **)(a3 + 8);
        v75 = v74 + 1;
        *(_QWORD *)(a3 + 8) = v74 + 1;
        v61 = (__int64 *)*v74;
      }
      else
      {
        v59 = *(_QWORD *)(a3 + 16);
        v60 = v58 + 8;
        *(_DWORD *)a3 = v60;
        v61 = *(__int64 **)(v59 + v58);
        if ( (unsigned int)v60 <= 0x2F )
        {
          v62 = v58 + 16;
          *(_DWORD *)a3 = v62;
          v63 = *(_QWORD *)(v59 + v60);
          if ( (unsigned int)v62 <= 0x2F )
          {
            v64 = (unsigned int *)(v62 + v59);
            *(_DWORD *)a3 = v58 + 24;
            goto LABEL_70;
          }
          v64 = *(unsigned int **)(a3 + 8);
LABEL_82:
          *(_QWORD *)(a3 + 8) = v64 + 2;
LABEL_70:
          if ( *(_WORD *)(v63 + 24) != 164 )
            return 0;
          if ( *(_BYTE *)(v63 + 41) != 10 )
            return 0;
          v65 = *v64;
          if ( *v64 + 1 > 1 )
            return 0;
          v66 = *(_QWORD *)(v63 + 48);
          if ( (*(_DWORD *)(v63 + 48) & 0xFF000000) != 0x70000000 )
            return 0;
          v67 = (unsigned int)v66;
          v85 = 0;
          v68 = *(_QWORD *)(a1 + 144);
          v86 = 0;
          v69 = netnode_altval(v68, (unsigned int)v66, 114);
          if ( v69 )
            get_name_expr(&v85, *(_QWORD *)(v63 + 16), v65, v69, -1, 1);
          else
            netnode_qsupstr(*(_QWORD *)(a1 + 144), &v85, v67, 98);
          result = ((_QWORD)v86 == 0) + (_QWORD)v86 - 1LL;
          if ( v61 )
          {
            v71 = *v61;
            v70 = v61[2];
            *v61 = v85;
            v85 = v71;
            *(_OWORD *)(v61 + 1) = v86;
            *((_QWORD *)&v86 + 1) = v70;
          }
          if ( v85 )
          {
            v84 = result;
            *(_QWORD *)&v86 = 0;
            qfree(v85, 0, v70, v71, v72, v73);
            return v84;
          }
          return result;
        }
        v75 = *(_QWORD **)(a3 + 8);
      }
      v64 = (unsigned int *)(v75 + 1);
      *(_QWORD *)(a3 + 8) = v75 + 1;
      v63 = *v75;
      goto LABEL_82;
    case 95LL:
      v14 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v82 = *(_QWORD *)(a3 + 8) + 8LL;
LABEL_98:
        v16 = (__int64 **)(v82 + 8);
        goto LABEL_99;
      }
      *(_DWORD *)a3 = v14 + 8;
      if ( v14 + 8 > 0x2F )
      {
        v82 = *(_QWORD *)(a3 + 8);
        goto LABEL_98;
      }
      v15 = v14 + 16;
      *(_DWORD *)a3 = v15;
      if ( (unsigned int)v15 <= 0x2F )
      {
        v16 = (__int64 **)(*(_QWORD *)(a3 + 16) + v15);
        *(_DWORD *)a3 = v14 + 24;
        goto LABEL_9;
      }
      v16 = *(__int64 ***)(a3 + 8);
LABEL_99:
      *(_QWORD *)(a3 + 8) = v16 + 1;
LABEL_9:
      v17 = *v16;
      if ( *v16 )
      {
        v18 = (__m128i *)*v17;
        if ( (unsigned __int64)v17[2] <= 0x32 )
        {
          v83 = qvector_reserve(v17, v18, 51, 1);
          *v17 = v83;
          v18 = (__m128i *)v83;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_155D0);
        v17[1] = 51;
        v18[3].m128i_i16[0] = 25701;
        *v18 = si128;
        v18[1] = _mm_load_si128((const __m128i *)&xmmword_155E0);
        v18[2] = _mm_load_si128((const __m128i *)&xmmword_155F0);
        *(_BYTE *)(*v17 + 50) = 0;
      }
      return -1;
    default:
      return 0;
  }
}
