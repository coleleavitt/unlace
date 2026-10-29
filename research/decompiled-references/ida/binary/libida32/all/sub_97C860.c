__int64 __fastcall sub_97C860(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // r14
  int v13; // r13d
  __m128i v14; // xmm2
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 result; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __m128i v23; // xmm4
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // zf
  __m128i v28; // xmm5
  __m128i v29; // xmm3
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  _WORD *v35; // r14
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __m128i v44; // xmm6
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rsi
  __int64 v61; // rsi
  __int64 v62; // r13
  __m128i v63; // xmm7
  __int64 v64; // [rsp+0h] [rbp-B8h]
  __int64 v65; // [rsp+8h] [rbp-B0h]
  int v66; // [rsp+14h] [rbp-A4h]
  double v67[2]; // [rsp+18h] [rbp-A0h] BYREF
  __m128i v68; // [rsp+28h] [rbp-90h]
  __m128i v69; // [rsp+48h] [rbp-70h] BYREF
  __int64 v70; // [rsp+58h] [rbp-60h]
  __m128i v71; // [rsp+68h] [rbp-50h] BYREF
  __int64 v72; // [rsp+78h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 16);
  v68 = _mm_loadu_si128((const __m128i *)(a1 + 128));
  if ( v3 )
    sub_9756F0(a1, v3);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 )
    sub_9756F0(a1, v4);
  v5 = *(_QWORD *)(a2 + 32);
  if ( v5 )
    sub_9756F0(a1, v5);
  v6 = *(_QWORD *)(a1 + 128);
  sub_976710((_QWORD *)a1, v6, *(_QWORD *)(a1 + 136), v68.m128i_i64[0], v68.m128i_i64[1], a2);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = *(_QWORD *)(a1 + 128);
  v13 = *(_DWORD *)(a1 + 136);
  if ( v11 )
  {
    if ( *(_BYTE *)(a1 + 320) )
    {
      result = 0;
      goto LABEL_16;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 24);
  }
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v15 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 56) = v11;
  *(_QWORD *)(a1 + 64) = v12;
  *(_DWORD *)(a1 + 72) = v13;
  v69 = v14;
  v70 = v15;
  v16 = sub_975DE0(a1, v6, v7, v8, v9, v10);
  *(_QWORD *)(v16 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
  v19 = *(_QWORD *)(a2 + 40);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 16) = v16;
    sub_979740(a1, v19, 1, 0, v17, v18);
    result = 0;
    if ( *(_BYTE *)(a1 + 320) )
      goto LABEL_15;
    v21 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 24) = v16;
    if ( v21 )
    {
      v66 = sub_974040((__int64 *)a1, v21);
      v64 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v64 = v16;
      v66 = 1;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v16;
    v64 = v16;
    v66 = 1;
  }
  v22 = *(_QWORD *)(a1 + 16);
  v23 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  *(_QWORD *)(a1 + 16) = 0;
  v24 = *(_QWORD *)(a2 + 48);
  v65 = v22;
  v25 = *(_QWORD *)(a1 + 48);
  v71 = v23;
  v72 = v25;
  v26 = sub_979740(a1, v24, 1, 0, v17, v18);
  v27 = *(_BYTE *)(a1 + 320) == 0;
  *(_QWORD *)(a1 + 24) = v26;
  if ( v27 )
  {
    *(_QWORD *)&v67[0] = v12;
    v30 = *(_QWORD *)(a1 + 128);
    *(_DWORD *)(a1 + 48) = v13;
    v31 = *(_QWORD *)(a1 + 136);
    *(__m128 *)(a1 + 32) = _mm_loadh_ps(v67);
    *(_QWORD *)(v26 + 40) = a2;
    v32 = *(_QWORD *)(a2 + 56);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)&v67[0] = v32;
    sub_9756F0(a1, v32);
    sub_976710((_QWORD *)a1, *(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 136), v30, v31, *(__int64 *)&v67[0]);
    v35 = *(_WORD **)(a2 + 64);
    if ( (*v35 & 0x1FF) != 0xF9 )
    {
      v61 = *(_QWORD *)(a2 + 64);
      v62 = *(_QWORD *)(a1 + 136);
      v67[0] = *(double *)(a1 + 128);
      sub_9756F0(a1, v61);
      sub_976710((_QWORD *)a1, *(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 136), *(__int64 *)&v67[0], v62, (__int64)v35);
      v35 = *(_WORD **)(a2 + 64);
    }
    sub_979740(a1, (__int64)v35, 1, 0, v33, v34);
    if ( !*(_BYTE *)(a1 + 320) )
    {
      v38 = sub_979740(a1, *(_QWORD *)(a2 + 56), 1, 0, v36, v37);
      if ( !*(_BYTE *)(a1 + 320) )
      {
        v41 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
        if ( v66 )
        {
          sub_975B20(v16, v38, 2LL * (v38 == 0), v41, v39, v40);
          v44 = _mm_loadu_si128(&v71);
          *(_QWORD *)(a1 + 48) = v72;
          *(__m128i *)(a1 + 32) = v44;
          *(_QWORD *)(a1 + 24) = v64;
          *(_QWORD *)(a1 + 16) = v65;
          if ( v66 == 1 )
          {
            v45 = 2;
            v11 = 0;
            goto LABEL_24;
          }
        }
        else
        {
          sub_975B20(v16, 0, 2, v41, v39, v40);
          v63 = _mm_loadu_si128(&v71);
          *(_QWORD *)(a1 + 48) = v72;
          *(__m128i *)(a1 + 32) = v63;
          *(_QWORD *)(a1 + 24) = v64;
          *(_QWORD *)(a1 + 16) = v65;
        }
        v45 = 2LL * (v11 == 0);
LABEL_24:
        sub_975B20(v16, v11, v45, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v42, v43);
        v50 = sub_975DA0(a1, v11, v46, v47, v48, v49);
        v51 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(a1 + 16) = v50;
        sub_979740(a1, v51, 1, 0, v52, v53);
        sub_979740(a1, *(_QWORD *)(a2 + 32), 1, 0, v54, v55);
        result = sub_979740(a1, *(_QWORD *)(a2 + 16), 1, 0, v56, v57);
        v60 = *(_QWORD *)(a2 + 8);
        if ( v60 )
          result = sub_979740(a1, v60, 1, 0, v58, v59);
        goto LABEL_15;
      }
    }
  }
  v28 = _mm_loadu_si128(&v71);
  *(_QWORD *)(a1 + 48) = v72;
  *(__m128i *)(a1 + 32) = v28;
  *(_QWORD *)(a1 + 24) = v64;
  *(_QWORD *)(a1 + 16) = v65;
  result = 0;
LABEL_15:
  v29 = _mm_loadu_si128(&v69);
  *(_QWORD *)(a1 + 72) = v70;
  *(__m128i *)(a1 + 56) = v29;
LABEL_16:
  *(_QWORD *)(a1 + 128) = v68.m128i_i64[0];
  *(_DWORD *)(a1 + 136) = v68.m128i_i32[2];
  return result;
}

