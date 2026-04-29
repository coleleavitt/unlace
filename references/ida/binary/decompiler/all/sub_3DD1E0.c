__int64 __fastcall sub_3DD1E0(__m128i *a1, __m128i *a2, char a3, __m128 a4)
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
  __int64 m128i_i64; // rsi
  _DWORD *v32; // rdi
  int v33; // eax
  int v34; // r12d
  int v35; // r12d
  int v36; // r12d
  __int16 v37; // ax
  __int64 v38; // r12
  char v39; // al
  int v40; // r14d
  __int64 v41; // r12
  __int64 v42; // rax
  __m128i *v43; // r12
  __int16 v44; // ax
  __int64 v45; // r12
  __int64 v46; // r14
  __int64 v47; // rax
  __int16 v48; // ax
  __int64 v49; // rax
  __int64 v50; // rax
  __m128i *v51; // r12
  __int16 v52; // ax
  __int64 name_ea; // r12
  __int64 v54; // rax
  int v55; // ecx
  _QWORD *v56; // rax
  __int16 v57; // ax
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  __int16 v62; // ax
  __int64 v63; // rax
  __int16 v64; // ax
  __int16 v65; // ax
  __int64 v66; // rax
  int v67; // r12d
  __int64 v68; // r14
  __m128 *v69; // rax
  size_t v70; // rax
  size_t v71; // r12
  size_t v72; // [rsp+8h] [rbp-100h]
  __int128 v73; // [rsp+20h] [rbp-E8h] BYREF
  void *v74; // [rsp+30h] [rbp-D8h]
  __int128 v75; // [rsp+38h] [rbp-D0h]
  __int64 v76; // [rsp+48h] [rbp-C0h]
  __int128 v77; // [rsp+50h] [rbp-B8h]
  __int128 v78; // [rsp+60h] [rbp-A8h]
  __int64 v79; // [rsp+90h] [rbp-78h]
  int v80; // [rsp+98h] [rbp-70h]
  __int64 v81; // [rsp+A0h] [rbp-68h]
  char v82; // [rsp+A8h] [rbp-60h]
  __m128i v83; // [rsp+B0h] [rbp-58h] BYREF
  __int32 v84; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v85; // [rsp+C8h] [rbp-40h]

  v11 = a1;
  v12 = a1[67].m128i_u16[2];
  v85 = __readfsqword(0x28u);
  v13 = (__int64)a2;
  if ( (unsigned __int16)v12 <= 0x5Bu )
  {
    if ( (unsigned __int16)v12 <= 1u )
      goto LABEL_148;
    switch ( v12 )
    {
      case 2LL:
        m128i_i8 = a1[2].m128i_i8;
        m128i_i64 = (__int64)a1[2].m128i_i64;
        v32 = *(_DWORD **)(a1->m128i_i64[0] + 112);
        v33 = sub_120560(v32, m128i_i64, 0);
        *(_BYTE *)v13 = 1;
        *(_DWORD *)(v13 + 8) = v33;
        if ( *(_DWORD *)(sub_336860(v32) + 52) == v33
          || (v34 = *(_DWORD *)(v13 + 8), v34 == *(_DWORD *)(sub_336860(v32) + 56))
          || (v35 = *(_DWORD *)(v13 + 8), v35 == *(_DWORD *)(sub_336860(v32) + 64)) )
        {
          *(_DWORD *)(v13 + 8) = -1;
LABEL_115:
          v67 = sub_3DCC80((__int64)v11, m128i_i8);
          if ( v67 == -1 )
            v67 = sub_3DD040((__int64)v11, m128i_i8);
          v68 = v11[68].m128i_i64[0];
          *(_BYTE *)v13 = 9;
          v47 = j__qalloc_or_throw();
          *(_QWORD *)v47 = v68;
          *(_QWORD *)(v47 + 8) = 0;
          *(_DWORD *)(v47 + 16) = v67;
          goto LABEL_62;
        }
        v36 = *(_DWORD *)(v13 + 8);
        if ( v36 <= *(_DWORD *)(sub_336860(v32) + 72) )
        {
          if ( *(_DWORD *)(v13 + 8) != -1 )
          {
LABEL_40:
            a2 = (__m128i *)v13;
            sub_3DB7B0(v11, (char *)v13);
            v28 = v11[67].m128i_i16[2];
            goto LABEL_41;
          }
          goto LABEL_115;
        }
        exception = __cxa_allocate_exception(8u);
        *exception = "this register cannot be used in rasm";
        goto LABEL_145;
      case 33LL:
        v26 = sub_3DB1C0(a1);
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
        return sub_3DB660(a1);
      case 35LL:
        sub_3DB660(a1);
        if ( a1[67].m128i_i16[2] != 40 )
        {
          v40 = *(_DWORD *)(sub_336860(a1) + 80);
          v41 = sub_3DB880(a1);
          a2 = (__m128i *)sub_336860(a1);
          sub_11E5D0(v13, (int)a2, v41, v40, -1, 0);
          v28 = a1[67].m128i_i16[2];
          goto LABEL_41;
        }
        a2 = &v83;
        sub_3DB900(a1);
        *(_BYTE *)v13 = 13;
        v69 = (__m128 *)j__qalloc_or_throw();
        a4 = (__m128)_mm_load_si128(&v83);
        *v69 = a4;
        v69[1].m128_i32[0] = v84;
        *(_QWORD *)(v13 + 8) = v69;
        goto LABEL_68;
      case 36LL:
        v26 = sub_3DB1C0(a1);
        if ( v26 )
          goto LABEL_139;
        v52 = a1[67].m128i_i16[2];
        switch ( v52 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            goto LABEL_79;
          case 3:
            name_ea = a1[66].m128i_i64[0];
            sub_3DB660(a1);
LABEL_81:
            v54 = *(_QWORD *)(a1->m128i_i64[0] + 112);
            a2->m128i_i8[0] = 6;
            v55 = 8 * *(_DWORD *)(v54 + 84);
            if ( (unsigned __int64)v55 <= 0x3F )
              name_ea &= ~(-1LL << v55);
            a2->m128i_i64[1] = name_ea;
            v28 = a1[67].m128i_i16[2];
LABEL_41:
            if ( a3 )
            {
              if ( v28 == 46 )
              {
                a1 = v11;
                v26 = sub_3DB1C0(v11);
                if ( !v26 )
                {
                  v37 = v11[67].m128i_i16[2];
                  if ( v37 != 4 )
                  {
                    if ( v37 == 3 )
                    {
                      v38 = v11[66].m128i_i64[0];
                      if ( v38 != (int)v38 )
                        sub_5882E();
                      sub_3DB660(v11);
                      v39 = *(_BYTE *)v13;
                      *(_DWORD *)(v13 + 4) = v38;
                      if ( v39 == 4 )
                      {
                        *(_DWORD *)(*(_QWORD *)(v13 + 8) + 68LL) = v38;
                      }
                      else if ( v39 == 13 )
                      {
                        *(_DWORD *)(*(_QWORD *)(v13 + 8) + 16LL) = v38;
                      }
                      return v85 - __readfsqword(0x28u);
                    }
LABEL_151:
                    sub_5880C(a1, a2, *(double *)a4.m128_u64);
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
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, 0);
            }
            sub_3DB7B0(a1, a2->m128i_i8);
            goto LABEL_81;
        }
        goto LABEL_148;
      case 37LL:
        v26 = sub_3DB1C0(a1);
        if ( v26 )
          goto LABEL_139;
        v44 = a1[67].m128i_i16[2];
        switch ( v44 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            break;
          case 2:
            break;
          case 3:
            v45 = a1[66].m128i_i64[0];
LABEL_61:
            v46 = a1[68].m128i_i64[0];
            a2->m128i_i8[0] = 5;
            v47 = j__qalloc_or_throw();
            *(_QWORD *)v47 = v46;
            *(_QWORD *)(v47 + 8) = v45;
LABEL_62:
            *(_QWORD *)(v13 + 8) = v47;
            goto LABEL_40;
          default:
LABEL_148:
            v8 = __cxa_allocate_exception(4u);
            *v8 = 47;
            v5 = v8;
            goto LABEL_140;
        }
        sub_1CBEA0(a1[68].m128i_i64[0]);
        if ( !(unsigned __int8)get_func_frame() )
        {
          v7 = __cxa_allocate_exception(8u);
          *v7 = "Missing function frame";
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'char const*, 0);
        }
        a4.m128_u64[0] = 0;
        v74 = 0;
        v73 = 0;
        v76 = 0;
        v79 = 1;
        v80 = -1;
        v81 = 0;
        v82 = 0;
        v75 = 0;
        v77 = 0;
        v78 = 0;
        v70 = strlen(a1[2].m128i_i8);
        v71 = v70;
        if ( v70 )
        {
          v72 = v70 + 1;
          v74 = (void *)qvector_reserve();
          *(_QWORD *)&v75 = v72;
          memmove(v74, &a1[2], v71);
          *((_BYTE *)v74 + v71) = 0;
        }
        if ( (unsigned int)find_tinfo_udt_member() == -1 )
        {
          v6 = __cxa_allocate_exception(8u);
          *v6 = "No such stack variable";
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'char const*, 0);
        }
        v45 = sub_1CD290(a1[68].m128i_i64[0], (unsigned __int64)v73 >> 3);
        clear_tinfo_t();
        if ( v76 )
        {
          *(_QWORD *)&v77 = 0;
          qfree();
        }
        if ( v74 )
        {
          *(_QWORD *)&v75 = 0;
          qfree();
        }
        clear_tinfo_t();
        goto LABEL_61;
      case 38LL:
        v26 = sub_3DB1C0(a1);
        if ( v26 )
          goto LABEL_139;
        v62 = a1[67].m128i_i16[2];
        if ( v62 == 4 )
          goto LABEL_150;
        if ( v62 != 40 )
          goto LABEL_151;
        sub_3DB660(a1);
        sub_3DD1E0(a1, a2, 0);
        v63 = sub_336860(a1);
        a1 = a2;
        a2 = (__m128i *)v63;
        sub_11A510(a1->m128i_i8, v63);
        if ( v11[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3DB660(v11);
        v28 = v11[67].m128i_i16[2];
        if ( v28 != 60 )
          goto LABEL_41;
        a1 = v11;
        v26 = sub_3DB1C0(v11);
        if ( v26 )
          goto LABEL_139;
        v64 = v11[67].m128i_i16[2];
        if ( v64 == 4 )
        {
          v11[67].m128i_i16[2] = 2;
          goto LABEL_142;
        }
        if ( v64 == 3 )
        {
          a1 = v11;
          *(_DWORD *)(*(_QWORD *)(v13 + 8) + 16LL) = sub_3DC390(v11);
          v64 = v11[67].m128i_i16[2];
        }
        if ( v64 != 47 )
          goto LABEL_142;
        a1 = v11;
        v26 = sub_3DB1C0(v11);
        if ( v26 )
          goto LABEL_139;
        v65 = v11[67].m128i_i16[2];
        if ( v65 == 4 )
        {
          v11[67].m128i_i16[2] = 2;
          v66 = *(_QWORD *)(v13 + 8);
          if ( *(int *)(v66 + 16) >= 0 )
            goto LABEL_142;
        }
        else
        {
          if ( v65 == 3 )
          {
            a1 = v11;
            *(_DWORD *)(*(_QWORD *)(v13 + 8) + 20LL) = sub_3DC390(v11);
          }
          v66 = *(_QWORD *)(v13 + 8);
          if ( *(int *)(v66 + 16) >= 0 )
            goto LABEL_107;
        }
        a1 = (__m128i *)*(unsigned int *)(v66 + 20);
        if ( (int)a1 < 0 )
          goto LABEL_148;
LABEL_107:
        if ( v11[67].m128i_i16[2] == 62 )
        {
          v26 = sub_3DB1C0(v11);
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
                return v85 - __readfsqword(0x28u);
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
        sub_5880C(a1, a2, *(double *)a4.m128_u64);
      case 40LL:
        sub_3DB660(a1);
        v42 = sub_3DB740((__int64)a1, 0);
        a2->m128i_i8[0] = 4;
        a2->m128i_i64[1] = v42;
        v43 = (__m128i *)v42;
        sub_3DD1E0(a1, v42 + 32, 1);
        v43[4].m128i_i32[1] = v43[2].m128i_i32[1];
        v43->m128i_i32[0] = sub_3DC030((__int64)a1, &v43[4].m128i_i32[1], &v73);
        if ( (_BYTE)v73 )
          v43->m128i_i32[1] |= 0x10u;
        sub_3DB660(a1);
        a2 = v43 + 3;
        sub_3DD1E0(a1, &v43[3], 1);
        if ( a1[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3DB660(a1);
        *(_DWORD *)(v13 + 4) = v43[4].m128i_i32[1];
        return v85 - __readfsqword(0x28u);
      case 45LL:
        v19 = 0;
        v20 = 5;
        return sub_3DDEB0(a1, a2, v20, v19);
      case 58LL:
        v56 = (_QWORD *)j__qalloc_or_throw();
        *v56 = 0xFFFFFFFF00000000LL;
        v56[1] = 0;
        v56[2] = 0xFFFFFFFF00000000LL;
        v56[3] = 0;
        a2->m128i_i8[0] = 14;
        a2->m128i_i64[1] = (__int64)v56;
        v26 = sub_3DB1C0(a1);
        if ( v26 )
          goto LABEL_139;
        v57 = a1[67].m128i_i16[2];
        if ( v57 == 4 )
          goto LABEL_150;
        if ( v57 != 40 )
          goto LABEL_151;
        sub_3DB660(a1);
        a2 = (__m128i *)(a2->m128i_i64[1] + 16);
        sub_3DD1E0(a1, a2, 1);
        if ( a1[67].m128i_i16[2] != 44 )
          goto LABEL_142;
        sub_3DB660(a1);
        a2 = *(__m128i **)(v13 + 8);
        sub_3DD1E0(a1, a2, 1);
        if ( a1[67].m128i_i16[2] != 41 )
          goto LABEL_142;
        sub_3DB660(a1);
        *(_DWORD *)(v13 + 4) = *(_DWORD *)(*(_QWORD *)(v13 + 8) + 4LL) + *(_DWORD *)(*(_QWORD *)(v13 + 8) + 20LL);
        return v85 - __readfsqword(0x28u);
      case 60LL:
        sub_3DB660(a1);
        a2->m128i_i8[0] = 8;
        a2->m128i_i32[1] = sub_3DE2C0((_DWORD)a1, (int)a2 + 8, v58, v59, v60, v61);
        return v85 - __readfsqword(0x28u);
      case 64LL:
        v26 = sub_3DB1C0(a1);
        if ( v26 )
          goto LABEL_139;
        v48 = a1[67].m128i_i16[2];
        switch ( v48 )
        {
          case 4:
            a1[67].m128i_i16[2] = 2;
            goto LABEL_148;
          case 60:
            sub_3DBC20(a1, (__int64)a2);
            break;
          case 3:
            v49 = a1[66].m128i_i64[0];
            a2->m128i_i8[0] = 7;
            a2->m128i_i32[2] = v49;
            break;
          default:
            goto LABEL_148;
        }
LABEL_68:
        sub_3DB660(a1);
        v28 = a1[67].m128i_i16[2];
        goto LABEL_41;
      case 91LL:
        sub_3DB660(a1);
        v50 = sub_3DB740((__int64)a1, 2);
        a2->m128i_i8[0] = 4;
        a2->m128i_i64[1] = v50;
        a2 = (__m128i *)(v50 + 32);
        v51 = (__m128i *)v50;
        sub_3DD1E0(a1, v50 + 32, 1);
        if ( a1[67].m128i_i16[2] != 58 )
          goto LABEL_142;
        sub_3DB660(a1);
        a2 = v51 + 3;
        sub_3DD1E0(a1, &v51[3], 1);
        if ( a1[67].m128i_i16[2] != 93 )
          goto LABEL_142;
        sub_3DB660(a1);
        v28 = a1[67].m128i_i16[2];
        if ( v28 != 2 )
          goto LABEL_41;
        if ( a1[2].m128i_i8[0] != 102 || a1[2].m128i_i8[1] )
          goto LABEL_111;
        v51->m128i_i32[1] |= 0x10u;
        sub_3DB660(a1);
        v28 = a1[67].m128i_i16[2];
        goto LABEL_41;
      default:
        goto LABEL_148;
    }
  }
  switch ( (int)v12 )
  {
    case 123:
      sub_3DB660(a1);
      a2->m128i_i8[0] = 12;
      a2->m128i_i64[1] = sub_3DC400(a1, a2->m128i_i8);
      return v85 - __readfsqword(0x28u);
    case 132:
      v19 = 0;
      v20 = 4;
      return sub_3DDEB0(a1, a2, v20, v19);
    case 134:
      v19 = 0;
      v20 = 6;
      return sub_3DDEB0(a1, a2, v20, v19);
    case 135:
      v19 = 0;
      v20 = 7;
      return sub_3DDEB0(a1, a2, v20, v19);
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
      v16 = sub_3DB1C0(a1);
      if ( v16 )
        goto LABEL_152;
      v17 = a1[67].m128i_i16[2];
      if ( v17 == 4 )
        goto LABEL_150;
      if ( v17 != 46 )
        goto LABEL_151;
      v16 = sub_3DB1C0(a1);
      if ( v16 )
      {
LABEL_152:
        v10 = __cxa_allocate_exception(4u);
        *v10 = v16;
        v5 = v10;
LABEL_140:
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'int, 0);
      }
      v18 = a1[67].m128i_i16[2];
      if ( v18 == 4 )
        goto LABEL_150;
      if ( v18 != 3 )
        goto LABEL_151;
      v19 = a1[66].m128i_u32[0];
      v20 = v15;
      return sub_3DDEB0(a1, a2, v20, v19);
    case 184:
    case 185:
      sub_3DB660(a1);
      v22 = sub_3DB740((__int64)a1, (unsigned int)(unsigned __int16)v12 - 128);
      a2->m128i_i8[0] = 4;
      a2->m128i_i64[1] = v22;
      v23 = v22;
      v24 = (char *)(v22 + 64);
      sub_3DD1E0(a1, v22 + 32, 1);
      sub_3DD1E0(a1, v24, 1);
      if ( a1[67].m128i_i16[2] == 60 )
      {
        sub_11A5D0((char *)(a2->m128i_i64[1] + 48), v24);
        sub_3DD1E0(a1, v24, 1);
      }
      a2->m128i_i32[1] = *(_DWORD *)(v23 + 68);
      return v85 - __readfsqword(0x28u);
    case 207:
      v25 = 1;
      return sub_3DDF40(a1, a2, v25);
    case 208:
      v25 = 0;
      return sub_3DDF40(a1, a2, v25);
    case 209:
      v19 = 1;
      v20 = 29;
      return sub_3DDEB0(a1, a2, v20, v19);
    case 225:
      v26 = sub_3DB1C0(a1);
      if ( v26 )
        goto LABEL_139;
      v27 = a1[67].m128i_i16[2];
      if ( v27 == 4 )
        goto LABEL_150;
      if ( v27 != 40 )
        goto LABEL_151;
      sub_3DB660(a1);
      sub_3DB950(a1, (__int64)a2);
      v28 = a1[67].m128i_i16[2];
      goto LABEL_29;
    default:
      goto LABEL_148;
  }
}
