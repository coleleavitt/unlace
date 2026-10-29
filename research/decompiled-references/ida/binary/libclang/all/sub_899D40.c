__int64 __fastcall sub_899D40(const __m128i *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  const __m128i *v7; // rbp
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 *v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r14d
  _QWORD *v18; // rax
  __int64 v19; // rax
  int v20; // r14d
  __int64 v21; // r15
  unsigned int v22; // eax
  char v23; // al
  __m128i v24; // xmm0
  __int32 v25; // esi
  char v26; // r14
  __int64 v27; // rax
  __int16 v28; // dx
  unsigned __int8 **v29; // rax
  unsigned int v30; // r13d
  __int64 v31; // r15
  int *v32; // rsi
  int *v33; // rdi
  __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v38; // r13
  __m128i v39; // xmm0
  __int64 v40; // rbp
  __int64 v41; // rdi
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rdx
  _QWORD *v46; // rdx
  __int64 v47; // r14
  __int64 v48; // rcx
  __int64 v49; // rdi
  char v50; // al
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // r14
  __int64 v58; // r12
  void *v59; // rdi
  unsigned int v60; // [rsp+4h] [rbp-1C4h]
  unsigned int v62; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v63; // [rsp+10h] [rbp-1B8h]
  void **i; // [rsp+18h] [rbp-1B0h]
  unsigned int v65; // [rsp+38h] [rbp-190h]
  unsigned __int8 v66; // [rsp+3Fh] [rbp-189h]
  char v67; // [rsp+48h] [rbp-180h]
  const __m128i *v68; // [rsp+50h] [rbp-178h]
  _DWORD v69[2]; // [rsp+68h] [rbp-160h] BYREF
  void *v70; // [rsp+70h] [rbp-158h] BYREF
  unsigned int v71; // [rsp+78h] [rbp-150h]
  char v72; // [rsp+7Ch] [rbp-14Ch]
  unsigned int v73; // [rsp+80h] [rbp-148h] BYREF
  char v74; // [rsp+84h] [rbp-144h]
  unsigned int v75; // [rsp+C0h] [rbp-108h] BYREF
  char v76; // [rsp+C4h] [rbp-104h]
  __int64 v77; // [rsp+C8h] [rbp-100h]
  __m128i v78; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+110h] [rbp-B8h]
  unsigned int v80; // [rsp+118h] [rbp-B0h]
  _QWORD *v81; // [rsp+120h] [rbp-A8h]
  __int64 v82; // [rsp+128h] [rbp-A0h]
  void *ptr; // [rsp+130h] [rbp-98h] BYREF
  __int64 v84; // [rsp+138h] [rbp-90h]
  _BYTE v85[64]; // [rsp+140h] [rbp-88h] BYREF
  __int16 v86; // [rsp+180h] [rbp-48h]

  v7 = a1;
  v65 = *(_DWORD *)a4;
  v9 = sub_6D9A50(*(_QWORD **)(a1->m128i_i64[0] + 16), a5);
  if ( !v9 || (v10 = v9, (unsigned __int8)(*(_BYTE *)(v9 + 16) - 2) > 1u) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
    {
      v39 = _mm_loadl_epi64(a1);
      v79 = a4;
      v78 = _mm_unpacklo_epi64(v39, (__m128i)(unsigned __int64)a3);
      return (unsigned int)sub_899B30((__int64)&v78, a2, a5);
    }
    else
    {
      v11 = (__int64 *)sub_A2E130(a1->m128i_i64[0], a2, 110, 0);
      v12 = sub_AC7B80(a2);
      if ( v11 )
      {
        v13 = *v11;
        if ( !*v11 )
        {
          v53 = v11[1];
          v54 = *(_DWORD *)(v53 + 14976);
          if ( v54 )
          {
            v55 = (unsigned int)(v54 - 1);
            *(_DWORD *)(v53 + 14976) = v55;
            v13 = *(_QWORD *)(v53 + 8 * v55 + 14848);
            v56 = *(unsigned int *)(v13 + 536);
            *(_BYTE *)v13 = 0;
            v57 = *(_QWORD *)(v13 + 528);
            *(_DWORD *)(v13 + 424) = 0;
            v58 = v57 + (v56 << 6);
            while ( v57 != v58 )
            {
              while ( 1 )
              {
                v58 -= 64;
                v59 = *(void **)(v58 + 24);
                if ( v59 == (void *)(v58 + 40) )
                  break;
                operator delete(v59, *(_QWORD *)(v58 + 40) + 1LL);
                if ( v57 == v58 )
                  goto LABEL_89;
              }
            }
LABEL_89:
            *(_DWORD *)(v13 + 536) = 0;
          }
          else
          {
            v13 = operator new(0x3A0u);
            *(_BYTE *)v13 = 0;
            *(_QWORD *)(v13 + 96) = v13 + 112;
            *(_QWORD *)(v13 + 128) = v13 + 144;
            *(_QWORD *)(v13 + 160) = v13 + 176;
            *(_QWORD *)(v13 + 192) = v13 + 208;
            *(_QWORD *)(v13 + 224) = v13 + 240;
            *(_QWORD *)(v13 + 256) = v13 + 272;
            *(_QWORD *)(v13 + 288) = v13 + 304;
            *(_QWORD *)(v13 + 320) = v13 + 336;
            *(_QWORD *)(v13 + 352) = v13 + 368;
            *(_QWORD *)(v13 + 384) = v13 + 400;
            *(_QWORD *)(v13 + 104) = 0;
            *(_BYTE *)(v13 + 112) = 0;
            *(_QWORD *)(v13 + 136) = 0;
            *(_BYTE *)(v13 + 144) = 0;
            *(_QWORD *)(v13 + 168) = 0;
            *(_BYTE *)(v13 + 176) = 0;
            *(_QWORD *)(v13 + 200) = 0;
            *(_BYTE *)(v13 + 208) = 0;
            *(_QWORD *)(v13 + 232) = 0;
            *(_BYTE *)(v13 + 240) = 0;
            *(_QWORD *)(v13 + 264) = 0;
            *(_BYTE *)(v13 + 272) = 0;
            *(_QWORD *)(v13 + 296) = 0;
            *(_BYTE *)(v13 + 304) = 0;
            *(_QWORD *)(v13 + 328) = 0;
            *(_BYTE *)(v13 + 336) = 0;
            *(_QWORD *)(v13 + 360) = 0;
            *(_BYTE *)(v13 + 368) = 0;
            *(_QWORD *)(v13 + 392) = 0;
            *(_BYTE *)(v13 + 400) = 0;
            *(_QWORD *)(v13 + 416) = v13 + 432;
            *(_QWORD *)(v13 + 424) = 0x800000000LL;
            *(_QWORD *)(v13 + 528) = v13 + 544;
            *(_QWORD *)(v13 + 536) = 0x600000000LL;
          }
          *v11 = v13;
        }
        v78.m128i_i64[0] = v12;
        v78.m128i_i8[8] = 1;
        v14 = *(unsigned int *)(v13 + 424);
        if ( *(unsigned int *)(v13 + 428) < (unsigned __int64)(v14 + 1) )
        {
          sub_25D6060(v13 + 416, v13 + 432, v14 + 1, 12);
          v14 = *(unsigned int *)(v13 + 424);
        }
        v15 = *(_QWORD *)(v13 + 416) + 12 * v14;
        *(_QWORD *)v15 = v78.m128i_i64[0];
        *(_DWORD *)(v15 + 8) = v78.m128i_i32[2];
        ++*(_DWORD *)(v13 + 424);
      }
      return 0;
    }
  }
  v18 = *(_QWORD **)(v9 + 40);
  if ( (*(_BYTE *)(v10 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v18 + 2) <= 0x40u )
      v18 = (_QWORD *)*v18;
    else
      v18 = *(_QWORD **)*v18;
  }
  v60 = (unsigned int)v18;
  if ( v65 <= 1 || (v19 = *(unsigned int *)(a4 + 16), *(_DWORD *)(a4 + 20) == (_DWORD)v19) )
  {
    v74 &= ~1u;
    v73 = 0;
  }
  else
  {
    sub_6A4260((__int64)&v73, (int *)(*(_QWORD *)(a4 + 8) + 56 * v19));
  }
  v78.m128i_i8[4] &= ~1u;
  v78.m128i_i32[0] = 0;
  sub_6A3820((__int64)&v78, 0, v60);
  sub_6A01B0(a4, (__int64)&v78);
  if ( v78.m128i_i32[0] > 1u )
    sub_69F740((__int64)&v78);
  v16 = 1;
  if ( !v60 )
    goto LABEL_49;
  v20 = *(char *)(a2 + 2);
  v21 = *(_QWORD *)(a2 + 16);
  v22 = sub_8124E0(a2);
  v23 = sub_8359E0(a1->m128i_i64[0], v22, v21, v20 < 0);
  v24 = _mm_loadu_si128(a3);
  v25 = a3[3].m128i_i32[2];
  ptr = v85;
  v26 = v23;
  v27 = a3[1].m128i_i64[0];
  v78 = v24;
  v79 = v27;
  v80 = a3[1].m128i_u32[2];
  v81 = (_QWORD *)a3[2].m128i_i64[0];
  v82 = a3[2].m128i_i64[1];
  v84 = 0x800000000LL;
  if ( v25 )
    sub_820650((__int64)&ptr, (__int64)a3[3].m128i_i64);
  v28 = a3[8].m128i_i16[0];
  LOBYTE(v28) = v28 & 3;
  v86 = v28 | v86 & 0xFC;
  if ( (v80 & 1) == 0 )
  {
    if ( (v80 & 2) != 0
      || ((_DWORD)v84 != 1 || (v80 & 4) == 0) && (v80 & 8) != 0 && *((_QWORD **)ptr + (int)((v80 >> 4) - 1)) == v81 )
    {
      v29 = (unsigned __int8 **)sub_A2E240(a1->m128i_i64[0], a2, 2264, 0);
      if ( v29 )
        sub_823450(v29, 3);
      LOBYTE(v80) = v80 | 1;
      LODWORD(v84) = 0;
    }
    else
    {
      v42 = (unsigned int)v84;
      v43 = (unsigned int)v84 + 1LL;
      if ( HIDWORD(v84) < v43 )
      {
        sub_25D6060(&ptr, v85, v43, 8);
        v42 = (unsigned int)v84;
      }
      *((_QWORD *)ptr + v42) = 0;
      v44 = v84 + 1;
      LODWORD(v84) = v84 + 1;
      v45 = *(_QWORD *)(v10 + 32);
      LOBYTE(v80) = v80 | 8;
      v82 = v45;
      v46 = *(_QWORD **)(v10 + 40);
      if ( (*(_BYTE *)(v10 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v46 + 2) <= 0x40u )
          v46 = (_QWORD *)*v46;
        else
          v46 = *(_QWORD **)*v46;
      }
      v81 = v46;
      v80 = v80 & 0xF | (16 * v44);
    }
  }
  v69[0] = 1;
  v62 = 1;
  v69[1] = v60;
  v66 = v26 & (v60 != 1);
  for ( i = (void **)v69; ; v62 = *(_DWORD *)i )
  {
    v30 = *(_DWORD *)(a4 + 16);
    if ( v30 == v62 )
    {
LABEL_46:
      v16 = 1;
      goto LABEL_47;
    }
    v75 = 0;
    v76 &= ~1u;
    sub_6A3820((__int64)&v75, v62, v60);
    if ( v30 )
    {
      v31 = 0;
      do
      {
        v32 = (int *)(v31 + *(_QWORD *)(a4 + 8));
        v33 = (int *)(v31 + v77);
        v31 += 56;
        sub_6A0310(v33, v32);
      }
      while ( 56LL * v30 != v31 );
    }
    sub_6A0310((int *)a4, (int *)&v75);
    if ( v65 > 1 )
      break;
    if ( (v66 & (v60 == v62)) == 0 )
      goto LABEL_66;
    v34 = *(_QWORD *)(a4 + 8);
    if ( v30 >= v60 )
      goto LABEL_42;
    v35 = v30;
LABEL_39:
    v36 = v34;
    v37 = 56 * v35;
    v38 = 56 * (v35 + v60 - v30 - 1);
    while ( 1 )
    {
      sub_6A63E0(v37 + v36, v34);
      if ( v37 == v38 )
        break;
      v36 = *(_QWORD *)(a4 + 8);
      v37 += 56;
    }
LABEL_42:
    if ( v75 > 1 )
    {
      sub_69F740((__int64)&v75);
      i = (void **)((char *)i + 4);
      if ( &v70 == i )
        goto LABEL_46;
    }
    else
    {
      i = (void **)((char *)i + 4);
      if ( &v70 == i )
        goto LABEL_46;
    }
  }
  if ( v30 >= v62 )
    goto LABEL_42;
  v68 = v7;
  v40 = 56LL * v30;
  do
  {
    v41 = v40 + *(_QWORD *)(a4 + 8);
    v40 += 56;
    sub_6A63E0(v41, (__int64)&v73);
  }
  while ( v40 != 56 * (v62 - v30 - 1 + (unsigned __int64)v30 + 1) );
  v7 = v68;
  v35 = v30;
  if ( (v66 & (v60 == v62)) != 0 )
  {
    v34 = *(_QWORD *)(a4 + 8);
    goto LABEL_39;
  }
