__int64 __fastcall sub_312420(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // eax
  __m128i v5; // xmm0
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // r12d
  __int64 v9; // rax
  int v10; // r15d
  unsigned int v11; // r13d
  __int64 v12; // rbp
  char v13; // al
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __m128i v20; // xmm0
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // r12
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 *v31; // rbp
  __int64 *v32; // rbx
  __int64 v33; // rdi
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rax
  __m128i v38; // xmm0
  __int64 (__fastcall *v39)(__int64, int); // rax
  unsigned int v40; // r13d
  __int64 v41; // r15
  __int64 (__fastcall *v42)(__int64, int, int); // rax
  unsigned int v43; // ebp
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __m128i *v47; // rcx
  __int64 *v48; // rdx
  unsigned int v49; // eax
  _QWORD *v50; // rdi
  _QWORD *v51; // rdi
  __m128i v52; // [rsp+0h] [rbp-E8h] BYREF
  int v53; // [rsp+10h] [rbp-D8h]
  __int64 v54; // [rsp+18h] [rbp-D0h]
  __int64 *v55; // [rsp+20h] [rbp-C8h]
  __int64 *v56; // [rsp+28h] [rbp-C0h]
  __m128i *v57; // [rsp+30h] [rbp-B8h]
  __int64 *v58; // [rsp+38h] [rbp-B0h]
  __int64 v59; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+50h] [rbp-98h]
  int v62; // [rsp+58h] [rbp-90h]
  __int64 v63; // [rsp+60h] [rbp-88h] BYREF
  __int64 v64; // [rsp+68h] [rbp-80h] BYREF
  __int64 v65; // [rsp+70h] [rbp-78h]
  int v66; // [rsp+78h] [rbp-70h]
  __m128i v67; // [rsp+80h] [rbp-68h] BYREF
  __int64 v68; // [rsp+90h] [rbp-58h]
  __int64 v69; // [rsp+98h] [rbp-50h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v71; // [rsp+A8h] [rbp-40h]
  __int64 v72; // [rsp+B0h] [rbp-38h]

  v3 = *a1;
  v71 = __readfsqword(0x28u);
  v57 = &v67;
  v52 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v67, (__m128i)(unsigned __int64)&v67);
  v4 = (*(__int64 (__fastcall **)(__int64 *))(v3 + 80))(a1);
  sub_1E44B0(a2, v4, a2 + 40);
  v5 = _mm_load_si128(&v52);
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v67 = v5;
  sub_310F30(a1, &v67, 1);
  v56 = &v69;
  v55 = &v64;
LABEL_2:
  if ( v68 )
  {
    while ( 1 )
    {
      v6 = v67.m128i_i64[0];
      v7 = *(_QWORD *)v67.m128i_i64[0];
      v8 = *(_DWORD *)(v67.m128i_i64[0] + 16);
      **(_QWORD **)(v67.m128i_i64[0] + 8) = *(_QWORD *)v67.m128i_i64[0];
      *(_QWORD *)(v7 + 8) = *(_QWORD *)(v6 + 8);
      qfree(v6);
      --v68;
      sub_64340(v56, v8);
      if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 80))(a1) == v8 )
        goto LABEL_2;
      v9 = *(_QWORD *)(a2 + 8);
      v54 = a2 + 16;
      v59 = v9;
      v58 = &v60;
      sub_1E4290(&v60, a2 + 16);
      LOBYTE(v62) = *(_BYTE *)(a2 + 32);
      v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 104))(a1, v8);
      v11 = 0;
      if ( v10 > 0 )
      {
        while ( 1 )
        {
          v12 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, v8, v11);
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 152))(a1, v12, v8) )
            goto LABEL_20;
          v63 = *(_QWORD *)(a2 + 8);
          sub_1E4290(v55, v54);
          v13 = *(_BYTE *)(a2 + 32);
          v52.m128i_i64[0] = (__int64)&v63;
          LOBYTE(v66) = v13;
          sub_1EAA70(a2, (__int64)&v63, v12, v8);
          if ( *(_DWORD *)(a2 + 72) != 1 )
            sub_1E1B80(&v59, v52.m128i_i64[0]);
          sub_1E97D0((__int64)&v59, v52.m128i_i64[0]);
          v14 = v64;
          if ( !v64 )
            goto LABEL_20;
          v15 = *(_QWORD *)v64;
          if ( v65 )
            break;
          *(_QWORD *)v64 = *(_QWORD *)v64 & 3LL | v64 & 0xFFFFFFFFFFFFFFFCLL;
          v35 = v64;
          v36 = (__m128i)(unsigned __int64)v64;
          *(_QWORD *)v64 &= ~1uLL;
          *(__m128i *)(v35 + 8) = _mm_unpacklo_epi64(v36, v36);
          *(_QWORD *)v64 |= 2uLL;
