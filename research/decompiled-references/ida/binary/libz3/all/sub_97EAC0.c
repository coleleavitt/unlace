__int64 __fastcall sub_97EAC0(__int64 a1)
{
  char **exception; // r12
  char **v2; // r12
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rax
  _DWORD *v7; // rsi
  size_t v8; // rdx
  __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned int *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned int v16; // eax
  unsigned int *j; // r14
  unsigned int *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rsi
  int v21; // eax
  unsigned int *v22; // r14
  __int64 v23; // r12
  unsigned int *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rsi
  _QWORD *v27; // rbp
  __int64 v28; // rdx
  int v29; // r12d
  __int64 v30; // r12
  int v31; // eax
  unsigned int v32; // ebx
  _QWORD *v33; // rax
  __m128i v34; // xmm0
  _QWORD *v35; // r14
  __int64 v36; // rbx
  __int64 v37; // r15
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rdi
  bool v47; // zf
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdx
  unsigned int v51; // eax
  unsigned int *i; // r15
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // r14
  int v57; // r15d
  __int64 v58; // rax
  int *v59; // rax
  unsigned int v60; // edx
  size_t v61; // rsi
  unsigned int v62; // r12d
  unsigned int *v63; // rax
  _QWORD *v64; // rax
  unsigned int v65; // ebx
  unsigned int v66; // ecx
  unsigned int *v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  unsigned int v70; // [rsp+0h] [rbp-F0h]
  unsigned int *v71; // [rsp+0h] [rbp-F0h]
  unsigned int *v72; // [rsp+0h] [rbp-F0h]
  unsigned int v73; // [rsp+8h] [rbp-E8h]
  __int64 v74; // [rsp+8h] [rbp-E8h]
  unsigned int v75; // [rsp+8h] [rbp-E8h]
  unsigned int *v76; // [rsp+10h] [rbp-E0h]
  unsigned int v77; // [rsp+18h] [rbp-D8h]
  unsigned int v78; // [rsp+18h] [rbp-D8h]
  _QWORD *v79; // [rsp+18h] [rbp-D8h]
  unsigned int *v80; // [rsp+20h] [rbp-D0h]
  __int64 v81; // [rsp+38h] [rbp-B8h]
  _QWORD v82[3]; // [rsp+40h] [rbp-B0h] BYREF
  __int64 v83[4]; // [rsp+58h] [rbp-98h] BYREF
  __int64 *v84; // [rsp+78h] [rbp-78h] BYREF
  char v85; // [rsp+80h] [rbp-70h]
  int v86; // [rsp+84h] [rbp-6Ch]
  __int64 v87; // [rsp+88h] [rbp-68h]
  int v88; // [rsp+90h] [rbp-60h]
  __int64 v89; // [rsp+98h] [rbp-58h]
  int v90; // [rsp+A0h] [rbp-50h]
  __int64 v91; // [rsp+A8h] [rbp-48h]

  result = *(_QWORD *)(a1 + 672);
  if ( !result || !*(_DWORD *)(result - 4) )
    return result;
  v4 = *(_QWORD *)(a1 + 736);
  ++*(_DWORD *)(a1 + 944);
  if ( !v4 )
    goto LABEL_33;
  v5 = *(unsigned int *)(v4 - 4);
  v70 = *(_DWORD *)(v4 - 8);
  v6 = sub_186B270(4LL * v70 + 8);
  v7 = *(_DWORD **)(a1 + 736);
  v76 = (unsigned int *)v6;
  v4 = v6 + 8;
  *(_QWORD *)v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v70), _mm_cvtsi32_si128(v5)).m128i_u64[0];
  if ( v7 )
  {
    v8 = 4LL * (unsigned int)*(v7 - 1);
    if ( v8 <= 4 )
    {
      if ( v8 == 4 )
        *(_DWORD *)(v6 + 8) = *v7;
    }
    else
    {
      memmove((void *)(v6 + 8), v7, v8);
    }
  }
  v9 = 4 * v5;
  v80 = (unsigned int *)(v4 + v9);
  if ( v4 + v9 == v4 )
  {
LABEL_33:
    v13 = a1 + 64;
    goto LABEL_34;
  }
  _BitScanReverse64(&v10, v9 >> 2);
  sub_9816D0(v4, v4 + v9, 2LL * (int)v10, a1);
  v11 = v76 + 3;
  if ( (unsigned __int64)v9 <= 0x40 )
  {
    v47 = v9 == 4;
    v13 = a1 + 64;
    if ( v47 )
      goto LABEL_34;
    while ( 1 )
    {
      v48 = *(_QWORD *)(a1 + 704);
      v75 = *v11;
      v49 = v48 + 16LL * v76[2];
      v50 = 16LL * *v11 + v48;
      if ( (*(_BYTE *)(v49 + 4) & 1) != 0 || (*(_BYTE *)(v50 + 4) & 1) != 0 )
      {
        v51 = (unsigned int)sub_182EB00(a1 + 64, v49, v50) >> 31;
        v75 = *v11;
      }
      else
      {
        LOBYTE(v51) = *(_DWORD *)v49 < *(_DWORD *)v50;
      }
      if ( (_BYTE)v51 )
      {
        if ( (__int64)v11 - v4 <= 4 )
        {
          if ( (char *)v11 - v4 == &byte_4 )
            *v11 = v76[2];
        }
        else
        {
          memmove((void *)(v4 + 4), (const void *)v4, (size_t)v11 - v4);
        }
        v76[2] = v75;
        goto LABEL_64;
      }
      for ( i = v11; ; i[1] = *i )
      {
        v53 = *(_QWORD *)(a1 + 704);
        v72 = i;
        v54 = v53 + 16LL * *(i - 1);
        v55 = 16LL * v75 + v53;
        if ( (*(_BYTE *)(v54 + 4) & 1) != 0 || (*(_BYTE *)(v55 + 4) & 1) != 0 )
          break;
        --i;
        if ( *(_DWORD *)v54 >= *(_DWORD *)v55 )
          goto LABEL_75;
LABEL_71:
        ;
      }
      --i;
      if ( (int)sub_182EB00(a1 + 64, v54, v55) < 0 )
        goto LABEL_71;
LABEL_75:
      *v72 = v75;
LABEL_64:
      if ( v80 == ++v11 )
        goto LABEL_34;
    }
  }
  v12 = *(_QWORD *)(a1 + 704);
  v13 = a1 + 64;
  v71 = v76 + 18;
  do
  {
    while ( 1 )
    {
      v77 = *v11;
      v14 = v12 + 16LL * *v11;
      v15 = v12 + 16LL * v76[2];
      if ( (*(_BYTE *)(v15 + 4) & 1) != 0 || (*(_BYTE *)(v14 + 4) & 1) != 0 )
      {
        v16 = (unsigned int)sub_182EB00(a1 + 64, v15, v14) >> 31;
        v77 = *v11;
      }
      else
      {
        LOBYTE(v16) = *(_DWORD *)v15 < *(_DWORD *)v14;
      }
      if ( (_BYTE)v16 )
        break;
      v12 = *(_QWORD *)(a1 + 704);
      for ( j = v11; ; j[1] = *j )
      {
        v18 = j;
        v19 = v12 + 16LL * v77;
        v20 = v12 + 16LL * *(j - 1);
        if ( (*(_BYTE *)(v20 + 4) & 1) != 0 || (*(_BYTE *)(v19 + 4) & 1) != 0 )
          break;
        --j;
        if ( *(_DWORD *)v20 >= *(_DWORD *)v19 )
          goto LABEL_24;
LABEL_20:
        ;
      }
      v21 = sub_182EB00(a1 + 64, v20, v19);
      v12 = *(_QWORD *)(a1 + 704);
      --j;
      if ( v21 < 0 )
        goto LABEL_20;
LABEL_24:
      ++v11;
      *v18 = v77;
      if ( v71 == v11 )
        goto LABEL_25;
    }
    if ( (__int64)v11 - v4 <= 4 )
    {
      if ( (char *)v11 - v4 == &byte_4 )
        *v11 = v76[2];
    }
    else
    {
      memmove((void *)(v4 + 4), (const void *)v4, (size_t)v11 - v4);
    }
    ++v11;
    v12 = *(_QWORD *)(a1 + 704);
    v76[2] = v77;
  }
  while ( v71 != v11 );
