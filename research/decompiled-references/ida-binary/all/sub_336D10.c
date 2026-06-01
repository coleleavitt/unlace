__int64 __fastcall sub_336D10(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __m128 v17; // xmm0
  const char *v18; // rbp
  char *v19; // rdi
  int flags; // r12d
  bool v21; // r13
  char tinfo; // r15
  char v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r12
  char *v33; // r13
  char *v34; // rbp
  __int64 v35; // r14
  __int64 v36; // r15
  const char *v37; // rdi
  __int64 v38; // rax
  _BOOL4 v39; // ebx
  __int64 first_dref_from; // r12
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r13
  int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // edx
  __int64 v48; // rdx
  __int64 v49; // rdx
  char v50; // r12
  __int64 v51; // rax
  const char *idati; // rbx
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  __int64 v56; // rdi
  __int64 v57; // r12
  __int64 v58; // rbp
  _QWORD *v59; // r13
  __int64 v60; // rdi
  __int64 v61; // rdi
  double v62; // xmm4_8
  double v63; // xmm5_8
  __int64 tinfo_size; // rbx
  __int64 tinfo_tid; // rax
  unsigned int tinfo_property; // eax
  char *v67; // rbp
  void *v68; // rax
  char v69; // [rsp+0h] [rbp-128h]
  int v70; // [rsp+8h] [rbp-120h]
  __int64 v71; // [rsp+10h] [rbp-118h]
  unsigned __int64 item_end; // [rsp+20h] [rbp-108h]
  unsigned __int64 v73; // [rsp+28h] [rbp-100h]
  __int64 v74; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v75; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v76; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v77; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v78; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v79; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+68h] [rbp-C0h] BYREF
  char *s2; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v82; // [rsp+78h] [rbp-B0h]
  _BYTE v83[24]; // [rsp+90h] [rbp-98h] BYREF
  int v84; // [rsp+A8h] [rbp-80h]
  __int16 v85; // [rsp+ACh] [rbp-7Ch]
  __int64 v86; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v87; // [rsp+B8h] [rbp-70h]
  __int128 v88; // [rsp+C8h] [rbp-60h]
  __int64 v89; // [rsp+D8h] [rbp-50h]
  int v90; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v91; // [rsp+E8h] [rbp-40h]

  v91 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 8) == 58 || *(_DWORD *)(a1 + 8) == 25 )
    return sub_3B2000();
  if ( (unsigned __int8)sub_1F09E0(0, (__int64 *)&v75, &v76) )
  {
    v10 = (const char *)v76;
    if ( next_that(v75, v76, sub_20A790, 0) == -1 )
    {
      v17 = 0;
      v18 = (const char *)v75;
      v86 = 0;
      v89 = 0;
      v90 = 1;
      v74 = 0;
      v87 = 0;
      v88 = 0;
      if ( v75 >= v76 )
        goto LABEL_93;
      while ( 1 )
      {
        v10 = &byte_4;
        v19 = (char *)v18;
        flags = get_flags_ex(v18, 4);
        item_end = get_item_end(v18);
        v73 = item_end - (_QWORD)v18;
        if ( (flags & 0x600) == 0x400 )
        {
          v21 = (flags & 0xF0000000) == 1342177280;
        }
        else
        {
          if ( (flags & 0x600) == 0 )
            goto LABEL_8;
          v21 = 0;
        }
        s2 = nullptr;
        v82 = 0;
        get_ea_name(&s2, v18, 65, 0);
        v77 = 0;
        tinfo = get_tinfo(&v77, v18);
        if ( (_UNKNOWN *)(flags & 0xF00000) != &loc_500000
          || (first_dref_from = get_first_dref_from(v18), first_dref_from == -1) )
        {
          v23 = v21 | tinfo ^ 1;
        }
        else
        {
          if ( (*(_BYTE *)(get_ph(v18, v18) + 12) & 8) != 0 )
            first_dref_from &= ~1uLL;
          if ( (unsigned __int64)v82 <= 1 )
            get_ea_name(&s2, first_dref_from, 1, 0);
          v78 = 0;
          if ( !tinfo )
          {
            if ( !(unsigned __int8)get_tinfo(&v78, first_dref_from)
              || (v80 = 0,
                  v79 = 0,
                  *(_OWORD *)v83 = 0,
                  copy_tinfo_t(&v83[8], &v79, v41),
                  *(_QWORD *)&v83[16] = 0,
                  copy_tinfo_t(&v83[16], &v80, v48),
                  v84 = 0,
                  v85 = 0,
                  clear_tinfo_t(&v79),
                  clear_tinfo_t(&v80),
                  copy_tinfo_t(v83, &v78, v49),
                  v50 = create_tinfo(&v77, 10, 10, v83),
                  clear_tinfo_t(&v83[16]),
                  clear_tinfo_t(&v83[8]),
                  clear_tinfo_t(v83),
                  !v50) )
            {
              clear_tinfo_t(&v78);
LABEL_52:
              guess_tinfo(&v77, v18);
              if ( v73 < get_tinfo_size(0, v77, 0) && (get_tinfo_property(v77, 2) & 0xF) == 0xB )
              {
                *(_QWORD *)v83 = 0;
                *(_QWORD *)v83 = get_tinfo_property(v77, 11);
                copy_tinfo_t(&v77, v83, v42);
                clear_tinfo_t(v83);
              }
              goto LABEL_15;
            }
          }
          v23 = v21;
          clear_tinfo_t(&v78);
        }
        if ( v23 )
          goto LABEL_52;
LABEL_15:
        v24 = v87;
        v25 = v86;
        if ( *((_QWORD *)&v87 + 1) < (unsigned __int64)(v87 + 1) )
        {
          v86 = qvector_reserve(&v86, v86, v87 + 1, 144);
          v24 = v87;
          v25 = v86;
        }
        v17 = 0;
        v26 = 144 * v24;
        v27 = v25 + v26;
        *(_QWORD *)(v27 + 16) = 0;
        v28 = v25 + v26;
        *(_QWORD *)(v27 + 40) = 0;
        *(_QWORD *)(v27 + 112) = 1;
        *(_DWORD *)(v27 + 120) = -1;
        *(_QWORD *)(v27 + 128) = 0;
        *(_BYTE *)(v27 + 136) = 0;
        *(_OWORD *)v27 = 0;
        *(_OWORD *)(v27 + 24) = 0;
        *(_OWORD *)(v27 + 48) = 0;
        *(_OWORD *)(v27 + 64) = 0;
        *(_QWORD *)&v87 = v87 + 1;
        v71 = v25 + v26;
        copy_tinfo_t(v25 + v26 + 64, &v77, v26);
        v10 = v18;
        *(_QWORD *)v28 = 8 * v74;
        *(_QWORD *)(v28 + 8) = 8 * v73;
        *(_DWORD *)&v83[8] = -1;
        *(_QWORD *)v83 = 1;
        if ( get_array_parameters(v83, v18, v29, v30) > 0 )
        {
          *(_QWORD *)(v28 + 112) = *(_QWORD *)v83;
          v44 = *(_DWORD *)(v28 + 112);
          *(_DWORD *)(v28 + 120) = *(_DWORD *)&v83[8];
          v45 = *(_QWORD *)(v28 + 72);
          v46 = v45;
          BYTE1(v45) &= ~4u;
          BYTE1(v46) |= 4u;
          if ( (v44 & 2) != 0 )
            v45 = v46;
          v47 = v44 & 0xFFFFFFFD;
          *(_DWORD *)(v28 + 112) = v47;
          if ( v47 == 1 && !*(_DWORD *)(v71 + 116) && *(_DWORD *)(v71 + 120) == -1 )
          {
            BYTE1(v45) &= ~0x10u;
            *(_QWORD *)(v71 + 72) = v45;
          }
          else
          {
            BYTE1(v45) |= 0x10u;
            *(_QWORD *)(v71 + 72) = v45;
          }
        }
        if ( v21 )
        {
          *(_QWORD *)(v71 + 72) = *(_QWORD *)(v71 + 72) & 0xFFFFFFFFFFFFFFF0LL | 0xA;
          *(_DWORD *)(v71 + 80) = getinf(52);
        }
        if ( dummy_name_ea(s2) != -1 && s2 )
        {
          *(_QWORD *)&v82 = 0;
          *(double *)v17.m128_u64 = qfree(s2, v18);
          s2 = nullptr;
          *((_QWORD *)&v82 + 1) = 0;
        }
        if ( (unsigned __int64)v82 <= 1 )
        {
          v10 = "field_%a";
          sub_169A50((__int64 *)&s2, (__int64)"field_%a", *(double *)v17.m128_u64);
        }
        v70 = 0;
        if ( *(_QWORD *)(v71 + 24) <= 1u )
        {
          while ( 1 )
          {
            v31 = v86 + 144 * v87;
            if ( v86 == v31 )
            {
LABEL_55:
              if ( (char **)(v71 + 16) != &s2 )
              {
                v43 = v82;
                if ( (unsigned __int64)v82 > 1 )
                {
                  v67 = s2;
                  v68 = *(void **)(v71 + 16);
                  if ( *(_QWORD *)(v71 + 32) < (unsigned __int64)v82 )
                  {
                    v68 = (void *)qvector_reserve(v71 + 16, *(_QWORD *)(v71 + 16), v82, 1);
                    *(_QWORD *)(v71 + 16) = v68;
                  }
                  v10 = v67;
                  *(_QWORD *)(v71 + 24) = v43;
                  memmove(v68, v67, v43 - 1);
                  *(_BYTE *)(*(_QWORD *)(v71 + 16) + v43 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)(v71 + 24) = 0;
                }
              }
              goto LABEL_40;
            }
            v32 = v82;
            v33 = s2;
            v34 = (char *)&s1;
            v35 = v86;
            if ( (_QWORD)v82 )
              v34 = s2;
            v36 = 0;
            while ( 1 )
            {
              v38 = *(_QWORD *)(v35 + 24);
              if ( !v32 )
                break;
              v10 = v33;
              v37 = &s1;
              if ( v38 )
                goto LABEL_31;
LABEL_32:
              v36 += strcmp(v37, v10) == 0;
              v35 += 144;
              if ( v31 == v35 )
                goto LABEL_38;
            }
            if ( v38 )
              goto LABEL_31;
            v35 += 144;
            ++v36;
            if ( v31 != v35 )
              break;
LABEL_38:
            if ( !v36 )
              goto LABEL_55;
            v10 = "field_%d";
            sub_169A50((__int64 *)&s2, (__int64)"field_%d", v70++);
            if ( *(_QWORD *)(v71 + 24) > 1u )
              goto LABEL_40;
          }
          while ( !*(_QWORD *)(v35 + 24) )
          {
            v35 += 144;
            ++v36;
            if ( v31 == v35 )
              goto LABEL_38;
          }
LABEL_31:
          v37 = *(const char **)(v35 + 16);
          v10 = v34;
          goto LABEL_32;
        }
LABEL_40:
        clear_tinfo_t(&v77);
        v19 = s2;
        if ( s2 )
        {
          *(_QWORD *)&v82 = 0;
          *(double *)v17.m128_u64 = qfree(s2, v10);
        }
LABEL_8:
        v12 = v73;
        v74 += v73;
        if ( item_end >= v76 )
        {
          if ( (_QWORD)v87 )
          {
            v51 = *(_QWORD *)(v86 + 144 * v87 - 144) + *(_QWORD *)(v86 + 144 * v87 - 144 + 8);
            HIBYTE(v90) = 0;
            v80 = 0;
            *(_QWORD *)&v88 = (unsigned __int64)(v51 + 7) >> 3;
            idati = (const char *)get_idati(v19);
            v82 = 0;
            s2 = nullptr;
            memset(v83, 0, sizeof(v83));
            sub_169A50((__int64 *)v83, (__int64)"struct_%a", v75);
            sub_3B1E40((unsigned int)&s2, (_DWORD)idati, (unsigned int)v83, v53, v54, v55);
            v10 = byte_9 + 4;
            if ( HIBYTE(v90) )
              v10 = (_BYTE *)(&off_18 + 5);
            if ( (unsigned __int8)create_tinfo(&v80, v10, 13, &v86)
              && (v10 = (_BYTE *)(&dword_0 + 2), set_tinfo_property(&v80, 2, 4))
              && (v10 = idati, !(unsigned int)save_tinfo(&v80, idati, 0, s2, 1)) )
            {
              sub_1FDB10(0.0, a3, a4, a5, v62, v63, a8, a9, (__int64)&v80, idati);
              tinfo_size = get_tinfo_size(0, v80, 0);
              del_items(v75, 2, tinfo_size, 0);
              tinfo_tid = get_tinfo_tid(&v80, 0);
              create_data(v75, 1610612736, tinfo_size, tinfo_tid);
              tinfo_property = get_tinfo_property(v80, 7);
              v10 = nullptr;
              v39 = sub_3CE4E0(tinfo_property, 0) != 0;
            }
            else
            {
              v39 = 0;
            }
            if ( *(_QWORD *)v83 )
            {
              *(_QWORD *)&v83[8] = 0;
              qfree(*(_QWORD *)v83, v10);
            }
            if ( s2 )
            {
              *(_QWORD *)&v82 = 0;
              qfree(s2, v10);
            }
            clear_tinfo_t(&v80);
            goto LABEL_75;
          }
LABEL_93:
          sub_169630(
            (int)"Cannot create structure from undefined data",
            (__int64)v10,
            v11,
            v12,
            v13,
            v14,
            v17,
            a3,
            a4,
            a5,
            v15,
            v16,
            a8,
            a9,
            v69);
          v39 = 1;
LABEL_75:
          v56 = v86;
          if ( v86 )
          {
            v57 = v87;
            if ( (_QWORD)v87 )
            {
              v58 = 0;
              do
              {
                v59 = (_QWORD *)(v56 + 144 * v58);
                clear_tinfo_t(v59 + 8);
                v60 = v59[5];
                if ( v60 )
                {
                  v59[6] = 0;
                  qfree(v60, v10);
                }
                v61 = v59[2];
                if ( v61 )
                {
                  v59[3] = 0;
                  qfree(v61, v10);
                }
                ++v58;
                v56 = v86;
              }
              while ( v57 != v58 );
            }
            *(_QWORD *)&v87 = 0;
            qfree(v56, v10);
          }
          return v39;
        }
        v18 = (const char *)item_end;
      }
    }
  }
  return 0;
}
