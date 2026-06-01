__int64 __fastcall sub_C802B0(__int64 *a1, unsigned __int16 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _WORD *v22; // rax
  __int64 v23; // r8
  unsigned __int16 v24; // dx
  bool v25; // zf
  __int64 v26; // rax
  char *v27; // rdx
  __int32 v28; // eax
  __int64 v29; // rcx
  char v30; // dl
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  __int64 v33; // rbp
  int v34; // esi
  __int64 v35; // r12
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rbp
  int v39; // esi
  __int64 v40; // r12
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rbp
  int *v44; // rax
  unsigned __int16 *v45; // rsi
  __int64 v46; // rax
  char v47; // di
  __int64 v48; // rbp
  __int64 *v49; // rbx
  __int64 v50; // rax
  int v51; // esi
  __int64 *v52; // r13
  _WORD *v53; // rdx
  __int64 v54; // rsi
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdi
  __int64 v60; // rbx
  unsigned __int64 *v61; // r13
  __int64 v62; // rbp
  __int64 v63; // r11
  __int64 v64; // rsi
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  _QWORD *v69; // r14
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 v72; // rsi
  __int64 v73; // rax
  _QWORD *v74; // rax
  unsigned __int8 **v75; // rax
  __int64 v76; // rax
  __int32 v77; // edx
  __int64 v78; // rax
  int v79; // esi
  __int64 v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __m128i *v84; // rsi
  __int64 *v85; // rdi
  void *v86; // rdi
  __m128i *v87; // rsi
  __int64 *v88; // rdi
  __int64 v89; // rax
  unsigned __int8 **v90; // rax
  __int64 v91; // rax
  __int64 v92; // rsi
  unsigned int v93; // eax
  unsigned int v94; // eax
  __int64 v95; // rbx
  __int32 v96; // edx
  __int64 v97; // rsi
  int v98; // ecx
  int v99; // [rsp+0h] [rbp-138h]
  __int64 v100; // [rsp+0h] [rbp-138h]
  unsigned __int64 v101; // [rsp+0h] [rbp-138h]
  __int64 v102; // [rsp+8h] [rbp-130h]
  __int64 v103; // [rsp+8h] [rbp-130h]
  __int64 v104; // [rsp+8h] [rbp-130h]
  char v105; // [rsp+10h] [rbp-128h]
  char v106; // [rsp+10h] [rbp-128h]
  __int64 v107; // [rsp+10h] [rbp-128h]
  __int64 v108; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v109; // [rsp+28h] [rbp-110h]
  __m128i v110; // [rsp+30h] [rbp-108h] BYREF
  char v111; // [rsp+40h] [rbp-F8h]
  __m128i v112; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v113; // [rsp+80h] [rbp-B8h]
  char v114; // [rsp+88h] [rbp-B0h]
  __int64 v115; // [rsp+98h] [rbp-A0h]
  void *ptr; // [rsp+A0h] [rbp-98h]
  __int64 v117; // [rsp+A8h] [rbp-90h]
  _BYTE v118[65]; // [rsp+B0h] [rbp-88h] BYREF
  char v119; // [rsp+F1h] [rbp-47h]

  while ( 2 )
  {
    while ( 2 )
    {
      v8 = *a2;
      LOWORD(v8) = v8 & 0x1FF;
      if ( (unsigned __int16)v8 <= 0x75u )
      {
        if ( (_WORD)v8 == 4 )
        {
          a3 = *((_BYTE *)a2 + 2) >> 3;
          switch ( (char)a3 )
          {
            case 0:
              v11 = sub_E32240(*a1);
              v16 = *a1;
              if ( (*(_BYTE *)(v11 + 1) & 0x20) == 0
                && (!*(_DWORD *)(v16 + 48) || !*(_BYTE *)(v16 + 914) && !*(_BYTE *)(v16 + 915)) )
              {
                goto LABEL_14;
              }
              v112 = 0u;
              v114 |= 1u;
              ptr = v118;
              v113 = 0;
              v115 = 0;
              v117 = 0x800000000LL;
              v119 = 0;
              v87 = *((__m128i **)a2 + 2);
              v110.m128i_i64[0] = v16;
              v110.m128i_i64[1] = (__int64)&v112;
              v111 = 0;
              v9 = sub_C5C820(&v110, v87, v12, v13, v14, v15);
              if ( (_BYTE)v9 )
              {
                v110.m128i_i8[4] &= ~1u;
                v88 = (__int64 *)*a1;
                v110.m128i_i32[0] = 0;
                v9 = sub_C31D20(
                       v88,
                       (__int64 *)a2,
                       &v112,
                       *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL),
                       ((*((_BYTE *)a2 + 2) >> 3) & 0x1D) == 0,
                       (__int64)&v110);
                if ( (_BYTE)v9 )
                  sub_A54D20(a1[2], v110.m128i_i32);
                if ( v110.m128i_i32[0] > 1u )
                  sub_A4F8E0(v110.m128i_i32);
              }
              v86 = ptr;
              if ( ptr != v118 )
                goto LABEL_110;
              return v9;
            case 1:
              v17 = sub_E32240(*a1);
              v16 = *a1;
              if ( (*(_BYTE *)(v17 + 1) & 0x20) != 0
                || (v21 = *(unsigned int *)(v16 + 48), (_DWORD)v21) && (*(_BYTE *)(v16 + 914) || *(_BYTE *)(v16 + 915)) )
              {
                v112 = 0u;
                v114 |= 1u;
                ptr = v118;
                v113 = 0;
                v115 = 0;
                v117 = 0x800000000LL;
                v119 = 0;
                v84 = *((__m128i **)a2 + 2);
                v110.m128i_i64[0] = v16;
                v110.m128i_i64[1] = (__int64)&v112;
                v111 = 0;
                v9 = sub_C5C820(&v110, v84, v18, v19, v20, v21);
                if ( (_BYTE)v9 )
                {
                  v110.m128i_i8[4] &= ~1u;
                  v85 = (__int64 *)*a1;
                  v110.m128i_i32[0] = 0;
                  v9 = sub_C31D20(
                         v85,
                         (__int64 *)a2,
                         &v112,
                         *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL),
                         ((*((_BYTE *)a2 + 2) >> 3) & 0x1D) == 0,
                         (__int64)&v110);
                  if ( (_BYTE)v9 )
                    sub_A54D20(a1[2], v110.m128i_i32);
                  if ( v110.m128i_i32[0] > 1u )
                    sub_A4F8E0(v110.m128i_i32);
                }
                v86 = ptr;
                if ( ptr != v118 )
LABEL_110:
                  free(v86);
              }
              else
              {
LABEL_14:
                v9 = sub_C14310(v16, (__int64)a2);
              }
              break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 13:
              return (unsigned int)sub_C14310(*a1, (__int64)a2);
            case 6:
            case 12:
LABEL_7:
              a2 = *((unsigned __int16 **)a2 + 2);
              continue;
            default:
              a3 = *((_BYTE *)a2 + 2) >> 3;
              goto LABEL_6;
          }
          return v9;
        }
      }
      else if ( (unsigned __int16)v8 <= 0x77u )
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
            return (unsigned int)sub_C81C30(a1, a2);
          default:
            a3 = (a2[1] >> 3) & 0x3F;
            goto LABEL_6;
        }
      }
      break;
    }
