unsigned __int64 __fastcall sub_F6B5C0(__int64 a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v4; // r9
  unsigned __int64 result; // rax
  void **v6; // r12
  __int64 v7; // rcx
  __int64 *v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // rax
  char *v13; // rsi
  unsigned __int64 v14; // rax
  void *v15; // r13
  void *v16; // r12
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r15
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rax
  int v47; // r8d
  int v48; // r8d
  int v49; // r10d
  unsigned int i; // edx
  _QWORD *v51; // rcx
  unsigned int v52; // edx
  __int64 v53; // r15
  int v54; // ecx
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // r10
  int v62; // eax
  int v63; // esi
  __int64 v64; // rcx
  __int64 v65; // rax
  const __m128i *v66; // rax
  unsigned __int64 v67; // r12
  unsigned __int64 v68; // r13
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 *v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // [rsp+8h] [rbp-420h]
  unsigned __int64 v75; // [rsp+8h] [rbp-420h]
  _QWORD *v76; // [rsp+10h] [rbp-418h]
  __int64 v77; // [rsp+18h] [rbp-410h] BYREF
  __m128 v78; // [rsp+20h] [rbp-408h] BYREF
  __int64 v79; // [rsp+30h] [rbp-3F8h] BYREF
  __m128 v80[2]; // [rsp+40h] [rbp-3E8h] BYREF
  _QWORD v81[3]; // [rsp+60h] [rbp-3C8h] BYREF
  char v82; // [rsp+78h] [rbp-3B0h]
  __int64 v83; // [rsp+80h] [rbp-3A8h]
  __int64 v84; // [rsp+88h] [rbp-3A0h]
  _QWORD v85[10]; // [rsp+90h] [rbp-398h] BYREF
  int v86; // [rsp+E0h] [rbp-348h]
  _QWORD *v87; // [rsp+E8h] [rbp-340h] BYREF
  __int64 v88; // [rsp+F0h] [rbp-338h]
  unsigned int v89; // [rsp+F8h] [rbp-330h]
  _QWORD *v90; // [rsp+100h] [rbp-328h]
  __int64 v91; // [rsp+108h] [rbp-320h]
  _QWORD v92[66]; // [rsp+110h] [rbp-318h] BYREF
  int v93; // [rsp+320h] [rbp-108h]
  __int64 v94; // [rsp+328h] [rbp-100h]
  __int64 v95; // [rsp+330h] [rbp-F8h]
  int v96; // [rsp+338h] [rbp-F0h]
  __int64 v97; // [rsp+340h] [rbp-E8h]
  __int64 v98; // [rsp+348h] [rbp-E0h]
  unsigned int v99; // [rsp+350h] [rbp-D8h]
  __int64 v100; // [rsp+358h] [rbp-D0h]
  __int64 v101; // [rsp+360h] [rbp-C8h]
  int v102; // [rsp+368h] [rbp-C0h]
  _QWORD *v103; // [rsp+370h] [rbp-B8h] BYREF
  __int64 v104; // [rsp+378h] [rbp-B0h]
  unsigned int v105; // [rsp+380h] [rbp-A8h]
  _QWORD *v106; // [rsp+388h] [rbp-A0h]
  __int64 v107; // [rsp+390h] [rbp-98h]
  int v108; // [rsp+398h] [rbp-90h]
  char v109; // [rsp+39Ch] [rbp-8Ch]
  _QWORD v110[6]; // [rsp+3A0h] [rbp-88h] BYREF
  __int64 v111; // [rsp+3D0h] [rbp-58h] BYREF

  v2 = (__int64 *)(a1 + 64);
  v77 = a2;
  if ( (unsigned __int8)sub_F5A6A0((__int64 *)(a1 + 64), &v77, v80) )
  {
    result = v80[0].m128_u64[0];
    v6 = (void **)(v80[0].m128_u64[0] + 8);
    if ( *(_QWORD *)(v80[0].m128_u64[0] + 8) )
      return result;
    goto LABEL_9;
  }
  v7 = *(unsigned int *)(a1 + 80);
  v8 = (__int64 *)v80[0].m128_u64[0];
  v9 = *(_DWORD *)(a1 + 72) + 1;
  v10 = (unsigned int)(4 * v9);
  v81[0] = v80[0].m128_u64[0];
  if ( (unsigned int)v10 >= 3 * (int)v7 )
  {
    sub_6C2400((__int64)v2, 2 * v7, v80[0].m128_i64[0], v7, v10, v4);
LABEL_85:
    sub_F5A6A0(v2, &v77, v81);
    v8 = (__int64 *)v81[0];
    v9 = *(_DWORD *)(a1 + 72) + 1;
    goto LABEL_6;
  }
  if ( (int)v7 - *(_DWORD *)(a1 + 76) - v9 <= (unsigned int)v7 >> 3 )
  {
    sub_6C2400((__int64)v2, v7, v80[0].m128_i64[0], v7, v10, v4);
    goto LABEL_85;
  }
LABEL_6:
  v11 = *v8 == -4096;
  *(_DWORD *)(a1 + 72) = v9;
  if ( !v11 )
    --*(_DWORD *)(a1 + 76);
  v12 = v77;
  v8[1] = 0;
  v6 = (void **)(v8 + 1);
  *v8 = v12;
LABEL_9:
  v81[0] = a1;
  v81[2] = 0;
  v81[1] = v77;
  v82 = 0;
  v83 = v77;
  v13 = (char *)v77;
  v84 = sub_B685F0(v77);
  sub_F5F3C0((__int64)v85, v13, 0, (__int64)v13);
  v85[8] = 0;
  v90 = v92;
  v91 = 0x4000000000LL;
  v106 = v110;
  v110[4] = &v111;
  v110[5] = 0x400000000LL;
  v85[9] = 0;
  v86 = 0;
  v87 = nullptr;
  v88 = 0;
  v89 = 0;
  v92[64] = 0;
  v92[65] = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = nullptr;
  v104 = 0;
  v105 = 0;
  v107 = 4;
  v108 = 0;
  v109 = 1;
  sub_F684E0((__int64)v81);
  if ( *(char *)(*(_QWORD *)(v84 + 2320) + 104LL) < 0 )
  {
    v66 = (const __m128i *)sub_22598C0();
    sub_F68BF0((__int64)v81, v66);
  }
  sub_F6B320((__int64 *)v80, (__int64)v81);
  v14 = v80[0].m128_u64[0];
  v80[0].m128_u64[0] = 0;
  v15 = *v6;
  *v6 = (void *)v14;
  if ( v15 )
  {
    sub_F59490((__int64)v15);
    operator delete(v15, 0x68u);
  }
  v16 = (void *)v80[0].m128_u64[0];
  if ( v80[0].m128_u64[0] )
  {
    sub_F59490(v80[0].m128_i64[0]);
    operator delete(v16, 0x68u);
  }
  v17 = v97;
  v18 = v97 + 24LL * v99;
  if ( !(_DWORD)v98 || v97 == v18 )
    goto LABEL_16;
  while ( 1 )
  {
    v53 = v17;
    v54 = *(_DWORD *)(v17 + 8);
    if ( *(_QWORD *)v17 )
      break;
    if ( v54 )
      goto LABEL_44;
LABEL_41:
    v17 += 24;
    if ( v18 == v17 )
      goto LABEL_16;
  }
  if ( !v54 && *(_QWORD *)v17 == -1 )
    goto LABEL_41;
LABEL_44:
  if ( v18 != v17 )
  {
    do
    {
      if ( !sub_F5ABA0((__int64 *)(a1 + 40), (__int64 *)v53, v80) )
      {
        v59 = sub_F60700(a1 + 40, (__int64 *)v53, v80[0].m128_i64[0], v56, v57, v58);
        *(_QWORD *)v59 = *(_QWORD *)v53;
        *(_DWORD *)(v59 + 8) = *(_DWORD *)(v53 + 8);
        *(_QWORD *)(v59 + 16) = *(_QWORD *)(v53 + 16);
      }
      v55 = v53 + 24;
      if ( v18 == v53 + 24 )
        break;
      while ( 1 )
      {
        v53 = v55;
        if ( *(_QWORD *)v55 )
        {
          if ( *(_QWORD *)v55 != -1 )
            break;
        }
        if ( *(_DWORD *)(v55 + 8) )
          break;
        v55 += 24;
        if ( v18 == v55 )
          goto LABEL_16;
      }
    }
    while ( v18 != v55 );
  }
LABEL_16:
  sub_F5B8E0(v80, &v103[10 * v105], &v103[10 * v105], (__int64)&v103, 1);
  v74 = v80[0].m128_u64[0];
  if ( (_DWORD)v104 )
    sub_F5B8E0(v80, v103, &v103[10 * v105], (__int64)&v103, 0);
  else
    sub_F5B8E0(v80, &v103[10 * v105], &v103[10 * v105], (__int64)&v103, 1);
  v23 = v80[0].m128_u64[1];
  v24 = v80[0].m128_u64[0];
  if ( v80[0].m128_u64[0] != v74 )
  {
    while ( 2 )
    {
      if ( (unsigned __int8)sub_F5A900((__int64 *)(a1 + 8), (__int64 *)v24, &v78) )
      {
        sub_F5B6B0(v80, v78.m128_u64[0], (_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL * *(unsigned int *)(a1 + 24)), a1 + 8, 1);
        v19 = v24 + 80;
        if ( v23 != v24 + 80 )
          goto LABEL_21;
LABEL_60:
        v24 = v23;
        goto LABEL_27;
      }
      v60 = *(unsigned int *)(a1 + 24);
      v61 = (_QWORD *)v78.m128_u64[0];
      v62 = *(_DWORD *)(a1 + 16) + 1;
      v63 = 2 * v60;
      v64 = (unsigned int)(3 * v60);
      v80[0].m128_u64[0] = v78.m128_u64[0];
      if ( 4 * v62 < (unsigned int)v64 )
      {
        v64 = (unsigned int)(v60 - *(_DWORD *)(a1 + 20) - v62);
        if ( (unsigned int)v64 > (unsigned int)v60 >> 3 )
        {
LABEL_55:
          v11 = *v61 == -4096;
          *(_DWORD *)(a1 + 16) = v62;
          if ( !v11 )
            --*(_DWORD *)(a1 + 20);
          *v61 = *(_QWORD *)v24;
          v61[1] = v61 + 3;
          v61[2] = 0x100000000LL;
          if ( *(_DWORD *)(v24 + 16) )
          {
            v76 = v61;
            sub_F5AEF0(v61 + 1, (__int64 *)(v24 + 8));
            v61 = v76;
          }
          v65 = *(unsigned int *)(a1 + 24);
          v78.m128_u64[0] = (unsigned __int64)v61;
          sub_F5B6B0(v80, v61, (_QWORD *)(*(_QWORD *)(a1 + 8) + 80 * v65), a1 + 8, 1);
          v19 = v24 + 80;
          if ( v23 == v24 + 80 )
            goto LABEL_60;
LABEL_21:
          v27 = *(_QWORD *)(v24 + 80);
          if ( v27 == -8192 || v27 == -4096 )
          {
            v28 = (__int64 *)(v24 + 160);
            do
            {
              v24 = (unsigned __int64)v28;
              if ( (__int64 *)v23 == v28 )
                break;
              v19 = *v28;
              v28 += 10;
            }
            while ( v19 == -4096 || v19 == -8192 );
          }
          else
          {
            v24 = v19;
          }
LABEL_27:
          if ( v74 == v24 )
            goto LABEL_28;
          continue;
        }
        v63 = v60;
      }
      break;
    }
    sub_F5FC90(a1 + 8, v63, v60, v64, v25, v26);
    sub_F5A900((__int64 *)(a1 + 8), (__int64 *)v24, v80);
    v61 = (_QWORD *)v80[0].m128_u64[0];
    v62 = *(_DWORD *)(a1 + 16) + 1;
    goto LABEL_55;
  }
LABEL_28:
  v29 = v77;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v77 + 104) + 96LL), *(_QWORD *)(v77 + 104), v19, v20, v21, v22);
  v33 = *(unsigned int *)(*(_QWORD *)(v29 + 128) + 20LL);
  if ( (_DWORD)v33 )
  {
    v34 = v77;
    v35 = *(_QWORD *)(v77 + 104);
    sub_6E4DB0((__int64 *)(v35 + 96), v35, v30, v33, v31, v32);
    v39 = *(_QWORD *)(v34 + 128);
    if ( (*(_BYTE *)(v39 + 32) & 1) != 0 )
      v40 = sub_B72C80(v39);
    else
      v40 = *(_QWORD *)(v39 + 32);
    v41 = sub_F55F20(*(__int64 **)(v40 + 16), v35, v36, v37, v38);
    v46 = sub_F3F530(*(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0LL), v35, v42, v43, v44, v45);
    v47 = *(_DWORD *)(a1 + 104);
    if ( v47 )
    {
      v48 = v47 - 1;
      v49 = 1;
      for ( i = v48
              & (((0xBF58476D1CE4E5B9LL
                 * (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4)
                  | ((unsigned __int64)(((unsigned int)v77 >> 9) ^ ((unsigned int)v77 >> 4)) << 32))) >> 31)
               ^ (484763065 * (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4)))); ; i = v48 & v52 )
      {
        v51 = (_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL * i);
        if ( v77 == *v51 && v46 == (_QWORD *)v51[1] )
          break;
        if ( *v51 == -4096 && v51[1] == -4096 )
          goto LABEL_69;
        v52 = v49 + i;
        ++v49;
      }
      return sub_F56E50((__int64)v81);
    }
