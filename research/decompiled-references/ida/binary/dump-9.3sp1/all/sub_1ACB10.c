__int64 __fastcall sub_1ACB10(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r14
  unsigned __int8 v8; // r15
  int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // ecx
  signed int v12; // esi
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  int v17; // edx
  unsigned int v18; // ebx
  unsigned int v20; // eax
  __int64 v21; // rsi
  unsigned int v22; // edx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // r12
  char *v27; // r15
  const __m128i *v28; // rsi
  __int64 v29; // rdx
  int v30; // eax
  int v31; // eax
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // r12
  __int64 v36; // rdx
  int v37; // esi
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rsi
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  int v48; // r12d
  __int64 v49; // r13
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // r15
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // [rsp+0h] [rbp-1F0h]
  __int64 v62; // [rsp+20h] [rbp-1D0h]
  __int64 v63; // [rsp+28h] [rbp-1C8h]
  __int64 v64; // [rsp+30h] [rbp-1C0h]
  int v65; // [rsp+38h] [rbp-1B8h]
  signed int v66; // [rsp+3Ch] [rbp-1B4h]
  __int64 v68; // [rsp+58h] [rbp-198h]
  __int64 v69; // [rsp+58h] [rbp-198h]
  _QWORD *v70; // [rsp+58h] [rbp-198h]
  char v71[8]; // [rsp+60h] [rbp-190h] BYREF
  __int64 v72; // [rsp+68h] [rbp-188h]
  __int64 v73; // [rsp+70h] [rbp-180h] BYREF
  __int128 v74; // [rsp+78h] [rbp-178h] BYREF
  __int128 v75; // [rsp+88h] [rbp-168h]
  __int64 v76[16]; // [rsp+A0h] [rbp-150h] BYREF
  unsigned __int64 v77; // [rsp+120h] [rbp-D0h] BYREF
  __int128 v78; // [rsp+128h] [rbp-C8h] BYREF
  __int128 v79; // [rsp+138h] [rbp-B8h]
  __int64 v80; // [rsp+148h] [rbp-A8h]
  __int128 v81; // [rsp+150h] [rbp-A0h]
  __int128 v82; // [rsp+160h] [rbp-90h]
  __int64 v83; // [rsp+190h] [rbp-60h]
  int v84; // [rsp+198h] [rbp-58h]
  __int64 v85; // [rsp+1A0h] [rbp-50h]
  char v86; // [rsp+1A8h] [rbp-48h]
  unsigned __int64 v87; // [rsp+1B8h] [rbp-38h]

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  v87 = __readfsqword(0x28u);
  v8 = a3;
  v63 = *(_QWORD *)(v7 + 1504);
  sub_139B90(v7, (__int64)a2, a3, a4, a5, a6);
  v9 = *(_DWORD *)(a1 + 112);
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(v10 + 8) == 3 || !*(_DWORD *)(v10 + 48) )
    {
      v11 = *(_DWORD *)(v7 + 72) & 0xFFFFFFF0;
      if ( v11 == 208 || v11 == 64 )
      {
        if ( (unsigned int)(*(_DWORD *)(v7 + 72) - 208) <= 0x2F && (unsigned int)sub_13D300((_QWORD *)v7, 3) )
        {
          v9 = *(_DWORD *)(a1 + 112);
        }
        else
        {
          if ( *(_BYTE *)(v7 + 320) )
          {
            if ( !under_debugger )
              sub_383060(51558);
            goto LABEL_111;
          }
          *(_DWORD *)(a1 + 112) = 1;
          v9 = 1;
        }
      }
    }
  }
  v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v66 = v12;
  if ( !(unsigned __int8)sub_1AC200(
                           a1,
                           (__int64)a2,
                           *(_QWORD *)(a1 + 104) + v12 * v9,
                           v12 * *(_DWORD *)(*(_QWORD *)(v7 + 1496) + 656LL),
                           v8) )
  {
    v20 = *(_DWORD *)(v7 + 72) & 0xFFFFFFF0;
    if ( v20 != 208 && v20 != 64 )
      return 0;
    v17 = *(_DWORD *)(a1 + 112);
LABEL_16:
    if ( *(_DWORD *)(*(_QWORD *)(v7 + 1496) + 656LL) < v17 )
      return 0;
LABEL_17:
    sub_1A0DE0((__int64)v76, v7, a2, v13, v14, v15);
    v21 = *(_QWORD *)(a1 + 16);
    v22 = *(_DWORD *)(a1 + 112);
    v68 = *(_QWORD *)(v21 + 104);
    v23 = *(_QWORD *)(a1 + 104) + (int)(v22 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL));
    if ( v23 < 0 )
      v23 = 0;
    v24 = sub_1A1040(v76, v21 + 96, v22, v23, *(_DWORD *)(*(_QWORD *)(v7 + 1496) + 656LL) - v22, v66);
    v25 = *(_QWORD *)(a1 + 104);
    v26 = v24;
    v62 = (__int64)v24;
    if ( v25 < 0 )
      v25 = 0;
    v27 = (char *)sub_1A1040(v76, *(_QWORD *)(a1 + 16) + 96LL, 0, v25, *(_DWORD *)(a1 + 112) + 1, v66);
    sub_1A00C0(v76, 0);
    if ( !v26[3] )
      goto LABEL_25;
    v28 = (const __m128i *)v7;
    v29 = *(_QWORD *)(a1 + 104) + (int)v68 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
    if ( v29 < 0 )
      v29 = 0;
    v30 = sub_1A1110(v62, v7, v29);
    if ( v30 )
    {
      v31 = v68 + v30;
    }
    else
    {
LABEL_25:
      v28 = (const __m128i *)v7;
      v31 = sub_1A1170(v62, v7);
    }
    v32 = *(_DWORD *)(a1 + 112);
    if ( v31 >= v32 )
      v32 = v31;
    v65 = v32;
    sub_190300(v7, v28);
    if ( a2 )
    {
      v33 = *(_QWORD *)(a1 + 16);
      v34 = *(int *)(a1 + 112);
      v73 = 0;
      v74 = 0u;
      v35 = *(_QWORD *)(a1 + 104);
      v75 = 0;
      v36 = *(int *)(v33 + 24);
      if ( (int)v34 > (int)v36 )
        v34 = v36;
      if ( (int)v34 > 0 )
      {
        v69 = 0;
        v64 = 4 * v34;
        do
        {
          if ( v27 )
          {
            while ( v35 < *(_QWORD *)(v7 + 168) )
            {
              v38 = *(_QWORD *)(v7 + 1440);
              v77 = 0;
              v78 = 0;
              v39 = v35 + v38;
              if ( !__CFADD__(v39, v66 - 1LL) )
              {
                v61 = v39;
                v77 = qvector_reserve((__int64)&v77, 0, 1, 16);
                v60 = (_QWORD *)(16 * v78 + v77);
                *v60 = v61;
                v60[1] = v66;
                *(_QWORD *)&v78 = v78 + 1;
              }
              if ( !(unsigned __int8)sub_317F40(v27 + 16, &v77) )
              {
                if ( v77 )
                {
                  *(_QWORD *)&v78 = 0;
                  qfree(v77);
                }
                break;
              }
              if ( v77 )
              {
                *(_QWORD *)&v78 = 0;
                qfree(v77);
              }
              v69 += 4;
              v35 += v66;
              if ( v64 == v69 )
                goto LABEL_46;
            }
          }
          v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL) + v69);
          v77 = 0;
          *(_QWORD *)&v78 = 0;
          sub_63E80((__int64 *)&v77, v37, v66);
          *((_QWORD *)&v78 + 1) = 0;
          v79 = 0;
          sub_64280(&v73, (__int64 *)&v77);
          sub_316CB0((char *)&v74 + 8, (char *)&v78 + 8);
          if ( *((_QWORD *)&v78 + 1) )
          {
            *(_QWORD *)&v79 = 0;
            qfree(*((__int64 *)&v78 + 1));
          }
          v35 += v66;
          qfree(v77);
          v69 += 4;
        }
        while ( v64 != v69 );
      }
