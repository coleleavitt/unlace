unsigned __int64 __fastcall sub_10EFA0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  int v13; // ecx
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rbx
  unsigned __int64 **v17; // rbp
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // r14
  _QWORD *v20; // rdx
  __int64 *v21; // rdi
  __int64 *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // rbx
  unsigned __int64 **v26; // rbp
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // r15
  _QWORD *v29; // rdx
  __int64 *v30; // rdi
  __int64 *v31; // rdi
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rbp
  __int64 v35; // rbx
  _BYTE *v37; // [rsp+8h] [rbp-2B0h]
  _QWORD *v38; // [rsp+8h] [rbp-2B0h]
  _BYTE *v39; // [rsp+8h] [rbp-2B0h]
  _QWORD *v40; // [rsp+8h] [rbp-2B0h]
  _QWORD v41[17]; // [rsp+10h] [rbp-2A8h] BYREF
  __int64 v42; // [rsp+98h] [rbp-220h]
  __int64 (__fastcall **v43)(); // [rsp+170h] [rbp-148h]
  __int64 v44; // [rsp+178h] [rbp-140h] BYREF
  __int128 v45; // [rsp+180h] [rbp-138h]
  _QWORD v46[2]; // [rsp+190h] [rbp-128h] BYREF
  int v47; // [rsp+1A0h] [rbp-118h]
  __int64 v48; // [rsp+1A8h] [rbp-110h]
  __int64 v49; // [rsp+1B0h] [rbp-108h]
  int v50; // [rsp+1B8h] [rbp-100h]
  int v51; // [rsp+1C0h] [rbp-F8h]
  _QWORD *v52; // [rsp+1C8h] [rbp-F0h]
  __int64 (__fastcall **v53)(); // [rsp+1D0h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+1D8h] [rbp-E0h] BYREF
  __int128 v55; // [rsp+1E0h] [rbp-D8h]
  _QWORD v56[2]; // [rsp+1F0h] [rbp-C8h] BYREF
  int v57; // [rsp+200h] [rbp-B8h]
  __int64 v58; // [rsp+208h] [rbp-B0h]
  __int64 v59; // [rsp+210h] [rbp-A8h]
  int v60; // [rsp+218h] [rbp-A0h]
  int v61; // [rsp+220h] [rbp-98h]
  _QWORD *v62; // [rsp+228h] [rbp-90h]
  __int64 v63; // [rsp+230h] [rbp-88h]
  __int128 v64; // [rsp+238h] [rbp-80h]
  int v65; // [rsp+248h] [rbp-70h]
  unsigned __int64 v66; // [rsp+250h] [rbp-68h] BYREF
  __m128i v67; // [rsp+258h] [rbp-60h] BYREF
  int v68; // [rsp+268h] [rbp-50h]
  unsigned __int64 v69; // [rsp+278h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 40);
  v69 = __readfsqword(0x28u);
  sub_10D740((__int64)v41, v6, 0xFFFFFFFFLL, a3 | 1, a5, a6);
  v8 = *(int *)(v6 + 64);
  v43 = (__int64 (__fastcall **)())&unk_4EAF88;
  v44 = 0;
  v46[0] = 0;
  v46[1] = 0;
  v47 = v42;
  v48 = 0;
  v49 = 0;
  v50 = v42;
  v51 = 1;
  v45 = 0;
  sub_103ED0(&v44, v8, (unsigned __int64)v46);
  v52 = v41;
  v43 = &off_4DCAB8;
  v9 = *(int *)(v6 + 64);
  v53 = (__int64 (__fastcall **)())&unk_4EAF88;
  v54 = 0;
  v56[0] = 0;
  v56[1] = 0;
  v57 = v42;
  v58 = 0;
  v59 = 0;
  v60 = v42;
  v61 = 1;
  v55 = 0;
  sub_103ED0(&v54, v9, (unsigned __int64)v56);
  v53 = &off_4DCAB8;
  v62 = v41;
  v63 = 0;
  v65 = 0;
  v66 = 0;
  v68 = 0;
  v64 = 0;
  v67 = 0;
  sub_30E5A0(a1, &v53);
  sub_10DEF0((__int64)v41, &v54, &v66, 0);
  v10 = *(_QWORD *)a2;
  v11 = _mm_loadu_si128(&v67);
  v12 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v13 = v68;
  *(_QWORD *)a2 = v66;
  v14 = v10;
  v15 = *(_DWORD *)(a2 + 24);
  v66 = v10;
  *(_DWORD *)(a2 + 24) = v13;
  v68 = v15;
  v67 = v12;
  *(__m128i *)(a2 + 8) = v11;
  if ( v15 )
  {
    if ( !under_debugger )
      sub_37EA20(50444);
LABEL_66:
    BUG();
  }
  if ( v10 )
  {
    if ( v12.m128i_i64[0] )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = (unsigned __int64 **)(v10 + 24 * v16);
        v18 = *v17;
        if ( *v17 )
          break;
LABEL_18:
        ++v16;
        v10 = v14;
        if ( v16 == v12.m128i_i64[0] )
          goto LABEL_19;
      }
      v19 = *v18;
      if ( !v17[1] )
      {
        *v18 = *v18 & 3 | (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v17 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v17, (__m128i)(unsigned __int64)*v17);
        **v17 &= ~1uLL;
        **v17 |= 2u;
        goto LABEL_15;
      }
      v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*(_BYTE *)(v19 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_14:
        *v18 = v19 & 3 | (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v17 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v17, (__m128i)(unsigned __int64)*v17);
        **v17 &= ~1uLL;
        **v17 |= 2u;
        v17[1] = 0;
LABEL_15:
        if ( *v17 )
          qfree();
        v14 = v66;
        goto LABEL_18;
      }
      v21 = (__int64 *)v20[1];
      if ( (*(_BYTE *)v21 & 2) != 0 )
      {
        v22 = (__int64 *)v20[2];
        if ( (*(_BYTE *)v22 & 2) != 0 )
          goto LABEL_57;
      }
      else
      {
        sub_1009B0(v21);
        v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
        v22 = *(__int64 **)((v19 & 0xFFFFFFFFFFFFFFFCLL) + 16);
        if ( (*(_BYTE *)v22 & 2) != 0 )
        {
          if ( (*(_BYTE *)(v19 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          {
LABEL_11:
            if ( v19 > 3 )
              qfree();
            v18 = *v17;
            v19 = **v17;
            goto LABEL_14;
          }
LABEL_57:
          if ( v20[3] )
          {
            v20[4] = 0;
            v40 = v20;
            qfree();
            v20 = v40;
          }
          *v20 |= 2uLL;
          goto LABEL_11;
        }
      }
      v39 = v20;
      sub_1009B0(v22);
      v20 = v39;
      if ( (*v39 & 2) != 0 )
        goto LABEL_11;
      goto LABEL_57;
    }
LABEL_19:
    v67.m128i_i64[0] = 0;
    qfree();
  }
  if ( v65 )
  {
    if ( !under_debugger )
      sub_37EA20(50444);
    goto LABEL_66;
  }
  v23 = v63;
  if ( v63 )
  {
    v24 = v64;
    if ( (_QWORD)v64 )
    {
      v25 = 0;
      while ( 1 )
      {
        v26 = (unsigned __int64 **)(v23 + 24 * v25);
        v27 = *v26;
        if ( *v26 )
          break;
LABEL_37:
        if ( v24 == ++v25 )
          goto LABEL_38;
      }
      v28 = *v27;
      if ( !v26[1] )
      {
        *v27 = *v27 & 3 | (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v26 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v26, (__m128i)(unsigned __int64)*v26);
        **v26 &= ~1uLL;
        **v26 |= 2u;
        goto LABEL_34;
      }
      v29 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*(_BYTE *)(v28 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_33:
        *v27 = v28 & 3 | (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v26 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v26, (__m128i)(unsigned __int64)*v26);
        **v26 &= ~1uLL;
        **v26 |= 2u;
        v26[1] = 0;
LABEL_34:
        if ( *v26 )
          qfree();
        v23 = v63;
        goto LABEL_37;
      }
      v30 = (__int64 *)v29[1];
      if ( (*(_BYTE *)v30 & 2) != 0 )
      {
        v31 = (__int64 *)v29[2];
        if ( (*(_BYTE *)v31 & 2) != 0 )
          goto LABEL_52;
      }
      else
      {
        sub_1009B0(v30);
        v29 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
        v31 = *(__int64 **)((v28 & 0xFFFFFFFFFFFFFFFCLL) + 16);
        if ( (*(_BYTE *)v31 & 2) != 0 )
        {
          if ( (*(_BYTE *)(v28 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          {
LABEL_30:
            if ( v28 > 3 )
              qfree();
            v27 = *v26;
            v28 = **v26;
            goto LABEL_33;
          }
LABEL_52:
          if ( v29[3] )
          {
            v29[4] = 0;
            v38 = v29;
            qfree();
            v29 = v38;
          }
          *v29 |= 2uLL;
          goto LABEL_30;
        }
      }
      v37 = v29;
      sub_1009B0(v31);
      v29 = v37;
      if ( (*v37 & 2) != 0 )
        goto LABEL_30;
      goto LABEL_52;
    }
LABEL_38:
    *(_QWORD *)&v64 = 0;
    qfree();
  }
  v53 = (__int64 (__fastcall **)())&unk_4EAF88;
  qfree();
  qfree();
  if ( v54 )
  {
    v32 = v55;
    if ( (_QWORD)v55 )
    {
      v33 = 0;
      do
      {
        ++v33;
        qfree();
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  v43 = (__int64 (__fastcall **)())&unk_4EAF88;
  qfree();
  qfree();
  if ( v44 )
  {
    v34 = v45;
    if ( (_QWORD)v45 )
    {
      v35 = 0;
      do
      {
        ++v35;
        qfree();
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  sub_101A70(v41);
  return v69 - __readfsqword(0x28u);
}
