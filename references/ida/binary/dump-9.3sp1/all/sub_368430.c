__int64 __fastcall sub_368430(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rsi
  unsigned int *v23; // rdi
  __int64 v24; // r12
  __m128 v25; // xmm0
  int *v26; // rsi
  __int64 v27; // rax
  bool v28; // r12
  int v29; // eax
  char v30; // r13
  void (*v31)(__int64, __int64, const char *, ...); // r12
  __int64 func_qty; // rax
  void (*v33)(__int64, __int64, const char *, ...); // r9
  int v34; // eax
  int v35; // r14d
  const char *v36; // rax
  unsigned int v37; // ebx
  __int64 v39; // r9
  char v40; // al
  __int64 v41; // rdi
  int v42; // r10d
  int v43; // r12d
  int v44; // ecx
  int v45; // r10d
  char v46; // al
  int v47; // ecx
  char v48; // [rsp+Fh] [rbp-161h]
  int v49; // [rsp+10h] [rbp-160h]
  int v50; // [rsp+18h] [rbp-158h]
  int v51; // [rsp+18h] [rbp-158h]
  int v52; // [rsp+18h] [rbp-158h]
  unsigned int v53; // [rsp+18h] [rbp-158h]
  int v54; // [rsp+18h] [rbp-158h]
  int v55; // [rsp+1Ch] [rbp-154h]
  int v56; // [rsp+1Ch] [rbp-154h]
  int v57; // [rsp+20h] [rbp-150h]
  int v58; // [rsp+20h] [rbp-150h]
  int v59; // [rsp+24h] [rbp-14Ch]
  int v60; // [rsp+24h] [rbp-14Ch]
  int v61; // [rsp+24h] [rbp-14Ch]
  int v62; // [rsp+24h] [rbp-14Ch]
  __int64 v63; // [rsp+28h] [rbp-148h]
  int v64; // [rsp+34h] [rbp-13Ch] BYREF
  int v65; // [rsp+38h] [rbp-138h] BYREF
  int v66; // [rsp+3Ch] [rbp-134h] BYREF
  __int128 v67; // [rsp+40h] [rbp-130h] BYREF
  int v68; // [rsp+50h] [rbp-120h]
  __int64 v69; // [rsp+60h] [rbp-110h] BYREF
  __int128 v70; // [rsp+68h] [rbp-108h]
  const char *v71; // [rsp+80h] [rbp-F0h] BYREF
  __int128 v72; // [rsp+88h] [rbp-E8h]
  __int64 v73; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 server_connection; // [rsp+A8h] [rbp-C8h]
  int v75; // [rsp+B8h] [rbp-B8h] BYREF
  _QWORD *v76; // [rsp+C0h] [rbp-B0h]
  int *v77; // [rsp+C8h] [rbp-A8h]
  int *v78; // [rsp+D0h] [rbp-A0h]
  __int128 v79; // [rsp+D8h] [rbp-98h]
  __int128 v80; // [rsp+E8h] [rbp-88h]
  __int64 v81; // [rsp+F8h] [rbp-78h]
  __int128 v82; // [rsp+100h] [rbp-70h]
  int v83; // [rsp+110h] [rbp-60h]
  char v84[24]; // [rsp+120h] [rbp-50h] BYREF
  unsigned __int64 v85; // [rsp+138h] [rbp-38h]

  v15 = *(_QWORD *)a1;
  v85 = __readfsqword(0x28u);
  v79 = 0;
  v73 = v15;
  v80 = 0;
  server_connection = 0;
  v75 = 0;
  v76 = nullptr;
  v77 = &v75;
  v78 = &v75;
  v81 = 0;
  v83 = 0;
  v82 = 0;
  v17 = time(nullptr);
  v22 = *(_QWORD *)a1;
  v49 = v17;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1337LL) & 0x40) != 0 )
  {
    v63 = 0;
  }
  else
  {
    v23 = (unsigned int *)(a1 + 8);
    if ( a4 && *(_QWORD *)(a4 + 8) )
      sub_367FC0(v23, v22, a4, 0.0, *(double *)a6.m128i_i64, a7, a8, v20, v21, a11);
    else
      sub_364940((__int64)v23, v22);
    v19 = *(_QWORD *)(a1 + 328);
    v18 = *(_QWORD *)a1;
    v63 = ((__int64)(*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 272)) >> 3)
        + ((__int64)(*(_QWORD *)(a1 + 304) - *(_QWORD *)(a1 + 312)) >> 3)
        + (((v19 == 0) + ((v19 - *(_QWORD *)(a1 + 296)) >> 3) - 1) << 6);
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 1336LL) & 0x2080) == 0x80 )
    {
      if ( *(_QWORD *)(a1 + 216) )
      {
        v24 = *(_QWORD *)(v18 + 8);
        if ( (unsigned __int8)netnode_inited() )
        {
          if ( (*(_BYTE *)(v24 + 12) & 0x20) != 0 )
          {
            *((_QWORD *)&v79 + 1) = get_nsec_stamp();
            server_connection = get_server_connection();
            if ( server_connection )
            {
              sub_363BA0(&v73);
              if ( SDWORD2(v82) > 0 )
                auto_wait();
            }
          }
        }
      }
    }
  }
  v69 = 0;
  v25 = 0;
  v70 = 0;
  if ( a2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 16LL))(a2, &v69) )
    qfwrite();
  v26 = (int *)&batch;
  v27 = *(_QWORD *)a1;
  v28 = 1;
  if ( batch )
    v28 = (*(_BYTE *)(v27 + 607) & 8) != 0;
  v64 = 1;
  v29 = *(_DWORD *)(v27 + 1336);
  v65 = 0;
  v66 = 0;
  v59 = v29 & 0x4000;
  if ( (v29 & 0x4000) != 0 )
  {
    v48 = 1;
    v30 = 0;
    if ( !a2 )
    {
LABEL_39:
      v30 = 0;
      goto LABEL_40;
    }
    goto LABEL_20;
  }
  v25 = 0;
  v26 = nullptr;
  v72 = 0;
  v71 = nullptr;
  v71 = (const char *)qvector_reserve((__int64)&v71, 0, 1, 1);
  *(_QWORD *)&v72 = 1;
  *v71 = 0;
  if ( server_connection )
  {
    if ( (int)v82 > 0 )
    {
      v18 = (unsigned int)(DWORD2(v82) + HIDWORD(v82));
      if ( (_DWORD)v82 == (_DWORD)v18 )
      {
        v19 = *(unsigned int *)(*(_QWORD *)a1 + 1336LL);
        if ( (v19 & 0x1000) != 0 )
        {
          if ( a2 )
          {
            v44 = *(_DWORD *)(*(_QWORD *)a1 + 1336LL) & 1;
            if ( v44 )
            {
              if ( v71 )
              {
                *(_QWORD *)&v72 = 0;
                qfree((__int64)v71);
              }
              v48 = 0;
              v30 = 0;
              goto LABEL_20;
            }
            v48 = 0;
            v42 = 0;
            v43 = 0;
            v30 = 0;
            v56 = 0;
            v58 = 0;
            goto LABEL_80;
          }
          goto LABEL_68;
        }
      }
    }
  }
  v26 = &v64;
  v40 = sub_363410(a1, &v64, (__int64)&v73, a2 != 0, v28 & 0x1F, v39, (__m128)0LL, a6);
  v30 = v40;
  if ( v40 )
  {
    if ( a2 )
    {
      v41 = *(_QWORD *)a1;
      v42 = 0;
      v43 = 0;
      v56 = 0;
      v58 = 0;
      v44 = *(_DWORD *)(*(_QWORD *)a1 + 1336LL) & 1;
      if ( v44 )
        goto LABEL_53;
      v48 = v40;
      goto LABEL_80;
    }
LABEL_69:
    if ( v71 )
    {
      *(_QWORD *)&v72 = 0;
      qfree((__int64)v71);
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
        sub_3661C0(a1, v26, v18, v19, v25, *(double *)a6.m128i_i64);
      }
LABEL_24:
      v34 = time(nullptr);
      v35 = v64;
      if ( v64 < 0 )
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
        sub_361C20((__int64 *)a1, v49, v34, v65, v66);
        if ( !a2 )
        {
LABEL_30:
          if ( !server_connection )
          {
LABEL_33:
            v37 = (unsigned __int8)v30 ^ 1;
            goto LABEL_34;
          }
          goto LABEL_31;
        }
      }
      else if ( !a2 )
      {
        goto LABEL_30;
      }
      qtime64();
      qstrftime64();
      if ( v30 )
      {
        sub_6D0A0((__int64)"%s %s\n", v84, "Decompilation has been cancelled by the user.");
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
          sub_6D0A0((__int64)"%s %s\n", v84, "The application has been completely decompiled.");
          goto LABEL_30;
        }
        sub_6D0A0((__int64)"%s %s\n", v84, "An internal error occurred during decompilation.");
        if ( !server_connection )
        {
LABEL_46:
          v37 = 0;
          goto LABEL_34;
        }
      }
