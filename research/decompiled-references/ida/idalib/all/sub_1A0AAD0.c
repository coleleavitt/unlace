__int64 __fastcall sub_1A0AAD0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        int a10,
        char a11,
        char a12,
        int a13,
        int a14)
{
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r10
  bool v24; // zf
  __int64 v25; // r13
  __int64 *v26; // r10
  __int64 *v27; // r15
  __int64 v28; // r14
  int v29; // r13d
  __int64 v30; // rax
  __m128i si128; // xmm1
  __int64 v32; // rdx
  int v33; // ecx
  char v35; // al
  __int64 v36; // rdi
  _WORD *v37; // r12
  _QWORD *v38; // r13
  unsigned __int64 v39; // rax
  int v40; // r14d
  _QWORD *v41; // rdx
  _QWORD *i; // r15
  unsigned __int64 v43; // rsi
  _QWORD *v44; // r13
  unsigned __int8 v45; // al
  __int64 v46; // rax
  _QWORD *v47; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+10h] [rbp-C8h]
  __int64 v49; // [rsp+18h] [rbp-C0h]
  __int64 v50; // [rsp+20h] [rbp-B8h]
  __int64 v51; // [rsp+28h] [rbp-B0h]
  __int64 v52; // [rsp+30h] [rbp-A8h]
  unsigned __int8 v53; // [rsp+3Bh] [rbp-9Dh]
  char v54; // [rsp+3Ch] [rbp-9Ch]
  bool v55; // [rsp+3Dh] [rbp-9Bh]
  char v56; // [rsp+3Eh] [rbp-9Ah]
  char v57; // [rsp+3Fh] [rbp-99h]
  unsigned int v58; // [rsp+40h] [rbp-98h]
  int v59; // [rsp+44h] [rbp-94h]
  __m128i *v60; // [rsp+48h] [rbp-90h]
  int v61; // [rsp+50h] [rbp-88h]
  int v62; // [rsp+54h] [rbp-84h]
  __int64 v63; // [rsp+58h] [rbp-80h]
  __m128i v64; // [rsp+60h] [rbp-78h] BYREF
  __int64 v65; // [rsp+70h] [rbp-68h]
  __m128i v66[5]; // [rsp+80h] [rbp-58h] BYREF

  v58 = a2;
  v17 = 3;
  v52 = a3;
  v62 = a13;
  v59 = a10;
  v61 = a14;
  v54 = a14;
  v53 = a10;
  v49 = a4;
  v63 = a6;
  sub_1BD2860(a5, 3);
  v21 = *(_QWORD *)&byte_8[a6 & 0xFFFFFFFFFFFFFFF0LL];
  LODWORD(v22) = 0;
  if ( (v21 & 8) != 0 )
  {
    v21 &= 0xFFFFFFFFFFFFFFF0LL;
    v22 = *(_QWORD *)(v21 + 24);
  }
  v23 = a7;
  v24 = v49 == 1;
  *(_DWORD *)(a5 + 7856) = (unsigned int)v22 >> 9;
  v55 = v24;
  if ( a7 )
  {
    v56 = v55 & a12;
    v57 = v55 & v59 & (a9 ^ 1);
    v60 = &v64;
    do
    {
      v25 = v23;
      v26 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
      v27 = v26;
      v28 = (__int64)v26;
      v29 = (v25 >> 2) & 1;
      if ( v29 )
      {
        v28 = 0;
        if ( v26 )
          v28 = *v26;
      }
      v21 = *(_BYTE *)(v28 + 28) & 0x7F;
      if ( (_BYTE)v21 != 81 )
      {
        if ( (((_BYTE)v21 + 52) & 0x7Fu) <= 1 || (v30 = v28, (unsigned int)(unsigned __int8)v21 - 53 <= 1) )
        {
          v30 = sub_B72ED0(v28);
          LOBYTE(v21) = *(_BYTE *)(v30 + 28) & 0x7F;
        }
        v47 = nullptr;
        v18 = (*(_BYTE *)(v30 + 29) >> 5) & 3 | (unsigned __int64)v28;
        v66[0].m128i_i64[0] = v18;
        if ( (_BYTE)v21 == 71 )
        {
          v18 = *(_QWORD *)(v30 + 48);
          v47 = (_QWORD *)v30;
          v30 = v18;
          LOBYTE(v21) = *(_BYTE *)(v18 + 28) & 0x7F;
        }
        v24 = (_BYTE)v21 == 38;
        v21 = 0;
        if ( !v24 )
          v30 = 0;
        v48 = v30;
        *(__m128 *)((char *)v66 + 8) = _mm_loadh_ps((const double *)&v47);
        si128 = _mm_load_si128(v66);
        v64 = si128;
        v17 = si128.m128i_i64[1];
        v65 = v66[1].m128i_i64[0];
        if ( si128.m128i_i64[1]
          && *(char *)(si128.m128i_i64[1] + 28) >= 0
          && (!a11 || sub_1844E80(a1, si128.m128i_i64[1], 0, v18)) )
        {
          v32 = 1;
          if ( !v54 )
          {
            v32 = 0;
            if ( v56 )
            {
              if ( (**(_WORD **)v52 & 0x1FF) == 0x35 )
                v32 = (unsigned __int8)sub_1A0A9C0(*(_QWORD *)(a1 + 248), v60, 0, v18);
            }
          }
          v17 = v65;
          v33 = v53;
          if ( v65 )
          {
            sub_1BF2330(a1, v65, v64.m128i_i32[0], 0, v52, v49, a5, v32, 0, v53, 0, 0, 0);
          }
          else
          {
            v35 = 0;
            if ( v57 )
            {
              v36 = *(_QWORD *)(a1 + 248);
              LODWORD(v48) = v53;
              LODWORD(v47) = v32;
              v35 = sub_1A0A9C0(v36, v60, v32, v53);
              v33 = v48;
              LODWORD(v32) = (_DWORD)v47;
            }
            v50 = 0;
            v51 = 0;
            v17 = v64.m128i_i64[1];
            sub_1BF10B0(a1, v64.m128i_i32[2], v64.m128i_i32[0], v52, v49, a5, v32, 0, v33, v35, 0, 0, 0, 0, 0, 0);
          }
        }
      }
      if ( !v29 )
        break;
      if ( !v27 )
        break;
      v23 = v27[1];
    }
    while ( v23 );
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) != 0 && v55 && !(_BYTE)v61 && !(_BYTE)v62 )
  {
    v37 = *(_WORD **)v52;
    v38 = sub_F63270(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v52 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), v17, v21, v18, v19, v20);
    if ( v38 )
    {
      if ( !(unsigned __int8)sub_1E63330(a1, v58, *((_QWORD *)v37 + 1), 1, 0) )
      {
        v39 = sub_B9F870((__int64)v38);
        v40 = (unsigned __int8)v59;
        v47 = v41;
        for ( i = (_QWORD *)v39; v47 != i; ++i )
        {
          v43 = *i & 0xFFFFFFFFFFFFFFF8LL;
          v44 = (_QWORD *)(*(_QWORD *)(v43 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v43 + 16) & 4) != 0 )
            v44 = (_QWORD *)*v44;
          if ( v44 )
            LODWORD(v44) = (_DWORD)v44 - 64;
          v45 = *(_BYTE *)(v43 + 28) & 0x7F;
          if ( ((v45 + 52) & 0x7Fu) <= 1 || (unsigned int)v45 - 53 <= 1 )
          {
            v46 = sub_B72ED0(*i & 0xFFFFFFFFFFFFFFF8LL);
            LODWORD(v43) = v46;
            v45 = *(_BYTE *)(v46 + 28) & 0x7F;
          }
          if ( v45 == 71 )
            sub_1BEE030(a1, v43, *i, (_DWORD)v44, (_DWORD)v37, v63, a5, v40, v40, 0);
          else
            sub_1BEE590(a1, v43, *i, (_DWORD)v44, (_DWORD)v37, v63, a5, v40, v40, 0, 0);
        }
      }
    }
  }
  return sub_1BF27B0(a5, a1, v58, a8);
}
