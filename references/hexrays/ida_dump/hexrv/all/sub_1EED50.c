unsigned __int64 __fastcall sub_1EED50(__int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // r12
  int v4; // r8d
  __int64 *v5; // rbx
  __int64 v6; // r15
  int *v7; // r14
  int *v8; // r13
  __int64 i; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // edx
  __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  void *v15; // r13
  __m128i v16; // xmm0
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r14
  unsigned int v21; // ebx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v25; // rbx
  _QWORD *v26; // rbp
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // r12
  __int64 v30; // rbx
  _QWORD *v31; // rbp
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // rbx
  _QWORD *v36; // rbp
  __int64 v37; // rdi
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // r14
  _DWORD *v42; // r10
  int v43; // eax
  unsigned int v44; // edx
  __int64 *v45; // r13
  __int64 v46; // r14
  __int64 *v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // r9d
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // r9d
  __m128i v57; // [rsp+8h] [rbp-158h] BYREF
  unsigned __int64 v58; // [rsp+18h] [rbp-148h]
  _DWORD *v59; // [rsp+20h] [rbp-140h]
  __int64 (__fastcall ***v60)(); // [rsp+28h] [rbp-138h]
  __int64 *v61; // [rsp+30h] [rbp-130h]
  __int64 (__fastcall **v62)(); // [rsp+38h] [rbp-128h] BYREF
  __int64 v63; // [rsp+40h] [rbp-120h]
  __int64 v64; // [rsp+48h] [rbp-118h]
  __int128 v65; // [rsp+50h] [rbp-110h]
  char v66; // [rsp+60h] [rbp-100h]
  __int64 v67; // [rsp+68h] [rbp-F8h]
  __int64 v68; // [rsp+70h] [rbp-F0h]
  __int64 (__fastcall **v69)(); // [rsp+78h] [rbp-E8h] BYREF
  __int64 v70; // [rsp+80h] [rbp-E0h] BYREF
  __int128 v71; // [rsp+88h] [rbp-D8h]
  __int64 v72[2]; // [rsp+98h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+A8h] [rbp-B8h] BYREF
  __int128 v74; // [rsp+B0h] [rbp-B0h]
  __int64 v75[2]; // [rsp+C0h] [rbp-A0h] BYREF
  void *v76; // [rsp+D0h] [rbp-90h]
  __m128i v77; // [rsp+D8h] [rbp-88h]
  int v78; // [rsp+E8h] [rbp-78h]
  __int64 v79; // [rsp+F0h] [rbp-70h] BYREF
  __int128 v80; // [rsp+F8h] [rbp-68h]
  __int64 v81; // [rsp+108h] [rbp-58h] BYREF
  __int128 v82; // [rsp+110h] [rbp-50h]
  unsigned __int64 v83; // [rsp+120h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  v70 = 0;
  v72[0] = 0;
  v72[1] = 0;
  v73 = 0;
  v75[0] = 0;
  v75[1] = 0;
  v76 = nullptr;
  v78 = 0;
  v69 = &off_4B1760;
  v79 = 0;
  v81 = 0;
  v71 = 0;
  v74 = 0;
  v77 = 0;
  v80 = 0;
  v82 = 0;
  v1 = *(int *)(a1 + 64);
  v58 = v1;
  if ( v1 )
  {
    v62 = nullptr;
    v60 = &v62;
    v63 = 0;
    v64 = 0;
    v61 = &v79;
    v65 = 0;
    sub_1EEA10(&v79, v1, (unsigned __int64)&v62);
    if ( v64 )
    {
      *(_QWORD *)&v65 = 0;
      qfree(v64);
    }
    qfree(v62);
    if ( v58 != (_QWORD)v82 )
    {
      v65 = 0;
      v62 = nullptr;
      v63 = 0;
      v64 = 0;
      sub_1EEA10(&v81, v58, (unsigned __int64)v60);
      if ( v64 )
      {
        *(_QWORD *)&v65 = 0;
        qfree(v64);
      }
      qfree(v62);
    }
    if ( (int)v1 > 0 )
    {
      v2 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 64) )
        {
          if ( !under_debugger )
            sub_37DDE0(52719);
          goto LABEL_73;
        }
        v3 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v2);
        v4 = *(_DWORD *)(v3 + 72);
        v57.m128i_i64[0] = 40 * v2;
        v5 = (__int64 *)(40 * v2 + v79);
        if ( v4 )
          break;
        v6 = *(_QWORD *)(v3 + 64);
        if ( !*(_BYTE *)(v6 + 320) )
        {
          v39 = *(_QWORD *)(v6 + 440);
          if ( (int)v39 <= 0 )
            goto LABEL_20;
          v40 = 0;
          v41 = 104 * ((unsigned int)(v39 - 1) + 1LL);
          do
          {
            v42 = (_DWORD *)(v40 + *(_QWORD *)(v6 + 432));
            if ( !v42[23] )
            {
              if ( (*((_BYTE *)v42 + 25) & 1) != 0
                || (*(_BYTE *)(v6 + 2) & 8) == 0
                && (v59 = (_DWORD *)(v40 + *(_QWORD *)(v6 + 432)), (unsigned __int8)sub_369040(v6, v59, 0))
                && (v43 = sub_1BEE80(v59), v42 = v59, v43 >= *(_QWORD *)(v6 + 144)) )
              {
                v44 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 480) + 130LL);
                if ( v44 < v42[22] )
                  v44 = v42[22];
                sub_1BEB30((__int64)v42, v5, v44, *(_QWORD *)(*(_QWORD *)(v3 + 64) + 1440LL), (_QWORD *)v42 + 10);
              }
            }
            v40 += 104;
          }
          while ( v41 != v40 );
          goto LABEL_19;
        }
        v7 = *(int **)(v6 + 456);
        v8 = &v7[*(_QWORD *)(v6 + 464)];
        if ( v7 != v8 )
        {
          for ( i = *(_QWORD *)(v3 + 64); ; i = *(_QWORD *)(v3 + 64) )
          {
            v10 = *(_QWORD *)(i + 1440);
            v11 = *(_QWORD *)(v6 + 432) + 104LL * *v7;
            v12 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 480) + 130LL);
            if ( v12 < *(_DWORD *)(v11 + 88) )
              v12 = *(_DWORD *)(v11 + 88);
            sub_1BEB30(v11, v5, v12, v10, (_QWORD *)(v11 + 80));
            if ( v8 == ++v7 )
              break;
          }
          goto LABEL_19;
        }
