__int64 __fastcall sub_C8CDC0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  _OWORD *v5; // rax
  __int64 v6; // r13
  __int64 *v7; // rbx
  __int64 *v8; // r13
  __int64 v9; // rax
  unsigned int v10; // r15d
  __int64 *v11; // r14
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  __m128i *v15; // rbp
  int v16; // r8d
  __int64 v17; // r9
  __m128i *v18; // r12
  int v19; // esi
  __int64 v20; // rdx
  __m128i *v21; // rdi
  __int64 *m128i_i64; // rax
  __int64 *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rax
  unsigned int i; // ebp
  __int64 v29; // r12
  __int64 v30; // rbx
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 *v35; // rcx
  _QWORD *v36; // r15
  __int64 v37; // rax
  _QWORD *v38; // r12
  void *v39; // r13
  int v40; // eax
  __int64 v42; // rax
  int v43; // r11d
  __m128i *v44; // r10
  const __m128i *v45; // rax
  const __m128i *v46; // r15
  __int64 v47; // rdx
  __m128i *v48; // rsi
  __m128i *v49; // rdx
  __m128i v50; // xmm0
  unsigned int v51; // edx
  __int64 v52; // rax
  _DWORD *v53; // rdx
  _QWORD *v54; // rdi
  _QWORD *j; // rax
  int v56; // ecx
  char v57; // si
  __int64 v58; // rcx
  char v59; // si
  __int64 v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // r12
  _QWORD *v63; // rsi
  __int64 v64; // r12
  unsigned int v65; // r13d
  unsigned int v66; // ecx
  unsigned int *v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  _QWORD *v70; // rdx
  char **exception; // rbp
  __int64 v72; // [rsp+0h] [rbp-A8h]
  void *v73; // [rsp+0h] [rbp-A8h]
  int v76; // [rsp+18h] [rbp-90h]
  _QWORD *v77; // [rsp+18h] [rbp-90h]
  size_t v78; // [rsp+20h] [rbp-88h]
  __int64 v79; // [rsp+20h] [rbp-88h]
  unsigned int v80; // [rsp+20h] [rbp-88h]
  int v81; // [rsp+28h] [rbp-80h]
  unsigned int *v82; // [rsp+28h] [rbp-80h]
  __int64 v83; // [rsp+30h] [rbp-78h]
  size_t v84; // [rsp+30h] [rbp-78h]
  _DWORD *v85; // [rsp+30h] [rbp-78h]
  int v86; // [rsp+38h] [rbp-70h]
  __int64 v87[11]; // [rsp+50h] [rbp-58h] BYREF

  v2 = sub_186B270(0x50u);
  v3 = a2[1];
  v4 = v2;
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_BYTE *)(v2 + 24) = 1;
  *(_QWORD *)v2 = &off_1C74810;
  v5 = (_OWORD *)sub_186B270(0x80u);
  v6 = *(unsigned int *)(a1 + 40);
  *(_QWORD *)(v4 + 56) = v3;
  v7 = *(__int64 **)(a1 + 32);
  *(_QWORD *)(v4 + 32) = v5;
  *(_QWORD *)(v4 + 40) = 8;
  v8 = &v7[2 * v6];
  *(_DWORD *)(v4 + 48) = 0;
  *(_QWORD *)(v4 + 64) = 0;
  *(_QWORD *)(v4 + 72) = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  if ( v7 != v8 )
  {
    while ( (unsigned __int64)*v7 <= 1 )
    {
      v7 += 2;
      if ( v8 == v7 )
        goto LABEL_34;
    }
    if ( v8 != v7 )
    {
      v9 = v4;
      v10 = 8;
      v11 = v8;
      v12 = v9;
      while ( 1 )
      {
        v72 = v7[1];
        if ( *a2 == a2[1] )
        {
          v14 = *v7;
        }
        else
        {
          v13 = sub_15CFF50(a2, v7[1]);
          v14 = *v7;
          v72 = v13;
          if ( *a2 != a2[1] )
            v14 = sub_15CFF50(a2, v14);
        }
        v76 = *(_DWORD *)(v12 + 44);
        if ( 3 * v10 < 4 * (*(_DWORD *)(v12 + 48) + v76) )
          break;
        v15 = *(__m128i **)(v12 + 32);
        v16 = v10 - 1;
        v17 = 16LL * v10;
        v18 = (__m128i *)((char *)v15 + v17);
LABEL_12:
        v19 = *(_DWORD *)(v14 + 12);
        v20 = 16LL * (v19 & (unsigned int)v16);
        v21 = &v15[(unsigned __int64)v20 / 0x10];
        if ( v20 != v17 )
        {
          m128i_i64 = v15[(unsigned __int64)v20 / 0x10].m128i_i64;
          v23 = nullptr;
          while ( 1 )
          {
            v24 = *m128i_i64;
            if ( (unsigned __int64)*m128i_i64 > 1 )
            {
              if ( *(_DWORD *)(v24 + 12) == v19 && v14 == v24 )
              {
                *m128i_i64 = v14;
                m128i_i64[1] = v72;
                goto LABEL_28;
              }
            }
            else
            {
              if ( !v24 )
              {
                if ( v23 )
                  goto LABEL_76;
                v23 = m128i_i64;
                goto LABEL_77;
              }
              v23 = m128i_i64;
            }
            m128i_i64 += 2;
            if ( m128i_i64 == (__int64 *)v18 )
              goto LABEL_23;
          }
        }
        v23 = nullptr;
        while ( 1 )
        {
LABEL_23:
          if ( v21 == v15 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v25 = v15->m128i_i64[0];
          if ( v15->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v25 + 12) == v19 && v14 == v25 )
          {
            v15->m128i_i64[0] = v14;
            v15->m128i_i64[1] = v72;
            goto LABEL_28;
          }
LABEL_22:
          ++v15;
        }
        if ( v25 )
        {
          v23 = (__int64 *)v15;
          goto LABEL_22;
        }
        if ( v23 )
LABEL_76:
          --*(_DWORD *)(v12 + 48);
        else
          v23 = (__int64 *)v15;
LABEL_77:
        *v23 = v14;
        v23[1] = v72;
        *(_DWORD *)(v12 + 44) = v76 + 1;
LABEL_28:
        v26 = v7 + 2;
        if ( v11 != v7 + 2 )
        {
          while ( 1 )
          {
            v7 = v26;
            if ( (unsigned __int64)*v26 > 1 )
              break;
            v26 += 2;
            if ( v11 == v26 )
              goto LABEL_33;
          }
          if ( v11 != v26 )
            continue;
        }
LABEL_33:
        v4 = v12;
        goto LABEL_34;
      }
      v83 = v14;
      v78 = 32LL * v10;
      v42 = sub_186B270(v78);
      v43 = 2 * v10;
      v17 = v78;
      v14 = v83;
      v15 = (__m128i *)v42;
      v18 = (__m128i *)(v78 + v42);
      if ( 2 * v10 )
      {
        if ( (v78 & 0x10) == 0 || (v42 += 16, *(_OWORD *)(v42 - 16) = 0, v18 != (__m128i *)v42) )
        {
          do
          {
            v42 += 32;
            *(_OWORD *)(v42 - 32) = 0;
            *(_OWORD *)(v42 - 16) = 0;
          }
          while ( v18 != (__m128i *)v42 );
        }
        v44 = *(__m128i **)(v12 + 32);
        v16 = v43 - 1;
        v45 = &v44[v10];
      }
      else
      {
        v44 = *(__m128i **)(v12 + 32);
        v18 = (__m128i *)v42;
        v16 = -1;
        v45 = &v44[v10];
        if ( v44 == v45 )
        {
LABEL_66:
          if ( v44 )
          {
            v86 = v43;
            v84 = v78;
            v81 = v16;
            v79 = v14;
            sub_186B220(v44);
            v43 = v86;
            v17 = v84;
            v16 = v81;
            v14 = v79;
          }
          *(_QWORD *)(v12 + 32) = v15;
          v10 = v43;
          *(_DWORD *)(v12 + 40) = v43;
          *(_DWORD *)(v12 + 48) = 0;
          goto LABEL_12;
        }
      }
      v46 = v44;
      do
      {
        while ( v46->m128i_i64[0] <= 1uLL )
        {
          if ( ++v46 == v45 )
            goto LABEL_66;
        }
        v47 = 16LL * (*(_DWORD *)(v46->m128i_i64[0] + 12) & (unsigned int)v16);
        v48 = &v15[(unsigned __int64)v47 / 0x10];
        if ( v78 == v47 )
        {
LABEL_69:
          if ( v15 == v48 )
          {
LABEL_78:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v49 = v15;
          while ( v49->m128i_i64[0] )
          {
            if ( v48 == ++v49 )
              goto LABEL_78;
          }
        }
        else
        {
          v49 = &v15[(unsigned __int64)v47 / 0x10];
          while ( v49->m128i_i64[0] )
          {
            if ( ++v49 == v18 )
              goto LABEL_69;
          }
        }
        v50 = _mm_loadu_si128(v46++);
        *v49 = v50;
      }
      while ( v46 != v45 );
      goto LABEL_66;
    }
  }
LABEL_34:
  v27 = *(_QWORD *)(a1 + 64);
  if ( v27 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= *(_DWORD *)(v27 - 4) )
        return v4;
      v29 = *(_QWORD *)(v27 + 8LL * i);
      v30 = *(_QWORD *)(a1 + 72) + 32LL * i;
      if ( *a2 != a2[1] )
        v29 = sub_15CFF50(a2, v29);
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      v31 = *(_QWORD **)(v4 + 64);
      if ( !v31 )
        break;
      v32 = *((_DWORD *)v31 - 1);
      if ( v32 != *((_DWORD *)v31 - 2) )
      {
        v33 = v32;
        v34 = v32 + 1;
        v35 = &v31[v33];
        goto LABEL_44;
      }
      v65 = (3 * v32 + 1) >> 1;
      v66 = 8 * v65 + 8;
      if ( 8 * v32 + 8 >= v66 || v32 >= v65 )
      {
LABEL_103:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C8AA10(v87, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v87);
        sub_233E40((__int64)v87);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v67 = (unsigned int *)sub_186B300(v31 - 1, v66);
      v36 = *(_QWORD **)(v4 + 72);
      v68 = v67[1];
      *v67 = v65;
      *(_QWORD *)(v4 + 64) = v67 + 2;
      *(_QWORD *)&v67[2 * v68 + 2] = v29;
      v67[1] = v68 + 1;
      if ( v36 )
      {
LABEL_45:
        v37 = *((unsigned int *)v36 - 1);
        if ( (_DWORD)v37 == *((_DWORD *)v36 - 2) )
        {
          v80 = (unsigned int)(3 * v37 + 1) >> 1;
          v51 = 32 * v80 + 8;
          if ( 32 * (int)v37 + 8 >= v51 || (unsigned int)v37 >= (unsigned int)(3 * v37 + 1) >> 1 )
            goto LABEL_103;
          v82 = (unsigned int *)sub_186B270(v51);
          v52 = *((unsigned int *)v36 - 1);
          v53 = v82 + 2;
          v82[1] = v52;
          v54 = &v36[4 * v52];
          v85 = v82 + 2;
          for ( j = v36; j != v54; *((_QWORD *)v53 - 1) = v60 )
          {
            v56 = *(_DWORD *)j;
            v57 = *((_BYTE *)j + 4);
            j += 4;
            v53 += 8;
            *(v53 - 8) = v56;
            *((_BYTE *)v53 - 28) = v57 & 3 | *(_BYTE *)(v53 - 7) & 0xFC;
            v58 = *(j - 3);
            *(j - 3) = 0;
            *((_QWORD *)v53 - 3) = v58;
            v59 = *((_BYTE *)j - 12);
            *(v53 - 4) = *((_DWORD *)j - 4);
            *((_BYTE *)v53 - 12) = v59 & 3 | *(_BYTE *)(v53 - 3) & 0xFC;
            v60 = *(j - 1);
            *(j - 1) = 0;
          }
          v61 = *((unsigned int *)v36 - 1);
          if ( (_DWORD)v61 )
          {
            v62 = v36;
            v77 = &v36[4 * v61];
            do
            {
              v73 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v62);
              v63 = v62 + 2;
              v62 += 4;
              sub_182CBA0(v73, v63);
            }
            while ( v62 != v77 );
          }
          sub_186B220(v36 - 1);
          v64 = v82[1];
          *(_QWORD *)(v4 + 72) = v85;
          v36 = v82 + 2;
          *v82 = v80;
          v38 = &v85[8 * v64];
        }
        else
        {
          v38 = &v36[4 * v37];
        }
        goto LABEL_47;
      }
LABEL_92:
      v69 = (_QWORD *)sub_186B270(0x48u);
      v36 = v69 + 1;
      *v69 = 2;
      *(_QWORD *)(v4 + 72) = v69 + 1;
      v38 = v69 + 1;
LABEL_47:
      *v38 = 0;
      v39 = qword_1C7F2C0;
      v38[1] = 0;
      v38[2] = 1;
      v38[3] = 0;
      if ( (*(_BYTE *)(v30 + 4) & 1) != 0 )
        sub_182C690(v39, v38, v30);
      else
        *(_DWORD *)v38 = *(_DWORD *)v30;
      if ( (*(_BYTE *)(v30 + 20) & 1) != 0 )
      {
        sub_182C690(v39, v38 + 2, v30 + 16);
      }
      else
      {
        v40 = *(_DWORD *)(v30 + 16);
        *((_BYTE *)v38 + 20) &= ~1u;
        *((_DWORD *)v38 + 4) = v40;
      }
      ++*((_DWORD *)v36 - 1);
      v27 = *(_QWORD *)(a1 + 64);
      if ( !v27 )
        return v4;
    }
    v70 = (_QWORD *)sub_186B270(0x18u);
    *v70 = 2;
    v34 = 1;
    v31 = v70 + 1;
    *(_QWORD *)(v4 + 64) = v31;
    v35 = v31;
LABEL_44:
    v36 = *(_QWORD **)(v4 + 72);
    *v35 = v29;
    *((_DWORD *)v31 - 1) = v34;
    if ( v36 )
      goto LABEL_45;
    goto LABEL_92;
  }
  return v4;
}

