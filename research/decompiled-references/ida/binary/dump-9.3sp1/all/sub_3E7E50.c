__int64 __fastcall sub_3E7E50(__m128i *a1, __m128i *a2, __int64 a3, __int64 a4, __m128 a5)
{
  _DWORD *v5; // rax
  void *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _DWORD *v9; // rax
  _QWORD *exception; // rdi
  _DWORD *v11; // rax
  __m128i *v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rbp
  char v15; // r13
  unsigned int v16; // r12d
  int v17; // r13d
  __int16 v18; // ax
  __int16 v19; // ax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r12
  char *v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // r12d
  __int16 v32; // ax
  __int16 v33; // ax
  __int16 v34; // ax
  const char *m128i_i8; // r14
  __int32 v36; // eax
  __int32 v37; // r12d
  __int32 v38; // r12d
  __int32 v39; // r12d
  __int16 v40; // ax
  __int64 v41; // r12
  char v42; // al
  int v43; // r14d
  __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __m128i *v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int16 v51; // ax
  __int64 v52; // r12
  __int64 v53; // r14
  __int64 v54; // rax
  __int16 v55; // ax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __m128i *v60; // r12
  __int16 v61; // ax
  __int64 name_ea; // r12
  __int64 v63; // rax
  int v64; // ecx
  _QWORD *v65; // rax
  __int16 v66; // ax
  int v67; // edx
  int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  __int16 v71; // ax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int16 v74; // ax
  __int16 v75; // ax
  __int64 v76; // rax
  __int64 m128i_i64; // rsi
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // r12d
  __int64 v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rcx
  __m128 *v84; // rax
  size_t v85; // rax
  size_t v86; // r12
  size_t v87; // [rsp+8h] [rbp-100h]
  __int128 v88; // [rsp+20h] [rbp-E8h] BYREF
  void *v89; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v90; // [rsp+38h] [rbp-D0h]
  __int64 v91; // [rsp+48h] [rbp-C0h]
  __int128 v92; // [rsp+50h] [rbp-B8h]
  __int128 v93; // [rsp+60h] [rbp-A8h]
  __int64 v94; // [rsp+90h] [rbp-78h]
  int v95; // [rsp+98h] [rbp-70h]
  __int64 v96; // [rsp+A0h] [rbp-68h]
  char v97; // [rsp+A8h] [rbp-60h]
  __m128i v98; // [rsp+B0h] [rbp-58h] BYREF
  __int32 v99; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v100; // [rsp+C8h] [rbp-40h]

  v12 = a1;
  v13 = a1[67].m128i_u16[2];
  v100 = __readfsqword(0x28u);
  v14 = (__int64)a2;
  if ( (unsigned __int16)v13 <= 0x5Bu )
  {
    if ( (unsigned __int16)v13 <= 1u )
      goto LABEL_148;
    v15 = a3;
    switch ( v13 )
    {
      case 2LL:
        m128i_i8 = a1[2].m128i_i8;
        v36 = sub_122A60(*(_DWORD **)(a1->m128i_i64[0] + 112), (__int64)a1[2].m128i_i64, nullptr);
        a2->m128i_i8[0] = 1;
        a2->m128i_i32[2] = v36;
        if ( *(_DWORD *)(sub_339CA0() + 52) == v36
          || (v37 = a2->m128i_i32[2], v37 == *(_DWORD *)(sub_339CA0() + 56))
          || (v38 = a2->m128i_i32[2], v38 == *(_DWORD *)(sub_339CA0() + 64)) )
        {
          a2->m128i_i32[2] = -1;
LABEL_115:
          m128i_i64 = (__int64)a1[2].m128i_i64;
          v80 = sub_3E7C00((__int64)a1, m128i_i8);
          if ( v80 == -1 )
          {
            m128i_i64 = (__int64)a1[2].m128i_i64;
            v80 = sub_3E7CB0((__int64)a1, m128i_i8);
          }
          v81 = a1[68].m128i_i64[0];
          *(_BYTE *)v14 = 9;
          v54 = j__qalloc_or_throw(24, m128i_i64, v78, v79);
          *(_QWORD *)v54 = v81;
          *(_QWORD *)(v54 + 8) = 0;
          *(_DWORD *)(v54 + 16) = v80;
          goto LABEL_62;
        }
        v39 = a2->m128i_i32[2];
        if ( v39 <= *(_DWORD *)(sub_339CA0() + 72) )
        {
          if ( a2->m128i_i32[2] != -1 )
          {
LABEL_40:
            a2 = (__m128i *)v14;
            sub_3E6730(a1, (char *)v14, *(double *)a5.m128_u64);
            v33 = a1[67].m128i_i16[2];
            goto LABEL_41;
          }
          goto LABEL_115;
        }
        exception = __cxa_allocate_exception(8u);
        *exception = "this register cannot be used in rasm";
        goto LABEL_145;
      case 33LL:
        v31 = sub_3E6140(a1);
        if ( v31 )
          goto LABEL_139;
        v34 = a1[67].m128i_i16[2];
        if ( v34 == 4 )
        {
          a1[67].m128i_i16[2] = 2;
        }
        else if ( v34 != 2 )
        {
          goto LABEL_151;
        }
        a2->m128i_i8[0] = 11;
        a2->m128i_i64[1] = qstrdup();
        return sub_3E65E0(a1);
      case 35LL:
        sub_3E65E0(a1);
        if ( a1[67].m128i_i16[2] != 40 )
        {
          v43 = *(_DWORD *)(sub_339CA0() + 80);
          v44 = sub_3E6800(a1);
          a2 = (__m128i *)sub_339CA0();
          sub_120A10(v14, (__int64)a2, v44, v43, -1, 0);
          v33 = a1[67].m128i_i16[2];
          goto LABEL_41;
        }
        a2 = &v98;
        sub_3E6880(a1);
        *(_BYTE *)v14 = 13;
        v84 = (__m128 *)j__qalloc_or_throw(20, (__int64)&v98, v82, v83);
        a5 = (__m128)_mm_load_si128(&v98);
        *v84 = a5;
        v84[1].m128_i32[0] = v99;
        *(_QWORD *)(v14 + 8) = v84;
        goto LABEL_68;
      case 36LL:
        v31 = sub_3E6140(a1);
        if ( v31 )
          goto LABEL_139;
        v61 = a1[67].m128i_i16[2];
        switch ( v61 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            goto LABEL_79;
          case 3:
            name_ea = a1[66].m128i_i64[0];
            sub_3E65E0(a1);
LABEL_81:
            v63 = *(_QWORD *)(a1->m128i_i64[0] + 112);
            a2->m128i_i8[0] = 6;
            v64 = 8 * *(_DWORD *)(v63 + 84);
            if ( (unsigned __int64)v64 <= 0x3F )
              name_ea &= ~(-1LL << v64);
            a2->m128i_i64[1] = name_ea;
            v33 = a1[67].m128i_i16[2];
LABEL_41:
            if ( v15 )
            {
              if ( v33 == 46 )
              {
                a1 = v12;
                v31 = sub_3E6140(v12);
                if ( !v31 )
                {
                  v40 = v12[67].m128i_i16[2];
                  if ( v40 != 4 )
                  {
                    if ( v40 == 3 )
                    {
                      v41 = v12[66].m128i_i64[0];
                      if ( v41 != (int)v41 )
                        sub_5C0B4();
                      sub_3E65E0(v12);
                      v42 = *(_BYTE *)v14;
                      *(_DWORD *)(v14 + 4) = v41;
                      if ( v42 == 4 )
                      {
                        *(_DWORD *)(*(_QWORD *)(v14 + 8) + 68LL) = v41;
                      }
                      else if ( v42 == 13 )
                      {
                        *(_DWORD *)(*(_QWORD *)(v14 + 8) + 16LL) = v41;
                      }
                      return v100 - __readfsqword(0x28u);
                    }
LABEL_151:
                    sub_5C092(a1, a2, *(double *)a5.m128_u64);
                  }
LABEL_150:
                  v12[67].m128i_i16[2] = 2;
                  goto LABEL_151;
                }
                goto LABEL_139;
              }
              goto LABEL_148;
            }
            goto LABEL_29;
          case 2:
LABEL_79:
            name_ea = get_name_ea();
            if ( name_ea == -1 )
            {
              exception = __cxa_allocate_exception(8u);
              *exception = "No such global variable";
LABEL_145:
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
            }
            sub_3E6730(a1, a2->m128i_i8, *(double *)a5.m128_u64);
            goto LABEL_81;
        }
        goto LABEL_148;
      case 37LL:
        v31 = sub_3E6140(a1);
        if ( v31 )
          goto LABEL_139;
        v51 = a1[67].m128i_i16[2];
        switch ( v51 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            break;
          case 2:
            break;
          case 3:
            v52 = a1[66].m128i_i64[0];
LABEL_61:
            v53 = a1[68].m128i_i64[0];
            *(_BYTE *)v14 = 5;
            v54 = j__qalloc_or_throw(16, (__int64)a2, v49, v50);
            *(_QWORD *)v54 = v53;
            *(_QWORD *)(v54 + 8) = v52;
LABEL_62:
            *(_QWORD *)(v14 + 8) = v54;
            goto LABEL_40;
          default:
LABEL_148:
            v9 = __cxa_allocate_exception(4u);
            *v9 = 47;
            v6 = v9;
            goto LABEL_140;
        }
        sub_1CE9E0(a1[68].m128i_i64[0]);
        if ( !(unsigned __int8)get_func_frame() )
        {
          v8 = __cxa_allocate_exception(8u);
          *v8 = "Missing function frame";
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'char const*, nullptr);
        }
        a5.m128_u64[0] = 0;
        v89 = nullptr;
        v88 = 0;
        v91 = 0;
        v94 = 1;
        v95 = -1;
        v96 = 0;
        v97 = 0;
        v90 = 0;
        v92 = 0;
        v93 = 0;
        v85 = strlen(a1[2].m128i_i8);
        v86 = v85;
        if ( v85 )
        {
          v87 = v85 + 1;
          v89 = (void *)qvector_reserve((__int64)&v89, 0, v85 + 1, 1);
          *(_QWORD *)&v90 = v87;
          memmove(v89, &a1[2], v86);
          *((_BYTE *)v89 + v86) = 0;
        }
        if ( (unsigned int)find_tinfo_udt_member() == -1 )
        {
          v7 = __cxa_allocate_exception(8u);
          *v7 = "No such stack variable";
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'char const*, nullptr);
        }
        a2 = (__m128i *)((unsigned __int64)v88 >> 3);
        v52 = sub_1CFDD0(a1[68].m128i_i64[0], (unsigned __int64)v88 >> 3);
        clear_tinfo_t();
        if ( v91 )
        {
          *(_QWORD *)&v92 = 0;
          qfree(v91);
        }
        if ( v89 )
        {
          *(_QWORD *)&v90 = 0;
          qfree((__int64)v89);
        }
        clear_tinfo_t();
        goto LABEL_61;
      case 38LL:
        v31 = sub_3E6140(a1);
        if ( v31 )
          goto LABEL_139;
        v71 = a1[67].m128i_i16[2];
        if ( v71 == 4 )
          goto LABEL_150;
        if ( v71 != 40 )
          goto LABEL_151;
        sub_3E65E0(a1);
        sub_3E7E50(a1, a2, 0);
        a1 = a2;
        a2 = (__m128i *)sub_339CA0();
        sub_11C950((unsigned __int8 *)a1, (__int64)a2, v72, v73);
        if ( v12[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3E65E0(v12);
        v33 = v12[67].m128i_i16[2];
        if ( v33 != 60 )
          goto LABEL_41;
        a1 = v12;
        v31 = sub_3E6140(v12);
        if ( v31 )
          goto LABEL_139;
        v74 = v12[67].m128i_i16[2];
        if ( v74 == 4 )
        {
          v12[67].m128i_i16[2] = 2;
          goto LABEL_142;
        }
        if ( v74 == 3 )
        {
          a1 = v12;
          *(_DWORD *)(*(_QWORD *)(v14 + 8) + 16LL) = sub_3E7310(v12);
          v74 = v12[67].m128i_i16[2];
        }
        if ( v74 != 47 )
          goto LABEL_142;
        a1 = v12;
        v31 = sub_3E6140(v12);
        if ( v31 )
          goto LABEL_139;
        v75 = v12[67].m128i_i16[2];
        if ( v75 == 4 )
        {
          v12[67].m128i_i16[2] = 2;
          v76 = *(_QWORD *)(v14 + 8);
          if ( *(int *)(v76 + 16) >= 0 )
            goto LABEL_142;
        }
        else
        {
          if ( v75 == 3 )
          {
            a1 = v12;
            *(_DWORD *)(*(_QWORD *)(v14 + 8) + 20LL) = sub_3E7310(v12);
          }
          v76 = *(_QWORD *)(v14 + 8);
          if ( *(int *)(v76 + 16) >= 0 )
            goto LABEL_107;
        }
        a1 = (__m128i *)*(unsigned int *)(v76 + 20);
        if ( (int)a1 < 0 )
          goto LABEL_148;
LABEL_107:
        if ( v12[67].m128i_i16[2] == 62 )
        {
          v31 = sub_3E6140(v12);
          if ( !v31 )
          {
            v33 = v12[67].m128i_i16[2];
            if ( v33 != 4 )
              goto LABEL_41;
            v12[67].m128i_i16[2] = 2;
LABEL_111:
            if ( !v15 )
            {
              v33 = v12[67].m128i_i16[2];
LABEL_29:
              if ( v33 != 46 )
                return v100 - __readfsqword(0x28u);
              goto LABEL_148;
            }
            goto LABEL_148;
          }
LABEL_139:
          v5 = __cxa_allocate_exception(4u);
          *v5 = v31;
          v6 = v5;
          goto LABEL_140;
        }
LABEL_142:
        sub_5C092(a1, a2, *(double *)a5.m128_u64);
      case 40LL:
        sub_3E65E0(a1);
        v47 = sub_3E66C0((__int64)a1, 0, v45, v46);
        a2->m128i_i8[0] = 4;
        a2->m128i_i64[1] = v47;
        v48 = (__m128i *)v47;
        sub_3E7E50(a1, v47 + 32, 1);
        v48[4].m128i_i32[1] = v48[2].m128i_i32[1];
        v48->m128i_i32[0] = sub_3E6FB0((__int64)a1, &v48[4].m128i_i32[1], &v88);
        if ( (_BYTE)v88 )
          v48->m128i_i32[1] |= 0x10u;
        sub_3E65E0(a1);
        a2 = v48 + 3;
        sub_3E7E50(a1, &v48[3], 1);
        if ( a1[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3E65E0(a1);
        *(_DWORD *)(v14 + 4) = v48[4].m128i_i32[1];
        return v100 - __readfsqword(0x28u);
      case 45LL:
        v20 = 0;
        v21 = 5;
        return sub_3E8B20(a1, a2, v21, v20);
      case 58LL:
        v65 = (_QWORD *)j__qalloc_or_throw(32, (__int64)a2, a3, a4);
        *v65 = 0xFFFFFFFF00000000LL;
        v65[1] = 0;
        v65[2] = 0xFFFFFFFF00000000LL;
        v65[3] = 0;
        a2->m128i_i8[0] = 14;
        a2->m128i_i64[1] = (__int64)v65;
        v31 = sub_3E6140(a1);
        if ( v31 )
          goto LABEL_139;
        v66 = a1[67].m128i_i16[2];
        if ( v66 == 4 )
          goto LABEL_150;
        if ( v66 != 40 )
          goto LABEL_151;
        sub_3E65E0(a1);
        a2 = (__m128i *)(a2->m128i_i64[1] + 16);
        sub_3E7E50(a1, a2, 1);
        if ( a1[67].m128i_i16[2] != 44 )
          goto LABEL_142;
        sub_3E65E0(a1);
        a2 = *(__m128i **)(v14 + 8);
        sub_3E7E50(a1, a2, 1);
        if ( a1[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3E65E0(a1);
        *(_DWORD *)(v14 + 4) = *(_DWORD *)(*(_QWORD *)(v14 + 8) + 4LL) + *(_DWORD *)(*(_QWORD *)(v14 + 8) + 20LL);
        return v100 - __readfsqword(0x28u);
      case 60LL:
        sub_3E65E0(a1);
        a2->m128i_i8[0] = 8;
        a2->m128i_i32[1] = sub_3E8F30((_DWORD)a1, (int)a2 + 8, v67, v68, v69, v70);
        return v100 - __readfsqword(0x28u);
      case 64LL:
        v31 = sub_3E6140(a1);
        if ( v31 )
          goto LABEL_139;
        v55 = a1[67].m128i_i16[2];
        switch ( v55 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            goto LABEL_148;
          case 60:
            sub_3E6BA0(a1, a2->m128i_i64);
            break;
          case 3:
            v56 = a1[66].m128i_i64[0];
            a2->m128i_i8[0] = 7;
            a2->m128i_i32[2] = v56;
            break;
          default:
            goto LABEL_148;
        }
LABEL_68:
        sub_3E65E0(a1);
        v33 = a1[67].m128i_i16[2];
        goto LABEL_41;
      case 91LL:
        sub_3E65E0(a1);
        v59 = sub_3E66C0((__int64)a1, 2, v57, v58);
        a2->m128i_i8[0] = 4;
        a2->m128i_i64[1] = v59;
        a2 = (__m128i *)(v59 + 32);
        v60 = (__m128i *)v59;
        sub_3E7E50(a1, v59 + 32, 1);
        if ( a1[67].m128i_i16[2] != 58 )
          goto LABEL_142;
        sub_3E65E0(a1);
        a2 = v60 + 3;
        sub_3E7E50(a1, &v60[3], 1);
        if ( a1[67].m128i_i16[2] != 93 )
          goto LABEL_142;
        sub_3E65E0(a1);
        v33 = a1[67].m128i_i16[2];
        if ( v33 != 2 )
          goto LABEL_41;
        if ( a1[2].m128i_i8[0] != 102 || a1[2].m128i_i8[1] )
          goto LABEL_111;
        v60->m128i_i32[1] |= 0x10u;
        sub_3E65E0(a1);
        v33 = a1[67].m128i_i16[2];
        goto LABEL_41;
      default:
        goto LABEL_148;
    }
  }
  switch ( (int)v13 )
  {
    case 123:
      sub_3E65E0(a1);
      a2->m128i_i8[0] = 12;
      a2->m128i_i64[1] = sub_3E7380(a1, a2->m128i_i8, v29, v30);
      return v100 - __readfsqword(0x28u);
    case 132:
      v20 = 0;
      v21 = 4;
      return sub_3E8B20(a1, a2, v21, v20);
    case 134:
      v20 = 0;
      v21 = 6;
      return sub_3E8B20(a1, a2, v21, v20);
    case 135:
      v20 = 0;
      v21 = 7;
      return sub_3E8B20(a1, a2, v21, v20);
    case 136:
    case 137:
    case 138:
    case 139:
    case 191:
    case 193:
    case 194:
    case 195:
    case 196:
      v16 = v13 - 128;
      v17 = sub_3E6140(a1);
      if ( v17 )
        goto LABEL_152;
      v18 = a1[67].m128i_i16[2];
      if ( v18 == 4 )
        goto LABEL_150;
      if ( v18 != 46 )
        goto LABEL_151;
      v17 = sub_3E6140(a1);
      if ( v17 )
      {
LABEL_152:
        v11 = __cxa_allocate_exception(4u);
        *v11 = v17;
        v6 = v11;
LABEL_140:
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'int, nullptr);
      }
      v19 = a1[67].m128i_i16[2];
      if ( v19 == 4 )
        goto LABEL_150;
      if ( v19 != 3 )
        goto LABEL_151;
      v20 = a1[66].m128i_u32[0];
      v21 = v16;
      return sub_3E8B20(a1, a2, v21, v20);
    case 184:
    case 185:
      sub_3E65E0(a1);
      v25 = sub_3E66C0((__int64)a1, (unsigned int)(unsigned __int16)v13 - 128, v23, v24);
      a2->m128i_i8[0] = 4;
      a2->m128i_i64[1] = v25;
      v26 = v25;
      v27 = (char *)(v25 + 64);
      sub_3E7E50(a1, v25 + 32, 1);
      sub_3E7E50(a1, v27, 1);
      if ( a1[67].m128i_i16[2] == 60 )
      {
        sub_11CA10((char *)(a2->m128i_i64[1] + 48), v27);
        sub_3E7E50(a1, v27, 1);
      }
      a2->m128i_i32[1] = *(_DWORD *)(v26 + 68);
      return v100 - __readfsqword(0x28u);
    case 207:
      v28 = 1;
      return sub_3E8BB0(a1, a2, v28);
    case 208:
      v28 = 0;
      return sub_3E8BB0(a1, a2, v28);
    case 209:
      v20 = 1;
      v21 = 29;
      return sub_3E8B20(a1, a2, v21, v20);
    case 225:
      v31 = sub_3E6140(a1);
      if ( v31 )
        goto LABEL_139;
      v32 = a1[67].m128i_i16[2];
      if ( v32 == 4 )
        goto LABEL_150;
      if ( v32 != 40 )
        goto LABEL_151;
      sub_3E65E0(a1);
      sub_3E68D0(a1, (__int64)a2);
      v33 = a1[67].m128i_i16[2];
      goto LABEL_29;
    default:
      goto LABEL_148;
  }
}