LABEL_6:
    LOWORD(v8) = (v8 + 509) & 0x1FF;
    switch ( v8 )
    {
      case 0LL:
      case 1LL:
      case 2LL:
      case 3LL:
      case 4LL:
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
      case 102LL:
      case 103LL:
      case 104LL:
      case 105LL:
      case 106LL:
      case 107LL:
      case 112LL:
      case 114LL:
      case 117LL:
      case 118LL:
      case 119LL:
      case 120LL:
      case 121LL:
      case 123LL:
      case 124LL:
        return (unsigned int)sub_C14310(*a1, (__int64)a2);
      case 5LL:
      case 98LL:
        goto LABEL_7;
      case 6LL:
        v9 = 1;
        sub_C152A0((__int64 *)(*a1 + 16), (__int64)a2, a1[2], 0);
        return v9;
      case 7LL:
        v46 = *a1;
        v9 = 1;
        v47 = *(_BYTE *)(*a1 + 915);
        *(_BYTE *)(v46 + 915) = 0;
        v48 = *((_QWORD *)a2 + 2);
        v103 = v46;
        v106 = v47;
        if ( !*(_DWORD *)(v48 + 4) )
          goto LABEL_64;
        v108 = v46;
        v49 = (__int64 *)(v48 + 16);
        v109 = *(_DWORD *)(v46 + 272);
        v50 = *(_QWORD *)(v46 + 32);
        v51 = *(_DWORD *)(v50 + 160) + 1;
        *(_DWORD *)(v50 + 160) = v51;
        sub_9B7040(v50 + 136, v51);
        v52 = (__int64 *)(v48 + 24);
        v100 = v48 + 8LL * *(unsigned int *)(v48 + 4) + 16;
        if ( v100 == v48 + 24 )
          goto LABEL_61;
        while ( 1 )
        {
          v53 = (_WORD *)*(v52 - 1);
          v54 = *a1;
          v49 = v52;
          v112.m128i_i8[4] &= ~1u;
          v112.m128i_i32[0] = 0;
          v110.m128i_i64[1] = 0;
          v110.m128i_i64[0] = (__int64)&v112;
          v55 = sub_C53060(v110.m128i_i64, v54, v53);
          if ( v55 != 2 )
            break;
          if ( v112.m128i_i32[0] <= 1u )
          {
            if ( (__int64 *)v100 == ++v52 )
              goto LABEL_61;
            continue;
          }
          ++v52;
          sub_A4F8E0(v112.m128i_i32);
          if ( (__int64 *)v100 == v52 )
          {
LABEL_61:
            v54 = *v49;
            if ( ((*(_WORD *)*v49 + 509) & 0x1FFu) > 0x7E )
            {
              v59 = *v49;
              v60 = *a1;
              v9 = 0;
              v54 = (unsigned int)sub_EEB7E0(v59);
              sub_E33C80(v60, v54, 2485, 0);
              goto LABEL_63;
            }
            if ( (unsigned __int8)sub_C802B0(a1, v54) )
            {
              v54 = 1;
              v94 = sub_C54F60(v108, (__m128i *)((char *)&dword_0 + 1), v109, v57, v58);
              v109 = -1;
              v9 = v94;
              goto LABEL_63;
            }
LABEL_140:
            v9 = 0;
            goto LABEL_63;
          }
        }
        if ( v55 )
        {
          v95 = *a1;
          v54 = (unsigned int)sub_EEB7E0(*(v52 - 1));
          sub_E33C80(v95, v54, 2485, 0);
        }
        if ( v112.m128i_i32[0] <= 1u )
          goto LABEL_140;
        v9 = 0;
        sub_A4F8E0(v112.m128i_i32);
LABEL_63:
        sub_C55380((__int64)&v108, v54, v56, v57, v58);
LABEL_64:
        *(_BYTE *)(v103 + 915) = v106;
        return v9;
      case 14LL:
        v61 = (unsigned __int64 *)(a2 + 12);
        v62 = (__int64)&a2[4 * a2[2] + 8];
        if ( a2 + 12 == (unsigned __int16 *)v62 )
          return 1;
        while ( 2 )
        {
          v69 = (_QWORD *)*v61;
          v70 = a2[3];
          v71 = *(unsigned __int16 *)*v61;
          LOWORD(v71) = v71 & 0x1FF;
          if ( (_WORD)v71 != 26 )
          {
            v72 = *v61;
            if ( (_WORD)v70 && v69 == *(_QWORD **)&a2[4 * v70 + 8] )
            {
              if ( !(unsigned __int8)sub_C802B0(a1, v72) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_C3FAF0(*a1, v72, v71, a4, a5) )
            {
              return 0;
            }
LABEL_73:
            if ( (unsigned __int64 *)v62 == ++v61 )
              return 1;
            continue;
          }
          break;
        }
        if ( (_WORD)v70 && v69 == *(_QWORD **)&a2[4 * v70 + 8] )
        {
          return (unsigned int)sub_C14310(*a1, (__int64)a2);
        }
        else
        {
          if ( (*v69 & 0x80000LL) != 0 )
            goto LABEL_73;
          v63 = *a1;
          v64 = *v61;
          v112 = 0u;
          v113 = 0;
          v114 |= 1u;
          v115 = 0;
          ptr = v118;
          v117 = 0x800000000LL;
          v119 = 0;
          v107 = v63;
          v104 = *(_QWORD *)(v63 + 32);
          v101 = v69[2];
          v65 = sub_C104A0(*(_QWORD *)(v63 + 16), v64);
          v66 = sub_C2C1C0(v104, (unsigned __int64)v69, v65, (__int64)&v112);
          v9 = sub_C39A10(v66, v107, v101, v67, v68);
          if ( (_BYTE)v9 )
          {
            if ( ptr != v118 )
              free(ptr);
            goto LABEL_73;
          }
          if ( ptr != v118 )
            free(ptr);
        }
        return v9;
      case 15LL:
        v45 = nullptr;
        if ( *((char *)a2 + 2) < 0 )
          v45 = *((unsigned __int16 **)a2 + 2);
        return (unsigned int)sub_C802B0(a1, v45);
      case 17LL:
      case 113LL:
        a2 = *((unsigned __int16 **)a2 + 3);
        continue;
      case 18LL:
        v76 = sub_C1DE00((__int64)a2);
        return (unsigned int)sub_C802B0(a1, v76);
      case 23LL:
        v43 = *a1;
        v44 = (int *)sub_C110E0(*(_QWORD *)(*a1 + 32), (unsigned __int64)a2);
        if ( v44 && *v44 )
        {
          v9 = 1;
          sub_A54D20(a1[2], v44);
        }
        else
        {
          v45 = *((unsigned __int16 **)a2 + 2);
          if ( !v45 || a2 == v45 )
            return (unsigned int)sub_C14310(v43, (__int64)a2);
          else
            return (unsigned int)sub_C802B0(a1, v45);
        }
        return v9;
      case 43LL:
        return (unsigned int)sub_C43350(a1, (unsigned __int64)a2, a3, a4, a5);
      case 50LL:
        return (unsigned int)sub_C5C6C0(a1, (__int64)a2, 0);
      case 51LL:
      case 97LL:
      case 101LL:
        return (unsigned int)sub_C7F820(a1, (__int64)a2);
      case 54LL:
        return (unsigned int)sub_C802B0(
                               a1,
                               *(_QWORD *)&a2[4 * ((*((_DWORD *)a2 + 4) >> 15) & 0x7FFF)
                                            + 16
                                            + 4 * ((*((_BYTE *)a2 + 19) & 0x40) != 0)]);
      case 57LL:
        v77 = *(_DWORD *)(*a1 + 272);
        v112.m128i_i64[0] = *a1;
        v112.m128i_i32[2] = v77;
        v78 = *(_QWORD *)(v112.m128i_i64[0] + 32);
        v79 = *(_DWORD *)(v78 + 160) + 1;
        *(_DWORD *)(v78 + 160) = v79;
        sub_9B7040(v78 + 136, v79);
        v80 = *((_QWORD *)a2 + 2);
        v9 = sub_C802B0(a1, v80);
        if ( (_BYTE)v9 )
        {
          v80 = 1;
          v93 = sub_C553F0(v112.m128i_i64[0], 1, v112.m128i_u32[2], v82, v83);
          v112.m128i_i32[2] = -1;
          v9 = v93;
        }
        sub_C559A0((__int64)&v112, v80, v81, v82, v83);
        return v9;
      case 58LL:
        if ( ((*(_QWORD *)a2 >> 16) & 0x1E0) != 0 )
        {
          sub_BF7B00((__int64)&v112, (__int64)a2, a3, a4, a5, a6, v99, v102, v105);
          sub_A54D20(a1[2], v112.m128i_i32);
          if ( v112.m128i_i32[0] > 1u )
            sub_A4F8E0(v112.m128i_i32);
          return 1;
        }
        else
        {
          return (unsigned int)sub_C802B0(a1, *((_QWORD *)a2 + 2));
        }
      case 61LL:
        return (unsigned int)sub_C43620(a1, (__int64)a2, a3, a4, a5);
      case 63LL:
        v73 = *((unsigned int *)a2 + 12);
        v112.m128i_i64[0] = (__int64)a2;
        v112.m128i_i64[1] = v73;
        v74 = (_QWORD *)sub_C29F30(&v112);
        return (unsigned int)sub_C802B0(a1, *v74);
      case 73LL:
        a2 = *((unsigned __int16 **)a2 + 4);
        continue;
      case 74LL:
        if ( (a2[1] & 8) != 0 )
          v45 = *((unsigned __int16 **)a2 + 3);
        else
          v45 = *((unsigned __int16 **)a2 + 4);
        return (unsigned int)sub_C802B0(a1, v45);
      case 76LL:
      case 77LL:
      case 78LL:
      case 81LL:
      case 82LL:
      case 83LL:
      case 84LL:
      case 85LL:
        return (unsigned int)sub_C819C0(a1, a2);
      case 79LL:
        v75 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
        if ( v75 )
          sub_C11320(v75, 0);
        return (unsigned int)sub_C819C0(a1, a2);
      case 80LL:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 2320LL) + 1LL) >= 0 )
        {
          v90 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
          if ( v90 )
            sub_C11320(v90, 1);
        }
        return (unsigned int)sub_C819C0(a1, a2);
      case 86LL:
      case 87LL:
      case 88LL:
      case 89LL:
      case 90LL:
        return (unsigned int)sub_C61260(a1, (__int64)a2, a1[2], a1[1]);
      case 100LL:
        v31 = *((_QWORD *)a2 + 5);
        v32 = 0;
        if ( v31 && (v31 & 2) == 0 )
          v32 = v31 & 0xFFFFFFFFFFFFFFFCLL;
        return (unsigned int)sub_C5B7B0(a1, (__int64)a2, (unsigned __int64 *)a2 + 6, *((unsigned int *)a2 + 4), v32, 0);
      case 108LL:
        v33 = *(_QWORD *)(*a1 + 32);
        v34 = *(_DWORD *)(v33 + 160) + 1;
        *(_DWORD *)(v33 + 160) = v34;
        sub_9B7040(v33 + 136, v34);
        if ( sub_C94CC0(a2) )
        {
          v35 = *(_QWORD *)(*a1 + 32);
          if ( *(_QWORD *)(v35 + 64) )
          {
            v91 = sub_C94CC0(a2);
            v9 = sub_C802B0(a1, v91);
          }
          else
          {
            *(_QWORD *)(v35 + 64) = a2;
            v36 = sub_C94CC0(a2);
            v37 = sub_C802B0(a1, v36);
            *(_QWORD *)(v35 + 64) = 0;
            v9 = v37;
          }
        }
        else
        {
          v9 = sub_C14310(*a1, (__int64)a2);
        }
        --*(_DWORD *)(v33 + 144);
        return v9;
      case 109LL:
        v38 = *(_QWORD *)(*a1 + 32);
        v39 = *(_DWORD *)(v38 + 160) + 1;
        *(_DWORD *)(v38 + 160) = v39;
        sub_9B7040(v38 + 136, v39);
        v40 = *(_QWORD *)(*a1 + 32);
        if ( *(_QWORD *)(v40 + 64) )
        {
          v89 = sub_C94C80(a2);
          v9 = sub_C802B0(a1, v89);
        }
        else
        {
          *(_QWORD *)(v40 + 64) = a2;
          v41 = sub_C94C80(a2);
          v42 = sub_C802B0(a1, v41);
          *(_QWORD *)(v40 + 64) = 0;
          v9 = v42;
        }
        --*(_DWORD *)(v38 + 144);
        return v9;
      case 110LL:
      case 111LL:
        return (unsigned int)sub_C78F30((__int64)a1, (__int64 *)a2);
      case 115LL:
      case 116LL:
        return (unsigned int)sub_C81C30(a1, a2);
      case 122LL:
        return (unsigned int)sub_C7FC70(a1, a2, a3, a4);
      case 125LL:
        v22 = (_WORD *)sub_BFD550(*((_QWORD *)a2 + 3));
        v24 = *v22 & 0x1FF;
        if ( v24 <= 0x58u || v24 > 0x5Du )
        {
          v26 = *a1;
          goto LABEL_25;
        }
        v25 = (unsigned int)sub_BFBE70((__int64)v22) == 214;
        v26 = *a1;
        if ( !v25 )
        {
LABEL_25:
          v112.m128i_i64[0] = v26;
          v112.m128i_i8[8] = 0;
          v27 = *(char **)(v26 + 24);
          v28 = *(_DWORD *)(v26 + 916);
          v29 = *((_QWORD *)v27 + 1);
          if ( !v29 || (v29 = *(unsigned int *)(v29 + 8), (_DWORD)v29) )
          {
            v112.m128i_i8[9] = 0;
            v112.m128i_i32[3] = v28;
          }
          else
          {
            v30 = *v27;
            v112.m128i_i32[3] = v28;
            v112.m128i_i8[9] = v30 ^ 1;
          }
          goto LABEL_28;
        }
        v9 = 0;
        if ( !*(_BYTE *)(v26 + 914) )
        {
          v112.m128i_i64[0] = *a1;
          v112.m128i_i8[8] = 1;
          v29 = *(_QWORD *)(v26 + 24);
          v96 = *(_DWORD *)(v26 + 916);
          v97 = *(_QWORD *)(v29 + 8);
          if ( !v97 || *(_DWORD *)(v97 + 8) )
          {
            v112.m128i_i8[9] = 0;
            v112.m128i_i32[3] = v96;
          }
          else
          {
            v98 = *(unsigned __int8 *)v29;
            v112.m128i_i32[3] = *(_DWORD *)(v26 + 916);
            v29 = v98 ^ 1u;
            v112.m128i_i8[9] = v29;
          }
          *(_DWORD *)(v26 + 916) = 2;
LABEL_28:
          if ( (unsigned __int8)sub_C3FB70(*((_QWORD *)a2 + 3), &v110, *a1, v29, v23) )
          {
            if ( v110.m128i_i8[0] )
              v92 = *((_QWORD *)a2 + 4);
            else
              v92 = *((_QWORD *)a2 + 5);
            v9 = sub_C802B0(a1, v92);
            if ( (_BYTE)v9 )
              goto LABEL_34;
          }
          else if ( *(_BYTE *)(*a1 + 914) && (unsigned __int8)sub_C11850(*a1) )
          {
            sub_C81DB0(a1, a2);
          }
          else if ( (unsigned __int8)sub_C11850(*a1) )
          {
            sub_C802B0(a1, *((_QWORD *)a2 + 4));
            sub_C802B0(a1, *((_QWORD *)a2 + 5));
          }
          v112.m128i_i8[8] = 0;
          v9 = 0;
LABEL_34:
          sub_C23B30(v112.m128i_i64);
          return v9;
        }
        break;
      case 126LL:
        return (unsigned int)sub_C820B0(a1, a2);
      default:
        BUG();
    }
    return v9;
  }
}