LABEL_18:
          if ( v64 )
            qfree(v64);
LABEL_20:
          if ( v10 == ++v11 )
            goto LABEL_21;
        }
        v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_17;
        v17 = *(_QWORD **)(v16 + 8);
        if ( (*(_BYTE *)v17 & 2) != 0 )
        {
          v18 = *(_QWORD **)(v16 + 16);
          if ( (*(_BYTE *)v18 & 2) != 0 )
            goto LABEL_33;
        }
        else
        {
          v52.m128i_i64[0] = v15 & 0xFFFFFFFFFFFFFFFCLL;
          sub_30F8B0(v17);
          v16 = v52.m128i_i64[0];
          v18 = *(_QWORD **)(v52.m128i_i64[0] + 16);
          if ( (*(_BYTE *)v18 & 2) != 0 )
          {
            if ( (*(_BYTE *)v52.m128i_i64[0] & 2) != 0 )
              goto LABEL_14;
LABEL_33:
            v52.m128i_i64[0] = v16;
            sub_312B80(v16 + 40);
            v16 = v52.m128i_i64[0];
            *(_QWORD *)v52.m128i_i64[0] |= 2uLL;
LABEL_14:
            if ( v15 > 3 )
              qfree(v16);
            v14 = v64;
            v15 = *(_QWORD *)v64;
LABEL_17:
            *(_QWORD *)v14 = v15 & 3 | v14 & 0xFFFFFFFFFFFFFFFCLL;
            v19 = v64;
            v20 = (__m128i)(unsigned __int64)v64;
            *(_QWORD *)v64 &= ~1uLL;
            *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v20, v20);
            *(_QWORD *)v64 |= 2uLL;
            v65 = 0;
            goto LABEL_18;
          }
        }
        v52.m128i_i64[0] = v16;
        sub_30F8B0(v18);
        v16 = v52.m128i_i64[0];
        if ( (*(_BYTE *)v52.m128i_i64[0] & 2) == 0 )
          goto LABEL_33;
        goto LABEL_14;
      }
