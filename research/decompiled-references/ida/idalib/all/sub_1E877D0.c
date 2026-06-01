char __fastcall sub_1E877D0(__m128 *a1, __int64 a2, unsigned int a3, __m128 a4, __m128 a5)
{
  unsigned __int8 v5; // al
  __int64 v6; // rdx
  char result; // al
  unsigned __int32 v9; // r14d
  int v10; // r12d
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r13
  __int32 v19; // ecx
  unsigned __int64 v20; // rdx
  __int32 v21; // ecx
  __int32 v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rbp
  unsigned int v25; // eax
  unsigned __int8 v26; // al
  __int64 v27; // rsi
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 **v50; // r12
  __int64 **v51; // rdx
  __int64 **v52; // r14
  __int64 **v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 **v56; // r13
  unsigned __int64 v57; // rax
  _QWORD *v58; // rax
  unsigned __int64 v59; // rax
  _QWORD *v60; // rax
  unsigned __int64 v61; // rax
  _QWORD *v62; // rax
  unsigned __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rcx
  unsigned __int64 v66; // rbp
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rbx
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  _QWORD *v74; // rax
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rax
  unsigned int v77; // [rsp+0h] [rbp-148h]
  unsigned __int64 v78; // [rsp+8h] [rbp-140h]
  __int8 v79; // [rsp+12h] [rbp-136h]
  __int8 v80; // [rsp+13h] [rbp-135h]
  __int32 v81; // [rsp+14h] [rbp-134h]
  __int32 v82; // [rsp+18h] [rbp-130h]
  unsigned int v83; // [rsp+1Ch] [rbp-12Ch] BYREF
  __int64 v84; // [rsp+28h] [rbp-120h] BYREF
  __int64 v85[7]; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v86; // [rsp+68h] [rbp-E0h]
  void *ptr; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v88; // [rsp+88h] [rbp-C0h] BYREF
  _BYTE v89[184]; // [rsp+90h] [rbp-B8h] BYREF

  v5 = *(_BYTE *)(a2 + 73);
  v83 = a3;
  if ( v5 >> 5 == 2 )
    return 0;
  v6 = *(_QWORD *)(a2 + 128);
  if ( v6 && (*(_BYTE *)(v6 + 10) & 0x20) != 0 )
  {
    result = 0;
    if ( (*(_BYTE *)(v6 + 104) & 0x18) == 0 )
      return (*(_DWORD *)(v6 + 104) & 0xFFFE0) == 0;
    return result;
  }
  sub_18C74E0((__int64)a1, 0, 0, 4);
  v9 = a1[700].m128_u32[0];
  v79 = a1[787].m128_i8[0];
  v80 = a1[703].m128_i8[0];
  v10 = *(_DWORD *)(a1[16].m128_u64[1] + 204);
  v11 = a1[15].m128_u64[1];
  a1[787].m128_i8[0] = 1;
  a1[703].m128_i8[0] = 1;
  v16 = sub_704780(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(v11 + 2264) + 80LL) + 72LL),
          *(_QWORD *)(*(_QWORD *)(v11 + 2264) + 80LL),
          v12,
          v13,
          v14,
          v15);
  v17 = a1[32].m128_u64[0];
  v18 = a1[34].m128_u64[0];
  a1[32].m128_u64[0] = 0;
  if ( v16 )
    v16 += 5;
  v78 = v17;
  v19 = a1[5].m128_i32[0];
  v20 = a1[621].m128_u64[1];
  a1[621].m128_u64[1] = 0;
  a1[34].m128_u64[0] = (unsigned __int64)v16;
  v81 = v19;
  v21 = a1[164].m128_i32[2];
  a1[5].m128_i32[0] = a1[2].m128_i32[2];
  v22 = a1[230].m128_i32[2];
  v86 = v20;
  v23 = v83;
  a1[164].m128_i32[2] = v22;
  v82 = v21;
  v24 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL) | 1LL;
  LOWORD(v85[0]) = v85[0] & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
  {
    v77 = v23;
    sub_EE9B50(26);
    v23 = v77;
  }
  v85[1] = v24;
  v25 = v85[0] & 0xFFF001FF;
  v85[2] = 0;
  BYTE1(v25) = ((unsigned __int16)(v85[0] & 0x1FF) >> 8) | 2;
  v85[0] = __PAIR64__(v23, v25);
  v26 = sub_B62360((__int64)v85);
  BYTE1(v85[0]) = (v26 << 6) | BYTE1(v85[0]) & 0x3F;
  BYTE2(v85[0]) = BYTE2(v85[0]) & 0xF8 | (v26 >> 2) & 7;
  v27 = a1[12].m128_i64[0];
  ptr = v89;
  v88 = 0x1000000000LL;
  sub_18C3460((__int64)a1, v27, 0, 14, (__int64)&ptr);
  v28 = v83;
  v29 = sub_1C07820(a1, v83, 14, (__int64)&ptr, v85, (__int64)v85, *(double *)a4.m128_u64, a5, 1u, 1, 0);
  if ( v29 != 1 && a1[700].m128_i32[0] <= v9 )
  {
    v30 = v29 & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_WORD *)v30 & 0x1FF) == 0x5B )
    {
      v31 = sub_BFBC70(*(_QWORD *)(v30 + 32));
      if ( !v31 || (*(_BYTE *)(v31 + 28) & 0x7Fu) - 34 > 5 )
        BUG();
      v35 = *(_QWORD *)(**(_QWORD **)(v31 + 120) + 48LL);
      v84 = v35;
      if ( (*(_BYTE *)(v31 + 83) & 2) != 0 )
      {
        v36 = v35 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 <= 1
          || sub_B9E190(a2, v83, v36, v32, v33, v34) )
        {
          v37 = sub_C1BEF0((__int64)&v84, v83, v36, v32);
          if ( sub_F63050(*(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL), v83, v38, v39) == *(_QWORD *)(a2 + 48) )
          {
            if ( ptr != v89 )
              free(ptr);
            if ( v18 )
            {
              a1[34].m128_u64[0] = v18;
              a1[32].m128_u64[0] = v78;
              a1[621].m128_u64[1] = v86;
              a1[5].m128_i32[0] = v81;
              a1[164].m128_i32[2] = v82;
            }
            a1[700].m128_i32[0] = v9;
            a1[787].m128_i8[0] = v79;
            a1[703].m128_i8[0] = v80;
            v41 = a1[16].m128_u64[1];
            if ( *(_DWORD *)(v41 + 204) == 5 )
              *(_BYTE *)(v41 + 194) = 1;
            if ( v10 )
              v10 = 3;
            *(_DWORD *)(v41 + 204) = v10;
            sub_190D5E0((__int64)a1, a4);
            v46 = sub_A7A590(a2, v28, v42, v43, v44, v45);
            ptr = a1;
            v50 = (__int64 **)v46;
            v52 = v51;
            v88 = (__int64)&v83;
            v53 = v51;
            v54 = 0xAAAAAAAAAAAAAAABLL;
            v55 = (__int64)(0xAAAAAAAAAAAAAAABLL * (v53 - v50)) >> 2;
            if ( v55 > 0 )
            {
              v56 = &v50[12 * v55];
              while ( 1 )
              {
                v63 = *(_QWORD *)(*v50[2] & 0xFFFFFFFFFFFFFFF0LL);
                if ( (*(_BYTE *)(v63 + 8) & 0xF) != 0 )
                  v63 = sub_F64F00(*v50[2], v28, v54, v47, v48);
                v64 = sub_F63270(*(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFF0LL), v28, v54, v47, v48, v49);
                if ( v64 )
                {
                  v28 = (__int64)v64;
                  if ( !(unsigned __int8)sub_1E877D0(ptr, v64, *(unsigned int *)v88) )
                    goto LABEL_56;
                }
                v57 = *(_QWORD *)(*v50[5] & 0xFFFFFFFFFFFFFFF0LL);
                if ( (*(_BYTE *)(v57 + 8) & 0xF) != 0 )
                  v57 = sub_F64F00(*v50[5], v28, v54, v47, v48);
                v58 = sub_F63270(*(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF0LL), v28, v54, v47, v48, v49);
                if ( v58 )
                {
                  v28 = (__int64)v58;
                  if ( !(unsigned __int8)sub_1E877D0(ptr, v58, *(unsigned int *)v88) )
                    break;
                }
                v59 = *(_QWORD *)(*v50[8] & 0xFFFFFFFFFFFFFFF0LL);
                if ( (*(_BYTE *)(v59 + 8) & 0xF) != 0 )
                  v59 = sub_F64F00(*v50[8], v28, v54, v47, v48);
                v60 = sub_F63270(*(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL), v28, v54, v47, v48, v49);
                if ( v60 )
                {
                  v28 = (__int64)v60;
                  if ( !(unsigned __int8)sub_1E877D0(ptr, v60, *(unsigned int *)v88) )
                  {
                    v50 += 6;
                    goto LABEL_56;
                  }
                }
                v61 = *(_QWORD *)(*v50[11] & 0xFFFFFFFFFFFFFFF0LL);
                if ( (*(_BYTE *)(v61 + 8) & 0xF) != 0 )
                  v61 = sub_F64F00(*v50[11], v28, v54, v47, v48);
                v62 = sub_F63270(*(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL), v28, v54, v47, v48, v49);
                if ( v62 )
                {
                  v28 = (__int64)v62;
                  if ( !(unsigned __int8)sub_1E877D0(ptr, v62, *(unsigned int *)v88) )
                  {
                    v50 += 9;
                    goto LABEL_56;
                  }
                }
                v50 += 12;
                if ( v50 == v56 )
                  goto LABEL_79;
              }
              v50 += 3;
LABEL_56:
              if ( v52 != v50 )
                return 0;
LABEL_57:
              v66 = sub_B7E900(a2, v28, v54, v47, v48, v49);
              if ( !v66 )
                return 1;
LABEL_58:
              v69 = *(_QWORD *)(*(_QWORD *)(v66 + 48) & 0xFFFFFFFFFFFFFFF0LL);
              v70 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
              v71 = (unsigned int)(v70 - 2);
              if ( (unsigned __int8)(v70 - 2) > 4u )
                goto LABEL_65;
              while ( 1 )
              {
                if ( (unsigned __int8)(*(_BYTE *)(v69 + 16) - 2) > 4u )
                {
                  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
                    || (v72 = sub_F63050(v69, v28, v71, v65)) == 0 )
                  {
                    v69 = *(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                    LOBYTE(v70) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_65:
                    v73 = (unsigned int)(unsigned __int8)v70 - 43;
                    if ( (unsigned int)v73 > 1 && (_BYTE)v70 != 47 )
                    {
                      v74 = sub_F63270(v69, v28, v73, v65, v67, v68);
                      if ( v74 )
                      {
                        v28 = (__int64)v74;
                        result = sub_1E877D0(a1, v74, v83);
                        if ( !result )
                          return result;
                      }
                      while ( 1 )
                      {
                        v75 = *(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                        v66 = v75;
                        if ( !v75 )
                          return 1;
                        if ( (*(_BYTE *)(v75 + 28) & 0x7Fu) - 49 <= 2 )
                          goto LABEL_58;
                      }
                    }
                    return 0;
                  }
                  v69 = v72;
                }
                v69 = *(_QWORD *)(*(_QWORD *)(v69 + 32) & 0xFFFFFFFFFFFFFFF0LL);
              }
            }
LABEL_79:
            v54 = 0xAAAAAAAAAAAAAAABLL;
            v76 = 0xAAAAAAAAAAAAAAABLL * (v52 - v50);
            if ( v76 != 2 )
            {
              if ( v76 != 3 )
              {
                if ( v76 != 1 )
                  goto LABEL_57;
                goto LABEL_82;
              }
              v28 = (__int64)&v88;
              if ( !(unsigned __int8)sub_1E87FB0(&ptr, &v88, v50) )
                goto LABEL_56;
              v50 += 3;
            }
            v28 = (__int64)&v88;
            if ( !(unsigned __int8)sub_1E87FB0(&ptr, &v88, v50) )
              goto LABEL_56;
            v50 += 3;
LABEL_82:
            v28 = (__int64)&v88;
            if ( !(unsigned __int8)sub_1E87FB0(&ptr, &v88, v50) )
              goto LABEL_56;
            goto LABEL_57;
          }
        }
      }
    }
  }
  if ( ptr != v89 )
    free(ptr);
  if ( v18 )
  {
    a1[34].m128_u64[0] = v18;
    a1[32].m128_u64[0] = v78;
    a1[621].m128_u64[1] = v86;
    a1[5].m128_i32[0] = v81;
    a1[164].m128_i32[2] = v82;
  }
  a1[700].m128_i32[0] = v9;
  a1[787].m128_i8[0] = v79;
  a1[703].m128_i8[0] = v80;
  v40 = a1[16].m128_u64[1];
  if ( *(_DWORD *)(v40 + 204) == 5 )
    *(_BYTE *)(v40 + 194) = 1;
  if ( v10 )
    v10 = 3;
  *(_DWORD *)(v40 + 204) = v10;
  sub_190D5E0((__int64)a1, a4);
  return 0;
}
