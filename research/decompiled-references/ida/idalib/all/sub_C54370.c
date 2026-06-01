__int64 __fastcall sub_C54370(__int64 a1, _DWORD *a2, __m128i *a3, __int64 a4)
{
  _DWORD *v4; // r12
  unsigned int v6; // r15d
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned __int64 v22; // r12
  __int64 v23; // rdx
  unsigned __int8 **v24; // rax
  unsigned __int8 **v25; // rbx
  void *v26; // rax
  bool v27; // al
  unsigned __int8 **v28; // rax
  unsigned int v29; // r15d
  unsigned __int64 v30; // r12
  unsigned __int8 **v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // r14
  unsigned __int8 **v36; // rax
  unsigned __int8 **v37; // rbx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned __int64 v44; // r11
  char v45; // al
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r11
  __int64 v52; // r10
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int8 **v56; // rax
  unsigned __int8 **v57; // rbx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rdx
  unsigned __int64 v61; // rsi
  __int64 v62; // rax
  unsigned __int64 v63; // rbx
  unsigned int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // r11
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  unsigned int v76; // r13d
  int v77; // ebx
  unsigned __int8 **v78; // rax
  unsigned __int8 **v79; // r12
  unsigned __int8 **v80; // rax
  __int64 v81; // r13
  _DWORD *v82; // r14
  __int64 v83; // rax
  unsigned __int8 **v84; // rax
  unsigned __int64 v85; // r11
  unsigned __int8 **v86; // rbx
  __int32 v87; // [rsp+8h] [rbp-D0h]
  __int64 v88; // [rsp+8h] [rbp-D0h]
  __int64 v89; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v90; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v91; // [rsp+10h] [rbp-C8h]
  _DWORD *v92; // [rsp+18h] [rbp-C0h]
  __int64 v93; // [rsp+18h] [rbp-C0h]
  __int64 v94; // [rsp+18h] [rbp-C0h]
  __int64 v95; // [rsp+20h] [rbp-B8h]
  __int64 v96; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v97; // [rsp+48h] [rbp-90h]
  unsigned __int64 v98; // [rsp+50h] [rbp-88h]
  __int64 v99; // [rsp+50h] [rbp-88h]
  __int64 v100; // [rsp+50h] [rbp-88h]
  __int64 v101; // [rsp+50h] [rbp-88h]
  unsigned __int64 v102; // [rsp+50h] [rbp-88h]
  __int64 v103; // [rsp+58h] [rbp-80h]
  __int64 v104; // [rsp+58h] [rbp-80h]
  __m128i v105; // [rsp+60h] [rbp-78h] BYREF
  _DWORD *v106; // [rsp+70h] [rbp-68h]
  unsigned __int64 v107; // [rsp+78h] [rbp-60h]
  void *v108[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v109; // [rsp+90h] [rbp-48h]
  __int64 v110; // [rsp+98h] [rbp-40h]

  v4 = a2;
  sub_C1C470(&v105, a1, a2, 9u, a3, a4);
  if ( (v107 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v8 = a3[1].m128i_u8[8];
  v90 = v107;
  if ( (v8 & 1) != 0 )
    return 0;
  if ( sub_C105C0((__int64)&a3[1].m128i_i64[1])
    || (v9 = v90, v87 = a3[3].m128i_i32[2], v87 == 1) && (v8 &= 4u, (_DWORD)v8) )
  {
    if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) != 0 )
    {
      v27 = sub_C105C0((__int64)&a3[1].m128i_i64[1]);
      v28 = (unsigned __int8 **)sub_E33C10(a1, v4, !v27 ? 2375 : 2370, 0);
      if ( v28 )
        sub_C11320(v28, 9);
    }
    else
    {
      sub_E33C10(a1, v4, 108, 0);
    }
    return 0;
  }
  v92 = v106;
  if ( !*v106 )
  {
LABEL_25:
    v6 = *(unsigned __int8 *)(a1 + 914);
    if ( !(_BYTE)v6 )
    {
      v24 = (unsigned __int8 **)sub_E33C10(a1, v4, 2372, 0);
      v25 = v24;
      if ( v24 )
      {
        sub_C11320(v24, 9);
        sub_C11320(v25, *v92 == 1);
        v26 = (void *)sub_EEC8C0(v4);
        LOBYTE(v108[1]) = 1;
        v108[0] = v26;
        sub_AEC610((__int64 *)v25, (__int64 *)v108);
      }
      return v6;
    }
    return 0;
  }
  v91 = (unsigned __int64)v4;
  v10 = 0;
  v97 = 0;
  v95 = (__int64)a3;
  v96 = 0;
  v11 = v9;
  v12 = (__int64)v106;
  while ( 1 )
  {
    if ( (v11 & 1) != 0
      || (v13 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 1LL,
          (v8 = (unsigned int)v13 | v11 & 4 | *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        v8 = (unsigned __int64)v108;
        v38 = *(_QWORD *)(v95 + 48);
        *(__m128i *)v108 = _mm_load_si128(&v105);
        v109 = v38;
        v110 = (unsigned int)v10;
        v39 = sub_C2F440((__int64 *)(a1 + 824), (unsigned __int64 *)v108);
        if ( v39 )
        {
          if ( *((_DWORD *)v39 + 8) )
          {
            v40 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 7LL | v11 & 7;
            v11 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | v40 & 0xFFFFFFFFFFFFFFF8LL
                | v40 & 2;
          }
        }
      }
    }
    if ( v87 != (_DWORD)v10 )
    {
      v14 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
      v15 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
      v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v87 - 1 != (_DWORD)v10 )
        goto LABEL_14;
      if ( (_BYTE)v16 != 14 )
      {
        v16 = (unsigned int)(v16 - 2);
        if ( (unsigned __int8)v16 > 4u )
          goto LABEL_55;
LABEL_15:
        v18 = sub_A72040(*(_QWORD **)(a1 + 16), v11);
        v20 = v18;
        if ( !v18 || (unsigned int)*(unsigned __int8 *)(v18 + 16) - 2 > 1 )
          BUG();
        v21 = v95;
        v8 = *(_QWORD *)(v18 + 40);
        v22 = *(_QWORD *)(*(_QWORD *)(v95 + 48) + 8LL * (unsigned int)v10);
        v23 = *(unsigned __int8 *)(v18 + 19);
        if ( (v23 & 2) != 0 )
        {
          LODWORD(v108[1]) = *(_DWORD *)(v8 + 8);
          if ( LODWORD(v108[1]) <= 0x40 )
          {
            v108[0] = *(void **)v8;
            goto LABEL_20;
          }
          sub_2205510(v108);
          v29 = (unsigned int)v108[1];
        }
        else
        {
          v23 = ((unsigned __int8)v23 >> 2) & 0x1F;
          v29 = 8 * v23;
          LODWORD(v108[1]) = 8 * v23;
          if ( 8 * (int)v23 > 64 )
          {
            sub_2205470(v108, v8, 0);
            v29 = (unsigned int)v108[1];
          }
          else
          {
            v108[0] = (void *)v8;
          }
        }
        if ( v29 > 0x40 )
        {
          v23 = v29 - (unsigned int)sub_2206780(v108);
          if ( (unsigned int)v23 <= 0x40 && v22 >= *(_QWORD *)v108[0] )
          {
            v6 = 0;
            v30 = v91;
            operator delete[](v108[0]);
            goto LABEL_41;
          }
          if ( v108[0] )
            operator delete[](v108[0]);
LABEL_21:
          v11 = *(_QWORD *)(v20 + 32);
          if ( v22 >= *(unsigned int *)(v12 + 16) )
          {
            v32 = sub_C00A40(v91, v8, v23, v21, v19);
            if ( !(unsigned __int8)sub_C19980(a1, v20, v32) )
              return 0;
            v8 = (unsigned int)v22;
            sub_C0FCF0(v12, v22);
            v96 = 0;
            v12 = *(_QWORD *)(v12 + 8) + 56LL * (unsigned int)v22;
          }
          else
          {
            v96 = 0;
            v12 = *(_QWORD *)(v12 + 8) + 56 * v22;
          }
          goto LABEL_23;
        }
LABEL_20:
        if ( (void *)v22 >= v108[0] )
        {
          v6 = 0;
          v30 = v91;
          goto LABEL_41;
        }
        goto LABEL_21;
      }
    }
    if ( (v11 & 4) != 0
      || (v14 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL), (byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
    {
      if ( !sub_C11880(9u) )
      {
        v14 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_50;
      }
      v6 = 0;
      if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 8) == 0 )
      {
        sub_E33C10(a1, v91, 108, 0);
        return v6;
      }
      v76 = 0;
      if ( v97 )
      {
        v76 = *(_DWORD *)(v97 + 24);
        v77 = 2;
LABEL_108:
        v78 = (unsigned __int8 **)sub_E33C10(a1, v91, 2376, 1);
        v79 = v78;
        if ( v78 )
        {
          sub_C11320(v78, 9);
          sub_C11320(v79, v77);
          sub_AE9DF0(v79, v97, 0xAu);
        }
        v80 = (unsigned __int8 **)sub_E33DB0(a1, v76, 2506);
        if ( v80 )
          sub_C11320(v80, v77);
        return v6;
      }
      if ( v105.m128i_i64[0] )
      {
        if ( (v105.m128i_i8[0] & 3) != 0 )
        {
          if ( (v105.m128i_i8[0] & 3) == 1 && (v105.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v77 = 0;
            v76 = sub_C00A40(v105.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, v8, 0, v74, v75);
            goto LABEL_108;
          }
        }
        else if ( (v105.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          v97 = v105.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
          v76 = *(_DWORD *)((v105.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 24);
          v77 = 1;
          goto LABEL_108;
        }
      }
      v77 = 0;
      goto LABEL_108;
    }
LABEL_50:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
    {
      v8 = a1;
      if ( !sub_C118B0(v105.m128i_i64, a1, 9u) )
      {
        v8 = v91;
        if ( (unsigned __int8)sub_C287E0(a1, v91, 9, v11) )
          return 0;
      }
    }
    if ( v87 == (_DWORD)v10 )
    {
      v73 = sub_EEC8C0(v91);
      v6 = sub_C530A0(a1, v73, v95, (_DWORD *)v12, v11);
      if ( (_BYTE)v6 )
      {
        if ( v96 && (*(_BYTE *)(v96 + 68) & 1) != 0 )
          return (unsigned int)sub_C12D50(a1, v91, v12, v96);
        return v6;
      }
      return 0;
    }
    v15 = *v14;
    v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_14:
    v17 = (unsigned int)(v16 - 2);
    if ( (unsigned __int8)(v16 - 2) <= 4u )
      goto LABEL_15;
    if ( (_BYTE)v16 == 14 )
    {
      v58 = v11;
      v6 = 0;
      v30 = v91;
      v59 = *(_QWORD *)(v95 + 48);
      if ( *(_QWORD *)(v59 + 8 * v10) <= 1u )
      {
        if ( *(_BYTE *)(v15 + 16) != 14 )
        {
          v89 = v58;
          v15 = sub_F63050(v15, v8, v59, v17);
          v58 = v89;
        }
        sub_C0F760(v58, *(_QWORD *)(v15 + 32), 0);
        v60 = 2403;
        v61 = v91;
        goto LABEL_84;
      }
LABEL_41:
      if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) != 0 )
      {
        v31 = (unsigned __int8 **)sub_E33C10(a1, v30, 2370, 0);
        if ( v31 )
          sub_C11320(v31, 9);
        return v6;
      }
      v60 = 108;
      v61 = v30;
LABEL_84:
      sub_E33C10(a1, v61, v60, 0);
      return v6;
    }
LABEL_55:
    v33 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 57;
    if ( (unsigned int)v33 <= 1 || (v15 = sub_C10A30(v15, v8, v16, v33)) != 0 )
    {
      v93 = v12;
      v34 = *(unsigned int *)(v15 + 20);
      v6 = 0;
      v30 = v91;
      v35 = *(_QWORD *)(*(_QWORD *)(v95 + 48) + 8LL * (unsigned int)v10);
      if ( v35 != v34 )
      {
        if ( v35 <= v34 )
        {
          v81 = *(_QWORD *)(v15 + 32);
          v82 = (_DWORD *)(*(_QWORD *)(v93 + 8) + 56LL * (unsigned int)v35);
          v83 = sub_EEC8C0(v91);
          return (unsigned int)sub_C530A0(a1, v83, v95, v82, v81);
        }
        else
        {
          v36 = (unsigned __int8 **)sub_E33C90(a1, v91, 2381, 0);
          v37 = v36;
          if ( !v36 )
            return 0;
          sub_AE9DF0(v36, v35, 3u);
          sub_C11320(v37, 0);
          sub_AE9DF0(v37, v34, 3u);
        }
        return v6;
      }
      goto LABEL_41;
    }
    v44 = *(_QWORD *)(*(_QWORD *)(v95 + 48) + 8LL * (unsigned int)v10) & 0xFFFFFFFFFFFFFFF8LL;
    v96 = v44;
    if ( !v44 || (*(_BYTE *)(v44 + 28) & 0x7Fu) - 49 > 2 )
    {
      v62 = sub_F63270(*v14);
      v63 = *(_QWORD *)(*(_QWORD *)(v95 + 48) + 8LL * (unsigned int)v10) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v63
        && (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)(v95 + 48) + 8LL * (unsigned int)v10) & 0xFFFFFFFFFFFFFFF8LL) + 28)
          & 0x7Fu)
         - 59 >= 3 )
      {
        v63 = 0;
      }
      v64 = sub_C30BC0(v62, v63);
      v65 = *(_QWORD *)(v12 + 8);
      v12 = v65 + 56LL * v64;
      v8 = sub_A7A9D0(*(_QWORD *)(a1 + 16), v63, v66, v65, v67, v68);
      v96 = 0;
      v11 = sub_C0F760(v11, v8, 0);
      goto LABEL_23;
    }
    if ( (*(_BYTE *)(v44 + 68) & 2) != 0 )
    {
      v8 = a1;
      v98 = *(_QWORD *)(*(_QWORD *)(v95 + 48) + 8LL * (unsigned int)v10) & 0xFFFFFFFFFFFFFFF8LL;
      v45 = sub_C118B0(v105.m128i_i64, a1, 9u);
      v44 = v98;
      if ( !v45 )
      {
        v84 = (unsigned __int8 **)sub_E33C10(a1, v91, 2368, 1);
        v85 = v98;
        v86 = v84;
        if ( v84 )
        {
          sub_C11320(v84, 9);
          sub_AE9DF0(v86, v98, 0xAu);
          v85 = v98;
        }
        v6 = 0;
        sub_E33DB0(a1, *(unsigned int *)(v85 + 24), 103);
        return v6;
      }
    }
    v99 = v44;
    v46 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(*v14 + 8) & 0xFFFFFFFFFFFFFFF0LL), v8, v41, v42, v43);
    v51 = v99;
    if ( *(_BYTE *)(v46 + 73) >> 5 == 2 )
      break;
    v72 = sub_C1D4D0(v99, v8, v47, v48, v49, v50);
    v51 = v99;
    v12 = *(_QWORD *)(v12 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v12 + 16) + v72);