LABEL_66:
  if ( v30 >= v62 )
    goto LABEL_42;
  v47 = 56LL * v30;
  v63 = 56 * (v30 + (unsigned __int64)(v62 - v30 - 1) + 1);
  while ( (unsigned __int8)sub_899D40(v7, a2, &v78, v47 + *(_QWORD *)(a4 + 8), *(_QWORD *)(v10 + 32)) )
  {
    v48 = *(_QWORD *)(v10 + 32);
    v49 = v7->m128i_i64[0];
    v71 = 64;
    v70 = &dword_0 + 1;
    v72 = 0;
    v50 = sub_835AB0(v49, a2, (__int64)&v78, v48, (__int64)&v70);
    if ( v71 > 0x40 && v70 )
    {
      v67 = v50;
      operator delete[](v70);
      v50 = v67;
    }
    if ( !v50 )
      break;
    v51 = v7->m128i_i64[0];
    v52 = *(_QWORD *)(*(_QWORD *)(v7->m128i_i64[0] + 24) + 8LL);
    if ( v52 )
    {
      if ( *(_DWORD *)(v52 + 8) && (!*(_DWORD *)(v51 + 48) || !*(_BYTE *)(v51 + 962) && !*(_BYTE *)(v51 + 963)) )
        break;
    }
    v47 += 56;
    if ( v63 == v47 )
      goto LABEL_42;
  }
  if ( v75 > 1 )
    sub_69F740((__int64)&v75);
  v16 = 0;
LABEL_47:
  if ( ptr != v85 )
    free(ptr);
LABEL_49:
  if ( v73 > 1 )
    sub_69F740((__int64)&v73);
  return v16;
}