LABEL_25:
  while ( 2 )
  {
    v22 = v71;
    v73 = *v71;
    v23 = 16LL * *v71;
    while ( 2 )
    {
      v24 = v22;
      v25 = v12 + v23;
      v26 = v12 + 16LL * *(v22 - 1);
      if ( (*(_BYTE *)(v26 + 4) & 1) == 0 && (*(_BYTE *)(v25 + 4) & 1) == 0 )
      {
        --v22;
        if ( *(_DWORD *)v26 >= *(_DWORD *)v25 )
          break;
        goto LABEL_27;
      }
      --v22;
      if ( (int)sub_182EB00(a1 + 64, v26, v25) < 0 )
      {
LABEL_27:
        v12 = *(_QWORD *)(a1 + 704);
        v22[1] = *v22;
        continue;
      }
      break;
    }
    ++v71;
    *v24 = v73;
    if ( v80 != v71 )
    {
      v12 = *(_QWORD *)(a1 + 704);
      continue;
    }
    break;
  }
LABEL_34:
  v81 = v13;
  v82[0] = 0;
  v82[1] = 0;
  sub_182F200(v13, v82);
  if ( !v4 || (v56 = 0, v27 = nullptr, !*(_DWORD *)(v4 - 4)) )
  {
    v27 = nullptr;
    v28 = 0;
    v74 = *(_QWORD *)(a1 + 16);
    goto LABEL_36;
  }
  while ( 2 )
  {
    if ( (v82[0] & 0x100000000LL) == 0 && (*(_BYTE *)(a1 + 836) & 1) == 0 )
    {
      if ( SLODWORD(v82[0]) >= *(_DWORD *)(a1 + 832) )
        goto LABEL_87;
LABEL_80:
      sub_1839610(v81, v82, *(_QWORD *)(a1 + 704) + 16LL * *(unsigned int *)(v4 + 4 * v56));
      v57 = 2 * *(_DWORD *)(*(_QWORD *)(a1 + 880) + 4LL * *(unsigned int *)(v4 + 4 * v56));
      if ( v27 )
      {
        v58 = *((unsigned int *)v27 - 1);
        if ( (_DWORD)v58 == *((_DWORD *)v27 - 2) )
        {
          v60 = (unsigned int)(3 * v58 + 1) >> 1;
          v61 = 4 * v60 + 8;
          v62 = v60;
          if ( 4 * (int)v58 + 8 >= (unsigned int)v61 || (unsigned int)v58 >= v60 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v84, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v84);
            sub_233E40((__int64)&v84);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v63 = (unsigned int *)sub_186B300(v27 - 1, v61);
          v27 = v63 + 2;
          *v63 = v62;
          v59 = (int *)&v63[v63[1] + 2];
        }
        else
        {
          v59 = (int *)v27 + v58;
        }
      }
      else
      {
        v64 = (_QWORD *)sub_186B270(0x10u);
        v27 = v64 + 1;
        *v64 = 2;
        v59 = (int *)(v64 + 1);
      }
      *v59 = v57;
      ++v56;
      ++*((_DWORD *)v27 - 1);
      if ( (unsigned int)v56 >= *(_DWORD *)(v4 - 4) )
      {
        v74 = *(_QWORD *)(a1 + 16);
        goto LABEL_88;
      }
      continue;
    }
    break;
  }
  if ( (int)sub_182EB00(v81, v82, a1 + 832) < 0 )
    goto LABEL_80;
