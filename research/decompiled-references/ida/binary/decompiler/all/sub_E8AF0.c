__int64 __fastcall sub_E8AF0(__int64 a1, __int64 a2, char a3)
{
  unsigned int tinfo_property; // eax
  __int64 v6; // rdi
  __int64 (*v7)(); // rcx
  unsigned int tinfo_details; // ebp
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 (*v13)(); // rcx
  int v14; // eax
  char *v15; // rbp
  unsigned __int64 v16; // rax
  signed __int64 v17; // r9
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // rbp
  __int64 v23; // rdx
  char *v24; // rdi
  unsigned __int64 v25; // r13
  __int64 v26; // rbx
  char *v27; // r15
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 v30; // r12
  _QWORD *v31; // rbx
  int v32; // r9d
  char *v33; // rax
  size_t n; // [rsp+18h] [rbp-1C0h]
  size_t na; // [rsp+18h] [rbp-1C0h]
  signed __int64 v36; // [rsp+28h] [rbp-1B0h]
  __int64 v37; // [rsp+70h] [rbp-168h] BYREF
  int v38; // [rsp+78h] [rbp-160h]
  _QWORD v39[2]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v40; // [rsp+90h] [rbp-148h]
  __m128i v41; // [rsp+98h] [rbp-140h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-130h]
  __m128i v43; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-118h]
  int v45; // [rsp+C8h] [rbp-110h]
  __int64 v46; // [rsp+D0h] [rbp-108h] BYREF
  __int128 v47; // [rsp+D8h] [rbp-100h]
  __int64 v48; // [rsp+E8h] [rbp-F0h]
  __int64 v49; // [rsp+F0h] [rbp-E8h]
  __int64 v50; // [rsp+F8h] [rbp-E0h]
  __int128 v51; // [rsp+100h] [rbp-D8h]
  __int64 v52; // [rsp+110h] [rbp-C8h]
  __int128 v53; // [rsp+118h] [rbp-C0h]
  char v54; // [rsp+128h] [rbp-B0h]
  void *src; // [rsp+130h] [rbp-A8h] BYREF
  unsigned __int64 v56; // [rsp+138h] [rbp-A0h]
  unsigned __int64 v57; // [rsp+140h] [rbp-98h]
  __int64 v58; // [rsp+170h] [rbp-68h]
  __int64 v59; // [rsp+178h] [rbp-60h]
  unsigned __int64 v60; // [rsp+198h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property();
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  v7 = *(__int64 (**)())(*(_QWORD *)v6 + 360LL);
  if ( v7 == sub_CE2C0 )
    return 0;
  v10 = tinfo_property;
  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD))v7)(v6, tinfo_property, 0) == -1
    || !(unsigned __int8)sub_3713A0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 320), 1) )
  {
    return 0;
  }
  sub_D6290(a1 + 88, v10);
  v11 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  v12 = *(_QWORD *)(v11 + 112);
  v13 = *(__int64 (**)())(*(_QWORD *)v12 + 360LL);
  v14 = -1;
  if ( v13 != sub_CE2C0 )
    v14 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v13)(v12, v10, 0);
  *(_DWORD *)(a1 + 288) = v14;
  if ( !(unsigned __int8)sub_DF910(a1 + 88, a2) )
    return 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v52 = 0;
  v54 = 16;
  v47 = 0;
  v51 = 0;
  v53 = 0;
  tinfo_details = get_tinfo_details();
  if ( (_BYTE)tinfo_details )
  {
    if ( !(_QWORD)v47 || (*(_BYTE *)(v46 + 72) & 2) == 0 )
    {
      v37 = 0;
      v38 = 3;
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0xF) != 0xA )
      {
        if ( (get_tinfo_property() & 0x2F) == 0xD )
          v38 |= 4u;
        sub_3290F0(&src, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), &v37);
        copy_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
      }
      sub_E8860((__int64)&src, (__int64)&v46);
      LODWORD(v39[0]) = 0;
      v15 = (char *)src;
      copy_argloc();
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      copy_tinfo_t();
      v45 = v38;
      v16 = v56;
      v17 = v15 - (_BYTE *)src;
      if ( v57 < v56 + 1 )
      {
        v36 = v15 - (_BYTE *)src;
        v33 = (char *)qvector_reserve();
        v17 = v36;
        src = v33;
        v15 = &v33[v36];
        v16 = v56;
      }
      memmove(v15 + 80, v15, 80 * v16 - v17);
      *(_DWORD *)v15 = 0;
      copy_argloc();
      v18 = v40;
      v40 = 0;
      v19 = _mm_loadu_si128(&v41);
      *((_QWORD *)v15 + 2) = v18;
      *(__m128i *)(v15 + 24) = v19;
      v20 = v42;
      v21 = _mm_load_si128(&v43);
      v41 = 0;
      v42 = 0;
      v43 = 0;
      *((_QWORD *)v15 + 5) = v20;
      *((_QWORD *)v15 + 8) = 0;
      *((__m128i *)v15 + 3) = v21;
      copy_tinfo_t();
      *((_DWORD *)v15 + 18) = v45;
      ++v56;
      clear_tinfo_t();
      if ( v42 )
      {
        v43.m128i_i64[0] = 0;
        qfree();
      }
      if ( v40 )
      {
        v41.m128i_i64[0] = 0;
        qfree();
      }
      cleanup_argloc();
      if ( (unsigned __int8)calc_arglocs() )
      {
        if ( *(_DWORD *)src != 3 || *(_DWORD *)(a1 + 288) != *((unsigned __int16 *)src + 4) )
          goto LABEL_26;
        if ( v56 > 1 )
        {
          v22 = 0;
          v23 = 1;
          do
          {
            n = v23;
            v22 += 80;
            if ( (unsigned int)compare_arglocs() )
              goto LABEL_26;
            v23 = n + 1;
          }
          while ( n + 1 < v56 );
        }
      }
      tinfo_details = create_tinfo();
      if ( (_BYTE)tinfo_details )
      {
        na = *(_QWORD *)(a1 + 16);
        if ( a3 )
        {
          sub_3290F0(v39, *(_QWORD *)(na + 112), a1 + 296);
        }
        else
        {
          v39[0] = 0;
          copy_tinfo_t();
        }
        sub_37D850(na, *(_QWORD *)(a1 + 320), (unsigned int)v39, 1, 1, v32);
        clear_tinfo_t();
        goto LABEL_27;
      }