LABEL_21:
      v21 = sub_1E0150(a2, v8);
      if ( !(unsigned __int8)sub_1E0CA0(
                               v21,
                               (unsigned int)&v59,
                               v22,
                               v23,
                               v24,
                               v25,
                               v52.m128i_i64[0],
                               v52.m128i_i32[2],
                               v53,
                               v54,
                               (_DWORD)v55,
                               (_DWORD)v56,
                               (_DWORD)v57,
                               (_DWORD)v58,
                               v59,
                               v60,
                               v61,
                               v62,
                               v63,
                               v64,
                               v65,
                               v66,
                               v67.m128i_i32[0],
                               v67.m128i_i32[2],
                               v68,
                               v69,
                               v70,
                               v71,
                               v72) )
      {
        sub_1E8FB0(a2, v8, (__int64)&v59);
        v39 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
        v52.m128i_i32[0] = v39 == sub_65090 ? sub_65090((__int64)a1, v8) : v39((__int64)a1, v8);
        if ( v52.m128i_i32[0] > 0 )
        {
          v40 = 0;
          do
          {
            v41 = *a1;
            v42 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
            if ( v42 == sub_650D0 )
            {
              v43 = sub_650D0((__int64)a1, v8, v40);
            }
            else
            {
              v49 = v42((__int64)a1, v8, v40);
              v41 = *a1;
              v43 = v49;
            }
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v41 + 152))(a1, v8, v43)
              && (unsigned __int8)sub_64190(v56, v43) )
            {
              v46 = qalloc_or_throw(24, v43, v44, v45);
              v47 = v57;
              *(_DWORD *)(v46 + 16) = v43;
              *(_QWORD *)v46 = v47;
              v48 = (__int64 *)v67.m128i_i64[1];
              *(_QWORD *)(v46 + 8) = v67.m128i_i64[1];
              *v48 = v46;
              v67.m128i_i64[1] = v46;
              ++v68;
            }
            ++v40;
          }
          while ( v52.m128i_i32[0] != v40 );
        }
      }
      v26 = v60;
      if ( !v60 )
        goto LABEL_2;
      v27 = *(_QWORD *)v60;
      if ( !v61 )
      {
        *(_QWORD *)v60 = *(_QWORD *)v60 & 3LL | v60 & 0xFFFFFFFFFFFFFFFCLL;
        v37 = v60;
        v38 = (__m128i)(unsigned __int64)v60;
        *(_QWORD *)v60 &= ~1uLL;
        *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64(v38, v38);
        *(_QWORD *)v60 |= 2uLL;
        goto LABEL_26;
      }
      v28 = v27 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v27 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        break;
LABEL_25:
      *(_QWORD *)v26 = v27 & 3 | v26 & 0xFFFFFFFFFFFFFFFCLL;
      v29 = v60;
      v30 = (__m128i)(unsigned __int64)v60;
      *(_QWORD *)v60 &= ~1uLL;
      *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64(v30, v30);
      *(_QWORD *)v60 |= 2uLL;
      v61 = 0;
LABEL_26:
      if ( !v60 )
        goto LABEL_2;
      qfree(v60);
      if ( !v68 )
        goto LABEL_28;
    }
    v50 = *(_QWORD **)(v28 + 8);
    if ( (*(_BYTE *)v50 & 2) != 0 )
    {
      v51 = *(_QWORD **)(v28 + 16);
      if ( (*(_BYTE *)v51 & 2) != 0 )
        goto LABEL_56;
    }
    else
    {
      sub_30F8B0(v50);
      v51 = *(_QWORD **)(v28 + 16);
      if ( (*(_BYTE *)v51 & 2) != 0 )
        goto LABEL_51;
    }
    sub_30F8B0(v51);
LABEL_51:
    if ( (*(_BYTE *)v28 & 2) != 0 )
    {
LABEL_52:
      if ( v27 > 3 )
        qfree(v27 & 0xFFFFFFFFFFFFFFFCLL);
      v26 = v60;
      v27 = *(_QWORD *)v60;
      goto LABEL_25;
    }
LABEL_56:
    sub_312B80(v28 + 40);
    *(_QWORD *)v28 |= 2uLL;
    goto LABEL_52;
  }
LABEL_28:
  qfree(v69);
  v31 = (__int64 *)v57;
  v32 = (__int64 *)v67.m128i_i64[0];
  if ( (__m128i *)v67.m128i_i64[0] != v57 )
  {
    do
    {
      v33 = (__int64)v32;
      v32 = (__int64 *)*v32;
      **(_QWORD **)(v33 + 8) = v32;
      v32[1] = *(_QWORD *)(v33 + 8);
      qfree(v33);
      --v68;
    }
    while ( v32 != v31 );
  }
  return 1;
}
