__int64 __fastcall sub_1A7E10(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  char v7; // r15
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // ecx
  signed int v11; // esi
  __int64 v12; // rax
  int v13; // edx
  unsigned int v14; // ebx
  unsigned int v16; // eax
  __int64 v17; // rsi
  unsigned int v18; // edx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // r12
  char *v23; // r15
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  __int64 v31; // rdx
  int v32; // esi
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rsi
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 func; // rax
  int v44; // r12d
  __int64 v45; // r13
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r15
  int tinfo_udt_member; // eax
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // [rsp+0h] [rbp-1F0h]
  __int64 v57; // [rsp+20h] [rbp-1D0h]
  __int64 v58; // [rsp+28h] [rbp-1C8h]
  __int64 v59; // [rsp+30h] [rbp-1C0h]
  int v60; // [rsp+38h] [rbp-1B8h]
  signed int v61; // [rsp+3Ch] [rbp-1B4h]
  __int64 v63; // [rsp+58h] [rbp-198h]
  __int64 v64; // [rsp+58h] [rbp-198h]
  _QWORD *v65; // [rsp+58h] [rbp-198h]
  __int64 v66; // [rsp+60h] [rbp-190h] BYREF
  __int64 v67; // [rsp+68h] [rbp-188h] BYREF
  __int64 v68; // [rsp+70h] [rbp-180h] BYREF
  __int128 v69; // [rsp+78h] [rbp-178h] BYREF
  __int128 v70; // [rsp+88h] [rbp-168h]
  __int64 v71[16]; // [rsp+A0h] [rbp-150h] BYREF
  unsigned __int64 v72; // [rsp+120h] [rbp-D0h] BYREF
  __int128 v73; // [rsp+128h] [rbp-C8h] BYREF
  __int128 v74; // [rsp+138h] [rbp-B8h]
  __int64 v75; // [rsp+148h] [rbp-A8h]
  __int128 v76; // [rsp+150h] [rbp-A0h]
  __int128 v77[3]; // [rsp+160h] [rbp-90h] BYREF
  __int64 v78; // [rsp+190h] [rbp-60h]
  int v79; // [rsp+198h] [rbp-58h]
  __int64 v80; // [rsp+1A0h] [rbp-50h]
  char v81; // [rsp+1A8h] [rbp-48h]
  unsigned __int64 v82; // [rsp+1B8h] [rbp-38h]

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  v82 = __readfsqword(0x28u);
  v7 = a3;
  v58 = *(_QWORD *)(v6 + 1504);
  sub_134FD0(v6, (__int64)a2, a3, a4, a5, a6);
  v8 = *(_DWORD *)(a1 + 112);
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(v9 + 8) == 3 || !*(_DWORD *)(v9 + 48) )
    {
      v10 = *(_DWORD *)(v6 + 72) & 0xFFFFFFF0;
      if ( v10 == 208 || v10 == 64 )
      {
        if ( (unsigned int)(*(_DWORD *)(v6 + 72) - 208) <= 0x2F && (unsigned int)sub_138740((_QWORD *)v6, 3) )
        {
          v8 = *(_DWORD *)(a1 + 112);
        }
        else
        {
          if ( *(_BYTE *)(v6 + 320) )
          {
            if ( !under_debugger )
              sub_37CFE0(51558);
            goto LABEL_111;
          }
          *(_DWORD *)(a1 + 112) = 1;
          v8 = 1;
        }
      }
    }
  }
  v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v61 = v11;
  if ( !(unsigned __int8)sub_1A7500(
                           a1,
                           (__int64)a2,
                           *(_QWORD *)(a1 + 104) + v11 * v8,
                           v11 * *(_DWORD *)(*(_QWORD *)(v6 + 1496) + 656LL),
                           v7) )
  {
    v16 = *(_DWORD *)(v6 + 72) & 0xFFFFFFF0;
    if ( v16 != 208 && v16 != 64 )
      return 0;
    v13 = *(_DWORD *)(a1 + 112);
LABEL_16:
    if ( *(_DWORD *)(*(_QWORD *)(v6 + 1496) + 656LL) < v13 )
      return 0;
LABEL_17:
    sub_19C0E0((__int64)v71, v6, a2);
    v17 = *(_QWORD *)(a1 + 16);
    v18 = *(_DWORD *)(a1 + 112);
    v63 = *(_QWORD *)(v17 + 104);
    v19 = *(_QWORD *)(a1 + 104) + (int)(v18 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL));
    if ( v19 < 0 )
      v19 = 0;
    v20 = sub_19C340(v71, v17 + 96, v18, v19, *(_DWORD *)(*(_QWORD *)(v6 + 1496) + 656LL) - v18, v61);
    v21 = *(_QWORD *)(a1 + 104);
    v22 = v20;
    v57 = (__int64)v20;
    if ( v21 < 0 )
      v21 = 0;
    v23 = (char *)sub_19C340(v71, *(_QWORD *)(a1 + 16) + 96LL, 0, v21, *(_DWORD *)(a1 + 112) + 1, v61);
    sub_19B3C0(v71, 0);
    if ( !v22[3] )
      goto LABEL_25;
    v24 = *(_QWORD *)(a1 + 104) + (int)v63 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
    if ( v24 < 0 )
      v24 = 0;
    v25 = sub_19C410(v57, v6, v24);
    if ( v25 )
      v26 = v63 + v25;
    else