LABEL_26:
      tinfo_details = 0;
LABEL_27:
      if ( v58 )
      {
        v59 = 0;
        qfree();
      }
      cleanup_argloc();
      clear_tinfo_t();
      v24 = (char *)src;
      if ( src )
      {
        v25 = v56;
        if ( v56 )
        {
          v26 = 0;
          do
          {
            v27 = &v24[80 * v26];
            clear_tinfo_t();
            if ( *((_QWORD *)v27 + 5) )
            {
              *((_QWORD *)v27 + 6) = 0;
              qfree();
            }
            if ( *((_QWORD *)v27 + 2) )
            {
              *((_QWORD *)v27 + 3) = 0;
              qfree();
            }
            ++v26;
            cleanup_argloc();
            v24 = (char *)src;
          }
          while ( v25 != v26 );
        }
        v56 = 0;
        qfree();
      }
      clear_tinfo_t();
      cleanup_argloc();
      goto LABEL_40;
    }
    tinfo_details = 0;
  }
LABEL_40:
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v28 = v46;
  if ( v46 )
  {
    v29 = v47;
    if ( (_QWORD)v47 )
    {
      v30 = 0;
      do
      {
        v31 = (_QWORD *)(v28 + 80 * v30);
        clear_tinfo_t();
        if ( v31[5] )
        {
          v31[6] = 0;
          qfree();
        }
        if ( v31[2] )
        {
          v31[3] = 0;
          qfree();
        }
        ++v30;
        cleanup_argloc();
        v28 = v46;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v47 = 0;
    qfree();
  }
  return tinfo_details;
}
