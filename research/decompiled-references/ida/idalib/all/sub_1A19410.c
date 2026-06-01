__int64 __fastcall sub_1A19410(_BYTE *a1, unsigned __int32 a2, __int64 a3, __m128 a4, __m128 a5)
{
  __int64 v8; // r9
  __int64 v10; // rax
  _BYTE *v11; // r13
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rsi
  _QWORD *v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 i; // rbp
  int v20; // eax
  __int64 v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rsi
  char v25; // al
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  _DWORD *v32; // rdi
  int v33; // eax
  __int64 v34; // rax
  unsigned int v35; // r12d
  __int64 v36; // rbx
  __int64 *v37; // rsi
  unsigned __int64 v38; // rax
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r14
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r14
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  char v57; // cl
  __int64 v58; // rax
  int v59; // esi
  int v60; // eax
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned int *v70; // rdx
  size_t v71; // rax
  const char *v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int8 v77; // al
  __int64 v78; // rsi
  __int64 *v79; // rsi
  unsigned __int64 v80; // rax
  __int64 v81; // [rsp+0h] [rbp-2108h]
  unsigned __int64 v82; // [rsp+8h] [rbp-2100h]
  unsigned __int8 v83; // [rsp+8h] [rbp-2100h]
  unsigned __int64 v84; // [rsp+10h] [rbp-20F8h]
  __int64 v85; // [rsp+10h] [rbp-20F8h]
  unsigned __int64 v86; // [rsp+18h] [rbp-20F0h]
  int v87; // [rsp+2Ch] [rbp-20DCh] BYREF
  _BYTE *v88; // [rsp+30h] [rbp-20D8h] BYREF
  __int64 *v89; // [rsp+38h] [rbp-20D0h] BYREF
  __m128i v90; // [rsp+40h] [rbp-20C8h] BYREF
  _BYTE v91[64]; // [rsp+50h] [rbp-20B8h] BYREF
  __m128i v92; // [rsp+90h] [rbp-2078h] BYREF
  char v93; // [rsp+A1h] [rbp-2067h]
  _DWORD v94[48]; // [rsp+120h] [rbp-1FE8h] BYREF
  __int64 v95; // [rsp+1E0h] [rbp-1F28h] BYREF

  v8 = a2;
  v10 = *(_QWORD *)a1;
  v90.m128i_i32[1] = a2;
  v11 = v91;
  v90.m128i_i32[2] = a2;
  v90.m128i_i32[3] = a2;
  v12 = *(_QWORD **)(v10 + 248);
  v90.m128i_i16[0] = 516;
  sub_C0B340((__int64)v91, v12, a2, 0, 0, v8);
  v14 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 0x10) == 0 )
  {
LABEL_2:
    sub_1A19220((__int64)v94, v14, a3, &v90, 0, 0, a4, a5, 0, 1u);
    v15 = nullptr;
    v16 = 0;
    goto LABEL_3;
  }
  for ( i = *(_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        ;
        i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    v20 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned __int8)(v20 - 2) > 4u )
      goto LABEL_15;
    v21 = sub_F63050(i, v14, (unsigned int)(v20 - 2), v13);
    if ( !v21 )
      break;
    i = v21;
  }
  LOBYTE(v20) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_15:
  v14 = *(_QWORD *)a1;
  if ( (_BYTE)v20 != 48 )
    goto LABEL_2;
  v22 = *(_QWORD **)(v14 + 248);
  if ( !a1[9] )
  {
    v11 = (_BYTE *)sub_EEE9A0(64, v22, 8u);
    sub_C0B340((__int64)v11, *(_QWORD **)(*(_QWORD *)a1 + 248LL), a2, 0, 0, a2);
    v22 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
  }
  v23 = v22[2329];
  v90.m128i_i32[1] = a2;
  v88 = v11;
  *((_QWORD *)v11 + 1) = v23;
  v24 = *(_QWORD *)a1;
  v90.m128i_i16[0] = 2;
  v90.m128i_i32[2] = a2;
  v90.m128i_i32[3] = a2;
  sub_1A19220((__int64)v94, v24, a3, &v90, (__int64)&v88, 1, a4, a5, 0, 1u);
  v15 = &v88;
  v16 = 1;
  if ( !v94[0] )
  {
    if ( v94[46] != 38 )
      goto LABEL_77;
    v25 = sub_142E840(*(_QWORD *)(*(_QWORD *)a1 + 240LL), 0x1335186u);
    v15 = &v88;
    v16 = 1;
    if ( v25 )
    {
      v26 = *(_QWORD *)a1;
      sub_1BF27B0(&v95, *(_QWORD *)a1, v90.m128i_u32[1], &v89);
      v81 = *v89;
      v27 = *(_QWORD *)(sub_B8C1B0(*v89 + 72) + 16);
      if ( (v27 & 4) != 0 )
        v28 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v28 )
        v28 -= 64LL;
      v82 = v28;
      if ( !(unsigned int)sub_B770E0(v81, v26) )
      {
        v56 = sub_B709C0(v81);
        v57 = *(_BYTE *)(v56 + 87);
        v58 = (v57 & 0x40) != 0 ? *(_QWORD *)(v56 + 16LL * ((v57 & 0x20) != 0) + 176) : (unsigned __int64)v57 >> 63;
        if ( (v58 & 3) == 1 )
        {
          if ( *(_QWORD *)(v82 + 40) )
          {
            v59 = *(_DWORD *)(v81 + 24);
            if ( v59 )
            {
              v60 = sub_1021680(*(_QWORD *)(*(_QWORD *)a1 + 272LL), v59);
              if ( v60 )
              {
                if ( v60 != 3 )
                {
                  v61 = v82;
                  v62 = *(_QWORD *)(v82 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v82 + 16) & 4) != 0 )
                    v62 = *(_QWORD *)v62;
                  if ( (*(_BYTE *)(v62 + 8) & 0x7F) == 0x18 )
                  {
                    v84 = v62 - 48;
                    if ( v62 != 48 )
                    {
                      do
                      {
                        v86 = v61;
                        v63 = sub_183D350(*(_QWORD *)a1);
                        v85 = v84 + 48;
                        v83 = sub_B92160(v63 + 48, v85, v64, v85, v65, v66);
                        v67 = sub_B72690(v85);
                        v61 = v86;
                        if ( (*(_BYTE *)(v67 + 8) & 0x7F) != 0x18 )
                          break;
                        v84 = v67 - 48;
                      }
                      while ( !(v83 | (v67 == 48)) );
                      if ( v83 )
                      {
                        v68 = *(_QWORD *)(v86 + 40);
                        if ( (v68 & 7) != 0 || (v69 = v68 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                        {
                          v71 = j__strlen(&byte_22F0C30);
                          v72 = &byte_22F0C30;
                        }
                        else
                        {
                          v70 = *(unsigned int **)(v69 + 16);
                          v71 = *v70;
                          v72 = (const char *)(v70 + 4);
                        }
                        v92.m128i_i64[0] = (__int64)v72;
                        v92.m128i_i64[1] = v71;
                        v93 = 0;
                        LOBYTE(v87) = 1;
                        v73 = sub_1A0D9D0(
                                (__int64)&v92,
                                (char *)&v87,
                                "basic_string",
                                12,
                                "deque",
                                5,
                                "forward_list",
                                12);
                        LOBYTE(v87) = 1;
                        v74 = sub_141BA00(v73, (char *)&v87, "list", 4, "map", 3, "multimap", 8, "multiset", 8);
                        LOBYTE(v87) = 1;
                        v75 = sub_141BA00(v74, (char *)&v87, "priority_queue", 14, "queue", 5, "set", 3, "stack", 5);
                        LOBYTE(v87) = 1;
                        v76 = sub_1A0D9D0(v75, (char *)&v87, "unordered_map", 13, "unordered_set", 13, "vector", 6);
                        if ( *(_BYTE *)(v76 + 17) )
                        {
                          if ( *(_BYTE *)(v76 + 16) )
                          {
                            v77 = a1[10];
                            v78 = *(_QWORD *)a1;
                            v92.m128i_i16[0] = 516;
                            v92.m128i_i32[1] = a2;
                            v92.m128i_i32[2] = a2;
                            v92.m128i_i32[3] = a2;
                            sub_1A172F0(v94, v78, a3, &v92, 0, 0, a4, a5, 0, v77);
                            if ( !a1[9] )
                            {
                              sub_168B9F0(
                                (__int64)&v92,
                                (__int64 *)(*(_QWORD *)a1 + 8LL),
                                *(_DWORD *)(v81 + 24),
                                0x1B98u,
                                0);
                              sub_15F7200(&v92);
                              if ( *(_DWORD *)a3 == 6 )
                              {
                                v79 = (__int64 *)(*(_QWORD *)a1 + 8LL);
                                v80 = sub_1A0B620(a3);
                                sub_168B9F0((__int64)&v92, v79, *(_DWORD *)(v80 + 24), 0x1935u, 0);
                                sub_15F7200(&v92);
                              }
                              else if ( *(_DWORD *)a3 == 7 )
                              {
                                sub_168B9F0((__int64)&v92, (__int64 *)(*(_QWORD *)a1 + 8LL), a2, 0x1935u, 0);
                                sub_15F7200(&v92);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v15 = &v88;
      v16 = 1;
    }
LABEL_3:
    if ( !v94[0] )
    {
LABEL_77:
      if ( a1[9] )
      {
LABEL_8:
        a1[8] = 1;
        v17 = 1;
        goto LABEL_6;
      }
      v29 = *(_QWORD *)a1;
      sub_1A22930(v94, *(_QWORD *)a1, a3, &v90, v15, v16);
      if ( *(_DWORD *)a3 == 6 )
      {
        v37 = (__int64 *)(*(_QWORD *)a1 + 8LL);
        v38 = sub_1A0B620(a3);
        sub_168B9F0((__int64)&v92, v37, *(_DWORD *)(v38 + 24), 0x1795u, 0);
        v87 = 1;
        v39 = sub_1587D10((__int64)&v92, &v87);
        v40 = sub_1A0B620(a3);
        v41 = v40;
        if ( *(_BYTE *)(v39 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v39 + 32), v40, 0xAu);
        }
        else if ( *(_BYTE *)(v39 + 132) )
        {
          v46 = sub_168B9E0((_QWORD *)v39);
          v47 = *(_QWORD *)(v39 + 16);
          if ( v47 )
            v47 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v47 + 32LL))(*(_QWORD *)(v39 + 16));
          v89 = (__int64 *)v47;
          v48 = sub_1587BC0(v46, (__int64 *)&v89, v42, v43, v44, v45);
          sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * *(unsigned int *)(v39 + 128) + 8), v41, 0xAu);
        }
      }
      else
      {
        if ( *(_DWORD *)a3 != 7 )
          goto LABEL_8;
        v32 = *(_DWORD **)(a3 + 8);
        if ( v32 && *v32 == 8 && sub_1A0A650((__int64)v32, v29, v30, v31) )
        {
          sub_168B9F0((__int64)&v92, (__int64 *)(*(_QWORD *)a1 + 8LL), a2, 0x1795u, 0);
          v33 = 2;
        }
        else
        {
          sub_168B9F0((__int64)&v92, (__int64 *)(*(_QWORD *)a1 + 8LL), a2, 0x1795u, 0);
          v33 = 0;
        }
        v87 = v33;
        v34 = sub_1587D10((__int64)&v92, &v87);
        v35 = *(_DWORD *)(a3 + 32);
        v36 = v34;
        if ( *(_BYTE *)(v34 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v34 + 32), v35, 3u);
        }
        else if ( *(_BYTE *)(v34 + 132) )
        {
          v53 = sub_168B9E0((_QWORD *)v34);
          v54 = *(_QWORD *)(v36 + 16);
          if ( v54 )
            v54 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v54 + 32LL))(*(_QWORD *)(v36 + 16));
          v89 = (__int64 *)v54;
          v55 = sub_1587BC0(v53, (__int64 *)&v89, v49, v50, v51, v52);
          sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * *(unsigned int *)(v36 + 128) + 8), v35, 3u);
        }
      }
      sub_15F7200(&v92);
      goto LABEL_8;
    }
  }
  v17 = 0;
  if ( !a1[9] )
    v17 = sub_1A1D600((unsigned int)v94, *(_QWORD *)a1, a3, (unsigned int)&v90, (_DWORD)v15, v16, 0);
LABEL_6:
  sub_1A0BB10((__int64)v94);
  return v17;
}