LABEL_87:
  v74 = *(_QWORD *)(a1 + 16);
  if ( v27 )
  {
LABEL_88:
    v28 = *((unsigned int *)v27 - 1);
    goto LABEL_36;
  }
  v28 = 0;
LABEL_36:
  v29 = *(_DWORD *)(a1 + 8);
  sub_B72D60(&v84, v74, v28, v27, 0, 0);
  v90 = v29;
  v91 = 0;
  v84 = (__int64 *)&off_1C57990;
  sub_B73430(&v84, v74);
  v30 = sub_180C100(v74 + 8400, 56);
  *(_BYTE *)(v30 + 8) = v85 & 3 | *(_BYTE *)(v30 + 8) & 0xFC;
  *(_DWORD *)(v30 + 12) = v86;
  *(_QWORD *)(v30 + 16) = v87;
  *(_DWORD *)(v30 + 24) = v88;
  *(_QWORD *)(v30 + 32) = v89;
  *(_QWORD *)v30 = qword_1C6E7C8;
  v31 = v90;
  *(_QWORD *)(v30 + 48) = 0;
  *(_DWORD *)(v30 + 40) = v31;
  if ( v91 )
  {
    v32 = *(_DWORD *)(v91 - 4);
    v78 = *(_DWORD *)(v91 - 8);
    v33 = (_QWORD *)sub_186B270(16LL * v78 + 8);
    v34 = _mm_cvtsi32_si128(v78);
    v35 = v33 + 1;
    v79 = v33 + 1;
    *v33 = _mm_unpacklo_epi32(v34, _mm_cvtsi32_si128(v32)).m128i_u64[0];
    *(_QWORD *)(v30 + 48) = v33 + 1;
    v36 = v91;
    if ( !v91 || (v37 = v91 + 16LL * *(unsigned int *)(v91 - 4), v91 == v37) )
    {
      *(_QWORD *)v30 = &off_1C57990;
LABEL_41:
      if ( *((_DWORD *)v79 - 1) )
      {
        v38 = *(_QWORD **)(v74 + 8600);
        if ( v38 )
        {
          v39 = *((_DWORD *)v38 - 1);
          if ( v39 == *((_DWORD *)v38 - 2) )
          {
            v65 = (3 * v39 + 1) >> 1;
            v66 = 8 * v65 + 8;
            if ( 8 * v39 + 8 >= v66 || v39 >= v65 )
            {
              v2 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v83, "Overflow encountered when expanding vector");
              *v2 = (char *)off_1C63128;
              sub_2333C0(v2 + 1, v83);
              sub_233E40((__int64)v83);
              __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v67 = (unsigned int *)sub_186B300(v38 - 1, v66);
            v68 = v67[1];
            v38 = v67 + 2;
            *(_QWORD *)(v74 + 8600) = v67 + 2;
            *v67 = v65;
            LODWORD(v67) = v68;
            v42 = &v38[v68];
            v41 = (_DWORD)v67 + 1;
          }
          else
          {
            v40 = v39;
            v41 = v39 + 1;
            v42 = &v38[v40];
          }
        }
        else
        {
          v69 = (_QWORD *)sub_186B270(0x18u);
          *v69 = 2;
          v38 = v69 + 1;
          *(_QWORD *)(v74 + 8600) = v69 + 1;
          v42 = v69 + 1;
          v41 = 1;
        }
        *v42 = v30;
        *((_DWORD *)v38 - 1) = v41;
      }
    }
    else
    {
      do
      {
        sub_15D0E50(v35, v36);
        v36 += 16;
        v35 += 2;
      }
      while ( v36 != v37 );
      v79 = *(_QWORD **)(v30 + 48);
      *(_QWORD *)v30 = &off_1C57990;
      if ( v79 )
        goto LABEL_41;
    }
  }
  else
  {
    *(_QWORD *)v30 = &off_1C57990;
  }
  v83[0] = v30 | 3;
  sub_8E8670(v74, v83, -2);
  v43 = v91;
  v84 = qword_1C6E7C8;
  if ( v91 )
  {
    v44 = *(unsigned int *)(v91 - 4);
    if ( (_DWORD)v44 )
    {
      v45 = v91 + 16 * v44;
      do
      {
        v46 = v43;
        v43 += 16;
        sub_15D0DF0(v46);
      }
      while ( v43 != v45 );
      v43 = v91;
    }
    sub_186B220((void *)(v43 - 8));
  }
  result = sub_182EF00(v81, v82);
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  if ( v27 )
    return sub_186B220(v27 - 1);
  return result;
}

