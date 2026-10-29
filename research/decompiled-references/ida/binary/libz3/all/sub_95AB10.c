char __fastcall sub_95AB10(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  char **v4; // rbp
  char **exception; // rbp
  _DWORD *v6; // rbx
  unsigned __int64 i; // rax
  _DWORD *v8; // r12
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // esi
  int v14; // eax
  int v15; // esi
  int v16; // ebp
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 j; // rax
  _DWORD *v30; // rcx
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  _QWORD *v35; // rcx
  int v36; // esi
  int v37; // eax
  int v38; // edx
  __m128i *v39; // r14
  __int64 v40; // r9
  __m128i *v41; // rcx
  __int64 v42; // r11
  __m128i *v43; // rdi
  __m128i *v44; // rax
  __m128i *v45; // rsi
  _DWORD *v46; // rdx
  _DWORD *v47; // rax
  _DWORD *v48; // rax
  _DWORD *v49; // rax
  unsigned int v50; // edx
  __int64 v51; // rcx
  int v52; // edx
  _QWORD *v53; // rcx
  __int64 v54; // rax
  int v55; // edx
  __m128i *v56; // r10
  __int64 v57; // r8
  __int64 v58; // rsi
  __m128i *v59; // r11
  _DWORD *v60; // rsi
  const __m128i *v61; // rbx
  _DWORD *v62; // r8
  __int64 v63; // rdx
  __m128i *v64; // rsi
  __m128i *v65; // rdx
  unsigned int v66; // ebp
  unsigned int v67; // ecx
  unsigned int v68; // ebp
  unsigned int v69; // ecx
  unsigned int *v70; // rax
  __int64 v71; // rcx
  unsigned int v72; // ebp
  unsigned int v73; // ecx
  unsigned int v74; // ebp
  unsigned int v75; // ecx
  unsigned int *v76; // rdx
  __int64 v77; // rcx
  _QWORD *v78; // rdx
  _QWORD *v79; // rax
  int v81; // [rsp+8h] [rbp-A0h]
  size_t v82; // [rsp+8h] [rbp-A0h]
  __int64 v83; // [rsp+10h] [rbp-98h]
  __m128i *v84; // [rsp+18h] [rbp-90h]
  int v85; // [rsp+20h] [rbp-88h]
  int v86; // [rsp+38h] [rbp-70h]
  __int64 v87[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = a3;
  LOBYTE(i) = a4 == a2 || a4 == a3;
  if ( (_BYTE)i )
    return i;
  v8 = a2;
  if ( a2 == a3 )
    return i;
  LOBYTE(i) = sub_15D2CB0(*(_QWORD *)(a1 + 8), a2);
  if ( (_BYTE)i )
    return i;
  if ( *v6 >= *a2 )
  {
    v47 = v6;
    v6 = a2;
    v8 = v47;
  }
  v11 = v6[3];
  v12 = *(_QWORD *)(a1 + 184);
  v13 = (v8[3] - v11) ^ (v11 << 8);
  v14 = ((v13 ^ ((v11 - v13) << 16)) + v13 - v11) ^ ((v11 - v13) << 10);
  v15 = (a4[3] - v14) ^ (v14 << 8);
  v16 = ((v15 ^ ((v14 - v15) << 16)) + v15 - v14) ^ ((v14 - v15) << 10);
  v17 = 32LL * *(unsigned int *)(a1 + 192);
  v18 = 32LL * (v16 & (unsigned int)(*(_DWORD *)(a1 + 192) - 1));
  v19 = v12 + v17;
  v20 = v12 + v18;
  if ( v18 != v17 )
  {
    for ( i = v12 + v18; v19 != i; i += 32LL )
    {
      v21 = *(_QWORD *)(i + 8);
      if ( v21 > 1 )
      {
        if ( *(_DWORD *)i == v16 && v6 == (_DWORD *)v21 && v8 == *(_DWORD **)(i + 16) && a4 == *(_DWORD **)(i + 24) )
          return i;
      }
      else if ( !v21 )
      {
        goto LABEL_13;
      }
    }
  }
  for ( ; v20 != v12; v12 += 32 )
  {
    i = *(_QWORD *)(v12 + 8);
    if ( i > 1 )
    {
      if ( *(_DWORD *)v12 == v16 && v6 == (_DWORD *)i && v8 == *(_DWORD **)(v12 + 16) && a4 == *(_DWORD **)(v12 + 24) )
        return i;
    }
    else if ( !i )
    {
      break;
    }
  }
LABEL_13:
  v22 = *(unsigned int *)(a1 + 136);
  v23 = *(_QWORD *)(a1 + 128);
  v24 = v22 - 1;
  v25 = *(_DWORD *)(a1 + 136);
  v22 *= 32;
  v26 = v23 + v22;
  v27 = 32LL * (v16 & v24);
  v28 = v23 + v27;
  if ( v27 != v22 )
  {
    for ( j = v23 + v27; v26 != j; j += 32 )
    {
      v30 = *(_DWORD **)j;
      if ( *(_QWORD *)j > 1u )
      {
        if ( *(_DWORD *)(j + 28) == v16 && v6 == v30 && v8 == *(_DWORD **)(j + 8) && a4 == *(_DWORD **)(j + 16) )
        {
LABEL_50:
          v86 = *(_DWORD *)(j + 24) + 1;
          goto LABEL_24;
        }
      }
      else if ( !v30 )
      {
        goto LABEL_20;
      }
    }
  }
  for ( ; v28 != v23; v23 += 32 )
  {
    v48 = *(_DWORD **)v23;
    if ( *(_QWORD *)v23 > 1u )
    {
      if ( *(_DWORD *)(v23 + 28) == v16 && v6 == v48 && v8 == *(_DWORD **)(v23 + 8) && a4 == *(_DWORD **)(v23 + 16) )
      {
        j = v23;
        goto LABEL_50;
      }
    }
    else if ( !v48 )
    {
      break;
    }
  }
LABEL_20:
  v31 = *(_QWORD **)(a1 + 152);
  ++v6[2];
  ++v8[2];
  ++a4[2];
  if ( v31 )
  {
    v32 = *((_DWORD *)v31 - 1);
    if ( v32 == *((_DWORD *)v31 - 2) )
    {
      v66 = 3 * v32 + 1;
      v67 = v66 & 0xFFFFFFFE;
      v68 = v66 >> 1;
      v69 = 8 * (v68 + v67) + 8;
      if ( 24 * v32 + 8 >= v69 || v32 >= v68 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v87, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v87);
        sub_233E40((__int64)v87);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v70 = (unsigned int *)sub_186B300(v31 - 1, v69);
      v71 = v70[1];
      v31 = v70 + 2;
      *v70 = v68;
      *(_QWORD *)(a1 + 152) = v70 + 2;
      LODWORD(v70) = v71;
      v35 = &v31[3 * v71];
      v34 = (_DWORD)v70 + 1;
    }
    else
    {
      v33 = v32;
      v34 = v32 + 1;
      v35 = &v31[3 * v33];
    }
  }
  else
  {
    v78 = (_QWORD *)sub_186B270(0x38u);
    *v78 = 2;
    v34 = 1;
    v31 = v78 + 1;
    *(_QWORD *)(a1 + 152) = v31;
    v35 = v31;
  }
  *v35 = v6;
  v35[1] = v8;
  v35[2] = a4;
  *((_DWORD *)v31 - 1) = v34;
  v36 = v6[3];
  v86 = 1;
  v25 = *(_DWORD *)(a1 + 136);
  v37 = ((v36 - ((v36 << 8) ^ (v8[3] - v36))) << 10)
      ^ (((v36 << 8) ^ (v8[3] - v36)) - v36 + ((v36 << 8) ^ (v8[3] - v36) ^ ((v36 - ((v36 << 8) ^ (v8[3] - v36))) << 16)));
  v38 = (v37 << 8) ^ (a4[3] - v37);
  v16 = ((v37 - v38) << 10) ^ (v38 - v37 + (v38 ^ ((v37 - v38) << 16)));
LABEL_24:
  if ( 3 * v25 < 4 * (*(_DWORD *)(a1 + 140) + *(_DWORD *)(a1 + 144)) )
  {
    v82 = 64LL * v25;
    v54 = sub_186B270(v82);
    v40 = v82;
    v55 = 2 * v25;
    v39 = (__m128i *)v54;
    v56 = (__m128i *)(v54 + v82);
    if ( 2 * v25 )
    {
      do
      {
        *(_QWORD *)(v54 + 16) = 0;
        v54 += 32;
        *(_OWORD *)(v54 - 32) = 0;
        *(_DWORD *)(v54 - 4) = 0;
      }
      while ( (__m128i *)v54 != v56 );
    }
    v57 = *(_QWORD *)(a1 + 128);
    v41 = v56;
    v81 = v55 - 1;
    v58 = 32LL * *(unsigned int *)(a1 + 136);
    v59 = (__m128i *)(v57 + v58);
    if ( v57 != v57 + v58 )
    {
      v60 = v6;
      v61 = *(const __m128i **)(a1 + 128);
      v62 = v60;
      do
      {
        if ( v61->m128i_i64[0] > 1uLL )
        {
          v63 = 32LL * (v61[1].m128i_i32[3] & (unsigned int)v81);
          v64 = &v39[(unsigned __int64)v63 / 0x10];
          if ( v63 == v40 )
          {
LABEL_92:
            if ( v64 == v39 )
            {
LABEL_106:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v65 = v39;
            while ( v65->m128i_i64[0] )
            {
              v65 += 2;
              if ( v64 == v65 )
                goto LABEL_106;
            }
          }
          else
          {
            v65 = &v39[(unsigned __int64)v63 / 0x10];
            while ( v65->m128i_i64[0] )
            {
              v65 += 2;
              if ( v56 == v65 )
                goto LABEL_92;
            }
          }
          *v65 = _mm_loadu_si128(v61);
          v65[1] = _mm_loadu_si128(v61 + 1);
        }
        v61 += 2;
      }
      while ( v59 != v61 );
      v55 = 2 * v25;
      v59 = *(__m128i **)(a1 + 128);
      v6 = v62;
    }
    if ( v59 )
    {
      v85 = v55;
      v84 = v56;
      v83 = v40;
      sub_186B220(v59);
      v55 = v85;
      v41 = v84;
      v40 = v83;
    }
    *(_QWORD *)(a1 + 128) = v39;
    *(_DWORD *)(a1 + 136) = v55;
    *(_DWORD *)(a1 + 144) = 0;
  }
  else
  {
    v39 = *(__m128i **)(a1 + 128);
    v81 = v25 - 1;
    v40 = 32LL * v25;
    v41 = (__m128i *)((char *)v39 + v40);
  }
  v42 = 32LL * (v16 & (unsigned int)v81);
  v43 = &v39[(unsigned __int64)v42 / 0x10];
  if ( v42 != v40 )
  {
    v44 = &v39[(unsigned __int64)v42 / 0x10];
    v45 = nullptr;
    while ( 1 )
    {
      v46 = (_DWORD *)v44->m128i_i64[0];
      if ( v44->m128i_i64[0] > 1uLL )
      {
        if ( v44[1].m128i_i32[3] == v16
          && v6 == v46
          && v8 == (_DWORD *)v44->m128i_i64[1]
          && a4 == (_DWORD *)v44[1].m128i_i64[0] )
        {
          v44->m128i_i64[0] = (__int64)v6;
          v44->m128i_i64[1] = (__int64)v8;
          v44[1].m128i_i64[0] = (__int64)a4;
          v44[1].m128i_i32[2] = v86;
          v44[1].m128i_i32[3] = v16;
          goto LABEL_69;
        }
      }
      else
      {
        if ( !v46 )
        {
          if ( v45 )
            goto LABEL_102;
          v45 = v44;
          goto LABEL_103;
        }
        v45 = v44;
      }
      v44 += 2;
      if ( v44 == v41 )
        goto LABEL_62;
    }
  }
  v45 = nullptr;
  while ( 1 )
  {
LABEL_62:
    if ( v43 == v39 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v49 = (_DWORD *)v39->m128i_i64[0];
    if ( v39->m128i_i64[0] <= 1uLL )
      break;
    if ( v39[1].m128i_i32[3] == v16
      && v6 == v49
      && v8 == (_DWORD *)v39->m128i_i64[1]
      && a4 == (_DWORD *)v39[1].m128i_i64[0] )
    {
      v39->m128i_i64[0] = (__int64)v6;
      v39->m128i_i64[1] = (__int64)v8;
      v39[1].m128i_i64[0] = (__int64)a4;
      v39[1].m128i_i32[2] = v86;
      v39[1].m128i_i32[3] = v16;
      goto LABEL_69;
    }
LABEL_61:
    v39 += 2;
  }
  if ( v49 )
  {
    v45 = v39;
    goto LABEL_61;
  }
  if ( v45 )
LABEL_102:
    --*(_DWORD *)(a1 + 144);
  else
    v45 = v39;
LABEL_103:
  v45->m128i_i64[0] = (__int64)v6;
  v45->m128i_i64[1] = (__int64)v8;
  v45[1].m128i_i64[0] = (__int64)a4;
  v45[1].m128i_i32[2] = v86;
  v45[1].m128i_i32[3] = v16;
  ++*(_DWORD *)(a1 + 140);
LABEL_69:
  i = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(i + 16) == v86 )
  {
    i = *(_QWORD *)(a1 + 160);
    if ( i )
    {
      v50 = *(_DWORD *)(i - 4);
      if ( v50 == *(_DWORD *)(i - 8) )
      {
        v72 = 3 * v50 + 1;
        v73 = v72 & 0xFFFFFFFE;
        v74 = v72 >> 1;
        v75 = 8 * (v74 + v73) + 8;
        if ( 24 * v50 + 8 >= v75 || v50 >= v74 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v87, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v87);
          sub_233E40((__int64)v87);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v76 = (unsigned int *)sub_186B300((void *)(i - 8), v75);
        i = (unsigned __int64)(v76 + 2);
        v77 = v76[1];
        *v76 = v74;
        *(_QWORD *)(a1 + 160) = v76 + 2;
        LODWORD(v76) = v77;
        v53 = (_QWORD *)(i + 24 * v77);
        v52 = (_DWORD)v76 + 1;
      }
      else
      {
        v51 = v50;
        v52 = v50 + 1;
        v53 = (_QWORD *)(i + 24 * v51);
      }
    }
    else
    {
      v79 = (_QWORD *)sub_186B270(0x38u);
      v52 = 1;
      *v79 = 2;
      i = (unsigned __int64)(v79 + 1);
      *(_QWORD *)(a1 + 160) = i;
      v53 = (_QWORD *)i;
    }
    *v53 = v6;
    v53[1] = v8;
    v53[2] = a4;
    *(_DWORD *)(i - 4) = v52;
  }
  return i;
}

