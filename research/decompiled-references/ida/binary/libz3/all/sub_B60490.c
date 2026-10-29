__int64 __fastcall sub_B60490(__m128i *a1, __int64 a2, double a3)
{
  char **exception; // r13
  __m128i *v4; // r13
  __int64 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  _OWORD *v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // rsi
  unsigned int v17; // ebp
  __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  __int64 *v25; // r14
  unsigned int v26; // esi
  int v27; // edi
  __int64 v28; // rcx
  __int64 *v29; // rbx
  __int64 *v30; // rdx
  __int64 *i; // r9
  __int64 v32; // r10
  int v33; // r11d
  unsigned int v34; // r9d
  __int64 *v35; // rcx
  __int64 *v36; // rdi
  __int64 v37; // rcx
  __int64 *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // rcx
  bool v43; // zf
  __int64 v44; // rdi
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r12
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rbp
  _OWORD *v50; // rax
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  unsigned int *v55; // rax
  unsigned int v56; // edx
  __int64 v57; // rbp
  unsigned __int64 v58; // r15
  __int64 v59; // r14
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 result; // rax
  __int64 *j; // r9
  __int64 v64; // r10
  __int64 v65; // rax
  __int64 v66; // rbx
  unsigned int v67; // ebx
  unsigned int v68; // ecx
  unsigned int *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 *v72; // rax
  int v73; // r9d
  size_t v74; // rcx
  __int64 *v75; // rax
  int v76; // r11d
  __int64 *v77; // r10
  __int64 v78; // rdx
  __int64 *v79; // rsi
  __int64 *v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // r14
  _QWORD *v83; // rax
  __int64 v84; // rdi
  __int64 v85; // [rsp+0h] [rbp-128h]
  __int64 v86; // [rsp+0h] [rbp-128h]
  int v87[2]; // [rsp+10h] [rbp-118h]
  unsigned int v88; // [rsp+10h] [rbp-118h]
  unsigned __int64 v89; // [rsp+18h] [rbp-110h]
  __int64 v90; // [rsp+20h] [rbp-108h]
  __int64 v91; // [rsp+28h] [rbp-100h]
  size_t v92; // [rsp+30h] [rbp-F8h]
  __int64 v93; // [rsp+30h] [rbp-F8h]
  size_t v94; // [rsp+38h] [rbp-F0h]
  __int64 v95; // [rsp+40h] [rbp-E8h]
  int v96; // [rsp+40h] [rbp-E8h]
  int v97; // [rsp+48h] [rbp-E0h]
  __int64 v98[4]; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v99; // [rsp+90h] [rbp-98h] BYREF
  __int128 v100; // [rsp+A0h] [rbp-88h]
  __int64 v101; // [rsp+B0h] [rbp-78h]
  _OWORD *v102; // [rsp+B8h] [rbp-70h]
  __int64 v103; // [rsp+C0h] [rbp-68h]
  int v104; // [rsp+C8h] [rbp-60h]
  __int128 v105; // [rsp+D0h] [rbp-58h]
  int v106; // [rsp+E0h] [rbp-48h]

  v4 = a1;
  if ( !*(_DWORD *)a1->m128i_i64[1] )
    goto LABEL_71;
  v91 = 0;
  do
  {
    a2 = v91;
    v5 = *(_QWORD *)(*(_QWORD *)v4[1].m128i_i64[0] + 8 * v91);
    sub_8F91D0(v5);
    v6 = *(_QWORD *)(v5 + 104);
    v7 = *(_QWORD *)(*(_QWORD *)v4->m128i_i64[0] + 104LL);
    v101 = 0;
    v99 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v7);
    v100 = 0;
    v8 = (_OWORD *)sub_186B270(0x80u);
    v102 = v8;
    *v8 = 0;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    v8[4] = 0;
    v8[5] = 0;
    v8[6] = 0;
    v8[7] = 0;
    a3 = 0.0;
    v104 = 0;
    v103 = 8;
    v106 = 0;
    v105 = 0;
    if ( v7 != v6 )
    {
      sub_15DA640(v99.m128i_i32[2], v99.m128i_i32[0], v9, v10, v11, v12, v85);
      a2 = v99.m128i_i64[0];
      sub_15D2280(v99.m128i_i64[1], v99.m128i_i64[0]);
    }
    v13 = *(_QWORD *)(v5 + 8920);
    if ( !v13 )
      goto LABEL_52;
    a2 = v91;
    v14 = *(_DWORD *)(v13 - 4);
    v15 = *(_DWORD *)(*(_QWORD *)v4[1].m128i_i64[1] + 4 * v91);
    if ( v15 >= v14 )
      goto LABEL_52;
    v85 = 4LL * v15;
    v16 = v85;
    v89 = 4 * (v15 + (unsigned __int64)(v14 - v15 - 1));
    while ( 2 )
    {
      v17 = *(_DWORD *)(v13 + v16);
      v18 = v17 >> 1;
      v19 = *(_QWORD *)(*(_QWORD *)(v5 + 8840) + 8 * v18);
      if ( (unsigned int)sub_8E7030(v5) )
      {
        a2 = v19;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v5 + 7488) + 56LL))(
                *(_QWORD *)(v5 + 7488),
                v19) )
          break;
      }
      *(_QWORD *)v87 = *(_QWORD *)(v5 + 104);
      v20 = *(_QWORD *)(*(_QWORD *)(v5 + 8840) + 8 * v18);
      if ( v20 )
        ++*(_DWORD *)(v20 + 8);
      if ( (v17 & 1) != 0 )
      {
        v65 = sub_15E1A70(v87[0]);
        v66 = v65;
        if ( v65 )
          ++*(_DWORD *)(v65 + 8);
        if ( v20 )
        {
          v43 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v43 )
            sub_15D7BC0(*(_QWORD *)v87, v20);
        }
        v20 = v66;
      }
      v90 = *(_QWORD *)(*(_QWORD *)v4->m128i_i64[0] + 104LL);
      if ( v99.m128i_i64[0] == v99.m128i_i64[1] )
        v21 = v20;
      else
        v21 = sub_15CFF50(&v99, v20);
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v22 = v4[2].m128i_i64[0];
      v23 = *(_DWORD *)(v21 + 12);
      v24 = *(unsigned int *)(v22 + 8);
      v25 = *(__int64 **)v22;
      v26 = v24 - 1;
      v27 = *(_DWORD *)(v22 + 8);
      v28 = 8 * v24;
      v29 = (__int64 *)(*(_QWORD *)v22 + v28);
      a2 = 8LL * (v23 & v26);
      v30 = (__int64 *)(*(_QWORD *)v22 + a2);
      if ( a2 != v28 )
      {
        for ( i = (__int64 *)(*(_QWORD *)v22 + a2); v29 != i; ++i )
        {
          v32 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v32 + 12) == v23 && v21 == v32 )
              goto LABEL_45;
          }
          else if ( !v32 )
          {
            goto LABEL_24;
          }
        }
      }
      if ( v25 != v30 )
      {
        for ( j = *(__int64 **)v22; v30 != j; ++j )
        {
          v64 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v64 + 12) == v23 && v21 == v64 )
              goto LABEL_45;
          }
          else if ( !v64 )
          {
            break;
          }
        }
      }
