__int64 __fastcall sub_6DEE0(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v5; // r15
  const char *v6; // rdi
  size_t v7; // rax
  size_t v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r14
  const char *v14; // r8
  size_t v15; // rbp
  void *v16; // rax
  unsigned int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 *v26; // r12
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v35; // rax
  size_t v36; // rax
  size_t v37; // r13
  size_t v38; // r12
  void *v39; // rax
  __int64 *v40; // rdi
  const char *v41; // rdx
  bool v42; // zf
  size_t v43; // r13
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  const char *src; // [rsp+8h] [rbp-15F0h]
  const char *v49; // [rsp+10h] [rbp-15E8h] BYREF
  __int128 v50; // [rsp+18h] [rbp-15E0h]
  __int64 v51; // [rsp+78h] [rbp-1580h]
  __int128 v52; // [rsp+80h] [rbp-1578h]
  __int64 v53; // [rsp+90h] [rbp-1568h]
  __int128 v54; // [rsp+98h] [rbp-1560h]
  __int128 v55; // [rsp+A8h] [rbp-1550h]
  unsigned __int64 v56; // [rsp+B8h] [rbp-1540h]
  __int64 v57; // [rsp+C0h] [rbp-1538h]
  __int64 v58; // [rsp+C8h] [rbp-1530h]
  __int64 v59; // [rsp+D0h] [rbp-1528h]
  __int128 v60; // [rsp+D8h] [rbp-1520h]
  __m128i si128; // [rsp+E8h] [rbp-1510h]
  __int64 v62; // [rsp+F8h] [rbp-1500h]
  __int64 v63; // [rsp+100h] [rbp-14F8h]
  __int64 v64; // [rsp+108h] [rbp-14F0h]
  __int64 v65; // [rsp+110h] [rbp-14E8h]
  __int64 v66; // [rsp+118h] [rbp-14E0h]
  __int64 v67; // [rsp+120h] [rbp-14D8h]
  __int64 v68; // [rsp+128h] [rbp-14D0h]
  __int64 v69; // [rsp+140h] [rbp-14B8h]
  __int128 v70; // [rsp+148h] [rbp-14B0h]
  __int64 v71; // [rsp+158h] [rbp-14A0h]
  __int128 v72; // [rsp+160h] [rbp-1498h]
  void *v73; // [rsp+170h] [rbp-1488h] BYREF
  __int128 v74; // [rsp+178h] [rbp-1480h]
  _QWORD v75[654]; // [rsp+188h] [rbp-1470h] BYREF

  v2 = a1 + 80;
  v75[646] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 96);
  if ( a1 + 80 == v3 )
    return 0;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v3 + 40);
    v6 = ::src;
    if ( *(_QWORD *)(v5 + 8) )
      v6 = *(const char **)v5;
    if ( !strcmp(v6, a2) )
      break;
    v3 = std::_Rb_tree_increment(v3);
    if ( v2 == v3 )
      return 0;
  }
  if ( !v5 )
    return 0;
  v75[0] = 0xFFFFFFFFLL;
  memset(&v75[1], 0, 5156);
  v74 = 0;
  v73 = nullptr;
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = v7;
    if ( v7 )
    {
      v43 = v7 + 1;
      v73 = (void *)qvector_reserve(&v73, 0, v7 + 1, 1);
      *(_QWORD *)&v74 = v43;
      memmove(v73, a2, v8);
      *((_BYTE *)v73 + v8) = 0;
    }
  }
  if ( dbg && (*(_BYTE *)(dbg + 32LL) & 1) != 0 && !*(_BYTE *)(v5 + 184) )
  {
    v35 = operator new(0x50u);
    *(_DWORD *)(v35 + 8) = 2;
    v13 = v35;
    *(_QWORD *)(v35 + 16) = 0;
    *(_OWORD *)(v35 + 24) = 0;
    *(_QWORD *)v35 = &off_C94A8;
    if ( a2 )
    {
      v36 = strlen(a2);
      v37 = v36 + 1;
      v38 = v36;
      v39 = (void *)qvector_reserve(v13 + 16, 0, v36 + 1, 1);
      *(_QWORD *)(v13 + 16) = v39;
      *(_QWORD *)(v13 + 24) = v37;
      memmove(v39, a2, v38);
      v40 = (__int64 *)(v13 + 40);
      v41 = ::src;
      *(_BYTE *)(*(_QWORD *)(v13 + 16) + v38) = 0;
      v42 = *(_QWORD *)(v13 + 24) == 0;
      *(_QWORD *)(v13 + 40) = 0;
      *(_QWORD *)(v13 + 64) = 0;
      *(_DWORD *)(v13 + 72) = -1;
      *(_OWORD *)(v13 + 48) = 0;
      if ( !v42 )
        v41 = *(const char **)(v13 + 16);
    }
    else
    {
      *(_OWORD *)(v35 + 48) = 0;
      v40 = (__int64 *)(v35 + 40);
      v41 = ::src;
      *(_QWORD *)(v35 + 40) = 0;
      *(_QWORD *)(v35 + 64) = 0;
      *(_DWORD *)(v35 + 72) = -1;
    }
    sub_20160(v40, (__int64)"remote://%s", v41);
    LODWORD(v75[0]) = 1000;
    v11 = -1;
LABEL_21:
    v56 = 0xFFFFFFFF00000000LL;
    v49 = nullptr;
    v51 = 0;
    v53 = 0;
    v57 = 0xFFFFFFFFLL;
    v58 = -1;
    v59 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v71 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v60 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_AB160);
    v70 = 0;
    v72 = 0;
    sub_83090(&v49);
    v49 = (const char *)v13;
    if ( (unsigned __int8)sub_6DB70(v5)
      && (v17 = sub_24200(
                  *(_QWORD *)(*(_QWORD *)(v5 + 64) + 64LL),
                  (__int64 *)&v49,
                  *(_QWORD *)(v5 + 48),
                  v11,
                  (__int64)&v73,
                  2),
          (_BYTE)v17) )
    {
      sub_59A00(*(__int64 **)(v5 + 80), (__int64 *)v13, v44, v45, v46, v47);
    }
    else
    {
      v17 = 0;
    }
    sub_83090(&v49);
    v18 = v71;
    if ( v71 )
    {
      v19 = v72;
      if ( (_QWORD)v72 )
      {
        v20 = 0;
        do
        {
          v21 = (__int64 *)(v18 + 24 * v20);
          v22 = *v21;
          if ( *v21 )
          {
            v21[1] = 0;
            qfree(v22);
            v18 = v71;
          }
          ++v20;
        }
        while ( v19 != v20 );
      }
      *(_QWORD *)&v72 = 0;
      qfree(v18);
    }
    v23 = v69;
    if ( v69 )
    {
      v24 = v70;
      if ( (_QWORD)v70 )
      {
        v25 = 0;
        do
        {
          v26 = (__int64 *)(v23 + 72 * v25);
          v27 = v26[3];
          if ( v27 )
          {
            v26[4] = 0;
            qfree(v27);
          }
          v28 = *v26;
          if ( *v26 )
          {
            v26[1] = 0;
            qfree(v28);
          }
          ++v25;
          v23 = v69;
        }
        while ( v24 != v25 );
      }
      *(_QWORD *)&v70 = 0;
      qfree(v23);
    }
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree(v59);
    }
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree(v53);
    }
    v29 = v51;
    if ( v51 )
    {
      v30 = v52;
      if ( (_QWORD)v52 )
      {
        v31 = 0;
        v32 = 0;
        do
        {
          v33 = *(_QWORD *)(v29 + v31 + 16);
          if ( v33 )
          {
            *(_QWORD *)(v29 + v31 + 24) = 0;
            qfree(v33);
            v29 = v51;
          }
          ++v32;
          v31 += 120;
        }
        while ( v30 != v32 );
      }
      *(_QWORD *)&v52 = 0;
      qfree(v29);
    }
    goto LABEL_59;
  }
  LODWORD(v75[0]) = sub_1B1A0((__int64)a2);
  sub_1B0D0((__int64)v75 + 4, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL), v75[0]);
  if ( (unsigned __int8)sub_26600((__m128i *)&v73) )
  {
    v9 = sub_25460((__int64)&v73);
    v10 = *(_QWORD *)(a1 + 64);
    v11 = v9;
    v50 = 0;
    v49 = nullptr;
    if ( (unsigned __int8)sub_22AE0((_QWORD *)(v10 + 120), (__int64 *)&v49, (__int64)&v73, 0) )
    {
      v12 = operator new(0x28u);
      v13 = v12;
      v14 = ::src;
      if ( (_QWORD)v50 )
        v14 = v49;
      *(_DWORD *)(v12 + 8) = 1;
      *(_QWORD *)(v12 + 16) = 0;
      *(_OWORD *)(v12 + 24) = 0;
      *(_QWORD *)v12 = &off_C9478;
      if ( v14 )
      {
        src = v14;
        v15 = strlen(v14);
        v16 = (void *)qvector_reserve(v13 + 16, 0, v15 + 1, 1);
        *(_QWORD *)(v13 + 16) = v16;
        *(_QWORD *)(v13 + 24) = v15 + 1;
        memmove(v16, src, v15);
        *(_BYTE *)(*(_QWORD *)(v13 + 16) + v15) = 0;
      }
      if ( v49 )
      {
        *(_QWORD *)&v50 = 0;
        qfree(v49);
      }
      goto LABEL_21;
    }
    sub_1D740((__int64)"No file containing DWARF information could be found for \"%s\".\n", a2);
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
  }
  else
  {
    sub_1D740((__int64)"Cannot determine location of DWARF info for \"%s\".\n", a2);
  }
  v17 = 0;
LABEL_59:
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  return v17;
}