LABEL_20:
        sub_5FF00(v72, v5);
        sub_311BB0(&v73, v5 + 2);
        if ( v58 == ++v2 )
          goto LABEL_21;
      }
      v66 = 0;
      v45 = (__int64 *)(v81 + v57.m128i_i64[0]);
      v63 = 0;
      v64 = 0;
      v65 = 0u;
      v67 = 40 * v2 + v79;
      v68 = v81 + v57.m128i_i64[0];
      v62 = &off_4B1710;
      sub_1E9C30(v3, (__int64)v60);
      v46 = *(_QWORD *)(*(_QWORD *)(v3 + 480) + 112LL);
      v47 = (__int64 *)(v46 + 104);
      sub_602C0(v5, (__int64 *)(v46 + 104), v48, v49, v50, v51);
      v46 += 120;
      sub_312B60(v5 + 2, v46);
      sub_602C0(v45, v47, v52, v53, v54, v55);
      sub_312B60(v45 + 2, v46);
LABEL_19:
      v5 = (__int64 *)(v79 + v57.m128i_i64[0]);
      goto LABEL_20;
    }
LABEL_21:
    v13 = v79;
  }
  else
  {
    v13 = 0;
  }
  v61 = &v79;
  sub_60550(v75, (__int64 *)v13);
  v14 = *(_QWORD *)(v13 + 24);
  v15 = nullptr;
  if ( v14 )
  {
    v61 = &v79;
    v15 = (void *)qalloc_or_throw(16 * v14);
    memcpy(v15, *(const void **)(v13 + 16), 16 * v14);
  }
  v16 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
  if ( v76 )
  {
    v57 = v16;
    v77.m128i_i64[0] = 0;
    qfree(v76);
    v16 = _mm_load_si128(&v57);
  }
  v76 = v15;
  v77 = v16;
  v17 = *(int *)(a1 + 64);
  v61 = &v79;
  sub_1EEA10(&v70, v17, (unsigned __int64)v72);
  v18 = sub_62D60((_QWORD *)a1);
  sub_30C0E0(v18, &v69);
  v19 = *(_DWORD *)(a1 + 64);
  v20 = 40;
  v21 = 1;
  if ( v19 > 1 )
  {
    while ( v21 < v19 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v21);
      v66 = 0;
      v63 = 0;
      v65 = 0u;
      v67 = v20 + v70;
      v68 = 0;
      v62 = &off_4B1738;
      v64 = v22;
      sub_1E9C30(v22, (__int64)&v62);
      v19 = *(_DWORD *)(a1 + 64);
      ++v21;
      v20 += 40;
      if ( v19 <= (int)v21 )
        goto LABEL_29;
    }
    if ( !under_debugger )
      sub_37DDE0(52719);
LABEL_73:
    BUG();
  }
LABEL_29:
  v23 = v81;
  v69 = &off_4B1760;
  if ( v81 )
  {
    v24 = v82;
    if ( (_QWORD)v82 )
    {
      v25 = 0;
      do
      {
        v26 = (_QWORD *)(v23 + 40 * v25);
        v27 = v26[2];
        if ( v27 )
        {
          v26[3] = 0;
          qfree(v27);
        }
        ++v25;
        qfree(*v26);
        v23 = v81;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v82 = 0;
    qfree(v23);
  }
  v28 = v79;
  if ( v79 )
  {
    v29 = v80;
    if ( (_QWORD)v80 )
    {
      v30 = 0;
      do
      {
        v31 = (_QWORD *)(v28 + 40 * v30);
        v32 = v31[2];
        if ( v32 )
        {
          v31[3] = 0;
          qfree(v32);
        }
        ++v30;
        qfree(*v31);
        v28 = v79;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v80 = 0;
    qfree(v28);
  }
  v69 = (__int64 (__fastcall **)())&unk_4BDD48;
  if ( v76 )
  {
    v77.m128i_i64[0] = 0;
    qfree(v76);
  }
  qfree(v75[0]);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v72[0]);
  v33 = v70;
  if ( v70 )
  {
    v34 = v71;
    if ( (_QWORD)v71 )
    {
      v35 = 0;
      do
      {
        v36 = (_QWORD *)(v33 + 40 * v35);
        v37 = v36[2];
        if ( v37 )
        {
          v36[3] = 0;
          qfree(v37);
        }
        ++v35;
        qfree(*v36);
        v33 = v70;
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v71 = 0;
    qfree(v33);
  }
  return v83 - __readfsqword(0x28u);
}
