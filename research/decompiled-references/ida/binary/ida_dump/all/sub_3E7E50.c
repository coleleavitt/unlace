__int64 __fastcall sub_3E7E50(__m128i *a1, __m128i *a2, char a3, __m128 a4)
{
  _DWORD *v4; // rax
  void *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  _DWORD *v8; // rax
  _QWORD *exception; // rdi
  _DWORD *v10; // rax
  __m128i *v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rbp
  unsigned int v15; // r12d
  int v16; // r13d
  __int16 v17; // ax
  __int16 v18; // ax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v22; // rax
  __int64 v23; // r12
  char *v24; // r13
  __int64 v25; // rdx
  int v26; // r12d
  __int16 v27; // ax
  __int16 v28; // ax
  __int16 v29; // ax
  const char *m128i_i8; // r14
  __int32 v31; // eax
  __int32 v32; // r12d
  __int32 v33; // r12d
  __int32 v34; // r12d
  __int16 v35; // ax
  __int64 v36; // r12
  char v37; // al
  int v38; // r14d
  __int64 v39; // r12
  __int64 v40; // rax
  __m128i *v41; // r12
  __int16 v42; // ax
  __int64 v43; // r12
  __int64 v44; // r14
  __int64 v45; // rax
  __int16 v46; // ax
  __int64 v47; // rax
  __int64 v48; // rax
  __m128i *v49; // r12
  __int16 v50; // ax
  __int64 name_ea; // r12
  __int64 v52; // rax
  int v53; // ecx
  _QWORD *v54; // rax
  __int16 v55; // ax
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  __int16 v60; // ax
  __int16 v61; // ax
  __int16 v62; // ax
  __int64 v63; // rax
  int v64; // r12d
  __int64 v65; // r14
  __m128 *v66; // rax
  size_t v67; // rax
  size_t v68; // r12
  size_t v69; // [rsp+8h] [rbp-100h]
  __int128 v70; // [rsp+20h] [rbp-E8h] BYREF
  void *v71; // [rsp+30h] [rbp-D8h]
  __int128 v72; // [rsp+38h] [rbp-D0h]
  __int64 v73; // [rsp+48h] [rbp-C0h]
  __int128 v74; // [rsp+50h] [rbp-B8h]
  __int128 v75; // [rsp+60h] [rbp-A8h]
  __int64 v76; // [rsp+90h] [rbp-78h]
  int v77; // [rsp+98h] [rbp-70h]
  __int64 v78; // [rsp+A0h] [rbp-68h]
  char v79; // [rsp+A8h] [rbp-60h]
  __m128i v80; // [rsp+B0h] [rbp-58h] BYREF
  __int32 v81; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v82; // [rsp+C8h] [rbp-40h]

  v11 = a1;
  v12 = a1[67].m128i_u16[2];
  v82 = __readfsqword(0x28u);
  v13 = (__int64)a2;
  if ( (unsigned __int16)v12 <= 0x5Bu )
  {
    if ( (unsigned __int16)v12 <= 1u )
      goto LABEL_148;
    switch ( v12 )
    {
      case 2LL:
        m128i_i8 = a1[2].m128i_i8;
        v31 = sub_122A60(*(_DWORD **)(a1->m128i_i64[0] + 112), (__int64)a1[2].m128i_i64, nullptr);
        a2->m128i_i8[0] = 1;
        a2->m128i_i32[2] = v31;
        if ( *(_DWORD *)(sub_339CA0() + 52) == v31
          || (v32 = a2->m128i_i32[2], v32 == *(_DWORD *)(sub_339CA0() + 56))
          || (v33 = a2->m128i_i32[2], v33 == *(_DWORD *)(sub_339CA0() + 64)) )
        {
          a2->m128i_i32[2] = -1;
LABEL_115:
          v64 = sub_3E7C00((__int64)a1, m128i_i8);
          if ( v64 == -1 )
            v64 = sub_3E7CB0((__int64)a1, m128i_i8);
          v65 = a1[68].m128i_i64[0];
          a2->m128i_i8[0] = 9;
          v45 = j__qalloc_or_throw();
          *(_QWORD *)v45 = v65;
          *(_QWORD *)(v45 + 8) = 0;
          *(_DWORD *)(v45 + 16) = v64;
          goto LABEL_62;
        }
        v34 = a2->m128i_i32[2];
        if ( v34 <= *(_DWORD *)(sub_339CA0() + 72) )
        {
          if ( a2->m128i_i32[2] != -1 )
          {
LABEL_40:
            sub_3E6730(a1, a2->m128i_i8, *(double *)a4.m128_u64);
            v28 = a1[67].m128i_i16[2];
            goto LABEL_41;
          }
          goto LABEL_115;
        }
        exception = __cxa_allocate_exception(8u);
        *exception = "this register cannot be used in rasm";
        goto LABEL_145;
      case 33LL:
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v29 = a1[67].m128i_i16[2];
        if ( v29 == 4 )
        {
          a1[67].m128i_i16[2] = 2;
        }
        else if ( v29 != 2 )
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
          v38 = *(_DWORD *)(sub_339CA0() + 80);
          v39 = sub_3E6800(a1);
          a2 = (__m128i *)sub_339CA0();
          sub_120A10(v13, (int)a2, v39, v38, -1, 0);
          v28 = a1[67].m128i_i16[2];
          goto LABEL_41;
        }
        a2 = &v80;
        sub_3E6880(a1);
        *(_BYTE *)v13 = 13;
        v66 = (__m128 *)j__qalloc_or_throw();
        a4 = (__m128)_mm_load_si128(&v80);
        *v66 = a4;
        v66[1].m128_i32[0] = v81;
        *(_QWORD *)(v13 + 8) = v66;
        goto LABEL_68;
      case 36LL:
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v50 = a1[67].m128i_i16[2];
        switch ( v50 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            goto LABEL_79;
          case 3:
            name_ea = a1[66].m128i_i64[0];
            sub_3E65E0(a1);
LABEL_81:
            v52 = *(_QWORD *)(a1->m128i_i64[0] + 112);
            a2->m128i_i8[0] = 6;
            v53 = 8 * *(_DWORD *)(v52 + 84);
            if ( (unsigned __int64)v53 <= 0x3F )
              name_ea &= ~(-1LL << v53);
            a2->m128i_i64[1] = name_ea;
            v28 = a1[67].m128i_i16[2];
LABEL_41:
            if ( a3 )
            {
              if ( v28 == 46 )
              {
                a1 = v11;
                v26 = sub_3E6140(v11);
                if ( !v26 )
                {
                  v35 = v11[67].m128i_i16[2];
                  if ( v35 != 4 )
                  {
                    if ( v35 == 3 )
                    {
                      v36 = v11[66].m128i_i64[0];
                      if ( v36 != (int)v36 )
                        sub_5C0B4();
                      sub_3E65E0(v11);
                      v37 = *(_BYTE *)v13;
                      *(_DWORD *)(v13 + 4) = v36;
                      if ( v37 == 4 )
                      {
                        *(_DWORD *)(*(_QWORD *)(v13 + 8) + 68LL) = v36;
                      }
                      else if ( v37 == 13 )
                      {
                        *(_DWORD *)(*(_QWORD *)(v13 + 8) + 16LL) = v36;
                      }
                      return v82 - __readfsqword(0x28u);
                    }
LABEL_151:
                    sub_5C092(a1, a2, *(double *)a4.m128_u64);
                  }
LABEL_150:
                  v11[67].m128i_i16[2] = 2;
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
            sub_3E6730(a1, a2->m128i_i8, *(double *)a4.m128_u64);
            goto LABEL_81;
        }
        goto LABEL_148;
      case 37LL:
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v42 = a1[67].m128i_i16[2];
        switch ( v42 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            break;
          case 2:
            break;
          case 3:
            v43 = a1[66].m128i_i64[0];
LABEL_61:
            v44 = a1[68].m128i_i64[0];
            a2->m128i_i8[0] = 5;
            v45 = j__qalloc_or_throw();
            *(_QWORD *)v45 = v44;
            *(_QWORD *)(v45 + 8) = v43;
LABEL_62:
            a2->m128i_i64[1] = v45;
            goto LABEL_40;
          default:
LABEL_148:
            v8 = __cxa_allocate_exception(4u);
            *v8 = 47;
            v5 = v8;
            goto LABEL_140;
        }
        sub_1CE9E0(a1[68].m128i_i64[0]);
        if ( !(unsigned __int8)get_func_frame() )
        {
          v7 = __cxa_allocate_exception(8u);
          *v7 = "Missing function frame";
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'char const*, nullptr);
        }
        a4.m128_u64[0] = 0;
        v71 = nullptr;
        v70 = 0;
        v73 = 0;
        v76 = 1;
        v77 = -1;
        v78 = 0;
        v79 = 0;
        v72 = 0;
        v74 = 0;
        v75 = 0;
        v67 = strlen(a1[2].m128i_i8);
        v68 = v67;
        if ( v67 )
        {
          v69 = v67 + 1;
          v71 = (void *)qvector_reserve();
          *(_QWORD *)&v72 = v69;
          memmove(v71, &a1[2], v68);
          *((_BYTE *)v71 + v68) = 0;
        }
        if ( (unsigned int)find_tinfo_udt_member() == -1 )
        {
          v6 = __cxa_allocate_exception(8u);
          *v6 = "No such stack variable";
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'char const*, nullptr);
        }
        v43 = sub_1CFDD0(a1[68].m128i_i64[0], (unsigned __int64)v70 >> 3);
        clear_tinfo_t();
        if ( v73 )
        {
          *(_QWORD *)&v74 = 0;
          qfree();
        }
        if ( v71 )
        {
          *(_QWORD *)&v72 = 0;
          qfree();
        }
        clear_tinfo_t();
        goto LABEL_61;
      case 38LL:
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v60 = a1[67].m128i_i16[2];
        if ( v60 == 4 )
          goto LABEL_150;
        if ( v60 != 40 )
          goto LABEL_151;
        sub_3E65E0(a1);
        sub_3E7E50(a1, a2, 0);
        a1 = a2;
        a2 = (__m128i *)sub_339CA0();
        sub_11C950(a1->m128i_i8, (__int64)a2);
        if ( v11[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3E65E0(v11);
        v28 = v11[67].m128i_i16[2];
        if ( v28 != 60 )
          goto LABEL_41;
        a1 = v11;
        v26 = sub_3E6140(v11);
        if ( v26 )
          goto LABEL_139;
        v61 = v11[67].m128i_i16[2];
        if ( v61 == 4 )
        {
          v11[67].m128i_i16[2] = 2;
          goto LABEL_142;
        }
        if ( v61 == 3 )
        {
          a1 = v11;
          *(_DWORD *)(*(_QWORD *)(v13 + 8) + 16LL) = sub_3E7310(v11);
          v61 = v11[67].m128i_i16[2];
        }
        if ( v61 != 47 )
          goto LABEL_142;
        a1 = v11;
        v26 = sub_3E6140(v11);
        if ( v26 )
          goto LABEL_139;
        v62 = v11[67].m128i_i16[2];
        if ( v62 == 4 )
        {
          v11[67].m128i_i16[2] = 2;
          v63 = *(_QWORD *)(v13 + 8);
          if ( *(int *)(v63 + 16) >= 0 )
            goto LABEL_142;
        }
        else
        {
          if ( v62 == 3 )
          {
            a1 = v11;
            *(_DWORD *)(*(_QWORD *)(v13 + 8) + 20LL) = sub_3E7310(v11);
          }
          v63 = *(_QWORD *)(v13 + 8);
          if ( *(int *)(v63 + 16) >= 0 )
            goto LABEL_107;
        }
        a1 = (__m128i *)*(unsigned int *)(v63 + 20);
        if ( (int)a1 < 0 )
          goto LABEL_148;
LABEL_107:
        if ( v11[67].m128i_i16[2] == 62 )
        {
          v26 = sub_3E6140(v11);
          if ( !v26 )
          {
            v28 = v11[67].m128i_i16[2];
            if ( v28 != 4 )
              goto LABEL_41;
            v11[67].m128i_i16[2] = 2;
LABEL_111:
            if ( !a3 )
            {
              v28 = v11[67].m128i_i16[2];
LABEL_29:
              if ( v28 != 46 )
                return v82 - __readfsqword(0x28u);
              goto LABEL_148;
            }
            goto LABEL_148;
          }
LABEL_139:
          v4 = __cxa_allocate_exception(4u);
          *v4 = v26;
          v5 = v4;
          goto LABEL_140;
        }
LABEL_142:
        sub_5C092(a1, a2, *(double *)a4.m128_u64);
      case 40LL:
        sub_3E65E0(a1);
        v40 = sub_3E66C0((__int64)a1, 0);
        a2->m128i_i8[0] = 4;
        a2->m128i_i64[1] = v40;
        v41 = (__m128i *)v40;
        sub_3E7E50(a1, v40 + 32, 1);
        v41[4].m128i_i32[1] = v41[2].m128i_i32[1];
        v41->m128i_i32[0] = sub_3E6FB0((__int64)a1, &v41[4].m128i_i32[1], &v70);
        if ( (_BYTE)v70 )
          v41->m128i_i32[1] |= 0x10u;
        sub_3E65E0(a1);
        a2 = v41 + 3;
        sub_3E7E50(a1, &v41[3], 1);
        if ( a1[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3E65E0(a1);
        *(_DWORD *)(v13 + 4) = v41[4].m128i_i32[1];
        return v82 - __readfsqword(0x28u);
      case 45LL:
        v19 = 0;
        v20 = 5;
        return sub_3E8B20(a1, a2, v20, v19);
      case 58LL:
        v54 = (_QWORD *)j__qalloc_or_throw();
        *v54 = 0xFFFFFFFF00000000LL;
        v54[1] = 0;
        v54[2] = 0xFFFFFFFF00000000LL;
        v54[3] = 0;
        a2->m128i_i8[0] = 14;
        a2->m128i_i64[1] = (__int64)v54;
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v55 = a1[67].m128i_i16[2];
        if ( v55 == 4 )
          goto LABEL_150;
        if ( v55 != 40 )
          goto LABEL_151;
        sub_3E65E0(a1);
        a2 = (__m128i *)(a2->m128i_i64[1] + 16);
        sub_3E7E50(a1, a2, 1);
        if ( a1[67].m128i_i16[2] != 44 )
          goto LABEL_142;
        sub_3E65E0(a1);
        a2 = *(__m128i **)(v13 + 8);
        sub_3E7E50(a1, a2, 1);
        if ( a1[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3E65E0(a1);
        *(_DWORD *)(v13 + 4) = *(_DWORD *)(*(_QWORD *)(v13 + 8) + 4LL) + *(_DWORD *)(*(_QWORD *)(v13 + 8) + 20LL);
        return v82 - __readfsqword(0x28u);
      case 60LL:
        sub_3E65E0(a1);
        a2->m128i_i8[0] = 8;
        a2->m128i_i32[1] = sub_3E8F30((_DWORD)a1, (int)a2 + 8, v56, v57, v58, v59);
        return v82 - __readfsqword(0x28u);
      case 64LL:
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v46 = a1[67].m128i_i16[2];
        switch ( v46 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            goto LABEL_148;
          case 60:
            sub_3E6BA0(a1, (__int64)a2);
            break;
          case 3:
            v47 = a1[66].m128i_i64[0];
            a2->m128i_i8[0] = 7;
            a2->m128i_i32[2] = v47;
            break;
          default:
            goto LABEL_148;
        }
LABEL_68:
        sub_3E65E0(a1);
        v28 = a1[67].m128i_i16[2];
        goto LABEL_41;
      case 91LL:
        sub_3E65E0(a1);
        v48 = sub_3E66C0((__int64)a1, 2);
        a2->m128i_i8[0] = 4;
        a2->m128i_i64[1] = v48;
        a2 = (__m128i *)(v48 + 32);
        v49 = (__m128i *)v48;
        sub_3E7E50(a1, v48 + 32, 1);
        if ( a1[67].m128i_i16[2] != 58 )
          goto LABEL_142;
        sub_3E65E0(a1);
        a2 = v49 + 3;
        sub_3E7E50(a1, &v49[3], 1);
        if ( a1[67].m128i_i16[2] != 93 )
          goto LABEL_142;
        sub_3E65E0(a1);
        v28 = a1[67].m128i_i16[2];
        if ( v28 != 2 )
          goto LABEL_41;
        if ( a1[2].m128i_i8[0] != 102 || a1[2].m128i_i8[1] )
          goto LABEL_111;
        v49->m128i_i32[1] |= 0x10u;
        sub_3E65E0(a1);
        v28 = a1[67].m128i_i16[2];
        goto LABEL_41;
      default:
        goto LABEL_148;
    }
  }
  switch ( (int)v12 )
  {
    case 123:
      sub_3E65E0(a1);
      a2->m128i_i8[0] = 12;
      a2->m128i_i64[1] = sub_3E7380(a1, a2->m128i_i8);
      return v82 - __readfsqword(0x28u);
    case 132:
      v19 = 0;
      v20 = 4;
      return sub_3E8B20(a1, a2, v20, v19);
    case 134:
      v19 = 0;
      v20 = 6;
      return sub_3E8B20(a1, a2, v20, v19);
    case 135:
      v19 = 0;
      v20 = 7;
      return sub_3E8B20(a1, a2, v20, v19);
    case 136:
    case 137:
    case 138:
    case 139:
    case 191:
    case 193:
    case 194:
    case 195:
    case 196:
      v15 = v12 - 128;
      v16 = sub_3E6140(a1);
      if ( v16 )
        goto LABEL_152;
      v17 = a1[67].m128i_i16[2];
      if ( v17 == 4 )
        goto LABEL_150;
      if ( v17 != 46 )
        goto LABEL_151;
      v16 = sub_3E6140(a1);
      if ( v16 )
      {
LABEL_152:
        v10 = __cxa_allocate_exception(4u);
        *v10 = v16;
        v5 = v10;
LABEL_140:
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'int, nullptr);
      }
      v18 = a1[67].m128i_i16[2];
      if ( v18 == 4 )
        goto LABEL_150;
      if ( v18 != 3 )
        goto LABEL_151;
      v19 = a1[66].m128i_u32[0];
      v20 = v15;
      return sub_3E8B20(a1, a2, v20, v19);
    case 184:
    case 185:
      sub_3E65E0(a1);
      v22 = sub_3E66C0((__int64)a1, (unsigned int)(unsigned __int16)v12 - 128);
      a2->m128i_i8[0] = 4;
      a2->m128i_i64[1] = v22;
      v23 = v22;
      v24 = (char *)(v22 + 64);
      sub_3E7E50(a1, v22 + 32, 1);
      sub_3E7E50(a1, v24, 1);
      if ( a1[67].m128i_i16[2] == 60 )
      {
        sub_11CA10((char *)(a2->m128i_i64[1] + 48), v24);
        sub_3E7E50(a1, v24, 1);
      }
      a2->m128i_i32[1] = *(_DWORD *)(v23 + 68);
      return v82 - __readfsqword(0x28u);
    case 207:
      v25 = 1;
      return sub_3E8BB0(a1, a2, v25);
    case 208:
      v25 = 0;
      return sub_3E8BB0(a1, a2, v25);
    case 209:
      v19 = 1;
      v20 = 29;
      return sub_3E8B20(a1, a2, v20, v19);
    case 225:
      v26 = sub_3E6140(a1);
      if ( v26 )
        goto LABEL_139;
      v27 = a1[67].m128i_i16[2];
      if ( v27 == 4 )
        goto LABEL_150;
      if ( v27 != 40 )
        goto LABEL_151;
      sub_3E65E0(a1);
      sub_3E68D0(a1, (__int64)a2);
      v28 = a1[67].m128i_i16[2];
      goto LABEL_29;
    default:
      goto LABEL_148;
  }
}