LABEL_31:
      get_path();
      v36 = (const char *)qbasename();
      sub_6D0A0(
        (__int64)"lumina: sent=%d req=%d recv better=%d worse=%d saved %d.%03d spent %d.%03d secs (%s)\n",
        DWORD1(v82),
        (_DWORD)v82,
        DWORD2(v82),
        v83,
        (unsigned __int64)v80 / 0x3B9ACA00,
        (unsigned __int64)v80 / 0xF4240
      - 1000
      * ((unsigned __int64)((0x20C49BA5E353F7CFLL * (unsigned __int128)((unsigned __int64)v80 / 0x7A1200)) >> 64) >> 4),
        *((_QWORD *)&v80 + 1) / 0x3B9ACA00uLL,
        *((_QWORD *)&v80 + 1) / 0xF4240uLL
      - 1000
      * ((unsigned __int64)((0x20C49BA5E353F7CFLL * (unsigned __int128)(*((_QWORD *)&v80 + 1) / 0x7A1200uLL)) >> 64) >> 4),
        v36);
      goto LABEL_32;
    }
LABEL_41:
    if ( *(_BYTE *)(a1 + 523) )
      goto LABEL_24;
    goto LABEL_42;
  }
  v25 = 0;
  v26 = (int *)&v67;
  v68 = 0;
  v67 = 0;
  sub_361F40((_QWORD *)a1, (int *)&v67);
  if ( !a2 )
  {
LABEL_68:
    v30 = 0;
    goto LABEL_69;
  }
  v41 = *(_QWORD *)a1;
  v43 = HIDWORD(v67);
  v42 = v68;
  v58 = DWORD1(v67);
  v59 = v67;
  v56 = DWORD2(v67);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1336LL) & 1) != 0 )
    goto LABEL_53;
  v48 = 1;
  v44 = v67;
