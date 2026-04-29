__int64 __fastcall sub_368430(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        double a5,
        __m128i a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v15; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rsi
  unsigned int *v24; // rdi
  __int64 v25; // r12
  __m128 v26; // xmm0
  __int64 v27; // rax
  bool v28; // r12
  int v29; // eax
  char v30; // r13
  void (*v31)(__int64, __int64, const char *, ...); // r12
  __int64 func_qty; // rax
  void (*v33)(__int64, __int64, const char *, ...); // r9
  int v34; // eax
  int v35; // r14d
  __int64 v36; // rax
  __int64 path; // rax
  const char *v38; // rax
  unsigned int v39; // ebx
  __int64 v41; // r9
  char v42; // al
  __int64 v43; // rdi
  int v44; // r10d
  int v45; // r12d
  int v46; // ecx
  int v47; // r10d
  char v48; // al
  int v49; // ecx
  char v50; // [rsp+Fh] [rbp-161h]
  int v51; // [rsp+10h] [rbp-160h]
  int v52; // [rsp+18h] [rbp-158h]
  int v53; // [rsp+18h] [rbp-158h]
  int v54; // [rsp+18h] [rbp-158h]
  unsigned int v55; // [rsp+18h] [rbp-158h]
  int v56; // [rsp+18h] [rbp-158h]
  int v57; // [rsp+1Ch] [rbp-154h]
  int v58; // [rsp+1Ch] [rbp-154h]
  int v59; // [rsp+20h] [rbp-150h]
  int v60; // [rsp+20h] [rbp-150h]
  int v61; // [rsp+24h] [rbp-14Ch]
  int v62; // [rsp+24h] [rbp-14Ch]
  int v63; // [rsp+24h] [rbp-14Ch]
  int v64; // [rsp+24h] [rbp-14Ch]
  __int64 v65; // [rsp+28h] [rbp-148h]
  int v66; // [rsp+34h] [rbp-13Ch] BYREF
  int v67; // [rsp+38h] [rbp-138h] BYREF
  unsigned int v68; // [rsp+3Ch] [rbp-134h] BYREF
  __int128 v69; // [rsp+40h] [rbp-130h] BYREF
  int v70; // [rsp+50h] [rbp-120h]
  __int64 v71; // [rsp+60h] [rbp-110h] BYREF
  __int128 v72; // [rsp+68h] [rbp-108h]
  const char *v73; // [rsp+80h] [rbp-F0h] BYREF
  __int128 v74; // [rsp+88h] [rbp-E8h]
  __int64 v75; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 server_connection; // [rsp+A8h] [rbp-C8h]
  int v77; // [rsp+B8h] [rbp-B8h] BYREF
  _QWORD *v78; // [rsp+C0h] [rbp-B0h]
  int *v79; // [rsp+C8h] [rbp-A8h]
  int *v80; // [rsp+D0h] [rbp-A0h]
  __int128 v81; // [rsp+D8h] [rbp-98h]
  __int128 v82; // [rsp+E8h] [rbp-88h]
  __int64 v83; // [rsp+F8h] [rbp-78h]
  __int128 v84; // [rsp+100h] [rbp-70h]
  int v85; // [rsp+110h] [rbp-60h]
  char v86[24]; // [rsp+120h] [rbp-50h] BYREF
  unsigned __int64 v87; // [rsp+138h] [rbp-38h]

  v15 = *(_QWORD *)a1;
  v87 = __readfsqword(0x28u);
  v81 = 0;
  v75 = v15;
  v82 = 0;
  server_connection = 0;
  v77 = 0;
  v78 = nullptr;
  v79 = &v77;
  v80 = &v77;
  v83 = 0;
  v85 = 0;
  v84 = 0;
  v17 = time(nullptr);
  v23 = *(_QWORD *)a1;
  v51 = v17;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1337LL) & 0x40) != 0 )
  {
    v65 = 0;
  }
  else
  {
    v24 = (unsigned int *)(a1 + 8);
    if ( a4 && a4[1] )
      sub_367FC0(v24, v23, a4, 0.0, *(double *)a6.m128i_i64, a7, a8, v21, v22, a11);
    else
      sub_364940((__int64)v24, v23, v18, v19, v20);
    v65 = ((__int64)(*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 272)) >> 3)
        + ((__int64)(*(_QWORD *)(a1 + 304) - *(_QWORD *)(a1 + 312)) >> 3)
        + (((*(_QWORD *)(a1 + 328) == 0) + ((__int64)(*(_QWORD *)(a1 + 328) - *(_QWORD *)(a1 + 296)) >> 3) - 1) << 6);
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 1336LL) & 0x2080) == 0x80 )
    {
      if ( *(_QWORD *)(a1 + 216) )
      {
        v25 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
        if ( (unsigned __int8)netnode_inited() )
        {
          if ( (*(_BYTE *)(v25 + 12) & 0x20) != 0 )
          {
            *((_QWORD *)&v81 + 1) = get_nsec_stamp();
            server_connection = get_server_connection();
            if ( server_connection )
            {
              sub_363BA0(&v75);
              if ( SDWORD2(v84) > 0 )
                auto_wait();
            }
          }
        }
      }
    }
  }
  v71 = 0;
  v26 = 0;
  v72 = 0;
  if ( a2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 16LL))(a2, &v71) )
    qfwrite(a3, v71, v72);
  v27 = *(_QWORD *)a1;
  v28 = 1;
  if ( batch )
    v28 = (*(_BYTE *)(v27 + 607) & 8) != 0;
  v66 = 1;
  v29 = *(_DWORD *)(v27 + 1336);
  v67 = 0;
  v68 = 0;
  v61 = v29 & 0x4000;
  if ( (v29 & 0x4000) != 0 )
  {
    v50 = 1;
    v30 = 0;
    if ( !a2 )
    {
LABEL_39:
      v30 = 0;
      goto LABEL_40;
    }
    goto LABEL_20;
  }
  v26 = 0;
  v74 = 0;
  v73 = nullptr;
  v73 = (const char *)qvector_reserve(&v73, 0, 1, 1);
  *(_QWORD *)&v74 = 1;
  *v73 = 0;
  if ( server_connection
    && (int)v84 > 0
    && (_DWORD)v84 == DWORD2(v84) + HIDWORD(v84)
    && (*(_DWORD *)(*(_QWORD *)a1 + 1336LL) & 0x1000) != 0 )
  {
    if ( a2 )
    {
      v46 = *(_DWORD *)(*(_QWORD *)a1 + 1336LL) & 1;
      if ( v46 )
      {
        if ( v73 )
        {
          *(_QWORD *)&v74 = 0;
          qfree(v73);
        }
        v50 = 0;
        v30 = 0;
        goto LABEL_20;
      }
      v50 = 0;
      v44 = 0;
      v45 = 0;
      v30 = 0;
      v58 = 0;
      v60 = 0;
      goto LABEL_80;
    }
    goto LABEL_68;
  }
  v42 = sub_363410(a1, &v66, (__int64)&v75, a2 != 0, v28 & 0x1F, v41, (__m128)0LL, a6);
  v30 = v42;
  if ( v42 )
  {
    if ( a2 )
    {
      v43 = *(_QWORD *)a1;
      v44 = 0;
      v45 = 0;
      v58 = 0;
      v60 = 0;
      v46 = *(_DWORD *)(*(_QWORD *)a1 + 1336LL) & 1;
      if ( v46 )
        goto LABEL_53;
      v50 = v42;
      goto LABEL_80;
    }
LABEL_69:
    if ( v73 )
    {
      *(_QWORD *)&v74 = 0;
      qfree(v73);
    }
LABEL_40:
    if ( !*(_BYTE *)(a1 + 522) )
    {
LABEL_23:
      *(_BYTE *)(a1 + 522) = 1;
      dump_tinfo_stats();
      if ( *(_BYTE *)(a1 + 523) )
        goto LABEL_24;
LABEL_42:
      if ( (*(_BYTE *)(*(_QWORD *)a1 + 1338LL) & 0x20) != 0 )
      {
        *(_BYTE *)(a1 + 523) = 1;
        sub_3661C0(a1, v26, *(double *)a6.m128i_i64);
      }
LABEL_24:
      v34 = time(nullptr);
      v35 = v66;
      if ( v66 < 0 )
      {
        if ( !a2 )
        {
          if ( !server_connection )
            goto LABEL_46;
          goto LABEL_31;
        }
      }
      else if ( (*(_BYTE *)(*(_QWORD *)a1 + 1336LL) & 0x40) != 0 )
      {
        sub_361C20((unsigned int *)a1, v51, v34, v67, v68);
        if ( !a2 )
        {
LABEL_30:
          if ( !server_connection )
          {
LABEL_33:
            v39 = (unsigned __int8)v30 ^ 1;
            goto LABEL_34;
          }
          goto LABEL_31;
        }
      }
      else if ( !a2 )
      {
        goto LABEL_30;
      }
      v36 = qtime64();
      qstrftime64(v86, 20, "%Y-%m-%d %H:%M:%S", v36);
      if ( v30 )
      {
        sub_6D0A0((__int64)"%s %s\n", v86, "Decompilation has been cancelled by the user.");
        if ( !server_connection )
        {
LABEL_32:
          if ( v35 >= 0 )
            goto LABEL_33;
          goto LABEL_46;
        }
      }
      else
      {
        if ( v35 >= 0 )
        {
          sub_6D0A0((__int64)"%s %s\n", v86, "The application has been completely decompiled.");
          goto LABEL_30;
        }
        sub_6D0A0((__int64)"%s %s\n", v86, "An internal error occurred during decompilation.");
        if ( !server_connection )
        {
LABEL_46:
          v39 = 0;
          goto LABEL_34;
        }
      }
LABEL_31:
      path = get_path(1);
      v38 = (const char *)qbasename(path);
      sub_6D0A0(
        (__int64)"lumina: sent=%d req=%d recv better=%d worse=%d saved %d.%03d spent %d.%03d secs (%s)\n",
        DWORD1(v84),
        (_DWORD)v84,
        DWORD2(v84),
        v85,
        (unsigned __int64)v82 / 0x3B9ACA00,
        (unsigned __int64)v82 / 0xF4240
      - 1000
      * ((unsigned __int64)((0x20C49BA5E353F7CFLL * (unsigned __int128)((unsigned __int64)v82 / 0x7A1200)) >> 64) >> 4),
        *((_QWORD *)&v82 + 1) / 0x3B9ACA00uLL,
        *((_QWORD *)&v82 + 1) / 0xF4240uLL
      - 1000
      * ((unsigned __int64)((0x20C49BA5E353F7CFLL * (unsigned __int128)(*((_QWORD *)&v82 + 1) / 0x7A1200uLL)) >> 64) >> 4),
        v38);
      goto LABEL_32;
    }
LABEL_41:
    if ( *(_BYTE *)(a1 + 523) )
      goto LABEL_24;
    goto LABEL_42;
  }
  v26 = 0;
  v70 = 0;
  v69 = 0;
  sub_361F40((_QWORD *)a1, (int *)&v69);
  if ( !a2 )
  {
LABEL_68:
    v30 = 0;
    goto LABEL_69;
  }
  v43 = *(_QWORD *)a1;
  v45 = HIDWORD(v69);
  v44 = v70;
  v60 = DWORD1(v69);
  v61 = v69;
  v58 = DWORD2(v69);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1336LL) & 1) != 0 )
    goto LABEL_53;
  v50 = 1;
  v46 = v69;
