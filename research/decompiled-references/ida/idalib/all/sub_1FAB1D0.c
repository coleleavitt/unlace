void __fastcall sub_1FAB1D0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r13
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rax
  __m128i si128; // xmm0
  __int64 v19; // rax
  void *v20; // rdi
  __int64 v21; // rax
  __int64 i; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _DWORD *v37; // r14
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 *v40; // rdx
  __int64 *v41; // r13
  __int64 *v42; // r12
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  __int64 *v45; // r14
  __int64 v46; // r8
  unsigned __int64 v47; // rax
  _QWORD *v48; // rcx
  __int64 *v49; // rdx
  __int64 *v50; // r14
  __int64 v51; // rcx
  unsigned __int64 v52; // r13
  __int64 *v53; // r12
  unsigned __int64 v54; // rax
  __int64 *v55; // r15
  __int64 v56; // r14
  __int64 *v57; // r12
  __int64 v58; // rsi
  __int64 *v59; // r13
  __int64 *v60; // r14
  __int64 v61; // r12
  __int64 v62; // r13
  int v63; // eax
  __int64 v64; // rax
  unsigned __int64 v65; // r13
  __int64 v66; // r15
  __int64 v67; // r12
  __int64 v68; // r12
  __int64 v69; // r12
  __int64 v70; // rax
  __int64 v71; // r12
  __int64 v72; // r12
  __int64 v73; // rax
  __int64 *v74; // [rsp+0h] [rbp-30B8h]
  unsigned __int64 v75; // [rsp+0h] [rbp-30B8h]
  __int64 v76; // [rsp+0h] [rbp-30B8h]
  __int64 v77; // [rsp+0h] [rbp-30B8h]
  __int64 v78; // [rsp+8h] [rbp-30B0h]
  __int64 v79; // [rsp+8h] [rbp-30B0h]
  __int64 v80; // [rsp+10h] [rbp-30A8h] BYREF
  __int64 v81; // [rsp+18h] [rbp-30A0h] BYREF
  void *v82; // [rsp+20h] [rbp-3098h] BYREF
  __m128i v83; // [rsp+28h] [rbp-3090h]
  _BYTE v84[4104]; // [rsp+38h] [rbp-3080h] BYREF
  void *v85; // [rsp+1040h] [rbp-2078h] BYREF
  __m128i v86; // [rsp+1048h] [rbp-2070h]
  _BYTE v87[4104]; // [rsp+1058h] [rbp-2060h] BYREF
  void *ptr; // [rsp+2060h] [rbp-1058h] BYREF
  __m128i v89; // [rsp+2068h] [rbp-1050h] BYREF
  _BYTE v90[4160]; // [rsp+2078h] [rbp-1040h] BYREF

  v6 = a4;
  v8 = a2;
  if ( (*(_BYTE *)(a3 + 8) & 0x7F) == 0x18 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    if ( v9 )
    {
      a2 = sub_B8C1B0(a3);
      if ( *(char *)(sub_1F75670(v9, a2) + 29) < 0 )
      {
        v21 = *(_QWORD *)(a3 + 32);
        i = ((unsigned __int8)v21 | (unsigned __int8)(v21 >> 1)) & 1;
        if ( (((unsigned __int8)v21 | (unsigned __int8)(v21 >> 1)) & 1) == 0 )
        {
          i = v21 & 0xFFFFFFFFFFFFFFFELL;
          v23 = v21 & 0xFFFFFFFFFFFFFFFCLL;
          if ( !v23 )
          {
            a2 = a3 - 48;
            ptr = (void *)i;
            v23 = sub_B7BB70(&ptr);
          }
          if ( v23 )
          {
            if ( *(char *)(v23 + 29) >= 0 )
              return;
            for ( i = *(_QWORD *)(v23 + 80); (i & 3) == 0; i = *(_QWORD *)(v23 + 80) )
            {
              a4 = (__int64 *)(i & 0xFFFFFFFFFFFFFFFELL);
              i &= 0xFFFFFFFFFFFFFFFCLL;
              if ( i )
              {
                v23 = i;
              }
              else
              {
                a2 = v23;
                ptr = a4;
                v23 = sub_B7BB70(&ptr);
              }
              if ( !v23 )
                break;
              if ( *(char *)(v23 + 29) >= 0 )
                return;
            }
          }
        }
        ptr = (void *)sub_B91570(a3, a2, i, (__int64)a4, a5, a6);
        sub_1FAA800(a1 + 2528, (__int64 *)&ptr, v24, v25, v26, v27);
        v32 = sub_B91570(a3, (__int64)&ptr, v28, v29, v30, v31);
        v37 = (_DWORD *)sub_B941C0(v32, (__int64)&ptr, v33, v34, v35, v36);
        ptr = &v89.m128i_u64[1];
        v89.m128i_i64[0] = 0x1000000000LL;
        v74 = &v89.m128i_i64[1];
        if ( v37 )
        {
          v38 = *v37 >> 1;
          if ( v38 > 0x10 )
            sub_2237220(&ptr, &v89.m128i_u64[1], v38, 16);
          v39 = sub_1F78D20((__int64)v37);
          v41 = v40;
          v42 = (__int64 *)v39;
          v43 = sub_ACC810((__int64)v37);
          v44 = v89.m128i_u32[0];
          v45 = (__int64 *)v43;
          while ( v42 != v45 )
          {
            v46 = *v42;
            v47 = v42[1] & 0xFFFFFFFFFFFFFFFCLL;
            if ( v44 + 1 > (unsigned __int64)v89.m128i_u32[1] )
            {
              v79 = *v42;
              v75 = v42[1] & 0xFFFFFFFFFFFFFFFCLL;
              sub_2237220(&ptr, &v89.m128i_u64[1], v44 + 1, 16);
              v44 = v89.m128i_u32[0];
              v46 = v79;
              v47 = v75;
            }
            v48 = (char *)ptr + 16 * v44;
            *v48 = v46;
            v48[1] = v47;
            v44 = (unsigned int)++v89.m128i_i32[0];
            if ( v42 + 2 == v41 )
            {
              v42 = v41;
            }
            else if ( (unsigned __int64)v42[2] < 0xFFFFFFFFFFFFFFFELL )
            {
              v42 += 2;
            }
            else
            {
              v49 = v42 + 4;
              do
              {
                v42 = v49;
                if ( v41 == v49 )
                  break;
                v49 += 2;
              }
              while ( (unsigned __int64)*v42 >= 0xFFFFFFFFFFFFFFFELL );
            }
          }
          v50 = (__int64 *)ptr;
          v51 = 16 * v44;
          v52 = v51;
          v74 = (__int64 *)((char *)ptr + v51);
          v53 = (__int64 *)((char *)ptr + v51);
          if ( ptr != (char *)ptr + v51 )
          {
            _BitScanReverse64(&v54, v51 >> 4);
            sub_1FAAFC0((__int64 *)ptr, (__int64 *)((char *)ptr + v51), 2LL * (int)(63 - (v54 ^ 0x3F)));
            if ( v52 <= 0x100 )
            {
              sub_1F6BEF0(v50, v74);
            }
            else
            {
              v55 = v50 + 32;
              sub_1F6BEF0(v50, v50 + 32);
              if ( v53 != v50 + 32 )
              {
                do
                {
                  v56 = *v55;
                  v57 = v55;
                  v78 = v55[1];
                  while ( 1 )
                  {
                    v58 = *(v57 - 2);
                    v59 = v57;
                    v57 -= 2;
                    if ( (int)sub_B84BB0(v56, v58) >= 0 )
                      break;
                    v57[2] = *v57;
                    v57[3] = v57[1];
                  }
                  *v59 = v56;
                  v55 += 2;
                  v59[1] = v78;
                }
                while ( v74 != v55 );
              }
            }
            v60 = (__int64 *)ptr;
            v61 = 16LL * v89.m128i_u32[0];
            v74 = (__int64 *)((char *)ptr + v61);
            if ( ptr != (char *)ptr + v61 )
            {
              do
              {
                v62 = v60[1];
                v63 = *(_DWORD *)v60 & 7;
                if ( (v63 == 7 || ((v63 - 3) & 0xFFFFFFFD) != 0) && v62 )
                {
                  do
                  {
                    v64 = v62;
                    v65 = v62 & 0xFFFFFFFFFFFFFFF8LL;
                    LODWORD(v64) = (v64 >> 2) & 1;
                    v66 = (unsigned int)v64;
                    if ( (_DWORD)v64 )
                    {
                      if ( v65 )
                      {
                        v67 = *(_QWORD *)v65;
                        if ( *(char *)(*(_QWORD *)v65 + 29LL) < 0 )
                          goto LABEL_68;
                      }
                      else
                      {
                        v67 = 0;
                      }
                      if ( *(_BYTE *)(a1 + 155) )
                      {
LABEL_75:
                        if ( !(unsigned __int8)sub_1F6A970(a1, v67) )
                          goto LABEL_66;
                      }
                    }
                    else
                    {
                      if ( *(char *)(v65 + 29) < 0 )
                        break;
                      v67 = v65;
                      if ( *(_BYTE *)(a1 + 155) )
                        goto LABEL_75;
                    }
                    if ( !*(_BYTE *)(a1 + 157) || sub_B8D850(v67) || !sub_1F6AD70(v67) )
                      sub_1F92240(a1, v67);
LABEL_66:
                    if ( !v66 || !v65 )
                      break;
LABEL_68:
                    v62 = *(_QWORD *)(v65 + 8);
                  }
                  while ( v62 );
                }
                v60 += 2;
              }
              while ( v74 != v60 );
              v74 = (__int64 *)ptr;
            }
          }
        }
        v20 = v74;
        if ( v74 != (__int64 *)&v89.m128i_u64[1] )
        {
LABEL_22:
          free(v20);
          return;
        }
        return;
      }
    }
  }
  if ( sub_B91570(a3, a2, a3, (__int64)a4, a5, a6) != a3 )
    return;
  v13 = *(_BYTE *)(a3 + 8) & 0x7F;
  if ( (unsigned __int8)v13 > 0x12u )
  {
    v13 = ((_BYTE)v13 + 94) & 0x7F;
    if ( (unsigned __int8)v13 <= 5u )
      return;
  }
  else
  {
    v10 = 1LL << v13;
    if ( ((1LL << v13) & 0x40182) != 0
      || (*(_BYTE *)(a3 + 8) & 0x7D) == 4
      || !(_BYTE)v13 && (*(_BYTE *)(*(_QWORD *)(v8 + 2320) + 1LL) & 8) == 0 )
    {
      return;
    }
  }
  v14 = (_DWORD *)sub_B941C0(a3, a2, v10, v13, v11, v12);
  if ( v14 && *v14 >> 1 )
  {
    v15 = *(_QWORD *)(a1 + 16);
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 24) + 8LL);
    v17 = sub_A1F730(v15);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D90);
    v19 = *(unsigned int *)(v15 + 48) + 8 * (v17 + v16);
    v83 = si128;
    *v6 = v19;
    v82 = v84;
    v85 = v87;
    v86 = si128;
    ptr = v90;
    v89 = si128;
    sub_1FA92D0(a1, a3, (unsigned int *)&v82, (_DWORD **)&v85, (_DWORD **)&ptr);
    v80 = 83;
    sub_1F76000(
      *(_QWORD *)(a1 + 16),
      *(_DWORD *)(a1 + 3460),
      (unsigned __int8 *)&v80,
      1,
      (unsigned __int64)v82,
      v83.m128i_i64[0]);
    ++*(_DWORD *)(a1 + 3084);
    if ( v86.m128i_i64[0] )
    {
      v77 = *(_QWORD *)(a1 + 16);
      v71 = *(_QWORD *)(*(_QWORD *)(v77 + 24) + 8LL);
      v72 = sub_A1F730(v77) + v71;
      v73 = *(unsigned int *)(v77 + 48);
      v81 = 84;
      v6[1] = v73 + 8 * v72;
      sub_1F76000(
        *(_QWORD *)(a1 + 16),
        *(_DWORD *)(a1 + 3464),
        (unsigned __int8 *)&v81,
        1,
        (unsigned __int64)v85,
        v86.m128i_i64[0]);
      ++*(_DWORD *)(a1 + 3088);
    }
    if ( v89.m128i_i64[0] )
    {
      v76 = *(_QWORD *)(a1 + 16);
      v68 = *(_QWORD *)(*(_QWORD *)(v76 + 24) + 8LL);
      v69 = sub_A1F730(v76) + v68;
      v70 = *(unsigned int *)(v76 + 48);
      v81 = 85;
      v6[2] = v70 + 8 * v69;
      sub_1F76000(
        *(_QWORD *)(a1 + 16),
        *(_DWORD *)(a1 + 3468),
        (unsigned __int8 *)&v81,
        1,
        (unsigned __int64)ptr,
        v89.m128i_i64[0]);
      ++*(_DWORD *)(a1 + 3092);
    }
    if ( ptr != v90 )
      free(ptr);
    if ( v85 != v87 )
      free(v85);
    v20 = v82;
    if ( v82 != v84 )
      goto LABEL_22;
  }
}
