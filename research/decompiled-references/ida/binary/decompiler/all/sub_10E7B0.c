unsigned __int64 __fastcall sub_10E7B0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  int v13; // edx
  int v14; // eax
  int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rbx
  unsigned __int64 **v19; // rbp
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // r15
  _QWORD *v22; // rdx
  __int64 *v23; // rdi
  __int64 *v24; // rdi
  unsigned __int64 v25; // rdi
  __int64 v26; // r14
  __int64 v27; // rbx
  unsigned __int64 **v28; // rbp
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // r15
  _QWORD *v31; // rdx
  __int64 *v32; // rdi
  __int64 *v33; // rdi
  __int64 v34; // rbp
  __int64 v35; // rbx
  __int64 v36; // rbp
  __int64 v37; // rbx
  _BYTE *v39; // [rsp+8h] [rbp-2B0h]
  _QWORD *v40; // [rsp+8h] [rbp-2B0h]
  _BYTE *v41; // [rsp+8h] [rbp-2B0h]
  _QWORD *v42; // [rsp+8h] [rbp-2B0h]
  _QWORD v43[17]; // [rsp+10h] [rbp-2A8h] BYREF
  __int64 v44; // [rsp+98h] [rbp-220h]
  __int64 (__fastcall **v45)(); // [rsp+170h] [rbp-148h] BYREF
  __int64 v46; // [rsp+178h] [rbp-140h] BYREF
  __int128 v47; // [rsp+180h] [rbp-138h]
  _QWORD v48[2]; // [rsp+190h] [rbp-128h] BYREF
  int v49; // [rsp+1A0h] [rbp-118h]
  __int64 v50; // [rsp+1A8h] [rbp-110h]
  __int64 v51; // [rsp+1B0h] [rbp-108h]
  int v52; // [rsp+1B8h] [rbp-100h]
  int v53; // [rsp+1C0h] [rbp-F8h]
  _QWORD *v54; // [rsp+1C8h] [rbp-F0h]
  __int64 (__fastcall **v55)(); // [rsp+1D0h] [rbp-E8h]
  __int64 v56; // [rsp+1D8h] [rbp-E0h] BYREF
  __int128 v57; // [rsp+1E0h] [rbp-D8h]
  _QWORD v58[2]; // [rsp+1F0h] [rbp-C8h] BYREF
  int v59; // [rsp+200h] [rbp-B8h]
  __int64 v60; // [rsp+208h] [rbp-B0h]
  __int64 v61; // [rsp+210h] [rbp-A8h]
  int v62; // [rsp+218h] [rbp-A0h]
  int v63; // [rsp+220h] [rbp-98h]
  _QWORD *v64; // [rsp+228h] [rbp-90h]
  unsigned __int64 v65; // [rsp+230h] [rbp-88h] BYREF
  __m128i v66; // [rsp+238h] [rbp-80h] BYREF
  int v67; // [rsp+248h] [rbp-70h]
  __int64 v68; // [rsp+250h] [rbp-68h]
  __int128 v69; // [rsp+258h] [rbp-60h]
  int v70; // [rsp+268h] [rbp-50h]
  unsigned __int64 v71; // [rsp+278h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 40);
  v71 = __readfsqword(0x28u);
  sub_10D740((__int64)v43, v6, 0xFFFFFFFFLL, a3 & 0xFFFFFFFE, a5, a6);
  v8 = *(int *)(v6 + 64);
  v45 = (__int64 (__fastcall **)())&unk_4EAF88;
  v49 = v44;
  v52 = v44;
  v46 = 0;
  v48[0] = 0;
  v48[1] = 0;
  v50 = 0;
  v51 = 0;
  v53 = 1;
  v47 = 0;
  sub_103ED0(&v46, v8, (unsigned __int64)v48);
  v54 = v43;
  v45 = &off_4DCAB8;
  v9 = *(int *)(v6 + 64);
  v55 = (__int64 (__fastcall **)())&unk_4EAF88;
  v56 = 0;
  v58[0] = 0;
  v58[1] = 0;
  v59 = v44;
  v60 = 0;
  v61 = 0;
  v62 = v44;
  v63 = 1;
  v57 = 0;
  sub_103ED0(&v56, v9, (unsigned __int64)v58);
  v55 = &off_4DCAB8;
  v64 = v43;
  v65 = 0;
  v67 = 0;
  v68 = 0;
  v70 = 0;
  v66 = 0;
  v69 = 0;
  sub_30E1E0(a1, &v45);
  sub_10DEF0((__int64)v43, &v46, &v65, 0);
  v10 = v65;
  v11 = _mm_loadu_si128(&v66);
  v12 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v65 = *(_QWORD *)a2;
  v13 = v67;
  *(_QWORD *)a2 = v10;
  v14 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v13;
  v15 = v70;
  v67 = v14;
  v66 = v12;
  *(__m128i *)(a2 + 8) = v11;
  if ( v15 )
  {
    if ( !under_debugger )
      sub_37EA20(50444);
LABEL_66:
    BUG();
  }
  v16 = v68;
  if ( v68 )
  {
    v17 = v69;
    if ( (_QWORD)v69 )
    {
      v18 = 0;
      while ( 1 )
      {
        v19 = (unsigned __int64 **)(v16 + 24 * v18);
        v20 = *v19;
        if ( *v19 )
          break;
LABEL_18:
        if ( v17 == ++v18 )
          goto LABEL_19;
      }
      v21 = *v20;
      if ( !v19[1] )
      {
        *v20 = *v20 & 3 | (unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v19 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v19, (__m128i)(unsigned __int64)*v19);
        **v19 &= ~1uLL;
        **v19 |= 2u;
        goto LABEL_15;
      }
      v22 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_14:
        *v20 = v21 & 3 | (unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v19 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v19, (__m128i)(unsigned __int64)*v19);
        **v19 &= ~1uLL;
        **v19 |= 2u;
        v19[1] = 0;
LABEL_15:
        if ( *v19 )
          qfree();
        v16 = v68;
        goto LABEL_18;
      }
      v23 = (__int64 *)v22[1];
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
        v24 = (__int64 *)v22[2];
        if ( (*(_BYTE *)v24 & 2) != 0 )
          goto LABEL_57;
      }
      else
      {
        sub_1009B0(v23);
        v22 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
        v24 = *(__int64 **)((v21 & 0xFFFFFFFFFFFFFFFCLL) + 16);
        if ( (*(_BYTE *)v24 & 2) != 0 )
        {
          if ( (*(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          {
LABEL_11:
            if ( v21 > 3 )
              qfree();
            v20 = *v19;
            v21 = **v19;
            goto LABEL_14;
          }
LABEL_57:
          if ( v22[3] )
          {
            v22[4] = 0;
            v42 = v22;
            qfree();
            v22 = v42;
          }
          *v22 |= 2uLL;
          goto LABEL_11;
        }
      }
      v41 = v22;
      sub_1009B0(v24);
      v22 = v41;
      if ( (*v41 & 2) != 0 )
        goto LABEL_11;
      goto LABEL_57;
    }
LABEL_19:
    *(_QWORD *)&v69 = 0;
    qfree();
    v14 = v67;
  }
  if ( v14 )
  {
    if ( !under_debugger )
      sub_37EA20(50444);
    goto LABEL_66;
  }
  v25 = v65;
  if ( v65 )
  {
    v26 = v66.m128i_i64[0];
    if ( v66.m128i_i64[0] )
    {
      v27 = 0;
      while ( 1 )
      {
        v28 = (unsigned __int64 **)(v25 + 24 * v27);
        v29 = *v28;
        if ( *v28 )
          break;
LABEL_37:
        if ( v26 == ++v27 )
          goto LABEL_38;
      }
      v30 = *v29;
      if ( !v28[1] )
      {
        *v29 = *v29 & 3 | (unsigned __int64)v29 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v28 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v28, (__m128i)(unsigned __int64)*v28);
        **v28 &= ~1uLL;
        **v28 |= 2u;
        goto LABEL_34;
      }
      v31 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*(_BYTE *)(v30 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_33:
        *v29 = v30 & 3 | (unsigned __int64)v29 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v28 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v28, (__m128i)(unsigned __int64)*v28);
        **v28 &= ~1uLL;
        **v28 |= 2u;
        v28[1] = 0;
LABEL_34:
        if ( *v28 )
          qfree();
        v25 = v65;
        goto LABEL_37;
      }
      v32 = (__int64 *)v31[1];
      if ( (*(_BYTE *)v32 & 2) != 0 )
      {
        v33 = (__int64 *)v31[2];
        if ( (*(_BYTE *)v33 & 2) != 0 )
          goto LABEL_52;
      }
      else
      {
        sub_1009B0(v32);
        v31 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
        v33 = *(__int64 **)((v30 & 0xFFFFFFFFFFFFFFFCLL) + 16);
        if ( (*(_BYTE *)v33 & 2) != 0 )
        {
          if ( (*(_BYTE *)(v30 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          {
LABEL_30:
            if ( v30 > 3 )
              qfree();
            v29 = *v28;
            v30 = **v28;
            goto LABEL_33;
          }
LABEL_52:
          if ( v31[3] )
          {
            v31[4] = 0;
            v40 = v31;
            qfree();
            v31 = v40;
          }
          *v31 |= 2uLL;
          goto LABEL_30;
        }
      }
      v39 = v31;
      sub_1009B0(v33);
      v31 = v39;
      if ( (*v39 & 2) != 0 )
        goto LABEL_30;
      goto LABEL_52;
    }
LABEL_38:
    v66.m128i_i64[0] = 0;
    qfree();
  }
  v55 = (__int64 (__fastcall **)())&unk_4EAF88;
  qfree();
  qfree();
  if ( v56 )
  {
    v34 = v57;
    if ( (_QWORD)v57 )
    {
      v35 = 0;
      do
      {
        ++v35;
        qfree();
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v57 = 0;
    qfree();
  }
  v45 = (__int64 (__fastcall **)())&unk_4EAF88;
  qfree();
  qfree();
  if ( v46 )
  {
    v36 = v47;
    if ( (_QWORD)v47 )
    {
      v37 = 0;
      do
      {
        ++v37;
        qfree();
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v47 = 0;
    qfree();
  }
  sub_101A70(v43);
  return v71 - __readfsqword(0x28u);
}