LABEL_80:
  v55 = v46;
  v63 = v44;
  if ( !(unsigned __int8)sub_361710((__int64 *)a1, a3, a2) )
    goto LABEL_71;
  v44 = v63;
  v49 = v55;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1416LL) & 8) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64, const char *, _QWORD))(*(_QWORD *)a2 + 32LL))(
      a2,
      a3,
      "#include <stdarg.h>\n\n",
      v55);
    v49 = v55;
    v44 = v63;
  }
  if ( !v50 )
  {
    if ( v73 )
    {
      v56 = v49;
      v64 = v44;
      *(_QWORD *)&v74 = 0;
      qfree(v73);
      v44 = v64;
      v49 = v56;
    }
    goto LABEL_60;
  }
  v61 = v49;
  v43 = *(_QWORD *)a1;
LABEL_53:
  v53 = v44;
  if ( (unsigned __int8)sub_377D80(v43, a3, a2) )
  {
    v47 = v53;
    if ( (unsigned __int64)v74 <= 1
      || (v48 = (*(__int64 (**)(__int64, __int64, char *, ...))(*(_QWORD *)a2 + 32LL))(a2, a3, "%s\n", v73),
          v47 = v53,
          v48) )
    {
      v54 = v47;
      v50 = sub_361250(a1 + 8, *(_QWORD *)a1, a3, a2, v30, &v67, &v68);
      v44 = v54;
      if ( v50 )
      {
        if ( v73 )
        {
          *(_QWORD *)&v74 = 0;
          qfree(v73);
          v44 = v54;
        }
        v49 = v61;
LABEL_60:
        if ( v49 || v45 | v60 )
        {
          (*(void (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a2 + 32LL))(
            a2,
            a3,
            "\n// #eh34_calls=%d #try=%d #catch=%d #wind=%d #gotos=%d\n",
            v49,
            v60,
            v58,
            v45,
            v44);
          goto LABEL_21;
        }
LABEL_20:
        *(double *)v26.m128_u64 = (*(double (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a2 + 32LL))(
                                    a2,
                                    a3,
                                    "\n");
LABEL_21:
        v31 = *(void (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a2 + 32LL);
        v57 = v85;
        v52 = v84;
        v59 = DWORD2(v84);
        v62 = v67;
        func_qty = get_func_qty(*(double *)v26.m128_u64);
        v31(
          a2,
          a3,
          "// nfuncs=%zu queued=%zu decompiled=%d lumina nreq=%d worse=%d better=%d\n",
          func_qty,
          v65,
          v62,
          v52,
          v57,
          v59);
        v33 = *(void (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a2 + 32LL);
        if ( v30 )
        {
          v33(a2, a3, "// Cancelled by the user\n");
          if ( !*(_BYTE *)(a1 + 522) )
            goto LABEL_23;
          goto LABEL_41;
        }
        if ( v50 )
        {
          if ( v66 )
            v33(a2, a3, "// ALL OK, %d function(s) have been successfully decompiled\n", v62);
          else
            v33(a2, a3, "#error \"There were %d decompilation failure(s) on %d function(s)\"\n", v68, v62);
        }
        else
        {
          v33(a2, a3, "// Not interesting file\n");
        }
        goto LABEL_39;
      }
    }
  }
LABEL_71:
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  v39 = -1;
LABEL_34:
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71);
  }
  sub_35E720(v78);
  return v39;
}