LABEL_46:
      sub_19D1A0((__int64)a2, &v73);
      sub_19D1A0((__int64)(a2 + 7), &v73);
      if ( *((_QWORD *)&v74 + 1) )
      {
        *(_QWORD *)&v75 = 0;
        qfree(*((__int64 *)&v74 + 1));
      }
      qfree(v73);
    }
    v40 = *(_QWORD *)(a1 + 72);
    if ( v40 )
    {
      v42 = *(_QWORD *)(a1 + 64) + 40 * v40 - 40;
      v43 = *(_QWORD *)(a1 + 104) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) * v65;
      if ( *(_QWORD *)(v42 + 24) >= v43 )
        goto LABEL_60;
      if ( (*(_BYTE *)(v42 + 32) & 2) != 0 )
      {
        *(_QWORD *)(v42 + 24) = v43;
        goto LABEL_60;
      }
    }
    else
    {
      v41 = *(_DWORD *)(v7 + 72) & 0xFFFFFFF0;
      if ( v41 != 64 && v41 != 208 )
        goto LABEL_52;
      v58 = *(_QWORD *)(a1 + 8);
      v59 = *(_QWORD *)(a1 + 104);
      if ( *(_BYTE *)(v7 + 320) )
      {
        if ( *(_DWORD *)(a1 + 112) != v65 )
        {
          v43 = v59 + *(_DWORD *)(*(_QWORD *)(v58 + 112) + 80LL) * v65;
          goto LABEL_101;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 112) = v65;
      }
      *(_BYTE *)(a1 + 116) = 0;
      v43 = v59 + *(_DWORD *)(*(_QWORD *)(v58 + 112) + 80LL) * v65;
    }
