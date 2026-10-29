__int64 __fastcall sub_B0800(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // r14
  bool v12; // zf
  __int64 v14; // rax
  _DWORD *v15; // r10
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // r10
  __int64 v19; // r14
  __int64 v20; // r13
  int v21; // ecx
  __m128i *v22; // rbx
  __int64 v23; // rsi
  int v24; // ecx
  __int64 v25; // r13
  __int64 v26; // rax
  char v27; // al
  char v28; // r9
  char v29; // al
  char v30; // r9
  char v31; // al
  char v32; // al
  int v33; // ecx
  __int64 v34; // rdx
  char v35; // al
  char v36; // al
  char v37; // al
  char v38; // al
  char v39; // al
  char v40; // al
  __int64 v41; // r11
  char v42; // al
  char v43; // al
  int v44; // edx
  _DWORD *v45; // rsi
  char v46; // al
  __int64 v47; // r8
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // rax
  int v55; // eax
  _DWORD *v56; // rcx
  _DWORD *v57; // rsi
  char v58; // al
  int v59; // eax
  char v60; // al
  char v61; // al
  _QWORD *v62; // [rsp+8h] [rbp-D8h]
  __int64 v63; // [rsp+10h] [rbp-D0h]
  char v64; // [rsp+10h] [rbp-D0h]
  _DWORD *v65; // [rsp+10h] [rbp-D0h]
  char v66; // [rsp+10h] [rbp-D0h]
  _DWORD *v67; // [rsp+18h] [rbp-C8h]
  _DWORD *v68; // [rsp+18h] [rbp-C8h]
  char v69; // [rsp+18h] [rbp-C8h]
  __int64 v70; // [rsp+18h] [rbp-C8h]
  _DWORD *v71; // [rsp+18h] [rbp-C8h]
  char v72; // [rsp+18h] [rbp-C8h]
  __int64 v73; // [rsp+18h] [rbp-C8h]
  _DWORD *v74; // [rsp+18h] [rbp-C8h]
  _DWORD *v75; // [rsp+18h] [rbp-C8h]
  char v76; // [rsp+20h] [rbp-C0h]
  __int64 v77; // [rsp+20h] [rbp-C0h]
  _DWORD *v78; // [rsp+20h] [rbp-C0h]
  __int64 v79; // [rsp+20h] [rbp-C0h]
  __int64 v80; // [rsp+20h] [rbp-C0h]
  __int64 v81; // [rsp+20h] [rbp-C0h]
  char v82; // [rsp+20h] [rbp-C0h]
  __int64 v83; // [rsp+20h] [rbp-C0h]
  _DWORD *v84; // [rsp+20h] [rbp-C0h]
  __int64 v85; // [rsp+20h] [rbp-C0h]
  __int64 v86; // [rsp+20h] [rbp-C0h]
  _DWORD *v89; // [rsp+30h] [rbp-B0h]
  __int64 v90; // [rsp+30h] [rbp-B0h]
  __int64 v91; // [rsp+38h] [rbp-A8h]
  __int64 v92; // [rsp+38h] [rbp-A8h]
  char v93; // [rsp+46h] [rbp-9Ah]
  char v94; // [rsp+46h] [rbp-9Ah]
  unsigned __int8 v95; // [rsp+47h] [rbp-99h]
  int v97; // [rsp+54h] [rbp-8Ch] BYREF
  int v98; // [rsp+58h] [rbp-88h] BYREF
  int v99; // [rsp+5Ch] [rbp-84h] BYREF
  __int64 v100; // [rsp+60h] [rbp-80h] BYREF
  __int64 v101; // [rsp+68h] [rbp-78h] BYREF
  unsigned __int64 v102; // [rsp+70h] [rbp-70h] BYREF
  _DWORD *v103; // [rsp+78h] [rbp-68h]
  __int64 v104[2]; // [rsp+80h] [rbp-60h] BYREF
  __int64 v105; // [rsp+90h] [rbp-50h] BYREF
  __int128 v106; // [rsp+98h] [rbp-48h]
  unsigned __int64 v107; // [rsp+A8h] [rbp-38h]

  v8 = *(unsigned int *)(a5 + 4);
  v107 = __readfsqword(0x28u);
  if ( (_DWORD)v8 != *(_DWORD *)(a7 + 4) )
  {
    if ( !under_debugger )
      sub_383060(50498);
    BUG();
  }
  v9 = *(_QWORD *)(a1 + 480);
  v11 = a6;
  v12 = *(_BYTE *)a7 == 2;
  v103 = nullptr;
  v91 = *(_QWORD *)(v9 + 112);
  v102 = 0xFFFFFFFF00000000LL;
  if ( v12 )
  {
    if ( *(_BYTE *)a5 == 2 && (unsigned __int64)(int)v8 <= 7 )
    {
      v19 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a5 + 8) + 16LL), v8, 0);
      v20 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a7 + 8) + 16LL), *(unsigned int *)(a7 + 4), 0);
      sub_125180(&v102);
      sub_11CA10(a3, &v102);
      v21 = *(_DWORD *)(a5 + 4);
      v22 = *(__m128i **)(a3 + 8);
      v23 = (unsigned int)(2 * v21);
      v24 = (16 * v21) >> 1;
      *(_DWORD *)(a3 + 4) = v23;
      v25 = v20 << v24;
      if ( (unsigned __int64)v24 < 0x40 )
        v19 += v25;
      v26 = sub_32ABC0(v19, v23, 0);
      v22[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
      goto LABEL_15;
    }
    if ( (unsigned __int8)sub_11FD80(a7, v104, 0) && !v104[0] )
    {
      sub_125180(&v102);
      sub_11CA10(a3, &v102);
      v16 = -1;
      if ( v11 )
        v16 = *(_QWORD *)(v11 + 24);
      sub_1207E0(a3, v91, 9, v16, (unsigned int)(2 * *(_DWORD *)(a5 + 4)));
      goto LABEL_15;
    }
  }
  v95 = sub_12CF30(*(_QWORD *)(a1 + 64), a5, a7, a3, (a8 & 4) == 0, a6);
  if ( v95 )
  {
LABEL_15:
    v95 = 1;
    goto LABEL_9;
  }
  if ( (a8 & 1) == 0 )
  {
    v100 = v11;
    v14 = sub_129440(a1, a7, &v100, 0);
    v15 = (_DWORD *)v14;
    if ( v14 )
    {
      switch ( *(_DWORD *)v14 )
      {
        case 4:
          if ( *(_BYTE *)(v14 + 64) == 14 )
            goto LABEL_16;
          if ( *(_DWORD *)(v14 + 68) != 2 * *(_DWORD *)(a7 + 4) )
            goto LABEL_16;
          v81 = v14;
          v37 = sub_1301F0(a1, v11, a7, v100, v14 + 64);
          v15 = (_DWORD *)v81;
          if ( !v37 )
            goto LABEL_16;
          v38 = sub_1321C0(a1, a4, a5, v100, v81 + 32);
          v15 = (_DWORD *)v81;
          if ( !v38 )
            goto LABEL_16;
          sub_125180(&v102);
          v15 = (_DWORD *)v81;
          goto LABEL_42;
        case 5:
          v79 = v14;
          sub_125180(&v102);
          v36 = sub_98090(a1, v100, v79, a4, (__int64)&v102);
          goto LABEL_56;
        case 0xA:
          if ( *(_BYTE *)a7 != 4 )
            goto LABEL_16;
          if ( *(_BYTE *)(v14 + 32) != 4 )
            goto LABEL_16;
          if ( (unsigned int)(**(_DWORD **)(v14 + 40) - 23) > 1 )
            goto LABEL_16;
          v70 = v14;
          v80 = *(_QWORD *)(v14 + 40);
          v32 = sub_152630(v80, v104);
          v15 = (_DWORD *)v70;
          if ( !v32 )
            goto LABEL_16;
          v33 = 8 * *(_DWORD *)(a7 + 4) - LODWORD(v104[0]);
          if ( v33 <= 0 || v33 >= 8 * *(_DWORD *)(a7 + 4) )
            goto LABEL_16;
          v34 = 0;
          if ( (unsigned __int64)v33 <= 0x3F )
            v34 = 1LL << v33;
          *(_DWORD *)v80 = 14;
          **(_DWORD **)(a7 + 8) = 11;
          sub_120A10(v80 + 48, v91, v34, *(unsigned int *)(v80 + 36), *(_QWORD *)(v80 + 24), 0);
          v35 = sub_B0800(a1, a2, (unsigned int)&v102, a4, a5, v11, a7, a8);
          v15 = (_DWORD *)v70;
          v30 = v35;
          v76 = 0;
          goto LABEL_38;
        case 0xB:
          if ( *(_DWORD *)(v14 + 36) != 2 * *(_DWORD *)(a5 + 4) )
            goto LABEL_16;
          v63 = v14;
          v76 = sub_1321C0(a1, a4, a5, v100, v14 + 32);
          v15 = (_DWORD *)v63;
          if ( !v76 )
            goto LABEL_16;
          v89 = (_DWORD *)v63;
          sub_125180(&v102);
          goto LABEL_23;
        case 0xC:
          if ( *(_DWORD *)(v14 + 68) != *(_DWORD *)(a7 + 4) )
            goto LABEL_16;
          v79 = v14;
          sub_125180(&v102);
          v31 = sub_95E10(a1, v100, v79, a4, (__int64)&v102);
          v15 = (_DWORD *)v79;
          if ( !v31 )
          {
            v36 = sub_95B90(a1, v100, v79, a4, (__int64)&v102);
LABEL_56:
            v15 = (_DWORD *)v79;
            if ( !v36 )
            {
LABEL_16:
              v76 = 0;
              goto LABEL_17;
            }
          }
LABEL_42:
          v76 = 0;
          goto LABEL_24;
        case 0x17:
          goto LABEL_33;
        case 0x18:
          v77 = v14;
          v27 = sub_12EA80(v91, a1, v100, (int)v14 + 32, a4, a5, 0);
          v15 = (_DWORD *)v77;
          if ( !v27 )
            goto LABEL_33;
          v40 = sub_152630(v77, v104);
          v15 = (_DWORD *)v77;
          v28 = v40;
          if ( v40 )
          {
            if ( 8 * *(_DWORD *)(a5 + 4) - 1 == LODWORD(v104[0]) )
            {
              v64 = v40;
              sub_125180(&v102);
              sub_1207E0(&v102, v91, 8, *(_QWORD *)(v77 + 24), (unsigned int)(2 * HIDWORD(v102)));
              v15 = (_DWORD *)v77;
              v28 = v64;
            }
            else
            {
LABEL_33:
              v28 = 0;
            }
          }
          v69 = v28;
          v78 = v15;
          v29 = sub_152630(v15, &v97);
          v15 = v78;
          v30 = v69;
          if ( !v29 || v97 <= 0 || *(_BYTE *)a5 != 4 )
            goto LABEL_37;
          v41 = *(_QWORD *)(a5 + 8);
          if ( *(_DWORD *)v41 == 10 )
          {
            if ( *(_BYTE *)(v41 + 32) == 4 )
            {
              v56 = *(_DWORD **)(v41 + 40);
              if ( *v56 == 23 || *v56 == 24 && v97 <= 8LL * (*(_DWORD *)(v41 + 36) - *(_DWORD *)(a5 + 4)) )
              {
                v57 = v78 + 12;
                v94 = v69;
                v75 = v78;
                v86 = *(_QWORD *)(v41 + 40);
                v58 = sub_125B60(v56 + 12, v57, 0);
                v15 = v75;
                v30 = v94;
                if ( v58 )
                {
                  v59 = *(_DWORD *)(a5 + 4);
                  if ( v75[17] == v59 && *(_DWORD *)(v86 + 68) == 2 * v59 )
                  {
                    v60 = sub_1301F0(a1, v100, v75 + 8, a4, v86 + 32);
                    v15 = v75;
                    v30 = v94;
                    if ( v60 )
                    {
                      sub_125180(&v102);
                      v15 = v75;
                      v76 = v94;
                      *v103 = *v75;
                      goto LABEL_24;
                    }
                  }
                }
              }
            }
          }
          else if ( *(_DWORD *)v41 == 19 )
          {
            v71 = v78;
            v82 = v30;
            v42 = sub_B0740((__int64)&v101, &v98, v104, *(_QWORD *)(a5 + 8));
            v30 = v82;
            v15 = v71;
            if ( v42 )
            {
              if ( *(_DWORD *)v104[0] == 23 )
              {
                v65 = v71;
                v72 = v82;
                v83 = v104[0];
                v43 = sub_152630(v104[0], &v99);
                v30 = v72;
                v15 = v65;
                if ( v43 )
                {
                  if ( v99 == v97 )
                  {
                    v44 = *(_DWORD *)(v101 + 4);
                    if ( 8 * v44 - v97 == v98 && v44 == *(_DWORD *)(v83 + 36) )
                    {
                      v45 = v65 + 8;
                      v66 = v72;
                      v73 = v83;
                      v84 = v15;
                      v46 = sub_125B60(v101, v45, 0);
                      v15 = v84;
                      v47 = v73;
                      v30 = v66;
                      if ( v46 )
                      {
                        v74 = v84;
                        v48 = v47 + 32;
                        v93 = sub_157240(a1, v47 + 32, v101);
                        v30 = v66;
                        v15 = v84;
                        if ( v93 )
                        {
                          v85 = j__qalloc_or_throw(80, v48, v49, v50);
                          v51 = *((_QWORD *)v74 + 3);
                          *(_QWORD *)(v85 + 32) = 0xFFFFFFFF00000000LL;
                          *(_QWORD *)(v85 + 48) = 0xFFFFFFFF00000000LL;
                          *(_QWORD *)(v85 + 64) = 0xFFFFFFFF00000000LL;
                          *(_QWORD *)(v85 + 40) = 0;
                          *(_QWORD *)(v85 + 56) = 0;
                          *(_QWORD *)(v85 + 72) = 0;
                          sub_330970(v85, v51);
                          *(_DWORD *)v85 = *v74;
                          v53 = (_QWORD *)j__qalloc_or_throw(32, v51, v52, v85);
                          v53[1] = 0;
                          *v53 = 0xFFFFFFFF00000000LL;
                          v53[2] = 0xFFFFFFFF00000000LL;
                          v53[3] = 0;
                          v62 = v53;
                          sub_125180(v53 + 2);
                          sub_125180(v62);
                          v54 = v101;
                          *(_BYTE *)(v85 + 32) = 14;
                          *(_QWORD *)(v85 + 40) = v62;
                          *(_DWORD *)(v85 + 36) = 2 * *(_DWORD *)(v54 + 4);
                          sub_125180(v85 + 48);
                          *(_DWORD *)(v85 + 68) = *(_DWORD *)(v85 + 36);
                          sub_11CDA0(&v102);
                          LOBYTE(v102) = 4;
                          v30 = v93;
                          v15 = v74;
                          v55 = *(_DWORD *)(v85 + 68);
                          v103 = (_DWORD *)v85;
                          HIDWORD(v102) = v55;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_37:
          v76 = v30;
LABEL_38:
          if ( !v30 )
          {
LABEL_17:
            if ( *(_BYTE *)a5 != 4 )
              break;
            v17 = *(_DWORD **)(a5 + 8);
            if ( *v17 != 10 || v17[9] != 2 * *(_DWORD *)(a5 + 4) )
              break;
            v67 = v15;
            sub_125180(&v102);
            v15 = v67;
            if ( *v67 != 11
              || (v61 = sub_12EA80(v91, a1, v100, (int)v67 + 32, a4, (unsigned int)&v102, 0), v15 = v67, !v61) )
            {
              v68 = v15;
              sub_1279B0(&v102, v91, *(_QWORD *)(*(_QWORD *)(a5 + 8) + 24LL), *(unsigned int *)(a7 + 4));
              if ( !(unsigned __int8)sub_12EA80(v91, a1, v11, a7, a4, (unsigned int)&v102, 2) )
                break;
              v89 = v68;
              sub_125180(&v102);
LABEL_23:
              v15 = v89;
            }
          }
LABEL_24:
          v106 = 0;
          v90 = (__int64)v15;
          v104[0] = 0;
          v104[1] = 0;
          v105 = 0;
          sub_123EA0(a1, v104, &v102, 1, 4294901760LL);
          v18 = v90;
          if ( (a8 & 2) == 0 )
            goto LABEL_65;
          if ( !(unsigned __int8)sub_64780(v104, (_QWORD *)(v91 + 104))
            && !(unsigned __int8)sub_318470(&v105, v91 + 120) )
          {
            v18 = v90;
LABEL_65:
            if ( v11 )
            {
              v92 = v18;
              v39 = sub_122240(a2, *(_QWORD *)(v11 + 8), 0);
              v18 = v92;
              if ( v39 )
                v11 = a2;
            }
            if ( !v76 )
              v18 = *(_QWORD *)(v18 + 8);
            if ( !sub_A9AA0(a1, v104, v18, v11, 1u) )
            {
              sub_11CA10(a3, &v102);
              v95 = 1;
            }
          }
          if ( v105 )
          {
            *(_QWORD *)&v106 = 0;
            qfree(v105);
          }
          qfree(v104[0]);
          break;
        default:
          goto LABEL_16;
      }
    }
  }
LABEL_9:
  sub_11CDA0(&v102);
  return v95;
}