LABEL_25:
      v26 = sub_19C470(v57, v6);
    v27 = *(_DWORD *)(a1 + 112);
    if ( v26 >= v27 )
      v27 = v26;
    v60 = v27;
    sub_18B740(v6);
    if ( a2 )
    {
      v28 = *(_QWORD *)(a1 + 16);
      v29 = *(int *)(a1 + 112);
      v68 = 0;
      v69 = 0u;
      v30 = *(_QWORD *)(a1 + 104);
      v70 = 0;
      v31 = *(int *)(v28 + 24);
      if ( (int)v29 > (int)v31 )
        v29 = v31;
      if ( (int)v29 > 0 )
      {
        v64 = 0;
        v59 = 4 * v29;
        do
        {
          if ( v23 )
          {
            while ( v30 < *(_QWORD *)(v6 + 168) )
            {
              v33 = *(_QWORD *)(v6 + 1440);
              v72 = 0;
              v73 = 0;
              v34 = v30 + v33;
              if ( !__CFADD__(v34, v61 - 1LL) )
              {
                v56 = v34;
                v72 = qvector_reserve(&v72, 0, 1, 16);
                v55 = (_QWORD *)(16 * v73 + v72);
                *v55 = v56;
                v55[1] = v61;
                *(_QWORD *)&v73 = v73 + 1;
              }
              if ( !(unsigned __int8)sub_312680(v23 + 16, &v72) )
              {
                if ( v72 )
                {
                  *(_QWORD *)&v73 = 0;
                  qfree(v72);
                }
                break;
              }
              if ( v72 )
              {
                *(_QWORD *)&v73 = 0;
                qfree(v72);
              }
              v64 += 4;
              v30 += v61;
              if ( v59 == v64 )
                goto LABEL_46;
            }
          }
          v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL) + v64);
          v72 = 0;
          *(_QWORD *)&v73 = 0;
          sub_5F400((__int64 *)&v72, v32, v61);
          *((_QWORD *)&v73 + 1) = 0;
          v74 = 0;
          sub_5F800(&v68, (__int64 *)&v72);
          sub_3113F0((char *)&v69 + 8, (char *)&v73 + 8);
          if ( *((_QWORD *)&v73 + 1) )
          {
            *(_QWORD *)&v74 = 0;
            qfree(*((_QWORD *)&v73 + 1));
          }
          v30 += v61;
          qfree(v72);
          v64 += 4;
        }
        while ( v59 != v64 );
      }
LABEL_46:
      sub_1984A0((__int64)a2, &v68);
      sub_1984A0((__int64)(a2 + 7), &v68);
      if ( *((_QWORD *)&v69 + 1) )
      {
        *(_QWORD *)&v70 = 0;
        qfree(*((_QWORD *)&v69 + 1));
      }
      qfree(v68);
    }
    v35 = *(_QWORD *)(a1 + 72);
    if ( v35 )
    {
      v37 = *(_QWORD *)(a1 + 64) + 40 * v35 - 40;
      v38 = *(_QWORD *)(a1 + 104) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) * v60;
      if ( *(_QWORD *)(v37 + 24) >= v38 )
        goto LABEL_60;
      if ( (*(_BYTE *)(v37 + 32) & 2) != 0 )
      {
        *(_QWORD *)(v37 + 24) = v38;
        goto LABEL_60;
      }
    }
    else
    {
      v36 = *(_DWORD *)(v6 + 72) & 0xFFFFFFF0;
      if ( v36 != 64 && v36 != 208 )
        goto LABEL_52;
      v53 = *(_QWORD *)(a1 + 8);
      v54 = *(_QWORD *)(a1 + 104);
      if ( *(_BYTE *)(v6 + 320) )
      {
        if ( *(_DWORD *)(a1 + 112) != v60 )
        {
          v38 = v54 + *(_DWORD *)(*(_QWORD *)(v53 + 112) + 80LL) * v60;
          goto LABEL_101;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 112) = v60;
      }
      *(_BYTE *)(a1 + 116) = 0;
      v38 = v54 + *(_DWORD *)(*(_QWORD *)(v53 + 112) + 80LL) * v60;
    }