LABEL_101:
    *(_BYTE *)(sub_1999C0((const __m128i **)(a1 + 64), v43, 0, 0) + 32) = 2;
LABEL_60:
    v44 = *(_DWORD *)(v7 + 72) & 0xFFFFFFF0;
    if ( v44 != 64
      && v44 != 208
      && !(unsigned __int8)sub_317040(
                             v62 + 16,
                             *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 16)
                           + *(_QWORD *)(v7 + 1440)) )
    {
      goto LABEL_52;
    }
    if ( !*(_BYTE *)(a1 + 116) )
    {
LABEL_91:
      v18 = 1;
      goto LABEL_92;
    }
    v45 = *(_QWORD *)(a1 + 72);
    v46 = *(_QWORD *)(a1 + 64);
    v47 = v46 + 40 * v45 - 40;
    if ( (*(_BYTE *)(v47 + 32) & 2) != 0
      && *(_QWORD *)(v47 + 24) == *(_QWORD *)(a1 + 104)
                                + *(_DWORD *)(a1 + 112) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) )
    {
LABEL_52:
      v18 = 0;
LABEL_92:
      sub_19FFD0((__int64)v76);
      return v18;
    }
    if ( *(__int64 *)(v46 + 24) >= 0 || *(_BYTE *)(v7 + 320) && (v45 == 1 || *(__int64 *)(v46 + 64) >= 0) )
    {
      v73 = 0;
      v74 = 0;
      sub_32C270(v71, v63, (unsigned int)v66);
      print_tinfo();
      get_func();
      v72 = 0;
      get_func_frame();
      if ( *(_QWORD *)(a1 + 72) )
      {
        v48 = 0;
        v49 = -1;
        v50 = 0;
        v70 = nullptr;
        do
        {
          v70 = sub_19E8E0(a1, (__int64)v70, v48, (__int64)v71, (__int64)&v73);
          v51 = *(_QWORD *)(a1 + 64) + 40 * v50;
          v52 = *(_QWORD *)(v51 + 24);
          if ( v49 < 0 )
            v49 = *(_QWORD *)(v51 + 24);
          if ( v52 < 0 )
            v52 = 0;
          v53 = sub_1CFD50(v7, v52);
          v54 = v72;
          v86 = 0;
          v83 = 1;
          v77 = 8 * v53;
          v78 = 0u;
          v80 = 0;
          v84 = -1;
          v85 = 0;
          v79 = 0;
          v81 = 0;
          v82 = 0;
          if ( (unsigned int)find_tinfo_udt_member() != -1 && (v77 >> 3 != v53 || v66 < (unsigned __int64)v78 >> 3) )
          {
            v54 = 10;
            set_tinfo_property4();
          }
          clear_tinfo_t();
          if ( v80 )
          {
            *(_QWORD *)&v81 = 0;
            qfree(v80);
          }
          v55 = *((_QWORD *)&v78 + 1);
          if ( *((_QWORD *)&v78 + 1) )
          {
            *(_QWORD *)&v79 = 0;
            qfree(*((__int64 *)&v78 + 1));
          }
          v50 = ++v48;
        }
        while ( (unsigned __int64)v48 < *(_QWORD *)(a1 + 72) );
        if ( v49 >= 0 )
        {
          v54 = v49;
          v55 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
          sub_18D890(v55, v49);
        }
        if ( v70 )
        {
          if ( *(_DWORD *)(v7 + 64) <= 1u )
            sub_195140(v55, v54);
          v56 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL);
          v57 = *(_DWORD *)(v56 + 24);
          BYTE1(v57) &= ~2u;
          LOBYTE(v57) = v57 | 0x80;
          *(_DWORD *)(v56 + 24) = v57;
        }
      }
      clear_tinfo_t();
      clear_tinfo_t();
      if ( v73 )
      {
        *(_QWORD *)&v74 = 0;
        qfree(v73);
      }
      goto LABEL_91;
    }
    if ( !under_debugger )
      sub_383060(51657);
LABEL_111:
    BUG();
  }
  v13 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v16 = (*(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL) - *(_QWORD *)(a1 + 104)) / v13;
  v17 = *(_DWORD *)(a1 + 112);
  if ( v17 > (int)v16 )
  {
    if ( !under_debugger )
      sub_383060(51450);
    goto LABEL_111;
  }
  if ( v17 >= (int)v16 || *(_BYTE *)(v7 + 320) )
    goto LABEL_16;
  *(_DWORD *)(a1 + 112) = v16;
  if ( *(_DWORD *)(*(_QWORD *)(v7 + 1496) + 656LL) >= (int)v16 )
    goto LABEL_17;
  return 0;
}
