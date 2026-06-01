__int64 __fastcall sub_C140A0(__int64 *a1, unsigned __int16 *a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  _WORD *v13; // rax
  unsigned __int16 v14; // dx
  __int64 v15; // rax
  char *v16; // rdx
  __int32 v17; // eax
  __int64 v18; // rcx
  char v19; // dl
  unsigned __int8 v20; // al
  __int64 v21; // rbp
  int v22; // esi
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rbp
  int v26; // esi
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rbp
  _DWORD *v30; // rax
  unsigned __int16 *v31; // rsi
  _QWORD *v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // r13
  __int64 v35; // rbp
  __int64 v36; // r11
  __int64 v37; // rsi
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // r14
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // r13
  char v44; // al
  __int64 v45; // r14
  __int64 v46; // rax
  int v47; // esi
  _QWORD *v48; // rax
  __int64 v49; // rdi
  _QWORD *v50; // r14
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rsi
  int v54; // eax
  _WORD *v55; // rsi
  __int64 v56; // rbx
  __int64 v57; // rsi
  unsigned __int8 v58; // al
  __int64 v59; // rax
  _QWORD *v60; // rax
  unsigned __int8 **v61; // rax
  __int64 v62; // rax
  __int32 v63; // edx
  __int64 v64; // rax
  int v65; // esi
  unsigned __int8 v66; // al
  __int64 v67; // rsi
  __int64 *v68; // rdi
  void *v69; // rdi
  __int64 v70; // rsi
  __int64 *v71; // rdi
  __int64 v72; // rax
  unsigned __int8 **v73; // rax
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  char *v78; // rcx
  __int32 v79; // eax
  __int64 v80; // rsi
  char v81; // cl
  __int64 v82; // r12
  __int64 v83; // rsi
  int v84; // [rsp+0h] [rbp-138h]
  unsigned __int8 v85; // [rsp+0h] [rbp-138h]
  __int64 v86; // [rsp+0h] [rbp-138h]
  unsigned __int8 v87; // [rsp+0h] [rbp-138h]
  unsigned __int8 v88; // [rsp+0h] [rbp-138h]
  unsigned __int8 v89; // [rsp+0h] [rbp-138h]
  unsigned __int8 v90; // [rsp+0h] [rbp-138h]
  unsigned __int8 v91; // [rsp+0h] [rbp-138h]
  unsigned __int8 v92; // [rsp+0h] [rbp-138h]
  unsigned __int8 v93; // [rsp+0h] [rbp-138h]
  __int64 v94; // [rsp+8h] [rbp-130h]
  __int64 v95; // [rsp+8h] [rbp-130h]
  char v96; // [rsp+8h] [rbp-130h]
  char v97; // [rsp+10h] [rbp-128h]
  __int64 v98; // [rsp+10h] [rbp-128h]
  __int64 v99; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v100; // [rsp+28h] [rbp-110h]
  __m128i *v101; // [rsp+30h] [rbp-108h] BYREF
  __m128i *v102; // [rsp+38h] [rbp-100h]
  char v103; // [rsp+40h] [rbp-F8h]
  __m128i v104; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v105; // [rsp+80h] [rbp-B8h]
  _BYTE v106[16]; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v107; // [rsp+98h] [rbp-A0h]
  void *ptr; // [rsp+A0h] [rbp-98h]
  __int64 v109; // [rsp+A8h] [rbp-90h]
  _BYTE v110[65]; // [rsp+B0h] [rbp-88h] BYREF
  char v111; // [rsp+F1h] [rbp-47h]

  while ( 2 )
  {
    while ( 2 )
    {
      v8 = *a2;
      LOWORD(v8) = v8 & 0x1FF;
      if ( (unsigned __int16)v8 > 0x75u )
      {
        if ( (unsigned __int16)v8 <= 0x77u )
        {
          switch ( (a2[1] >> 3) & 0x3F )
          {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xD:
            case 0xE:
            case 0xF:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1A:
            case 0x1B:
            case 0x1C:
            case 0x1D:
            case 0x1E:
            case 0x1F:
            case 0x20:
              return sub_C3C2D0(a1, a2);
            default:
              a3 = (a2[1] >> 3) & 0x3F;
              goto LABEL_6;
          }
        }
        goto LABEL_6;
      }
      if ( (_WORD)v8 != 4 )
      {
LABEL_6:
        LOWORD(v8) = (v8 + 509) & 0x1FF;
        switch ( v8 )
        {
          case 0LL:
          case 1LL:
          case 2LL:
          case 3LL:
          case 4LL:
          case 6LL:
          case 8LL:
          case 9LL:
          case 10LL:
          case 11LL:
          case 12LL:
          case 13LL:
          case 16LL:
          case 19LL:
          case 20LL:
          case 21LL:
          case 22LL:
          case 24LL:
          case 25LL:
          case 26LL:
          case 27LL:
          case 28LL:
          case 29LL:
          case 30LL:
          case 31LL:
          case 32LL:
          case 33LL:
          case 34LL:
          case 35LL:
          case 36LL:
          case 37LL:
          case 38LL:
          case 39LL:
          case 40LL:
          case 41LL:
          case 42LL:
          case 44LL:
          case 45LL:
          case 46LL:
          case 47LL:
          case 48LL:
          case 49LL:
          case 52LL:
          case 53LL:
          case 55LL:
          case 56LL:
          case 59LL:
          case 60LL:
          case 62LL:
          case 64LL:
          case 65LL:
          case 66LL:
          case 67LL:
          case 68LL:
          case 69LL:
          case 70LL:
          case 71LL:
          case 72LL:
          case 75LL:
          case 91LL:
          case 92LL:
          case 93LL:
          case 94LL:
          case 95LL:
          case 96LL:
          case 99LL:
          case 100LL:
          case 102LL:
          case 103LL:
          case 104LL:
          case 105LL:
          case 106LL:
          case 107LL:
          case 110LL:
          case 111LL:
          case 112LL:
          case 114LL:
          case 117LL:
          case 118LL:
          case 119LL:
          case 120LL:
          case 121LL:
          case 122LL:
          case 123LL:
          case 124LL:
            return sub_BF05D0(*a1, (__int64)a2);
          case 5LL:
          case 98LL:
            goto LABEL_7;
          case 7LL:
            v43 = *a1;
            v44 = *(_BYTE *)(*a1 + 915);
            *(_BYTE *)(*a1 + 915) = 0;
            v45 = *((_QWORD *)a2 + 2);
            v96 = v44;
            result = 1;
            if ( !*(_DWORD *)(v45 + 4) )
              goto LABEL_84;
            v99 = v43;
            v100 = *(_DWORD *)(v43 + 272);
            v46 = *(_QWORD *)(v43 + 32);
            v47 = *(_DWORD *)(v46 + 160) + 1;
            *(_DWORD *)(v46 + 160) = v47;
            sub_993300(v46 + 136, v47);
            v48 = (_QWORD *)(v45 + 16);
            v49 = v45 + 8LL * *(unsigned int *)(v45 + 4) + 16;
            v50 = (_QWORD *)(v45 + 24);
            if ( v50 == (_QWORD *)v49 )
              goto LABEL_81;
            while ( 2 )
            {
              v52 = *(v50 - 1);
              v53 = *a1;
              v101 = &v104;
              v104.m128i_i8[4] &= ~1u;
              v104.m128i_i32[0] = 0;
              v102 = nullptr;
              v54 = sub_C2F320(&v101, v53, v52);
              if ( v54 != 2 )
              {
                if ( v54 )
                {
                  v82 = *a1;
                  v83 = (unsigned int)sub_EC7AA0(*(v50 - 1));
                  sub_E0FF40(v82, v83, 2485, 0);
                }
                if ( v104.m128i_i32[0] > 1u )
                {
                  sub_A2BBA0(v104.m128i_i32);
                  v58 = 0;
                  goto LABEL_83;
                }
LABEL_142:
                v58 = 0;
                goto LABEL_83;
              }
              if ( v104.m128i_i32[0] <= 1u )
              {
                v51 = v50 + 1;
                if ( (_QWORD *)v49 == v50 + 1 )
                {
LABEL_80:
                  v48 = v50;
LABEL_81:
                  v55 = (_WORD *)*v48;
                  if ( ((*(_WORD *)*v48 + 509) & 0x1FFu) > 0x7E )
                  {
                    v56 = *a1;
                    v57 = (unsigned int)sub_EC7AA0(v55);
                    sub_E0FF40(v56, v57, 2485, 0);
                    v58 = 0;
                    goto LABEL_83;
                  }
                  if ( (unsigned __int8)sub_C140A0(a1, v55) )
                  {
                    v58 = sub_C31220(v99, 1, v100);
                    v100 = -1;
LABEL_83:
                    v87 = v58;
                    sub_C31640(&v99);
                    result = v87;
LABEL_84:
                    *(_BYTE *)(v43 + 915) = v96;
                    return result;
                  }
                  goto LABEL_142;
                }
              }
              else
              {
                sub_A2BBA0(v104.m128i_i32);
                v51 = v50 + 1;
                if ( (_QWORD *)v49 == v50 + 1 )
                  goto LABEL_80;
              }
              v50 = v51;
              continue;
            }
          case 14LL:
            v34 = (__int64 *)(a2 + 12);
            v35 = (__int64)&a2[4 * a2[2] + 8];
            if ( a2 + 12 == (unsigned __int16 *)v35 )
              return 1;
            while ( 2 )
            {
              v40 = (_QWORD *)*v34;
              v41 = a2[3];
              if ( (*(_WORD *)*v34 & 0x1FF) == 0x1A )
              {
                if ( (_WORD)v41 && v40 == *(_QWORD **)&a2[4 * v41 + 8] )
                  return sub_BF05D0(*a1, (__int64)a2);
                if ( (*v40 & 0x80000LL) == 0 )
                {
                  v36 = *a1;
                  v37 = *v34;
                  v104 = 0u;
                  v105 = 0;
                  v106[0] |= 1u;
                  v107 = 0;
                  ptr = v110;
                  v109 = 0x800000000LL;
                  v111 = 0;
                  v98 = v36;
                  v95 = *(_QWORD *)(v36 + 32);
                  v86 = v40[2];
                  v38 = sub_BEC760(*(_QWORD *)(v36 + 16), v37);
                  v39 = sub_C08480(v95, (unsigned __int64)v40, v38, (__int64)&v104);
                  result = sub_C15CD0(v39, v98, v86);
                  if ( !(_BYTE)result )
                  {
                    if ( ptr != v110 )
                    {
                      free(ptr);
                      return 0;
                    }
                    return result;
                  }
                  if ( ptr != v110 )
                    free(ptr);
                }
              }
              else
              {
                v42 = *v34;
                if ( (_WORD)v41 && v40 == *(_QWORD **)&a2[4 * v41 + 8] )
                {
                  if ( !(unsigned __int8)sub_C140A0(a1, v42) )
                    return 0;
                }
                else if ( !(unsigned __int8)sub_C1BDB0(*a1, v42) )
                {
                  return 0;
                }
              }
              if ( (__int64 *)v35 == ++v34 )
                return 1;
              continue;
            }
          case 15LL:
            v31 = nullptr;
            if ( *((char *)a2 + 2) < 0 )
              v31 = *((unsigned __int16 **)a2 + 2);
            return sub_C140A0(a1, v31);
          case 17LL:
          case 113LL:
            a2 = *((unsigned __int16 **)a2 + 3);
            continue;
          case 18LL:
            v62 = sub_BFA0C0((__int64)a2);
            return sub_C140A0(a1, v62);
          case 23LL:
            v29 = *a1;
            v30 = (_DWORD *)sub_BED3A0(*(_QWORD *)(*a1 + 32), (unsigned __int64)a2);
            if ( v30 && *v30 )
            {
              sub_BFF800((unsigned __int64 *)a1[1], (__int64)v30);
              return 1;
            }
            else
            {
              v31 = *((unsigned __int16 **)a2 + 2);
              if ( !v31 || a2 == v31 )
                return sub_BF05D0(v29, (__int64)a2);
              else
                return sub_C140A0(a1, v31);
            }
          case 43LL:
            return sub_C1EFF0(a1, a2);
          case 50LL:
            v32 = *((_QWORD **)a2 + 2);
            v33 = (__int64)(*((_QWORD *)a2 + 3) - (_QWORD)v32) >> 3;
            if ( (_DWORD)v33 )
            {
              if ( (_DWORD)v33 != 1 )
                return sub_BF05D0(*a1, (__int64)a2);
              return sub_C140A0(a1, *v32);
            }
            else
            {
              v76 = a1[1];
              v105 = 0x400000000LL;
              v104.m128i_i64[0] = 0;
              v104.m128i_i64[1] = (__int64)v106;
              *(_QWORD *)v76 = 0;
              sub_C022A0((char ***)(v76 + 8), (char ***)&v104.m128i_i64[1]);
              if ( (_BYTE *)v104.m128i_i64[1] != v106 )
                free((void *)v104.m128i_i64[1]);
              return 1;
            }
          case 51LL:
          case 97LL:
          case 101LL:
            return sub_BEE340(a1[1], 0);
          case 54LL:
            return sub_C140A0(
                     a1,
                     *(_QWORD *)&a2[4 * ((*((_DWORD *)a2 + 4) >> 15) & 0x7FFF)
                                  + 16
                                  + 4 * ((*((_BYTE *)a2 + 19) & 0x40) != 0)]);
          case 57LL:
            v63 = *(_DWORD *)(*a1 + 272);
            v104.m128i_i64[0] = *a1;
            v104.m128i_i32[2] = v63;
            v64 = *(_QWORD *)(v104.m128i_i64[0] + 32);
            v65 = *(_DWORD *)(v64 + 160) + 1;
            *(_DWORD *)(v64 + 160) = v65;
            sub_993300(v64 + 136, v65);
            v66 = sub_C140A0(a1, *((_QWORD *)a2 + 2));
            if ( v66 )
            {
              v66 = sub_C316B0(v104.m128i_i64[0], 1, v104.m128i_u32[2]);
              v104.m128i_i32[2] = -1;
            }
            v88 = v66;
            sub_C31C60(&v104);
            return v88;
          case 58LL:
            if ( ((*(_QWORD *)a2 >> 16) & 0x1E0) == 0 )
              return sub_C140A0(a1, *((_QWORD *)a2 + 2));
            sub_BD3DC0((__int64)&v104, (__int64)a2, a3, a4, a5, a6, v84, v94, v97);
            sub_BFF800((unsigned __int64 *)a1[1], (__int64)&v104);
            if ( v104.m128i_i32[0] > 1u )
              sub_A2BBA0(v104.m128i_i32);
            return 1;
          case 61LL:
            return sub_C1F330(a1, a2);
          case 63LL:
            v59 = *((unsigned int *)a2 + 12);
            v104.m128i_i64[0] = (__int64)a2;
            v104.m128i_i64[1] = v59;
            v60 = (_QWORD *)sub_C061F0(&v104);
            return sub_C140A0(a1, *v60);
          case 73LL:
            a2 = *((unsigned __int16 **)a2 + 4);
            continue;
          case 74LL:
            if ( (a2[1] & 8) != 0 )
              v31 = *((unsigned __int16 **)a2 + 3);
            else
              v31 = *((unsigned __int16 **)a2 + 4);
            return sub_C140A0(a1, v31);
          case 76LL:
          case 77LL:
          case 78LL:
          case 81LL:
          case 82LL:
          case 83LL:
          case 84LL:
          case 85LL:
            return sub_C13B60(a1, (__int64)a2);
          case 79LL:
            v61 = (unsigned __int8 **)sub_E0FF50(*a1, a2, 2417, 0);
            if ( v61 )
              sub_BED5E0(v61, 0);
            return sub_C13B60(a1, (__int64)a2);
          case 80LL:
            if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 2320LL) + 1LL) >= 0 )
            {
              v73 = (unsigned __int8 **)sub_E0FF50(*a1, a2, 2417, 0);
              if ( v73 )
                sub_BED5E0(v73, 1);
            }
            return sub_C13B60(a1, (__int64)a2);
          case 86LL:
          case 87LL:
          case 88LL:
          case 89LL:
          case 90LL:
            return sub_C62D30(a1, a2);
          case 108LL:
            v21 = *(_QWORD *)(*a1 + 32);
            v22 = *(_DWORD *)(v21 + 160) + 1;
            *(_DWORD *)(v21 + 160) = v22;
            sub_993300(v21 + 136, v22);
            if ( sub_C70F80(a2) )
            {
              v23 = *(_QWORD *)(*a1 + 32);
              if ( *(_QWORD *)(v23 + 64) )
              {
                v75 = sub_C70F80(a2);
                result = sub_C140A0(a1, v75);
              }
              else
              {
                *(_QWORD *)(v23 + 64) = a2;
                v24 = sub_C70F80(a2);
                result = sub_C140A0(a1, v24);
                *(_QWORD *)(v23 + 64) = 0;
              }
            }
            else
            {
              result = sub_BF05D0(*a1, (__int64)a2);
            }
            --*(_DWORD *)(v21 + 144);
            return result;
          case 109LL:
            v25 = *(_QWORD *)(*a1 + 32);
            v26 = *(_DWORD *)(v25 + 160) + 1;
            *(_DWORD *)(v25 + 160) = v26;
            sub_993300(v25 + 136, v26);
            v27 = *(_QWORD *)(*a1 + 32);
            if ( *(_QWORD *)(v27 + 64) )
            {
              v72 = sub_C70F40(a2);
              result = sub_C140A0(a1, v72);
            }
            else
            {
              *(_QWORD *)(v27 + 64) = a2;
              v28 = sub_C70F40(a2);
              result = sub_C140A0(a1, v28);
              *(_QWORD *)(v27 + 64) = 0;
            }
            --*(_DWORD *)(v25 + 144);
            return result;
          case 115LL:
          case 116LL:
            return sub_C3C2D0(a1, a2);
          case 125LL:
            v13 = (_WORD *)sub_BD9810(*((_QWORD *)a2 + 3));
            v14 = *v13 & 0x1FF;
            if ( v14 > 0x58u && v14 <= 0x5Du && (unsigned int)sub_BD8130((__int64)v13) == 214 )
            {
              v77 = *a1;
              result = 0;
              if ( *(_BYTE *)(*a1 + 914) )
                return result;
              v104.m128i_i64[0] = *a1;
              v104.m128i_i8[8] = 1;
              v78 = *(char **)(v77 + 24);
              v79 = *(_DWORD *)(v77 + 916);
              v80 = *((_QWORD *)v78 + 1);
              if ( !v80 || *(_DWORD *)(v80 + 8) )
              {
                v104.m128i_i8[9] = 0;
                v104.m128i_i32[3] = v79;
              }
              else
              {
                v81 = *v78;
                v104.m128i_i32[3] = *(_DWORD *)(v77 + 916);
                v104.m128i_i8[9] = v81 ^ 1;
              }
              *(_DWORD *)(v77 + 916) = 2;
            }
            else
            {
              v15 = *a1;
              v104.m128i_i8[8] = 0;
              v104.m128i_i64[0] = v15;
              v16 = *(char **)(v15 + 24);
              v17 = *(_DWORD *)(v15 + 916);
              v18 = *((_QWORD *)v16 + 1);
              if ( !v18 || *(_DWORD *)(v18 + 8) )
              {
                v104.m128i_i8[9] = 0;
                v104.m128i_i32[3] = v17;
              }
              else
              {
                v19 = *v16;
                v104.m128i_i32[3] = v17;
                v104.m128i_i8[9] = v19 ^ 1;
              }
            }
            if ( (unsigned __int8)sub_C1BE30(*((_QWORD *)a2 + 3), &v101, *a1) )
            {
              if ( (_BYTE)v101 )
                v74 = *((_QWORD *)a2 + 4);
              else
                v74 = *((_QWORD *)a2 + 5);
              v20 = sub_C140A0(a1, v74);
              if ( v20 )
                goto LABEL_36;
            }
            else if ( *(_BYTE *)(*a1 + 914) && (unsigned __int8)sub_BEDB10(*a1) )
            {
              sub_C159D0(a1, a2);
            }
            else if ( (unsigned __int8)sub_BEDB10(*a1) )
            {
              sub_C140A0(a1, *((_QWORD *)a2 + 4));
              sub_C140A0(a1, *((_QWORD *)a2 + 5));
            }
            v104.m128i_i8[8] = 0;
            v20 = 0;
LABEL_36:
            v85 = v20;
            sub_BFFDF0(v104.m128i_i64);
            return v85;
          case 126LL:
            return sub_C1FB60(a1, a2);
          default:
            BUG();
        }
      }
      break;
    }
    a3 = *((_BYTE *)a2 + 2) >> 3;
    switch ( (char)a3 )
    {
      case 0:
        v10 = sub_E0E500(*a1);
        v11 = *a1;
        if ( (*(_BYTE *)(v10 + 1) & 0x20) == 0
          && (!*(_DWORD *)(v11 + 48) || !*(_BYTE *)(v11 + 914) && !*(_BYTE *)(v11 + 915)) )
        {
          goto LABEL_15;
        }
        v106[0] |= 1u;
        v104 = 0u;
        ptr = v110;
        v105 = 0;
        v107 = 0;
        v109 = 0x800000000LL;
        v111 = 0;
        v70 = *((_QWORD *)a2 + 2);
        v101 = (__m128i *)v11;
        v102 = &v104;
        v103 = 0;
        result = sub_C38AE0(&v101, v70);
        if ( (_BYTE)result )
        {
          BYTE4(v101) &= ~1u;
          v71 = (__int64 *)*a1;
          LODWORD(v101) = 0;
          result = sub_C0DFE0(
                     v71,
                     (__int64 *)a2,
                     &v104,
                     *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL),
                     ((*((_BYTE *)a2 + 2) >> 3) & 0x1D) == 0,
                     (__int64)&v101);
          if ( (_BYTE)result )
          {
            v92 = result;
            sub_BFF800((unsigned __int64 *)a1[1], (__int64)&v101);
            result = v92;
          }
          if ( (unsigned int)v101 > 1 )
          {
            v93 = result;
            sub_A2BBA0((int *)&v101);
            result = v93;
          }
        }
        v69 = ptr;
        if ( ptr != v110 )
          goto LABEL_111;
        return result;
      case 1:
        v12 = sub_E0E500(*a1);
        v11 = *a1;
        if ( (*(_BYTE *)(v12 + 1) & 0x20) != 0
          || *(_DWORD *)(v11 + 48) && (*(_BYTE *)(v11 + 914) || *(_BYTE *)(v11 + 915)) )
        {
          v106[0] |= 1u;
          v104 = 0u;
          ptr = v110;
          v105 = 0;
          v107 = 0;
          v109 = 0x800000000LL;
          v111 = 0;
          v67 = *((_QWORD *)a2 + 2);
          v101 = (__m128i *)v11;
          v102 = &v104;
          v103 = 0;
          result = sub_C38AE0(&v101, v67);
          if ( (_BYTE)result )
          {
            BYTE4(v101) &= ~1u;
            v68 = (__int64 *)*a1;
            LODWORD(v101) = 0;
            result = sub_C0DFE0(
                       v68,
                       (__int64 *)a2,
                       &v104,
                       *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL),
                       ((*((_BYTE *)a2 + 2) >> 3) & 0x1D) == 0,
                       (__int64)&v101);
            if ( (_BYTE)result )
            {
              v89 = result;
              sub_BFF800((unsigned __int64 *)a1[1], (__int64)&v101);
              result = v89;
            }
            if ( (unsigned int)v101 > 1 )
            {
              v90 = result;
              sub_A2BBA0((int *)&v101);
              result = v90;
            }
          }
          v69 = ptr;
          if ( ptr != v110 )
          {
LABEL_111:
            v91 = result;
            free(v69);
            result = v91;
          }
        }
        else
        {
LABEL_15:
          result = sub_BF05D0(v11, (__int64)a2);
        }
        break;
      case 2:
      case 3:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 13:
        return sub_BF05D0(*a1, (__int64)a2);
      case 4:
        return sub_BEE340(a1[1], *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL));
      case 5:
        return sub_BF05D0(*a1, (__int64)a2);
      case 6:
      case 12:
LABEL_7:
        a2 = *((unsigned __int16 **)a2 + 2);
        continue;
      default:
        a3 = *((_BYTE *)a2 + 2) >> 3;
        goto LABEL_6;
    }
    return result;
  }
}