LABEL_80:
  v53 = v44;
  v61 = v42;
  if ( !(unsigned __int8)sub_361710((__int64 *)a1, a3, a2) )
    goto LABEL_71;
  v42 = v61;
  v47 = v53;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1416LL) & 8) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64, const char *, _QWORD))(*(_QWORD *)a2 + 32LL))(
      a2,
      a3,
      "#include <stdarg.h>\n\n",
      v53);
    v47 = v53;
    v42 = v61;
  }
  if ( !v48 )
  {
    if ( v71 )
    {
      v54 = v47;
      v62 = v42;
      *(_QWORD *)&v72 = 0;
      qfree((__int64)v71);
      v42 = v62;
      v47 = v54;
    }
    goto LABEL_60;
  }
  v59 = v47;
  v41 = *(_QWORD *)a1;
LABEL_53:
  v51 = v42;
  if ( (unsigned __int8)sub_377D80(v41, a3, a2) )
  {
    v45 = v51;
    if ( (unsigned __int64)v72 <= 1
      || (v46 = (*(__int64 (**)(__int64, __int64, char *, ...))(*(_QWORD *)a2 + 32LL))(a2, a3, "%s\n", v71),
          v45 = v51,
          v46) )
    {
      v52 = v45;
      v48 = sub_361250(a1 + 8, *(_QWORD *)a1, a3, a2, v30, &v65, &v66);
      v42 = v52;
      if ( v48 )
      {
        if ( v71 )
        {
          *(_QWORD *)&v72 = 0;
          qfree((__int64)v71);
          v42 = v52;
        }
        v47 = v59;
LABEL_60:
        if ( v47 || v43 | v58 )
        {
          (*(void (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a2 + 32LL))(
            a2,
            a3,
            "\n// #eh34_calls=%d #try=%d #catch=%d #wind=%d #gotos=%d\n",
            v47,
            v58,
            v56,
            v43,
            v42);
          goto LABEL_21;
        }
LABEL_20:
        (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a2 + 32LL))(a2, a3, "\n");
LABEL_21:
        v31 = *(void (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a2 + 32LL);
        v55 = v83;
        v50 = v82;
        v57 = DWORD2(v82);
        v60 = v65;
        func_qty = get_func_qty();
        v31(
          a2,
          a3,
          "// nfuncs=%zu queued=%zu decompiled=%d lumina nreq=%d worse=%d better=%d\n",
          func_qty,
          v63,
          v60,
          v50,
          v55,
          v57);
        v33 = *(void (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a2 + 32LL);
        if ( v30 )
        {
          v26 = (int *)a3;
          v33(a2, a3, "// Cancelled by the user\n");
          if ( !*(_BYTE *)(a1 + 522) )
            goto LABEL_23;
          goto LABEL_41;
        }
        if ( v48 )
        {
          v26 = (int *)a3;
          if ( v64 )
            v33(a2, a3, "// ALL OK, %d function(s) have been successfully decompiled\n", v60);
          else
            v33(a2, a3, "#error \"There were %d decompilation failure(s) on %d function(s)\"\n", v66, v60);
        }
        else
        {
          v26 = (int *)a3;
          v33(a2, a3, "// Not interesting file\n");
        }
        goto LABEL_39;
      }
    }
  }
LABEL_71:
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree((__int64)v71);
  }
  v37 = -1;
LABEL_34:
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69);
  }
  sub_35E720(v76);
  return v37;
}