LABEL_69:
    if ( (_DWORD)v88 )
      sub_F5BE50(v80, v87, &v87[2 * v89], (__int64)&v87, 0);
    else
      sub_F5BE50(v80, &v87[2 * v89], &v87[2 * v89], (__int64)&v87, 1);
    v67 = v80[0].m128_u64[1];
    v68 = v80[0].m128_u64[0];
    sub_F5BE50(v80, &v87[2 * v89], &v87[2 * v89], (__int64)&v87, 1);
    v75 = v80[0].m128_u64[0];
    if ( v68 == v80[0].m128_u64[0] )
      return sub_F56E50((__int64)v81);
    v69 = a1 + 88;
    while ( 1 )
    {
LABEL_73:
      v70 = *(_QWORD *)(v68 + 8);
      v78 = _mm_loadh_ps((const double *)v68);
      v79 = v70;
      sub_F633D0((__m128i *)v80, v69, (__int64 *)&v78, &v79);
      if ( v68 + 16 == v67 )
        goto LABEL_82;
      v71 = *(_QWORD *)(v68 + 16);
      if ( v71 == -8192 || v71 == -4096 )
        break;
      v68 += 16LL;
LABEL_80:
      if ( v68 == v75 )
        return sub_F56E50((__int64)v81);
    }
    v72 = (__int64 *)(v68 + 32);
    while ( 1 )
    {
      v68 = (unsigned __int64)v72;
      if ( v72 == (__int64 *)v67 )
        break;
      v73 = *v72;
      v72 += 2;
      if ( v73 != -8192 && v73 != -4096 )
        goto LABEL_80;
    }
LABEL_82:
    v68 = v67;
    if ( v67 == v75 )
      return sub_F56E50((__int64)v81);
    goto LABEL_73;
  }
  return sub_F56E50((__int64)v81);
}

