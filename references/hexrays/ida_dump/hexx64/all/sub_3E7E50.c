__int64 __fastcall sub_3E7E50(__m128i *a1, __int64 a2, char a3, __m128 a4)
{
  _DWORD *v4; // rax
  void *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  _DWORD *v8; // rax
  _QWORD *exception; // rdi
  _DWORD *v10; // rax
  __int64 v12; // r12
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
  int v31; // eax
  int v32; // r12d
  int v33; // r12d
  int v34; // r12d
  __int16 v35; // ax
  __int64 v36; // r12
  char v37; // al
  int v38; // r14d
  __int64 v39; // r12
  int v40; // esi
  __int64 v41; // rax
  _DWORD *v42; // r12
  __int16 v43; // ax
  __int64 v44; // r12
  __int64 v45; // r14
  __int64 v46; // rax
  __int16 v47; // ax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r12
  __int16 v51; // ax
  __int64 name_ea; // r12
  __int64 v53; // rax
  int v54; // ecx
  _QWORD *v55; // rax
  __int16 v56; // ax
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  int v60; // r9d
  __int16 v61; // ax
  __int64 v63; // rsi
  __int16 v64; // ax
  __int16 v65; // ax
  __int64 v66; // rax
  int v67; // r12d
  __int64 v68; // r14
  __m128 *v69; // rax
  _QWORD *v70; // rax
  size_t v71; // rax
  size_t v72; // r12
  size_t v73; // [rsp+8h] [rbp-100h]
  __int64 v74; // [rsp+18h] [rbp-F0h] BYREF
  __int128 v75; // [rsp+20h] [rbp-E8h] BYREF
  void *v76; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v77; // [rsp+38h] [rbp-D0h]
  __int64 v78; // [rsp+48h] [rbp-C0h]
  __int128 v79; // [rsp+50h] [rbp-B8h]
  _OWORD v80[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v81; // [rsp+90h] [rbp-78h]
  int v82; // [rsp+98h] [rbp-70h]
  __int64 v83; // [rsp+A0h] [rbp-68h]
  char v84; // [rsp+A8h] [rbp-60h]
  __m128i v85; // [rsp+B0h] [rbp-58h] BYREF
  __int32 v86; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v87; // [rsp+C8h] [rbp-40h]

  v12 = a1[67].m128i_u16[2];
  v87 = __readfsqword(0x28u);
  if ( (unsigned __int16)v12 <= 0x5Bu )
  {
    if ( (unsigned __int16)v12 <= 1u )
      goto LABEL_148;
    switch ( v12 )
    {
      case 2LL:
        m128i_i8 = a1[2].m128i_i8;
        v31 = sub_122A60(*(_DWORD **)(a1->m128i_i64[0] + 112), (__int64)a1[2].m128i_i64, nullptr);
        *(_BYTE *)a2 = 1;
        *(_DWORD *)(a2 + 8) = v31;
        if ( *(_DWORD *)(sub_339CA0() + 52) == v31
          || (v32 = *(_DWORD *)(a2 + 8), v32 == *(_DWORD *)(sub_339CA0() + 56))
          || (v33 = *(_DWORD *)(a2 + 8), v33 == *(_DWORD *)(sub_339CA0() + 64)) )
        {
          *(_DWORD *)(a2 + 8) = -1;
LABEL_115:
          v67 = sub_3E7C00((__int64)a1, m128i_i8);
          if ( v67 == -1 )
            v67 = sub_3E7CB0((__int64)a1, m128i_i8);
          v68 = a1[68].m128i_i64[0];
          *(_BYTE *)a2 = 9;
          v46 = j__qalloc_or_throw(24);
          *(_QWORD *)v46 = v68;
          *(_QWORD *)(v46 + 8) = 0;
          *(_DWORD *)(v46 + 16) = v67;
          goto LABEL_62;
        }
        v34 = *(_DWORD *)(a2 + 8);
        if ( v34 <= *(_DWORD *)(sub_339CA0() + 72) )
        {
          if ( *(_DWORD *)(a2 + 8) != -1 )
          {
LABEL_40:
            sub_3E6730(a1, a2, *(double *)a4.m128_u64);
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
        *(_BYTE *)a2 = 11;
        *(_QWORD *)(a2 + 8) = qstrdup(&a1[2]);
        return sub_3E65E0(a1);
      case 35LL:
        sub_3E65E0(a1);
        if ( a1[67].m128i_i16[2] != 40 )
        {
          v38 = *(_DWORD *)(sub_339CA0() + 80);
          v39 = sub_3E6800(a1);
          v40 = sub_339CA0();
          sub_120A10(a2, v40, v39, v38, -1, 0);
          v28 = a1[67].m128i_i16[2];
          goto LABEL_41;
        }
        sub_3E6880(a1);
        *(_BYTE *)a2 = 13;
        v69 = (__m128 *)j__qalloc_or_throw(20);
        a4 = (__m128)_mm_load_si128(&v85);
        *v69 = a4;
        v69[1].m128_i32[0] = v86;
        *(_QWORD *)(a2 + 8) = v69;
        goto LABEL_68;
      case 36LL:
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v51 = a1[67].m128i_i16[2];
        switch ( v51 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            goto LABEL_79;
          case 3:
            name_ea = a1[66].m128i_i64[0];
            sub_3E65E0(a1);
LABEL_81:
            v53 = *(_QWORD *)(a1->m128i_i64[0] + 112);
            *(_BYTE *)a2 = 6;
            v54 = 8 * *(_DWORD *)(v53 + 84);
            if ( (unsigned __int64)v54 <= 0x3F )
              name_ea &= ~(-1LL << v54);
            *(_QWORD *)(a2 + 8) = name_ea;
            v28 = a1[67].m128i_i16[2];
LABEL_41:
            if ( a3 )
            {
              if ( v28 == 46 )
              {
                v26 = sub_3E6140(a1);
                if ( !v26 )
                {
                  v35 = a1[67].m128i_i16[2];
                  if ( v35 != 4 )
                  {
                    if ( v35 == 3 )
                    {
                      v36 = a1[66].m128i_i64[0];
                      if ( v36 != (int)v36 )
                        sub_5C0B4();
                      sub_3E65E0(a1);
                      v37 = *(_BYTE *)a2;
                      *(_DWORD *)(a2 + 4) = v36;
                      if ( v37 == 4 )
                      {
                        *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) = v36;
                      }
                      else if ( v37 == 13 )
                      {
                        *(_DWORD *)(*(_QWORD *)(a2 + 8) + 16LL) = v36;
                      }
                      return v87 - __readfsqword(0x28u);
                    }
LABEL_151:
                    sub_5C092(*(double *)a4.m128_u64);
                  }
LABEL_150:
                  a1[67].m128i_i16[2] = 2;
                  goto LABEL_151;
                }
                goto LABEL_139;
              }
              goto LABEL_148;
            }
            goto LABEL_29;
          case 2:
LABEL_79:
            name_ea = get_name_ea(*(_QWORD *)(a1[68].m128i_i64[0] + 40), &a1[2]);
            if ( name_ea == -1 )
            {
              exception = __cxa_allocate_exception(8u);
              *exception = "No such global variable";
LABEL_145:
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
            }
            sub_3E6730(a1, a2, *(double *)a4.m128_u64);
            goto LABEL_81;
        }
        goto LABEL_148;
      case 37LL:
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v43 = a1[67].m128i_i16[2];
        switch ( v43 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            break;
          case 2:
            break;
          case 3:
            v44 = a1[66].m128i_i64[0];
LABEL_61:
            v45 = a1[68].m128i_i64[0];
            *(_BYTE *)a2 = 5;
            v46 = j__qalloc_or_throw(16);
            *(_QWORD *)v46 = v45;
            *(_QWORD *)(v46 + 8) = v44;
LABEL_62:
            *(_QWORD *)(a2 + 8) = v46;
            goto LABEL_40;
          default:
LABEL_148:
            v8 = __cxa_allocate_exception(4u);
            *v8 = 47;
            v5 = v8;
            goto LABEL_140;
        }
        v70 = sub_1CE9E0(a1[68].m128i_i64[0]);
        v74 = 0;
        if ( !(unsigned __int8)get_func_frame(&v74, v70) )
        {
          v7 = __cxa_allocate_exception(8u);
          *v7 = "Missing function frame";
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'char const*, nullptr);
        }
        a4.m128_u64[0] = 0;
        v76 = nullptr;
        v75 = 0;
        v78 = 0;
        v81 = 1;
        v82 = -1;
        v83 = 0;
        v84 = 0;
        v77 = 0;
        v79 = 0;
        v80[0] = 0;
        v71 = strlen(a1[2].m128i_i8);
        v72 = v71;
        if ( v71 )
        {
          v73 = v71 + 1;
          v76 = (void *)qvector_reserve(&v76, 0, v71 + 1, 1);
          *(_QWORD *)&v77 = v73;
          memmove(v76, &a1[2], v72);
          *((_BYTE *)v76 + v72) = 0;
        }
        if ( (unsigned int)find_tinfo_udt_member(&v75, v74, 3) == -1 )
        {
          v6 = __cxa_allocate_exception(8u);
          *v6 = "No such stack variable";
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'char const*, nullptr);
        }
        v44 = sub_1CFDD0(a1[68].m128i_i64[0], (unsigned __int64)v75 >> 3);
        clear_tinfo_t(v80);
        if ( v78 )
        {
          *(_QWORD *)&v79 = 0;
          qfree(v78);
        }
        if ( v76 )
        {
          *(_QWORD *)&v77 = 0;
          qfree(v76);
        }
        clear_tinfo_t(&v74);
        goto LABEL_61;
      case 38LL:
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v61 = a1[67].m128i_i16[2];
        if ( v61 == 4 )
          goto LABEL_150;
        if ( v61 != 40 )
          goto LABEL_151;
        sub_3E65E0(a1);
        sub_3E7E50(a1, a2, 0);
        v63 = sub_339CA0();
        sub_11C950((char *)a2, v63);
        if ( a1[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3E65E0(a1);
        v28 = a1[67].m128i_i16[2];
        if ( v28 != 60 )
          goto LABEL_41;
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v64 = a1[67].m128i_i16[2];
        if ( v64 == 4 )
        {
          a1[67].m128i_i16[2] = 2;
          goto LABEL_142;
        }
        if ( v64 == 3 )
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 8) + 16LL) = sub_3E7310(a1);
          v64 = a1[67].m128i_i16[2];
        }
        if ( v64 != 47 )
          goto LABEL_142;
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v65 = a1[67].m128i_i16[2];
        if ( v65 == 4 )
        {
          a1[67].m128i_i16[2] = 2;
          v66 = *(_QWORD *)(a2 + 8);
          if ( *(int *)(v66 + 16) >= 0 )
            goto LABEL_142;
        }
        else
        {
          if ( v65 == 3 )
            *(_DWORD *)(*(_QWORD *)(a2 + 8) + 20LL) = sub_3E7310(a1);
          v66 = *(_QWORD *)(a2 + 8);
          if ( *(int *)(v66 + 16) >= 0 )
            goto LABEL_107;
        }
        if ( *(int *)(v66 + 20) < 0 )
          goto LABEL_148;
LABEL_107:
        if ( a1[67].m128i_i16[2] == 62 )
        {
          v26 = sub_3E6140(a1);
          if ( !v26 )
          {
            v28 = a1[67].m128i_i16[2];
            if ( v28 != 4 )
              goto LABEL_41;
            a1[67].m128i_i16[2] = 2;
LABEL_111:
            if ( !a3 )
            {
              v28 = a1[67].m128i_i16[2];
LABEL_29:
              if ( v28 != 46 )
                return v87 - __readfsqword(0x28u);
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
        sub_5C092(*(double *)a4.m128_u64);
      case 40LL:
        sub_3E65E0(a1);
        v41 = sub_3E66C0((__int64)a1, 0);
        *(_BYTE *)a2 = 4;
        *(_QWORD *)(a2 + 8) = v41;
        v42 = (_DWORD *)v41;
        sub_3E7E50(a1, v41 + 32, 1);
        v42[17] = v42[9];
        *v42 = sub_3E6FB0((__int64)a1, v42 + 17, &v75);
        if ( (_BYTE)v75 )
          v42[1] |= 0x10u;
        sub_3E65E0(a1);
        sub_3E7E50(a1, v42 + 12, 1);
        if ( a1[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3E65E0(a1);
        *(_DWORD *)(a2 + 4) = v42[17];
        return v87 - __readfsqword(0x28u);
      case 45LL:
        v19 = 0;
        v20 = 5;
        return sub_3E8B20(a1, a2, v20, v19);
      case 58LL:
        v55 = (_QWORD *)j__qalloc_or_throw(32);
        *v55 = 0xFFFFFFFF00000000LL;
        v55[1] = 0;
        v55[2] = 0xFFFFFFFF00000000LL;
        v55[3] = 0;
        *(_BYTE *)a2 = 14;
        *(_QWORD *)(a2 + 8) = v55;
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v56 = a1[67].m128i_i16[2];
        if ( v56 == 4 )
          goto LABEL_150;
        if ( v56 != 40 )
          goto LABEL_151;
        sub_3E65E0(a1);
        sub_3E7E50(a1, *(_QWORD *)(a2 + 8) + 16LL, 1);
        if ( a1[67].m128i_i16[2] != 44 )
          goto LABEL_142;
        sub_3E65E0(a1);
        sub_3E7E50(a1, *(_QWORD *)(a2 + 8), 1);
        if ( a1[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3E65E0(a1);
        *(_DWORD *)(a2 + 4) = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4LL) + *(_DWORD *)(*(_QWORD *)(a2 + 8) + 20LL);
        return v87 - __readfsqword(0x28u);
      case 60LL:
        sub_3E65E0(a1);
        *(_BYTE *)a2 = 8;
        *(_DWORD *)(a2 + 4) = sub_3E8F30((_DWORD)a1, (int)a2 + 8, v57, v58, v59, v60);
        return v87 - __readfsqword(0x28u);
      case 64LL:
        v26 = sub_3E6140(a1);
        if ( v26 )
          goto LABEL_139;
        v47 = a1[67].m128i_i16[2];
        switch ( v47 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            goto LABEL_148;
          case 60:
            sub_3E6BA0(a1, a2);
            break;
          case 3:
            v48 = a1[66].m128i_i64[0];
            *(_BYTE *)a2 = 7;
            *(_DWORD *)(a2 + 8) = v48;
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
        v49 = sub_3E66C0((__int64)a1, 2);
        *(_BYTE *)a2 = 4;
        *(_QWORD *)(a2 + 8) = v49;
        v50 = v49;
        sub_3E7E50(a1, v49 + 32, 1);
        if ( a1[67].m128i_i16[2] != 58 )
          goto LABEL_142;
        sub_3E65E0(a1);
        sub_3E7E50(a1, v50 + 48, 1);
        if ( a1[67].m128i_i16[2] != 93 )
          goto LABEL_142;
        sub_3E65E0(a1);
        v28 = a1[67].m128i_i16[2];
        if ( v28 != 2 )
          goto LABEL_41;
        if ( a1[2].m128i_i8[0] != 102 || a1[2].m128i_i8[1] )
          goto LABEL_111;
        *(_DWORD *)(v50 + 4) |= 0x10u;
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
      *(_BYTE *)a2 = 12;
      *(_QWORD *)(a2 + 8) = sub_3E7380(a1, (char *)a2);
      return v87 - __readfsqword(0x28u);
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
      *(_BYTE *)a2 = 4;
      *(_QWORD *)(a2 + 8) = v22;
      v23 = v22;
      v24 = (char *)(v22 + 64);
      sub_3E7E50(a1, v22 + 32, 1);
      sub_3E7E50(a1, v24, 1);
      if ( a1[67].m128i_i16[2] == 60 )
      {
        sub_11CA10((char *)(*(_QWORD *)(a2 + 8) + 48LL), v24);
        sub_3E7E50(a1, v24, 1);
      }
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(v23 + 68);
      return v87 - __readfsqword(0x28u);
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
      sub_3E68D0(a1, a2);
      v28 = a1[67].m128i_i16[2];
      goto LABEL_29;
    default:
      goto LABEL_148;
  }
}