LABEL_93:
    v8 = *(_QWORD *)(v51 + 48);
    v102 = v51;
    v69 = sub_C0F760(v11, v8, (*(_BYTE *)(v51 + 68) & 2) != 0);
    v70 = v102;
    v11 = v69;
    v71 = *(_QWORD *)(v102 + 48);
    if ( (v71 & 4) != 0 )
    {
      v97 = v102;
    }
    else
    {
      if ( (byte_8[v71 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
        v70 = v97;
      v97 = v70;
    }
LABEL_23:
    v10 = (unsigned int)(v10 + 1);
    if ( !*(_DWORD *)v12 )
    {
      v92 = (_DWORD *)v12;
      v4 = (_DWORD *)v91;
      goto LABEL_25;
    }
  }
  v52 = *(_QWORD *)(v12 + 8);
  if ( v52 )
  {
    v53 = *(_QWORD *)(v12 + 8);
    if ( *(char *)(v52 + 29) < 0 )
    {
      v103 = v99;
      v100 = *(_QWORD *)(v12 + 8);
      v54 = sub_B72720(v100);
      v51 = v103;
      v52 = v100;
      v53 = v54;
    }
    v55 = v51;
    if ( *(char *)(v51 + 29) < 0 )
    {
      v104 = v52;
      v101 = v51;
      v55 = sub_B72720(v51);
      v52 = v104;
      v51 = v101;
    }
    if ( v55 == v53 )
    {
      v12 = *(_QWORD *)(v12 + 16);
      goto LABEL_93;
    }
  }
  v94 = v51;
  v6 = 0;
  v88 = v52;
  v56 = (unsigned __int8 **)sub_E33C10(a1, v91, 2367, 0);
  v57 = v56;
  if ( !v56 )
    return 0;
  sub_C11320(v56, 9);
  sub_AE9DF0(v57, v94, 0xAu);
  sub_C11320(v57, v88 == 0);
  sub_AE9DF0(v57, v88, 0xAu);
  return v6;
}
