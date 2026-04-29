__int64 __fastcall sub_30E2A0(__int64 *a1, __int64 a2)
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
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  unsigned __int64 *v19; // rax
  __m128i v20; // xmm0
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 *v31; // rbp
  __int64 *v32; // rbx
  __int64 *v33; // rdi
  unsigned __int64 *v35; // rax
  __m128i v36; // xmm0
  unsigned __int64 v37; // rax
  __m128i v38; // xmm0
  __int64 (__fastcall *v39)(__int64, int); // rax
  unsigned int v40; // r13d
  __int64 v41; // r15
  __int64 (__fastcall *v42)(__int64, int, int); // rax
  unsigned int v43; // ebp
  __int64 v44; // rax
  __m128i *v45; // rcx
  __int64 *v46; // rdx
  unsigned int v47; // eax
  _QWORD *v48; // rdi
  _QWORD *v49; // rdi
  __m128i v50; // [rsp+0h] [rbp-E8h] BYREF
  int v51; // [rsp+10h] [rbp-D8h]
  __int64 v52; // [rsp+18h] [rbp-D0h]
  __int64 *v53; // [rsp+20h] [rbp-C8h]
  __int64 *v54; // [rsp+28h] [rbp-C0h]
  __m128i *v55; // [rsp+30h] [rbp-B8h]
  unsigned __int64 *v56; // [rsp+38h] [rbp-B0h]
  __int64 v57; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v58; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+50h] [rbp-98h]
  int v60; // [rsp+58h] [rbp-90h]
  __int64 v61; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 *v62; // [rsp+68h] [rbp-80h] BYREF
  __int64 v63; // [rsp+70h] [rbp-78h]
  int v64; // [rsp+78h] [rbp-70h]
  __m128i v65; // [rsp+80h] [rbp-68h] BYREF
  __int64 v66; // [rsp+90h] [rbp-58h]
  __int64 v67; // [rsp+98h] [rbp-50h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v69; // [rsp+A8h] [rbp-40h]
  __int64 v70; // [rsp+B0h] [rbp-38h]

  v3 = *a1;
  v69 = __readfsqword(0x28u);
  v55 = &v65;
  v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v65, (__m128i)(unsigned __int64)&v65);
  v4 = (*(__int64 (__fastcall **)(__int64 *))(v3 + 80))(a1);
  sub_1E0830(a2, v4, a2 + 40);
  v5 = _mm_load_si128(&v50);
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v65 = v5;
  sub_30CDB0(a1, &v65, 1);
  v54 = &v67;
  v53 = (__int64 *)&v62;
LABEL_2:
  if ( v66 )
  {
    while ( 1 )
    {
      v6 = v65.m128i_i64[0];
      v7 = *(_QWORD *)v65.m128i_i64[0];
      v8 = *(_DWORD *)(v65.m128i_i64[0] + 16);
      **(_QWORD **)(v65.m128i_i64[0] + 8) = *(_QWORD *)v65.m128i_i64[0];
      *(_QWORD *)(v7 + 8) = *(_QWORD *)(v6 + 8);
      qfree(v6);
      --v66;
      sub_60900(v54, v8);
      if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 80))(a1) == v8 )
        goto LABEL_2;
      v9 = *(_QWORD *)(a2 + 8);
      v52 = a2 + 16;
      v57 = v9;
      v56 = &v58;
      sub_1E0610((__int64 *)&v58, a2 + 16);
      LOBYTE(v60) = *(_BYTE *)(a2 + 32);
      v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 104))(a1, v8);
      v11 = 0;
      if ( v10 > 0 )
      {
        while ( 1 )
        {
          v12 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, v8, v11);
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 152))(a1, v12, v8) )
            goto LABEL_20;
          v61 = *(_QWORD *)(a2 + 8);
          sub_1E0610(v53, v52);
          v13 = *(_BYTE *)(a2 + 32);
          v50.m128i_i64[0] = (__int64)&v61;
          LOBYTE(v64) = v13;
          sub_1E6DF0(a2, (__int64)&v61, v12, v8);
          if ( *(_DWORD *)(a2 + 72) != 1 )
            sub_1DDF00(&v57, v50.m128i_i64[0]);
          sub_1E5B50((__int64)&v57, v50.m128i_i64[0]);
          v14 = v62;
          if ( !v62 )
            goto LABEL_20;
          v15 = *v62;
          if ( v63 )
            break;
          *v62 = *v62 & 3 | (unsigned __int64)v62 & 0xFFFFFFFFFFFFFFFCLL;
          v35 = v62;
          v36 = (__m128i)(unsigned __int64)v62;
          *v62 &= ~1uLL;
          *(__m128i *)(v35 + 1) = _mm_unpacklo_epi64(v36, v36);
          *v62 |= 2u;
