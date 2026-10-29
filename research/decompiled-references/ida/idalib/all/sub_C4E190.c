__int64 __fastcall sub_C4E190(__int64 *a1, unsigned __int16 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  _WORD *v14; // rax
  __int64 v15; // r8
  unsigned __int16 v16; // dx
  bool v17; // zf
  __int64 v18; // rax
  char *v19; // rdx
  __int32 v20; // eax
  __int64 v21; // rcx
  char v22; // dl
  __int64 v23; // rbp
  int v24; // esi
  __int64 v25; // r12
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rbp
  int v29; // esi
  __int64 v30; // r12
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rbp
  int *v34; // rax
  unsigned __int16 *v35; // rsi
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r13
  char v39; // al
  __int64 v40; // rbx
  unsigned int v41; // eax
  _QWORD *v42; // r14
  __int64 v43; // rax
  int v44; // esi
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rsi
  int v49; // eax
  _WORD *v50; // rsi
  __int64 v51; // rbx
  unsigned int v52; // eax
  __int64 *v53; // r13
  __int64 v54; // rbp
  __int64 v55; // r11
  __int64 v56; // rsi
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  _QWORD *v61; // r14
  __int64 v62; // rax
  __int64 v63; // rdx
  unsigned __int64 v64; // rsi
  __int64 v65; // rax
  _QWORD *v66; // rax
  unsigned __int8 **v67; // rax
  __int64 v68; // rax
  __int32 v69; // edx
  __int64 v70; // rax
  int v71; // esi
  __int64 v72; // rsi
  __int64 *v73; // rdi
  void *v74; // rdi
  __int64 v75; // rsi
  __int64 *v76; // rdi
  __int64 v77; // rax
  unsigned __int8 **v78; // rax
  __int64 v79; // rax
  __int64 v80; // rsi
  unsigned int v81; // eax
  __int64 v82; // r12
  unsigned int v83; // eax
  __int32 v84; // edx
  __int64 v85; // rsi
  int v86; // ecx
  unsigned int v87; // eax
  int v88; // [rsp+0h] [rbp-138h]
  __int64 v89; // [rsp+0h] [rbp-138h]
  unsigned __int64 v90; // [rsp+0h] [rbp-138h]
  __int64 v91; // [rsp+8h] [rbp-130h]
  char v92; // [rsp+8h] [rbp-130h]
  __int64 v93; // [rsp+8h] [rbp-130h]
  char v94; // [rsp+10h] [rbp-128h]
  __int64 v95; // [rsp+10h] [rbp-128h]
  __int64 v96; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v97; // [rsp+28h] [rbp-110h]
  __m128i *v98; // [rsp+30h] [rbp-108h] BYREF
  __m128i *v99; // [rsp+38h] [rbp-100h]
  char v100; // [rsp+40h] [rbp-F8h]
  __m128i v101; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v102; // [rsp+80h] [rbp-B8h]
  char v103; // [rsp+88h] [rbp-B0h]
  __int64 v104; // [rsp+98h] [rbp-A0h]
  void *ptr; // [rsp+A0h] [rbp-98h]
  __int64 v106; // [rsp+A8h] [rbp-90h]
  _BYTE v107[65]; // [rsp+B0h] [rbp-88h] BYREF
  char v108; // [rsp+F1h] [rbp-47h]

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
              return (unsigned int)sub_C83110(a1, a2);
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
            return (unsigned int)sub_C14310(*a1, (__int64)a2);
          case 5LL:
          case 98LL:
            goto LABEL_7;
          case 7LL:
            v38 = *a1;
            v9 = 1;
            v39 = *(_BYTE *)(*a1 + 915);
            *(_BYTE *)(*a1 + 915) = 0;
            v40 = *((_QWORD *)a2 + 2);
            v92 = v39;
            if ( !*(_DWORD *)(v40 + 4) )
              goto LABEL_64;
            v41 = *(_DWORD *)(v38 + 272);
            v96 = v38;
            v42 = (_QWORD *)(v40 + 24);
            v97 = v41;
            v43 = *(_QWORD *)(v38 + 32);
            v44 = *(_DWORD *)(v43 + 160) + 1;
            *(_DWORD *)(v43 + 160) = v44;
            sub_9B7040(v43 + 136, v44);
            v45 = (_QWORD *)(v40 + 16);
            v89 = v40 + 8LL * *(unsigned int *)(v40 + 4) + 16;
            if ( v40 + 24 == v89 )
              goto LABEL_61;
            while ( 2 )
            {
              v47 = *(v42 - 1);
              v48 = *a1;
              v98 = &v101;
              v101.m128i_i8[4] &= ~1u;
              v101.m128i_i32[0] = 0;
              v99 = nullptr;
              v49 = sub_C53060(&v98, v48, v47);
              if ( v49 != 2 )
              {
                if ( v49 )
                {
                  v82 = *a1;
                  v83 = sub_EEB7E0(*(v42 - 1));
                  sub_E33C80(v82, v83, 2485, 0);
                }
                if ( v101.m128i_i32[0] > 1u )
                {
                  v9 = 0;
                  sub_A4F8E0(v101.m128i_i32);
                  goto LABEL_63;
                }
LABEL_136:
                v9 = 0;
                goto LABEL_63;
              }
              if ( v101.m128i_i32[0] <= 1u )
              {
                v46 = v42 + 1;
                if ( (_QWORD *)v89 == v42 + 1 )
                {
LABEL_60:
                  v45 = v42;
LABEL_61:
                  v50 = (_WORD *)*v45;
                  if ( ((*(_WORD *)*v45 + 509) & 0x1FFu) > 0x7E )
                  {
                    v51 = *a1;
                    v9 = 0;
                    v52 = sub_EEB7E0(v50);
                    sub_E33C80(v51, v52, 2485, 0);
                    goto LABEL_63;
                  }
                  if ( (unsigned __int8)sub_C4E190(a1, v50) )
                  {
                    v87 = sub_C54F60(v96, 1, v97);
                    v97 = -1;
                    v9 = v87;
LABEL_63:
                    sub_C55380(&v96);
LABEL_64:
                    *(_BYTE *)(v38 + 915) = v92;
                    return v9;
                  }
                  goto LABEL_136;
                }
              }
              else
              {
                sub_A4F8E0(v101.m128i_i32);
                v46 = v42 + 1;
                if ( (_QWORD *)v89 == v42 + 1 )
                  goto LABEL_60;
              }
              v42 = v46;
              continue;
            }
          case 14LL:
            v53 = (__int64 *)(a2 + 12);
            v54 = (__int64)&a2[4 * a2[2] + 8];
            if ( a2 + 12 == (unsigned __int16 *)v54 )
              return 1;
            while ( 2 )
            {
              v61 = (_QWORD *)*v53;
              v62 = a2[3];
              v63 = *(unsigned __int16 *)*v53;
              LOWORD(v63) = v63 & 0x1FF;
              if ( (_WORD)v63 == 26 )
              {
                if ( (_WORD)v62 && v61 == *(_QWORD **)&a2[4 * v62 + 8] )
                  return (unsigned int)sub_C14310(*a1, (__int64)a2);
                if ( (*v61 & 0x80000LL) == 0 )
                {
                  v55 = *a1;
                  v56 = *v53;
                  v101 = 0u;
                  v102 = 0;
                  v103 |= 1u;
                  v104 = 0;
                  ptr = v107;
                  v106 = 0x800000000LL;
                  v108 = 0;
                  v95 = v55;
                  v93 = *(_QWORD *)(v55 + 32);
                  v90 = v61[2];
                  v57 = sub_C104A0(*(_QWORD *)(v55 + 16), v56);
                  v58 = sub_C2C1C0(v93, (unsigned __int64)v61, v57, (__int64)&v101);
                  v9 = sub_C39A10(v58, v95, v90, v59, v60);
                  if ( !(_BYTE)v9 )
                  {
                    if ( ptr != v107 )
                      free(ptr);
                    return v9;
                  }
                  if ( ptr != v107 )
                    free(ptr);
                }
              }
              else
              {
                v64 = *v53;
                if ( (_WORD)v62 && v61 == *(_QWORD **)&a2[4 * v62 + 8] )
                {
                  if ( !(unsigned __int8)sub_C4E190(a1, v64) )
                    return 0;
                }
                else if ( !(unsigned __int8)sub_C3FAF0(*a1, v64, v63, a4, a5) )
                {
                  return 0;
                }
              }
              if ( (__int64 *)v54 == ++v53 )
                return 1;
              continue;
            }
          case 15LL:
            v35 = nullptr;
            if ( *((char *)a2 + 2) < 0 )
              v35 = *((unsigned __int16 **)a2 + 2);
            return (unsigned int)sub_C4E190(a1, v35);
          case 17LL:
          case 113LL:
            a2 = *((unsigned __int16 **)a2 + 3);
            continue;
          case 18LL:
            v68 = sub_C1DE00((__int64)a2);
            return (unsigned int)sub_C4E190(a1, v68);
          case 23LL:
            v33 = *a1;
            v34 = (int *)sub_C110E0(*(_QWORD *)(*a1 + 32), (unsigned __int64)a2);
            if ( v34 && *v34 )
            {
              v9 = 1;
              sub_A54D20(a1[2], v34);
            }
            else
            {
              v35 = *((unsigned __int16 **)a2 + 2);
              if ( !v35 || a2 == v35 )
                return (unsigned int)sub_C14310(v33, (__int64)a2);
              else
                return (unsigned int)sub_C4E190(a1, v35);
            }
            return v9;
          case 43LL:
            return (unsigned int)sub_C44100(a1, (unsigned __int64)a2, a3, a4, a5);
          case 50LL:
            v36 = *((_QWORD **)a2 + 2);
            v37 = (__int64)(*((_QWORD *)a2 + 3) - (_QWORD)v36) >> 3;
            if ( !(_DWORD)v37 )
              return (unsigned int)sub_C7F750(a1, a2);
            if ( (_DWORD)v37 != 1 )
              return (unsigned int)sub_C14310(*a1, (__int64)a2);
            return (unsigned int)sub_C4E190(a1, *v36);
          case 51LL:
          case 97LL:
          case 101LL:
            return (unsigned int)sub_C7F750(a1, a2);
          case 54LL:
            return (unsigned int)sub_C4E190(
                                   a1,
                                   *(_QWORD *)&a2[4 * ((*((_DWORD *)a2 + 4) >> 15) & 0x7FFF)
                                                + 16
                                                + 4 * ((*((_BYTE *)a2 + 19) & 0x40) != 0)]);
          case 57LL:
            v69 = *(_DWORD *)(*a1 + 272);
            v101.m128i_i64[0] = *a1;
            v101.m128i_i32[2] = v69;
            v70 = *(_QWORD *)(v101.m128i_i64[0] + 32);
            v71 = *(_DWORD *)(v70 + 160) + 1;
            *(_DWORD *)(v70 + 160) = v71;
            sub_9B7040(v70 + 136, v71);
            v9 = sub_C4E190(a1, *((_QWORD *)a2 + 2));
            if ( (_BYTE)v9 )
            {
              v81 = sub_C553F0(v101.m128i_i64[0], 1, v101.m128i_u32[2]);
              v101.m128i_i32[2] = -1;
              v9 = v81;
            }
            sub_C559A0(&v101);
            return v9;
          case 58LL:
            if ( ((*(_QWORD *)a2 >> 16) & 0x1E0) != 0 )
            {
              sub_BF7B00((__int64)&v101, (__int64)a2, a3, a4, a5, a6, v88, v91, v94);
              sub_A54D20(a1[2], v101.m128i_i32);
              if ( v101.m128i_i32[0] > 1u )
                sub_A4F8E0(v101.m128i_i32);
              return 1;
            }
            else
            {
              return (unsigned int)sub_C4E190(a1, *((_QWORD *)a2 + 2));
            }
          case 61LL:
            return (unsigned int)sub_C443D0(a1, (__int64)a2, a3, a4, a5);
          case 63LL:
            v65 = *((unsigned int *)a2 + 12);
            v101.m128i_i64[0] = (__int64)a2;
            v101.m128i_i64[1] = v65;
            v66 = (_QWORD *)sub_C29F30(&v101);
            return (unsigned int)sub_C4E190(a1, *v66);
          case 73LL:
            a2 = *((unsigned __int16 **)a2 + 4);
            continue;
          case 74LL:
            if ( (a2[1] & 8) != 0 )
              v35 = *((unsigned __int16 **)a2 + 3);
            else
              v35 = *((unsigned __int16 **)a2 + 4);
            return (unsigned int)sub_C4E190(a1, v35);
          case 76LL:
          case 77LL:
          case 78LL:
          case 81LL:
          case 82LL:
          case 83LL:
          case 84LL:
          case 85LL:
            return (unsigned int)sub_C83090(a1, a2);
          case 79LL:
            v67 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
            if ( v67 )
              sub_C11320(v67, 0);
            return (unsigned int)sub_C83090(a1, a2);
          case 80LL:
            if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 2320LL) + 1LL) >= 0 )
            {
              v78 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
              if ( v78 )
                sub_C11320(v78, 1);
            }
            return (unsigned int)sub_C83090(a1, a2);
          case 86LL:
          case 87LL:
          case 88LL:
          case 89LL:
          case 90LL:
            return (unsigned int)sub_C4D450(a1, (__int64)a2);
          case 108LL:
            v23 = *(_QWORD *)(*a1 + 32);
            v24 = *(_DWORD *)(v23 + 160) + 1;
            *(_DWORD *)(v23 + 160) = v24;
            sub_9B7040(v23 + 136, v24);
            if ( sub_C94CC0(a2) )
            {
              v25 = *(_QWORD *)(*a1 + 32);
              if ( *(_QWORD *)(v25 + 64) )
              {
                v79 = sub_C94CC0(a2);
                v9 = sub_C4E190(a1, v79);
              }
              else
              {
                *(_QWORD *)(v25 + 64) = a2;
                v26 = sub_C94CC0(a2);
                v27 = sub_C4E190(a1, v26);
                *(_QWORD *)(v25 + 64) = 0;
                v9 = v27;
              }
            }
            else
            {
              v9 = sub_C14310(*a1, (__int64)a2);
            }
            --*(_DWORD *)(v23 + 144);
            return v9;
          case 109LL:
            v28 = *(_QWORD *)(*a1 + 32);
            v29 = *(_DWORD *)(v28 + 160) + 1;
            *(_DWORD *)(v28 + 160) = v29;
            sub_9B7040(v28 + 136, v29);
            v30 = *(_QWORD *)(*a1 + 32);
            if ( *(_QWORD *)(v30 + 64) )
            {
              v77 = sub_C94C80(a2);
              v9 = sub_C4E190(a1, v77);
            }
            else
            {
              *(_QWORD *)(v30 + 64) = a2;
              v31 = sub_C94C80(a2);
              v32 = sub_C4E190(a1, v31);
              *(_QWORD *)(v30 + 64) = 0;
              v9 = v32;
            }
            --*(_DWORD *)(v28 + 144);
            return v9;
          case 115LL:
          case 116LL:
            return (unsigned int)sub_C83110(a1, a2);
          case 125LL:
            v14 = (_WORD *)sub_BFD550(*((_QWORD *)a2 + 3));
            v16 = *v14 & 0x1FF;
            if ( v16 <= 0x58u || v16 > 0x5Du )
            {
              v18 = *a1;
            }
            else
            {
              v17 = (unsigned int)sub_BFBE70((__int64)v14) == 214;
              v18 = *a1;
              if ( v17 )
              {
                v9 = 0;
                if ( *(_BYTE *)(v18 + 914) )
                  return v9;
                v101.m128i_i64[0] = *a1;
                v101.m128i_i8[8] = 1;
                v21 = *(_QWORD *)(v18 + 24);
                v84 = *(_DWORD *)(v18 + 916);
                v85 = *(_QWORD *)(v21 + 8);
                if ( !v85 || *(_DWORD *)(v85 + 8) )
                {
                  v101.m128i_i8[9] = 0;
                  v101.m128i_i32[3] = v84;
                }
                else
                {
                  v86 = *(unsigned __int8 *)v21;
                  v101.m128i_i32[3] = *(_DWORD *)(v18 + 916);
                  v21 = v86 ^ 1u;
                  v101.m128i_i8[9] = v21;
                }
                *(_DWORD *)(v18 + 916) = 2;
LABEL_28:
                if ( (unsigned __int8)sub_C3FB70(*((_QWORD *)a2 + 3), &v98, *a1, v21, v15) )
                {
                  if ( (_BYTE)v98 )
                    v80 = *((_QWORD *)a2 + 4);
                  else
                    v80 = *((_QWORD *)a2 + 5);
                  v9 = sub_C4E190(a1, v80);
                  if ( (_BYTE)v9 )
                    goto LABEL_34;
                }
                else if ( *(_BYTE *)(*a1 + 914) && (unsigned __int8)sub_C11850(*a1) )
                {
                  sub_C83290(a1, a2);
                }
                else if ( (unsigned __int8)sub_C11850(*a1) )
                {
                  sub_C4E190(a1, *((_QWORD *)a2 + 4));
                  sub_C4E190(a1, *((_QWORD *)a2 + 5));
                }
                v101.m128i_i8[8] = 0;
                v9 = 0;
LABEL_34:
                sub_C23B30(v101.m128i_i64);
                return v9;
              }
            }
            v101.m128i_i64[0] = v18;
            v101.m128i_i8[8] = 0;
            v19 = *(char **)(v18 + 24);
            v20 = *(_DWORD *)(v18 + 916);
            v21 = *((_QWORD *)v19 + 1);
            if ( !v21 || (v21 = *(unsigned int *)(v21 + 8), (_DWORD)v21) )
            {
              v101.m128i_i8[9] = 0;
              v101.m128i_i32[3] = v20;
            }
            else
            {
              v22 = *v19;
              v101.m128i_i32[3] = v20;
              v101.m128i_i8[9] = v22 ^ 1;
            }
            goto LABEL_28;
          case 126LL:
            return (unsigned int)sub_C83590(a1, a2);
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
        v11 = sub_E32240(*a1);
        v12 = *a1;
        if ( (*(_BYTE *)(v11 + 1) & 0x20) == 0
          && (!*(_DWORD *)(v12 + 48) || !*(_BYTE *)(v12 + 914) && !*(_BYTE *)(v12 + 915)) )
        {
          goto LABEL_14;
        }
        v101 = 0u;
        v103 |= 1u;
        ptr = v107;
        v102 = 0;
        v104 = 0;
        v106 = 0x800000000LL;
        v108 = 0;
        v75 = *((_QWORD *)a2 + 2);
        v98 = (__m128i *)v12;
        v99 = &v101;
        v100 = 0;
        v9 = sub_C5C820(&v98, v75);
        if ( (_BYTE)v9 )
        {
          BYTE4(v98) &= ~1u;
          v76 = (__int64 *)*a1;
          LODWORD(v98) = 0;
          v9 = sub_C31D20(
                 v76,
                 (__int64 *)a2,
                 &v101,
                 *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL),
                 ((*((_BYTE *)a2 + 2) >> 3) & 0x1D) == 0,
                 (__int64)&v98);
          if ( (_BYTE)v9 )
            sub_A54D20(a1[2], (int *)&v98);
          if ( (unsigned int)v98 > 1 )
            sub_A4F8E0((int *)&v98);
        }
        v74 = ptr;
        if ( ptr != v107 )
          goto LABEL_108;
        return v9;
      case 1:
        v13 = sub_E32240(*a1);
        v12 = *a1;
        if ( (*(_BYTE *)(v13 + 1) & 0x20) != 0
          || *(_DWORD *)(v12 + 48) && (*(_BYTE *)(v12 + 914) || *(_BYTE *)(v12 + 915)) )
        {
          v101 = 0u;
          v103 |= 1u;
          ptr = v107;
          v102 = 0;
          v104 = 0;
          v106 = 0x800000000LL;
          v108 = 0;
          v72 = *((_QWORD *)a2 + 2);
          v98 = (__m128i *)v12;
          v99 = &v101;
          v100 = 0;
          v9 = sub_C5C820(&v98, v72);
          if ( (_BYTE)v9 )
          {
            BYTE4(v98) &= ~1u;
            v73 = (__int64 *)*a1;
            LODWORD(v98) = 0;
            v9 = sub_C31D20(
                   v73,
                   (__int64 *)a2,
                   &v101,
                   *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL),
                   ((*((_BYTE *)a2 + 2) >> 3) & 0x1D) == 0,
                   (__int64)&v98);
            if ( (_BYTE)v9 )
              sub_A54D20(a1[2], (int *)&v98);
            if ( (unsigned int)v98 > 1 )
              sub_A4F8E0((int *)&v98);
          }
          v74 = ptr;
          if ( ptr != v107 )
LABEL_108:
            free(v74);
        }
        else
        {
LABEL_14:
          v9 = sub_C14310(v12, (__int64)a2);
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