LABEL_101:
    *(_BYTE *)(sub_194CC0((unsigned __int64 *)(a1 + 64), v38, 0, 0) + 32) = 2;
LABEL_60:
    v39 = *(_DWORD *)(v6 + 72) & 0xFFFFFFF0;
    if ( v39 != 64
      && v39 != 208
      && !(unsigned __int8)sub_311780(
                             v57 + 16,
                             *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 16)
                           + *(_QWORD *)(v6 + 1440)) )
    {
      goto LABEL_52;
    }
    if ( !*(_BYTE *)(a1 + 116) )
    {
LABEL_91:
      v14 = 1;
      goto LABEL_92;
    }
    v40 = *(_QWORD *)(a1 + 72);
    v41 = *(_QWORD *)(a1 + 64);
    v42 = v41 + 40 * v40 - 40;
    if ( (*(_BYTE *)(v42 + 32) & 2) != 0
      && *(_QWORD *)(v42 + 24) == *(_QWORD *)(a1 + 104)
                                + *(_DWORD *)(a1 + 112) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) )
    {
LABEL_52:
      v14 = 0;
LABEL_92:
      sub_19B2D0((__int64)v71);
      return v14;
    }
    if ( *(__int64 *)(v41 + 24) >= 0 || *(_BYTE *)(v6 + 320) && (v40 == 1 || *(__int64 *)(v41 + 64) >= 0) )
    {
      v68 = 0;
      v69 = 0;
      sub_326800(&v66, v58, (unsigned int)v61);
      print_tinfo(&v68, 0, 0, 0, 0, &v66, 0, 0);
      func = get_func(*(_QWORD *)(v6 + 40));
      v67 = 0;
      get_func_frame(&v67, func);
      if ( *(_QWORD *)(a1 + 72) )
      {
        v44 = 0;
        v45 = -1;
        v46 = 0;
        v65 = nullptr;
        do
        {
          v65 = sub_199BE0(a1, (__int64)v65, v44, &v66, (__int64)&v68);
          v47 = *(_QWORD *)(a1 + 64) + 40 * v46;
          v48 = *(_QWORD *)(v47 + 24);
          if ( v45 < 0 )
            v45 = *(_QWORD *)(v47 + 24);
          if ( v48 < 0 )
            v48 = 0;
          v49 = sub_1CAED0(v6, v48);
          v81 = 0;
          v78 = 1;
          v72 = 8 * v49;
          v73 = 0u;
          v75 = 0;
          v79 = -1;
          v80 = 0;
          v74 = 0;
          v76 = 0;
          v77[0] = 0;
          tinfo_udt_member = find_tinfo_udt_member(&v72, v67, 0);
          if ( tinfo_udt_member != -1 && (v72 >> 3 != v49 || v61 < (unsigned __int64)v73 >> 3) )
            set_tinfo_property4(&v67, 10, tinfo_udt_member, tinfo_udt_member + 1LL, 0, 0);
          clear_tinfo_t(v77);
          if ( v75 )
          {
            *(_QWORD *)&v76 = 0;
            qfree(v75);
          }
          if ( *((_QWORD *)&v73 + 1) )
          {
            *(_QWORD *)&v74 = 0;
            qfree(*((_QWORD *)&v73 + 1));
          }
          v46 = ++v44;
        }
        while ( (unsigned __int64)v44 < *(_QWORD *)(a1 + 72) );
        if ( v45 >= 0 )
          sub_188CD0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL), v45);
        if ( v65 )
        {
          if ( *(_DWORD *)(v6 + 64) <= 1u )
            sub_190580();
          v51 = *(_QWORD *)(*(_QWORD *)(v6 + 528) + 8LL);
          v52 = *(_DWORD *)(v51 + 24);
          BYTE1(v52) &= ~2u;
          LOBYTE(v52) = v52 | 0x80;
          *(_DWORD *)(v51 + 24) = v52;
        }
      }
      clear_tinfo_t(&v67);
      clear_tinfo_t(&v66);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      goto LABEL_91;
    }
    if ( !under_debugger )
      sub_37CFE0(51657);
LABEL_111:
    BUG();
  }
  v12 = (*(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL) - *(_QWORD *)(a1 + 104))
      / *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v13 = *(_DWORD *)(a1 + 112);
  if ( v13 > (int)v12 )
  {
    if ( !under_debugger )
      sub_37CFE0(51450);
    goto LABEL_111;
  }
  if ( v13 >= (int)v12 || *(_BYTE *)(v6 + 320) )
    goto LABEL_16;
  *(_DWORD *)(a1 + 112) = v12;
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 1496) + 656LL) >= (int)v12 )
    goto LABEL_17;
  return 0;
}
