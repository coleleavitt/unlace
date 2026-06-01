unsigned __int64 __fastcall sub_498F0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rbp
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned __int64 *v7; // rax
  __int64 next_seg; // r14
  const __m128i *v9; // rbp
  bool v10; // r14
  __m128i v11; // xmm0
  __int16 v12; // ax
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 *v20; // r8
  __int64 v21; // rdi
  __int64 v23; // [rsp+18h] [rbp-550h]
  __int64 v24; // [rsp+20h] [rbp-548h]
  __int64 v25; // [rsp+28h] [rbp-540h]
  __int64 v26; // [rsp+30h] [rbp-538h] BYREF
  __int128 v27; // [rsp+38h] [rbp-530h]
  __int64 v28; // [rsp+48h] [rbp-520h]
  int v29; // [rsp+50h] [rbp-518h]
  __m128i v30[2]; // [rsp+60h] [rbp-508h] BYREF
  __int64 v31; // [rsp+80h] [rbp-4E8h]
  __int64 v32; // [rsp+88h] [rbp-4E0h]
  __int64 selector; // [rsp+90h] [rbp-4D8h]
  __int128 v34; // [rsp+98h] [rbp-4D0h]
  __int128 v35; // [rsp+A8h] [rbp-4C0h]
  __int128 v36; // [rsp+B8h] [rbp-4B0h]
  __int128 v37; // [rsp+C8h] [rbp-4A0h]
  __int128 v38; // [rsp+D8h] [rbp-490h]
  __int128 v39; // [rsp+E8h] [rbp-480h]
  __int128 v40; // [rsp+F8h] [rbp-470h]
  __int128 v41; // [rsp+108h] [rbp-460h]
  unsigned __int64 v42; // [rsp+118h] [rbp-450h]
  _BYTE v43[1032]; // [rsp+120h] [rbp-448h] BYREF
  unsigned __int64 v44; // [rsp+528h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 40);
  v44 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 32);
  v25 = v3 + 56 * v2;
  if ( v25 != v3 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)v3 == 1 )
      {
        if ( *(_QWORD *)(v3 + 32) )
        {
          v4 = *(_QWORD *)(v3 + 40);
          v5 = *(_QWORD *)(a2 + 456) & (*(_QWORD *)(v3 + 16) + *(_QWORD *)(a2 + 608) + a1[41]);
          v27 = 0;
          v6 = *(_QWORD *)(a2 + 456) & (v5 + v4);
          v26 = 0;
          v28 = 0;
          v29 = -1;
          if ( v5 < v6 )
            break;
        }
      }
LABEL_3:
      v3 += 56;
      if ( v25 == v3 )
        return v44 - __readfsqword(0x28u);
    }
    v26 = qvector_reserve(&v26, 0, 1, 16);
    v7 = (unsigned __int64 *)(16 * v27 + v26);
    *v7 = v5;
    v7[1] = v6;
    *(_QWORD *)&v27 = v27 + 1;
    do
    {
      next_seg = getseg(v5);
      if ( !next_seg )
      {
        next_seg = get_next_seg(v5);
        if ( !next_seg )
          break;
      }
      rangeset_t_sub(&v26, next_seg);
      v5 = *(_QWORD *)(next_seg + 8);
    }
    while ( v5 < v6 );
    v9 = (const __m128i *)v26;
    v24 = *(_QWORD *)(a2 + 456) & (*(_QWORD *)(v3 + 16) + *(_QWORD *)(a2 + 608) + a1[41]);
    if ( !(16LL * (_QWORD)v27) )
    {
      v21 = v26;
LABEL_32:
      if ( v21 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v21);
      }
      goto LABEL_3;
    }
    while ( 1 )
    {
      v14 = v9->m128i_i64[0];
      v15 = v9->m128i_i64[0] - v24;
      v16 = *(_QWORD *)(v3 + 8);
      v23 = v16 + v15;
      if ( v15 >= *(_QWORD *)(v3 + 32) )
        break;
      if ( !(unsigned __int8)sub_41950(a1, a2, v23, v9->m128i_i64[1] - v14) )
      {
        if ( !(v15 | *(_QWORD *)(v3 + 8)) )
        {
LABEL_25:
          qstrncpy(v43, "PHDR", 1024);
          v17 = *(_QWORD *)(a2 + 528);
          if ( v17 )
          {
            v18 = *(_QWORD *)(a2 + 608) + v17;
            v10 = 1;
            if ( v18 >= v9->m128i_i64[0] )
              v10 = v18 >= v9->m128i_i64[1];
            goto LABEL_16;
          }
LABEL_15:
          v10 = 0;
LABEL_16:
          v31 = 0;
          v32 = 0;
          selector = 0;
          v42 = 0xFFFFFFFF00000000LL;
          memset(v30, 0, sizeof(v30));
          v34 = -1;
          v35 = -1;
          v36 = -1;
          v37 = -1;
          v38 = -1;
          v39 = -1;
          v40 = -1;
          v41 = -1;
          selector = allocate_selector(0);
          v11 = _mm_loadu_si128(v9);
          BYTE3(v32) = *(_BYTE *)(a2 + 618) + 1;
          v30[0] = v11;
          LOBYTE(v32) = sub_40B90(*(_QWORD *)(v3 + 48), *(double *)v11.m128i_i64);
          BYTE1(v32) = 2;
          BYTE2(v32) = *(_BYTE *)(v3 + 4) & 7;
          v12 = WORD2(v32) & 0xFFFB;
          if ( v10 )
            v12 = WORD2(v32) | 4;
          WORD2(v32) = v12;
          sub_42F60((__int64)a1, v30, (__int64)v43, (__int64)"DATA", 3);
          v13 = *(_QWORD *)(v3 + 32);
          if ( v15 < v13 )
          {
            v20 = (unsigned __int64 *)(*(_QWORD *)(a2 + 456) & (v9->m128i_i64[0] + v13 + v24 - v14));
            if ( (unsigned __int64)v20 > v9->m128i_i64[1] )
              v20 = (unsigned __int64 *)v9->m128i_i64[1];
            sub_496A0(a1, a2, v23, (unsigned __int64 *)v9->m128i_i64[0], v20, 0, *(double *)v11.m128i_i64, NAN);
          }
          if ( v10 )
            create_data(v9->m128i_i64[0], 0, v9->m128i_i64[1] - v9->m128i_i64[0], -1);
          goto LABEL_21;
        }
LABEL_14:
        qstrncpy(v43, "LOAD", 1024);
        goto LABEL_15;
      }
LABEL_21:
      v21 = v26;
      if ( ++v9 == (const __m128i *)(v26 + 16 * v27) )
        goto LABEL_32;
    }
    if ( !(v15 | v16) )
      goto LABEL_25;
    goto LABEL_14;
  }
  return v44 - __readfsqword(0x28u);
}

