__int64 __fastcall sub_6B9380(_QWORD *a1, __int64 *a2, unsigned __int8 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 i; // rax
  unsigned int v11; // edx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 v15; // r12
  char v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax
  bool v19; // cl
  _DWORD *v20; // rax
  __int64 v21; // r14
  char v22; // cl
  int v23; // eax
  char v24; // cl
  _DWORD *v25; // rax
  __int64 v26; // rdi
  __m128 v27; // xmm0
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r14
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  char v34; // al
  __int64 v35; // rcx
  unsigned int v36; // ebx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // al
  char v43; // al
  _DWORD *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r9
  __int64 *v47; // rdx
  __int64 v48; // r11
  __int64 v49; // rsi
  unsigned int v50; // eax
  __int64 *v51; // rsi
  unsigned int v52; // eax
  unsigned int v53; // r8d
  size_t v54; // rsi
  _DWORD *v55; // rax
  __int64 v56; // rsi
  void *v57; // rdi
  int v58; // esi
  int v59; // edx
  __int64 *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // r12
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rax
  char v72; // al
  __int64 v73; // r14
  __int64 v74; // rax
  char v75; // al
  char **exception; // rbp
  unsigned int v77; // [rsp+0h] [rbp-108h]
  char v78; // [rsp+4h] [rbp-104h]
  __int64 v79; // [rsp+8h] [rbp-100h]
  char v80; // [rsp+8h] [rbp-100h]
  __int64 v81; // [rsp+8h] [rbp-100h]
  char v82; // [rsp+8h] [rbp-100h]
  __m128 *v83; // [rsp+10h] [rbp-F8h]
  __int64 *v84; // [rsp+18h] [rbp-F0h]
  __int64 v85; // [rsp+20h] [rbp-E8h]
  __int64 v86; // [rsp+28h] [rbp-E0h]
  __int64 v87; // [rsp+30h] [rbp-D8h]
  __int64 v88; // [rsp+38h] [rbp-D0h]
  __int64 v89; // [rsp+40h] [rbp-C8h]
  __int64 v90; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v91; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v92; // [rsp+58h] [rbp-B0h]
  __int64 v93; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v94; // [rsp+68h] [rbp-A0h]
  __m128 v95; // [rsp+70h] [rbp-98h] BYREF
  int v96; // [rsp+80h] [rbp-88h]
  __int64 v97; // [rsp+88h] [rbp-80h]
  __m128 v98; // [rsp+90h] [rbp-78h] BYREF
  __int64 v99; // [rsp+A0h] [rbp-68h]
  void *v100; // [rsp+A8h] [rbp-60h]
  __int64 v101; // [rsp+B8h] [rbp-50h]
  void *ptr; // [rsp+C0h] [rbp-48h]

  v5 = a1[17];
  if ( v5 )
    v77 = *(_DWORD *)(v5 - 4);
  else
    v77 = 0;
  v6 = *a1;
  v7 = *a2;
  v91 = 0;
  v92 = v6;
  LODWORD(v86) = a3;
  v8 = sub_6B4A50((__int64)a1, v7, a3);
  if ( v8 )
    goto LABEL_37;
  v9 = *a2;
  v98.m128_u64[0] = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v83 = &v98;
  sub_6ACBA0(a1 + 14, &v98);
LABEL_7:
  while ( 2 )
  {
    for ( i = a1[17]; ; i = a1[17] )
    {
      while ( 1 )
      {
        if ( !i )
        {
LABEL_36:
          v8 = sub_6B4A50((__int64)a1, *a2, v86);
          if ( !v8 )
          {
LABEL_38:
            sub_6A99C0(*a2, a2[1]);
            *a2 = v8;
            v36 = 1;
            goto LABEL_39;
          }
LABEL_37:
          ++*(_DWORD *)(v8 + 8);
          goto LABEL_38;
        }
        while ( 1 )
        {
          v11 = *(_DWORD *)(i - 4);
          if ( v77 >= v11 )
            goto LABEL_36;
          v12 = *(_QWORD *)(i + 8LL * (v11 - 1));
          v13 = a1[18];
          v14 = 0xFFFFFFFFLL;
          if ( v13 )
            v14 = (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
          v15 = *(_BYTE *)(v13 + v14);
          v16 = (**(__int64 (__fastcall ***)(_QWORD, __int64))a1[1])(a1[1], v12);
          if ( !v16 )
          {
            --*(_DWORD *)(a1[17] - 4LL);
            --*(_DWORD *)(a1[18] - 4LL);
            if ( !v15 )
              goto LABEL_14;
            v17 = v12;
            goto LABEL_15;
          }
          if ( *(_WORD *)(v12 + 4) )
            goto LABEL_87;
          if ( v15 )
            break;
          v18 = sub_6A98D0((_QWORD *)a1[10], *((_DWORD *)a1 + 22), v12);
          v19 = v18 != nullptr;
          if ( !v18 )
            goto LABEL_19;
LABEL_42:
          i = a1[17];
          v39 = a1[18];
          --*(_DWORD *)(i - 4);
          --*(_DWORD *)(v39 - 4);
        }
        v38 = sub_6A98D0((_QWORD *)a1[7], *((_DWORD *)a1 + 16), v12);
        v19 = v38 != nullptr;
        if ( v38 )
          goto LABEL_42;
LABEL_19:
        v78 = v15;
        v20 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
        if ( !v20 || *v20 )
        {
LABEL_21:
          LOBYTE(v79) = v19;
          v93 = v12;
          v99 = 0;
          v98.m128_u64[0] = (unsigned __int64)&off_1C62200;
          v100 = nullptr;
          v101 = 0;
          ptr = nullptr;
          v90 = 0;
          sub_6ACBA0(&v90, &v93);
          v21 = v90;
          v22 = v79;
          if ( v90 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v23 = *(_DWORD *)(v21 - 4);
                LOBYTE(v79) = v22;
                if ( !v23 )
                {
                  v98.m128_u64[0] = (unsigned __int64)&off_1C62200;
                  if ( !ptr )
                  {
                    if ( v100 )
                      sub_186B220(v100);
                    sub_186B220((void *)(v21 - 8));
                    goto LABEL_60;
                  }
                  sub_186B220(ptr);
                  v24 = v79;
                  if ( v100 )
                  {
                    sub_186B220(v100);
                    v24 = v79;
                  }
                  goto LABEL_26;
                }
                v40 = (unsigned int)(v23 - 1);
                v93 = *(_QWORD *)(v21 + 8 * v40);
                v41 = v93;
                *(_DWORD *)(v21 - 4) = v40;
                v85 = v41;
                v42 = sub_15D37A0(v83, v41);
                v22 = v79;
                if ( !v42 )
                {
                  sub_15D0A90(v83, v85, 1);
                  v43 = (**(__int64 (__fastcall ***)(_QWORD, __int64))a1[3])(a1[3], v85);
                  v22 = v79;
                  if ( v43 )
                  {
                    if ( !*(_WORD *)(v85 + 4) )
                      break;
                  }
                }
              }
              v44 = *(_DWORD **)(*(_QWORD *)(v85 + 16) + 24LL);
              if ( v44 )
              {
                if ( !*v44 && v44[1] == 4 )
                  break;
              }
              v45 = *(unsigned int *)(v85 + 24);
              if ( (_DWORD)v45 )
              {
                v46 = *(_QWORD *)(v85 + 32);
                v47 = (__int64 *)v85;
                v48 = v85 + 8 * v45;
                while ( 1 )
                {
                  v52 = *(_DWORD *)(v21 - 4);
                  if ( v52 == *(_DWORD *)(v21 - 8) )
                  {
                    v53 = (3 * v52 + 1) >> 1;
                    v54 = 8 * v53 + 8;
                    if ( 8 * v52 + 8 >= (unsigned int)v54 || v52 >= v53 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_6A99E0((__int64 *)&v95, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, &v95);
                      sub_233E40((__int64)&v95);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v88 = v46;
                    v87 = v48;
                    HIDWORD(v86) = (3 * v52 + 1) >> 1;
                    v84 = v47;
                    v80 = v22;
                    v55 = (_DWORD *)sub_186B300((void *)(v21 - 8), v54);
                    v56 = (unsigned int)v55[1];
                    v21 = (__int64)(v55 + 2);
                    v22 = v80;
                    v47 = v84;
                    v48 = v87;
                    v46 = v88;
                    *v55 = HIDWORD(v86);
                    v50 = v56 + 1;
                    v51 = (__int64 *)(v21 + 8 * v56);
                  }
                  else
                  {
                    v49 = v52;
                    v50 = v52 + 1;
                    v51 = (__int64 *)(v21 + 8 * v49);
                  }
                  ++v47;
                  *v51 = v46;
                  *(_DWORD *)(v21 - 4) = v50;
                  if ( v47 == (__int64 *)v48 )
                    break;
                  v46 = v47[4];
                }
              }
            }
            v82 = v43;
            v98.m128_u64[0] = (unsigned __int64)&off_1C62200;
            if ( !ptr )
            {
              if ( v100 )
                sub_186B220(v100);
              sub_186B220((void *)(v21 - 8));
              goto LABEL_27;
            }
            sub_186B220(ptr);
            v75 = v82;
            if ( v100 )
            {
              sub_186B220(v100);
              v75 = v82;
            }
            v24 = v75;
LABEL_26:
            LOBYTE(v79) = v24;
            sub_186B220((void *)(v21 - 8));
            if ( !(_BYTE)v79 )
              goto LABEL_60;
LABEL_27:
            if ( *(_WORD *)(v85 + 4)
              || (v25 = *(_DWORD **)(*(_QWORD *)(v85 + 16) + 24LL)) == nullptr
              || *v25
              || v25[1] != 4 )
            {
              sub_1872CE0("");
              sub_1873130(114, 364);
            }
            v70 = *(_QWORD *)(v85 + 40);
            v81 = *(_QWORD *)(v85 + 48);
            v26 = a1[6];
            v27 = _mm_loadh_ps((const double *)a1 + 2);
            v28 = *(_DWORD *)(v12 + 8) + 2;
            v95 = v27;
            *(_DWORD *)(v12 + 8) = v28;
            v98 = v27;
            sub_14355E0(v26, v85, v70, &v95);
            sub_14355E0(a1[6], v85, v81, v83);
            v29 = sub_15E1BF0(a1[2]);
            v30 = v29;
            if ( v29 )
              ++*(_DWORD *)(v29 + 8);
            sub_6A99C0(v91, v92);
            v91 = v30;
            sub_14B9B80(a1 + 4, &v91);
            v79 = v91;
            sub_6A99C0(v98.m128_i64[0], v98.m128_i64[1]);
            sub_6A99C0(v95.m128_i64[0], v95.m128_i64[1]);
            if ( v12 == v79 )
              goto LABEL_60;
            goto LABEL_34;
          }
          v98.m128_u64[0] = (unsigned __int64)&off_1C62200;
          if ( ptr )
          {
            sub_186B220(ptr);
            v57 = v100;
            if ( v100 )
              goto LABEL_59;
          }
          else
          {
            v57 = v100;
            if ( v100 )
LABEL_59:
              sub_186B220(v57);
          }
LABEL_60:
          --*(_DWORD *)(a1[17] - 4LL);
          --*(_DWORD *)(a1[18] - 4LL);
          if ( v15 )
            v17 = v12;
          else
LABEL_14:
            v17 = sub_15EC2C0(*a1, v12);
LABEL_15:
          sub_6B8770((__int64)a1, v12, v15, v17);
          goto LABEL_7;
        }
        v58 = v20[1];
        HIDWORD(v86) = v58;
        if ( (unsigned int)(v58 - 5) > 1 )
          break;
        sub_2FCDE0(a1 + 15);
        v60 = (__int64 *)(v12 + 32);
        v87 = *a1;
        v61 = 8LL * *(unsigned int *)(v12 + 24);
        v84 = (__int64 *)(v12 + 32 + v61);
        if ( !v61 )
          goto LABEL_79;
        do
        {
          v79 = (__int64)v60;
          v63 = sub_6B4A50((__int64)a1, *v60, v15);
          v62 = v79;
          if ( v63 )
          {
            v98.m128_u64[0] = v63;
            ++*(_DWORD *)(v63 + 8);
            sub_6ACBA0(a1 + 16, v83);
            v62 = v79;
          }
          else
          {
            v16 = 0;
          }
          v60 = (__int64 *)(v62 + 8);
        }
        while ( v84 != v60 );
        if ( !v16 )
        {
          v68 = 0;
        }
        else
        {
LABEL_79:
          v64 = a1[15];
          v65 = a1[16];
          --*(_DWORD *)(a1[17] - 4LL);
          --*(_DWORD *)(a1[18] - 4LL);
          if ( v15 == (v58 == 5) )
          {
            if ( v65 )
              v69 = *(unsigned int *)(v65 - 4);
            else
              v69 = 0;
            v67 = sub_15EC1C0(v64, v69);
          }
          else
          {
            if ( v65 )
              v66 = *(unsigned int *)(v65 - 4);
            else
              v66 = 0;
            v67 = sub_15EC240(v64, v66);
          }
          v68 = v67;
          if ( v67 )
            ++*(_DWORD *)(v67 + 8);
          sub_6B8770((__int64)a1, v12, v78, v67);
        }
        sub_6A99C0(v68, v87);
        i = a1[17];
      }
      if ( v58 == 8 )
      {
        v71 = sub_6B4A50((__int64)a1, *(_QWORD *)(v12 + 32), v15 ^ 1u);
        if ( v71 )
          sub_6B8770((__int64)a1, v12, v15, v71);
        goto LABEL_7;
      }
      if ( v58 == 4 )
      {
        sub_6B87D0(a1, v12, v15);
        goto LABEL_7;
      }
      if ( v58 != 2 )
        goto LABEL_67;
      LOBYTE(v79) = v19;
      v72 = sub_15D2CB0(*a1, *(_QWORD *)(v12 + 32));
      v19 = v79;
      if ( v72 )
      {
        sub_6B8C90((__int64)a1, v12, v15);
        goto LABEL_7;
      }
      if ( *(_WORD *)(v12 + 4) )
        goto LABEL_21;
      v20 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
      if ( !v20 || *v20 )
        goto LABEL_21;
LABEL_67:
      v59 = v20[1];
      if ( v59 == 7 )
      {
        sub_6B8C90((__int64)a1, v12, v15 ^ 1);
        goto LABEL_7;
      }
      if ( v59 != 9 )
        break;
      v73 = sub_6B4A50((__int64)a1, *(_QWORD *)(v12 + 32), v15 ^ 1u);
      v74 = sub_6B4A50((__int64)a1, *(_QWORD *)(v12 + 40), v15);
      if ( !v73 || !v74 )
        goto LABEL_7;
      v93 = 0;
      v94 = *a1;
      if ( v15 )
      {
        v98.m128_u64[0] = v73;
        v98.m128_u64[1] = v74;
        sub_6B0370(a1 + 19, 2, v83, &v93);
      }
      else
      {
        v95.m128_u64[0] = v73;
        v95.m128_u64[1] = v74;
        sub_6B02D0(a1 + 19, 2, &v95, &v93);
      }
      sub_6B8770((__int64)a1, v12, v15, v93);
      sub_6A99C0(v93, v94);
    }
    if ( v20[1] != 4 )
      goto LABEL_21;
    ++*(_DWORD *)(v12 + 8);
    sub_6A99C0(v91, v92);
    v91 = v12;
LABEL_34:
    v34 = sub_6B9380(
            (_DWORD)a1,
            (unsigned int)&v91,
            v15,
            v31,
            v32,
            v33,
            v77,
            v79,
            (_DWORD)v83,
            (_DWORD)v84,
            v85,
            v86,
            v87,
            v88,
            v89,
            v90,
            v91,
            v92,
            v93,
            v94,
            v95.m128_i64[0],
            v95.m128_i32[2],
            v96,
            v97,
            v98.m128_i64[0]);
    v35 = v91;
    if ( v34 )
    {
      --*(_DWORD *)(a1[17] - 4LL);
      --*(_DWORD *)(a1[18] - 4LL);
      sub_6B8770((__int64)a1, v12, v15, v35);
      continue;
    }
    break;
  }
LABEL_87:
  v36 = 0;
LABEL_39:
  sub_6A99C0(v91, v92);
  return v36;
}

