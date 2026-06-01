__int64 __fastcall sub_48A30(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int128 *v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  const char *v16; // r14
  const char *v17; // rcx
  const char *v18; // rdx
  char *v19; // rax
  char *v20; // r12
  size_t v21; // rax
  size_t v22; // r14
  void *v23; // rdi
  size_t v24; // r15
  __int64 v25; // rax
  const char *v26; // [rsp+0h] [rbp-538h] BYREF
  __int64 v27; // [rsp+8h] [rbp-530h]
  _QWORD v28[2]; // [rsp+20h] [rbp-518h] BYREF
  _OWORD v29[10]; // [rsp+30h] [rbp-508h] BYREF
  __int128 v30; // [rsp+D0h] [rbp-468h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-458h]
  __int128 v32; // [rsp+E8h] [rbp-450h]
  __int128 v33; // [rsp+F8h] [rbp-440h]
  __int64 v34; // [rsp+108h] [rbp-430h] BYREF
  __int128 v35; // [rsp+110h] [rbp-428h]
  __int128 v36; // [rsp+120h] [rbp-418h]
  __int64 v37; // [rsp+130h] [rbp-408h]
  __int64 v38; // [rsp+138h] [rbp-400h]
  __int128 v39; // [rsp+140h] [rbp-3F8h]
  __m128i si128; // [rsp+150h] [rbp-3E8h]
  __int64 v41; // [rsp+160h] [rbp-3D8h]
  __int64 v42; // [rsp+168h] [rbp-3D0h]
  __int64 v43; // [rsp+170h] [rbp-3C8h]
  __int128 v44; // [rsp+178h] [rbp-3C0h]
  __int64 v45; // [rsp+188h] [rbp-3B0h]
  int v46; // [rsp+190h] [rbp-3A8h]
  int v47; // [rsp+1A0h] [rbp-398h] BYREF
  __int64 v48; // [rsp+1A8h] [rbp-390h]
  int *v49; // [rsp+1B0h] [rbp-388h]
  int *v50; // [rsp+1B8h] [rbp-380h]
  __int128 v51; // [rsp+1C0h] [rbp-378h]
  __int128 v52; // [rsp+1D0h] [rbp-368h]
  __int128 v53; // [rsp+1E0h] [rbp-358h]
  __int128 v54; // [rsp+1F0h] [rbp-348h]
  __int128 v55; // [rsp+200h] [rbp-338h]
  __m128i v56; // [rsp+210h] [rbp-328h]
  __int64 v57; // [rsp+220h] [rbp-318h]
  __int64 v58; // [rsp+228h] [rbp-310h]
  __int16 v59; // [rsp+230h] [rbp-308h]
  __int64 v60; // [rsp+238h] [rbp-300h]
  __int128 v61; // [rsp+240h] [rbp-2F8h]
  __int128 v62; // [rsp+250h] [rbp-2E8h]
  int v63; // [rsp+260h] [rbp-2D8h]
  __int64 v64; // [rsp+268h] [rbp-2D0h]
  __int128 v65; // [rsp+270h] [rbp-2C8h]
  _BYTE v66[32]; // [rsp+280h] [rbp-2B8h] BYREF
  __int64 v67; // [rsp+2A0h] [rbp-298h]
  __int64 v68; // [rsp+2A8h] [rbp-290h]
  __int64 v69; // [rsp+2F0h] [rbp-248h]
  __int64 v70; // [rsp+2F8h] [rbp-240h]
  __int64 v71; // [rsp+3A0h] [rbp-198h]
  __int64 v72; // [rsp+3A8h] [rbp-190h]
  __int64 (*v73)(); // [rsp+470h] [rbp-C8h]
  _BYTE v74[72]; // [rsp+478h] [rbp-C0h] BYREF
  __int64 v75; // [rsp+4C0h] [rbp-78h]
  __int64 v76; // [rsp+4C8h] [rbp-70h]
  __int64 v77; // [rsp+4D8h] [rbp-60h]
  char v78; // [rsp+4E8h] [rbp-50h]
  char v79; // [rsp+4E9h] [rbp-4Fh]
  unsigned __int64 v80; // [rsp+4F8h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  sub_45020((__int64)v66, a3, 0);
  v28[0] = a3;
  v28[1] = get_ph(v66, a3, v6);
  v7 = v29;
  do
  {
    *((_BYTE *)v7 + 10) = 0;
    v7 = (__int128 *)((char *)v7 + 40);
    *((_QWORD *)v7 - 5) = 0;
    *((_WORD *)v7 - 16) = 0;
    *((_DWORD *)v7 - 7) = 0;
    *(__int128 *)((char *)v7 - 24) = 0;
    *((_QWORD *)v7 - 1) = 0;
  }
  while ( &v30 != v7 );
  v31 = 0;
  v30 = 0;
  v32 = 0;
  v33 = 0;
  sub_2E130(&v34, (__int64)v28);
  v37 = -1;
  v49 = &v47;
  v50 = &v47;
  v58 = 0x80000000LL;
  v38 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v45 = 0;
  v46 = -1;
  v47 = 0;
  v48 = 0;
  v57 = 0;
  v59 = 0;
  v60 = 0;
  v63 = 0;
  v64 = 0;
  v35 = 0;
  v36 = 0;
  v39 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_6BEC0);
  v44 = 0;
  v51 = 0;
  v52 = -1;
  v53 = -1;
  v54 = -1;
  v55 = -1;
  v56 = si128;
  v61 = 0;
  v62 = 0;
  v65 = 0;
  v73 = sub_308B0;
  v29[0] = _mm_load_si128((const __m128i *)&xmmword_8C260);
  v29[1] = _mm_load_si128((const __m128i *)&xmmword_8C270);
  v29[2] = _mm_load_si128((const __m128i *)&xmmword_8C280);
  v29[3] = _mm_load_si128((const __m128i *)&xmmword_8C290);
  v29[4] = _mm_load_si128((const __m128i *)&xmmword_8C2A0);
  v29[5] = _mm_load_si128((const __m128i *)&xmmword_8C2B0);
  v29[6] = _mm_load_si128((const __m128i *)&xmmword_8C2C0);
  v29[7] = _mm_load_si128((const __m128i *)&xmmword_8C2D0);
  v29[8] = _mm_load_si128((const __m128i *)&xmmword_8C2E0);
  v29[9] = _mm_load_si128((const __m128i *)&xmmword_8C2F0);
  if ( (unsigned __int8)sub_39590((__int64)v66) && (unsigned __int8)sub_39BD0((__int64)v66) )
  {
    v16 = sub_3A4B0((__int64)v66);
    sub_45EE0((__int64)&v26, (__int64)v66);
    v17 = &s1;
    if ( v27 )
      v17 = v26;
    v18 = "";
    if ( v79 )
      v18 = "64";
    sub_2B240(a1, (__int64)"ELF%s for %s (%s)", v18, v17, v16);
    if ( v26 )
    {
      v27 = 0;
      qfree(v26);
    }
    v19 = sub_3FDC0((__int64)v28, (__int64)v66, (__int64)v74, v78);
    v20 = v19;
    if ( v19 && (v21 = strlen(v19), (v22 = v21) != 0) )
    {
      v23 = (void *)*a2;
      v24 = v21 + 1;
      if ( a2[2] < v21 + 1 )
      {
        v25 = qvector_reserve(a2, *a2, v21 + 1, 1);
        *a2 = v25;
        v23 = (void *)v25;
      }
      a2[1] = v24;
      memmove(v23, v20, v22);
      *(_BYTE *)(*a2 + v22) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    v8 = 18;
  }
  else
  {
    v8 = 0;
  }
  sub_3FAC0((__int64)v28);
  if ( v77 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 8LL))(v77);
  if ( v75 )
  {
    v76 = 0;
    qfree(v75);
  }
  v9 = v71;
  if ( v71 )
  {
    v10 = v72;
    if ( v72 )
    {
      v11 = 0;
      do
      {
        v12 = (__int64 *)(v9 + 96 * v11);
        v13 = v12[3];
        if ( v13 )
        {
          v12[4] = 0;
          qfree(v13);
        }
        v14 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v14);
        }
        ++v11;
        v9 = v71;
      }
      while ( v10 != v11 );
    }
    v72 = 0;
    qfree(v9);
  }
  if ( v69 )
  {
    v70 = 0;
    qfree(v69);
  }
  if ( v67 )
  {
    v68 = 0;
    qfree(v67);
  }
  return v8;
}