LABEL_24:
      v33 = *(_DWORD *)(v22 + 16);
      v34 = 2 * v27;
      if ( 3 * v27 < (unsigned int)(4 * (v33 + *(_DWORD *)(v22 + 12))) )
      {
        v71 = v34;
        v95 = v4[2].m128i_i64[0];
        v92 = 8LL * v34;
        v72 = (__int64 *)sub_186B270(v92);
        v73 = 2 * v27;
        v74 = v92;
        v25 = v72;
        v22 = v95;
        if ( 2 * v27 )
        {
          memset(v72, 0, 8 * v71);
          v22 = v95;
          v74 = v92;
          v73 = 2 * v27;
        }
        v75 = *(__int64 **)v22;
        v76 = v73 - 1;
        v29 = (__int64 *)((char *)v25 + v74);
        v77 = (__int64 *)(*(_QWORD *)v22 + 8LL * *(unsigned int *)(v22 + 8));
        if ( *(__int64 **)v22 != v77 )
        {
          do
          {
            while ( (unsigned __int64)*v75 <= 1 )
            {
              if ( v77 == ++v75 )
                goto LABEL_102;
            }
            v78 = 8LL * (*(_DWORD *)(*v75 + 12) & (unsigned int)v76);
            v79 = &v25[(unsigned __int64)v78 / 8];
            if ( v74 == v78 )
            {
LABEL_107:
              if ( v25 == v79 )
              {
LABEL_116:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v80 = v25;
              while ( *v80 )
              {
                if ( v79 == ++v80 )
                  goto LABEL_116;
              }
            }
            else
            {
              v80 = &v25[(unsigned __int64)v78 / 8];
              while ( *v80 )
              {
                if ( v29 == ++v80 )
                  goto LABEL_107;
              }
            }
            v81 = *v75++;
            *v80 = v81;
          }
          while ( v77 != v75 );
LABEL_102:
          v77 = *(__int64 **)v22;
        }
        if ( v77 )
        {
          v97 = v73;
          v96 = v73 - 1;
          v94 = v74;
          v93 = v22;
          sub_186B220(v77);
          v73 = v97;
          v76 = v96;
          v74 = v94;
          v22 = v93;
        }
        v23 = *(_DWORD *)(v21 + 12);
        *(_QWORD *)v22 = v25;
        *(_DWORD *)(v22 + 8) = v73;
        *(_DWORD *)(v22 + 16) = 0;
        a2 = 8LL * (v23 & (unsigned int)v76);
        v33 = 0;
        v30 = (__int64 *)((char *)v25 + a2);
        if ( a2 == v74 )
        {
LABEL_106:
          v36 = nullptr;
          while ( 1 )
          {
LABEL_36:
            if ( v25 == v30 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v37 = *v25;
            if ( (unsigned __int64)*v25 > 1 )
            {
              if ( *(_DWORD *)(v37 + 12) == v23 && v21 == v37 )
              {
                *v25 = v21;
                v82 = v4[2].m128i_i64[1];
LABEL_41:
                v38 = *(__int64 **)(v82 + 8);
                ++*(_DWORD *)(v21 + 8);
                if ( !v38 )
                  goto LABEL_115;
                goto LABEL_42;
              }
            }
            else
            {
              if ( !v37 )
              {
                if ( v36 )
                  *(_DWORD *)(v22 + 16) = v33 - 1;
                else
                  v36 = v25;
                goto LABEL_114;
              }
              v36 = v25;
            }
            ++v25;
          }
        }
      }
      else if ( a2 == v28 )
      {
        goto LABEL_106;
      }
      v35 = v30;
      v36 = nullptr;
      while ( 1 )
      {
        a2 = *v35;
        if ( (unsigned __int64)*v35 <= 1 )
          break;
        if ( *(_DWORD *)(a2 + 12) == v23 && v21 == a2 )
        {
          *v35 = v21;
          v82 = v4[2].m128i_i64[1];
          goto LABEL_41;
        }
LABEL_29:
        if ( ++v35 == v29 )
          goto LABEL_36;
      }
      if ( a2 )
      {
        v36 = v35;
        goto LABEL_29;
      }
      if ( v36 )
        *(_DWORD *)(v22 + 16) = v33 - 1;
      else
        v36 = v35;
LABEL_114:
      v82 = v4[2].m128i_i64[1];
      *v36 = v21;
      ++*(_DWORD *)(v22 + 12);
      v38 = *(__int64 **)(v82 + 8);
      ++*(_DWORD *)(v21 + 8);
      if ( !v38 )
      {
LABEL_115:
        v83 = (_QWORD *)sub_186B270(0x18u);
        v38 = v83 + 1;
        *v83 = 2;
        v42 = v38;
        v41 = 1;
        *(_QWORD *)(v82 + 8) = v38;
        goto LABEL_44;
      }
LABEL_42:
      v39 = *((_DWORD *)v38 - 1);
      if ( v39 == *((_DWORD *)v38 - 2) )
      {
        v67 = (3 * v39 + 1) >> 1;
        v68 = 8 * v67 + 8;
        if ( 8 * v39 + 8 >= v68 || v39 >= v67 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v98, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v98);
          sub_233E40((__int64)v98);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        a2 = v68;
        v69 = (unsigned int *)sub_186B300(v38 - 1, v68);
        v70 = v69[1];
        v38 = (__int64 *)(v69 + 2);
        *(_QWORD *)(v82 + 8) = v69 + 2;
        *v69 = v67;
        LODWORD(v69) = v70;
        v42 = &v38[v70];
        v41 = (_DWORD)v69 + 1;
      }
      else
      {
        v40 = v39;
        v41 = v39 + 1;
        v42 = &v38[v40];
      }
LABEL_44:
      *v42 = v21;
      *((_DWORD *)v38 - 1) = v41;
LABEL_45:
      v43 = (*(_DWORD *)(v21 + 8))-- == 1;
      if ( v43 )
      {
        a2 = v21;
        sub_15D7BC0(v90, v21);
      }
      if ( v20 )
      {
        v43 = (*(_DWORD *)(v20 + 8))-- == 1;
        if ( v43 )
        {
          a2 = v20;
          sub_15D7BC0(*(_QWORD *)v87, v20);
          v44 = v85;
          if ( v85 == v89 )
            goto LABEL_52;
LABEL_50:
          v13 = *(_QWORD *)(v5 + 8920);
          v85 = v44 + 4;
          v16 = v44 + 4;
          continue;
        }
      }
      break;
    }
    v44 = v85;
    if ( v85 != v89 )
      goto LABEL_50;
LABEL_52:
    sub_15CE760(&v99);
    a1 = (__m128i *)++v91;
    v45 = *(_DWORD *)v4->m128i_i64[1];
  }
  while ( (unsigned int)v91 < v45 );
  v46 = *(_QWORD *)(v4[2].m128i_i64[1] + 8);
  if ( v46 )
  {
    a1 = (__m128i *)*(unsigned int *)(v46 - 4);
    v88 = *(_DWORD *)(v46 - 4);
  }
  else
  {
    v88 = 0;
  }
  if ( !v45 )
  {
LABEL_71:
    result = sub_180B130(a1);
    if ( (_DWORD)result )
      goto LABEL_122;
    return result;
  }
  v86 = 0;
  do
  {
    while ( 1 )
    {
      a2 = v86;
      v47 = *(_QWORD *)(*(_QWORD *)v4[1].m128i_i64[0] + 8 * v86);
      v48 = *(_QWORD *)(v47 + 104);
      v49 = *(_QWORD *)(*(_QWORD *)v4->m128i_i64[0] + 104LL);
      v101 = 0;
      v100 = 0;
      v99 = _mm_unpacklo_epi64((__m128i)v49, (__m128i)v48);
      v50 = (_OWORD *)sub_186B270(0x80u);
      a3 = 0.0;
      v102 = v50;
      *v50 = 0;
      v50[1] = 0;
      v50[2] = 0;
      v50[3] = 0;
      v50[4] = 0;
      v50[5] = 0;
      v50[6] = 0;
      v50[7] = 0;
      v104 = 0;
      v103 = 8;
      v106 = 0;
      v105 = 0;
      if ( v48 != v49 )
      {
        sub_15DA640(v99.m128i_i32[2], v99.m128i_i32[0], v51, v52, v53, v54, v86);
        a2 = v99.m128i_i64[0];
        sub_15D2280(v99.m128i_i64[1], v99.m128i_i64[0]);
      }
      v55 = (unsigned int *)(*(_QWORD *)v4[1].m128i_i64[1] + 4 * v86);
      v56 = *v55;
      if ( *v55 < v88 )
      {
        v57 = 8LL * v56;
        v58 = 8 * (v56 + (unsigned __int64)(v88 - 1 - v56) + 1);
        do
        {
          while ( 1 )
          {
            v59 = *(_QWORD *)(v47 + 104);
            v60 = *(_QWORD *)(*(_QWORD *)(v4[2].m128i_i64[1] + 8) + v57);
            if ( v99.m128i_i64[0] != v99.m128i_i64[1] )
              v60 = sub_15CFF50(&v99, *(_QWORD *)(*(_QWORD *)(v4[2].m128i_i64[1] + 8) + v57));
            if ( v60 )
              break;
            a2 = 0;
            sub_8F8A20(v47);
            v57 += 8;
            if ( v58 == v57 )
              goto LABEL_68;
          }
          ++*(_DWORD *)(v60 + 8);
          a2 = v60;
          sub_8F8A20(v47);
          v43 = (*(_DWORD *)(v60 + 8))-- == 1;
          if ( v43 )
          {
            a2 = v60;
            sub_15D7BC0(v59, v60);
          }
          v57 += 8;
        }
        while ( v58 != v57 );
LABEL_68:
        v55 = (unsigned int *)(*(_QWORD *)v4[1].m128i_i64[1] + 4 * v86);
      }
      v61 = *(_QWORD *)(v47 + 8920);
      if ( !v61 )
        break;
      *v55 = *(_DWORD *)(v61 - 4);
      sub_15CE760(&v99);
      a1 = (__m128i *)++v86;
      if ( (unsigned int)v86 >= *(_DWORD *)v4->m128i_i64[1] )
        goto LABEL_71;
    }
    *v55 = 0;
    a1 = &v99;
    sub_15CE760(&v99);
    ++v86;
  }
  while ( (unsigned int)v86 < *(_DWORD *)v4->m128i_i64[1] );
  result = sub_180B130(&v99);
  if ( (_DWORD)result )
  {
LABEL_122:
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v84 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      return sub_186A500(v84, ")\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      return std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return result;
}