LABEL_18:
          if ( v62 )
            qfree(v62);
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
          v50.m128i_i64[0] = v15 & 0xFFFFFFFFFFFFFFFCLL;
          sub_30B730(v17);
          v16 = v50.m128i_i64[0];
          v18 = *(_QWORD **)(v50.m128i_i64[0] + 16);
          if ( (*(_BYTE *)v18 & 2) != 0 )
          {
            if ( (*(_BYTE *)v50.m128i_i64[0] & 2) != 0 )
              goto LABEL_14;
LABEL_33:
            v50.m128i_i64[0] = v16;
            sub_30EA00(v16 + 40);
            v16 = v50.m128i_i64[0];
            *(_QWORD *)v50.m128i_i64[0] |= 2uLL;
LABEL_14:
            if ( v15 > 3 )
              qfree(v16);
            v14 = v62;
            v15 = *v62;
LABEL_17:
            *v14 = v15 & 3 | (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL;
            v19 = v62;
            v20 = (__m128i)(unsigned __int64)v62;
            *v62 &= ~1uLL;
            *(__m128i *)(v19 + 1) = _mm_unpacklo_epi64(v20, v20);
            *v62 |= 2u;
            v63 = 0;
            goto LABEL_18;
          }
        }
        v50.m128i_i64[0] = v16;
        sub_30B730(v18);
        v16 = v50.m128i_i64[0];
        if ( (*(_BYTE *)v50.m128i_i64[0] & 2) == 0 )
          goto LABEL_33;
        goto LABEL_14;
      }
LABEL_21:
      v21 = sub_1DC4D0(a2, v8);
      if ( !(unsigned __int8)sub_1DD020(
                               v21,
                               (unsigned int)&v57,
                               v22,
                               v23,
                               v24,
                               v25,
                               v50.m128i_i64[0],
                               v50.m128i_i32[2],
                               v51,
                               v52,
                               (_DWORD)v53,
                               (_DWORD)v54,
                               (_DWORD)v55,
                               (_DWORD)v56,
                               v57,
                               v58,
                               v59,
                               v60,
                               v61,
                               (_DWORD)v62,
                               v63,
                               v64,
                               v65.m128i_i32[0],
                               v65.m128i_i32[2],
                               v66,
                               v67,
                               v68,
                               v69,
                               v70) )
      {
        sub_1E5330(a2, v8, (__int64)&v57);
        v39 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
        v50.m128i_i32[0] = v39 == sub_61650 ? sub_61650((__int64)a1, v8) : v39((__int64)a1, v8);
        if ( v50.m128i_i32[0] > 0 )
        {
          v40 = 0;
          do
          {
            v41 = *a1;
            v42 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
            if ( v42 == sub_61690 )
            {
              v43 = sub_61690((__int64)a1, v8, v40);
            }
            else
            {
              v47 = v42((__int64)a1, v8, v40);
              v41 = *a1;
              v43 = v47;
            }
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v41 + 152))(a1, v8, v43)
              && (unsigned __int8)sub_60750(v54, v43) )
            {
              v44 = qalloc_or_throw(24);
              v45 = v55;
              *(_DWORD *)(v44 + 16) = v43;
              *(_QWORD *)v44 = v45;
              v46 = (__int64 *)v65.m128i_i64[1];
              *(_QWORD *)(v44 + 8) = v65.m128i_i64[1];
              *v46 = v44;
              v65.m128i_i64[1] = v44;
              ++v66;
            }
            ++v40;
          }
          while ( v50.m128i_i32[0] != v40 );
        }
      }
      v26 = v58;
      if ( !v58 )
        goto LABEL_2;
      v27 = *(_QWORD *)v58;
      if ( !v59 )
      {
        *(_QWORD *)v58 = *(_QWORD *)v58 & 3LL | v58 & 0xFFFFFFFFFFFFFFFCLL;
        v37 = v58;
        v38 = (__m128i)v58;
        *(_QWORD *)v58 &= ~1uLL;
        *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64(v38, v38);
        *(_QWORD *)v58 |= 2uLL;
        goto LABEL_26;
      }
      v28 = v27 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v27 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        break;
LABEL_25:
      *(_QWORD *)v26 = v27 & 3 | v26 & 0xFFFFFFFFFFFFFFFCLL;
      v29 = v58;
      v30 = (__m128i)v58;
      *(_QWORD *)v58 &= ~1uLL;
      *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64(v30, v30);
      *(_QWORD *)v58 |= 2uLL;
      v59 = 0;
LABEL_26:
      if ( !v58 )
        goto LABEL_2;
      qfree(v58);
      if ( !v66 )
        goto LABEL_28;
    }
    v48 = *(_QWORD **)(v28 + 8);
    if ( (*(_BYTE *)v48 & 2) != 0 )
    {
      v49 = *(_QWORD **)(v28 + 16);
      if ( (*(_BYTE *)v49 & 2) != 0 )
        goto LABEL_56;
    }
    else
    {
      sub_30B730(v48);
      v49 = *(_QWORD **)(v28 + 16);
      if ( (*(_BYTE *)v49 & 2) != 0 )
        goto LABEL_51;
    }
    sub_30B730(v49);
LABEL_51:
    if ( (*(_BYTE *)v28 & 2) != 0 )
    {
LABEL_52:
      if ( v27 > 3 )
        qfree(v27 & 0xFFFFFFFFFFFFFFFCLL);
      v26 = v58;
      v27 = *(_QWORD *)v58;
      goto LABEL_25;
    }
LABEL_56:
    sub_30EA00(v28 + 40);
    *(_QWORD *)v28 |= 2uLL;
    goto LABEL_52;
  }
LABEL_28:
  qfree(v67);
  v31 = (__int64 *)v55;
  v32 = (__int64 *)v65.m128i_i64[0];
  if ( (__m128i *)v65.m128i_i64[0] != v55 )
  {
    do
    {
      v33 = v32;
      v32 = (__int64 *)*v32;
      *(_QWORD *)v33[1] = v32;
      v32[1] = v33[1];
      qfree(v33);
      --v66;
    }
    while ( v32 != v31 );
  }
  return 1;
}
