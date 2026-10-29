__int64 __fastcall sub_4C5E90(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, __int64 *a6)
{
  char **exception; // rbp
  __int64 v7; // rdx
  __int64 *v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // r15
  _QWORD *v13; // r12
  __int64 v14; // rax
  int v15; // edi
  unsigned int v16; // edx
  __int64 *v17; // rsi
  __int64 *i; // rax
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 *v22; // rax
  _QWORD *v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 *v26; // rsi
  int v27; // r9d
  unsigned int v28; // edx
  __int64 *v29; // rdi
  __int64 v30; // rdx
  __int64 *v31; // r10
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // r12
  void *v37; // r14
  __int64 (__fastcall *v38)(void *); // rdx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 *v41; // r10
  int v42; // edx
  __int64 *v43; // rsi
  __int64 *j; // rax
  __int64 v45; // rdi
  unsigned int v48; // esi
  int v49; // eax
  unsigned int v50; // eax
  __int64 *v51; // rax
  __int64 *v52; // rdx
  const __m128i *v53; // rax
  int v54; // r14d
  __m128i *v55; // r11
  char *v56; // r10
  __int64 v57; // rdx
  __int64 *v58; // rsi
  unsigned int v59; // edx
  unsigned int v60; // ecx
  unsigned int *v61; // rax
  __int64 *v62; // rax
  __int64 *v63; // rax
  void *v64; // [rsp+0h] [rbp-98h]
  _QWORD *v65; // [rsp+10h] [rbp-88h]
  unsigned int v66; // [rsp+10h] [rbp-88h]
  size_t v67; // [rsp+18h] [rbp-80h]
  __int64 *v68; // [rsp+18h] [rbp-80h]
  __int64 *v69; // [rsp+18h] [rbp-80h]
  unsigned int v70; // [rsp+20h] [rbp-78h]
  __int64 v71[11]; // [rsp+40h] [rbp-58h] BYREF

  v10 = *(__int64 **)(a1 + 120);
  v11 = &v10[2 * *(unsigned int *)(a1 + 128)];
  if ( v10 == v11 )
    return sub_4CDCE0((int)a1 + 144, a2, a3, (int)a4, a5, (int)a6, v64);
  while ( (unsigned __int64)*v10 <= 1 )
  {
    v10 += 2;
    if ( v11 == v10 )
      return sub_4CDCE0((int)a1 + 144, a2, a3, (int)a4, a5, (int)a6, v64);
  }
  if ( v11 == v10 )
    return sub_4CDCE0((int)a1 + 144, a2, a3, (int)a4, a5, (int)a6, v64);
  v12 = *v10;
  v13 = nullptr;
  do
  {
    v14 = *(unsigned int *)(a2 + 8);
    v15 = *(_DWORD *)(v12 + 12);
    a4 = *(__int64 **)a2;
    v16 = v14 - 1;
    v14 *= 8;
    v17 = (__int64 *)(*(_QWORD *)a2 + v14);
    a3 = 8LL * (v15 & v16);
    a6 = (__int64 *)(*(_QWORD *)a2 + a3);
    if ( a3 != v14 )
    {
      for ( i = (__int64 *)(*(_QWORD *)a2 + a3); v17 != i; ++i )
      {
        a3 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(a3 + 12) == v15 && a3 == v12 )
            goto LABEL_18;
        }
        else if ( !a3 )
        {
          goto LABEL_14;
        }
      }
    }
    if ( a4 == a6 )
    {
LABEL_14:
      if ( !v13 )
        goto LABEL_49;
      goto LABEL_15;
    }
    while ( 1 )
    {
      v35 = *a4;
      if ( (unsigned __int64)*a4 <= 1 )
        break;
      if ( *(_DWORD *)(v35 + 12) == v15 && v35 == v12 )
        goto LABEL_18;
LABEL_45:
      if ( a6 == ++a4 )
        goto LABEL_14;
    }
    if ( v35 )
      goto LABEL_45;
    if ( !v13 )
    {
LABEL_49:
      v36 = (_QWORD *)sub_186B270(0x18u);
      *v36 = 2;
      v21 = 1;
      v13 = v36 + 1;
      a3 = (__int64)v13;
      goto LABEL_17;
    }
LABEL_15:
    v19 = *((_DWORD *)v13 - 1);
    if ( v19 == *((_DWORD *)v13 - 2) )
    {
      v59 = (3 * v19 + 1) >> 1;
      v60 = 8 * v59 + 8;
      if ( 8 * v19 + 8 >= v60 || v19 >= v59 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DFB18(v71, "Overflow encountered when expanding vector", v7);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v71);
        sub_233E40((__int64)v71);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v66 = (3 * v19 + 1) >> 1;
      v61 = (unsigned int *)sub_186B300(v13 - 1, v60);
      v13 = v61 + 2;
      *v61 = v66;
      LODWORD(v61) = v61[1];
      a3 = (__int64)&v13[(unsigned int)v61];
      v21 = (_DWORD)v61 + 1;
    }
    else
    {
      v20 = v19;
      v21 = v19 + 1;
      a3 = (__int64)&v13[v20];
    }
LABEL_17:
    *(_QWORD *)a3 = v12;
    *((_DWORD *)v13 - 1) = v21;
LABEL_18:
    v22 = v10 + 2;
    if ( v11 == v10 + 2 )
      break;
    while ( 1 )
    {
      v12 = *v22;
      v10 = v22;
      if ( (unsigned __int64)*v22 > 1 )
        break;
      v22 += 2;
      if ( v11 == v22 )
        goto LABEL_23;
    }
  }
  while ( v11 != v22 );
LABEL_23:
  if ( v13 )
  {
    v23 = v13;
    v65 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 == v65 )
      goto LABEL_64;
    while ( 1 )
    {
      v24 = *v23;
      v25 = *(unsigned int *)(a1 + 128);
      v26 = *(__int64 **)(a1 + 120);
      v27 = *(_DWORD *)(*v23 + 12LL);
      v28 = v25 - 1;
      v25 *= 16;
      v29 = (__int64 *)((char *)v26 + v25);
      v30 = 16LL * (v27 & v28);
      v31 = &v26[(unsigned __int64)v30 / 8];
      if ( v30 != v25 )
      {
        v32 = &v26[(unsigned __int64)v30 / 8];
        do
        {
          while ( 1 )
          {
            v33 = *v32;
            if ( (unsigned __int64)*v32 <= 1 )
              break;
            if ( *(_DWORD *)(v33 + 12) == v27 && v24 == v33 )
              goto LABEL_51;
            v32 += 2;
            if ( v29 == v32 )
              goto LABEL_33;
          }
          if ( !v33 )
            goto LABEL_109;
          v32 += 2;
        }
        while ( v29 != v32 );
      }
LABEL_33:
      if ( v26 == v31 )
LABEL_109:
        BUG();
      while ( 1 )
      {
        v34 = *v26;
        if ( (unsigned __int64)*v26 > 1 )
          break;
        if ( !v34 )
          goto LABEL_109;
LABEL_37:
        v26 += 2;
        if ( v31 == v26 )
          goto LABEL_109;
      }
      if ( *(_DWORD *)(v34 + 12) != v27 || v24 != v34 )
        goto LABEL_37;
      v32 = v26;
LABEL_51:
      v37 = (void *)v32[1];
      v38 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v37 + 16LL);
      if ( v38 == sub_4C9C10 )
      {
        (**(void (__fastcall ***)(void *))v37)(v37);
        sub_186B220(v37);
      }
      else
      {
        v38(v37);
      }
      v39 = *(unsigned int *)(a1 + 128);
      v40 = *(unsigned int *)(v24 + 12);
      v41 = *(__int64 **)(a1 + 120);
      v42 = v39 - 1;
      v39 *= 16;
      v43 = (__int64 *)((char *)v41 + v39);
      a3 = 16LL * ((unsigned int)v40 & v42);
      a6 = (__int64 *)((char *)v41 + a3);
      if ( a3 == v39 )
      {
LABEL_65:
        if ( v41 != a6 )
        {
          for ( j = *(__int64 **)(a1 + 120); a6 != j; j += 2 )
          {
            a3 = *j;
            if ( (unsigned __int64)*j > 1 )
            {
              if ( *(_DWORD *)(a3 + 12) == (_DWORD)v40 && v24 == a3 )
                goto LABEL_74;
            }
            else if ( !a3 )
            {
              break;
            }
          }
        }
LABEL_60:
        v45 = **(_QWORD **)(a1 + 8);
        goto LABEL_61;
      }
      j = (__int64 *)((char *)v41 + a3);
      while ( 2 )
      {
        a3 = *j;
        if ( (unsigned __int64)*j <= 1 )
        {
          if ( !a3 )
            goto LABEL_60;
          goto LABEL_57;
        }
        if ( *(_DWORD *)(a3 + 12) != (_DWORD)v40 || v24 != a3 )
        {
LABEL_57:
          j += 2;
          if ( v43 == j )
            goto LABEL_65;
          continue;
        }
        break;
      }
LABEL_74:
      a3 = (__int64)(j + 2);
      LODWORD(a4) = *(_DWORD *)(a1 + 132);
      if ( v43 == j + 2 )
        a3 = *(_QWORD *)(a1 + 120);
      v48 = (_DWORD)a4 - 1;
      if ( !*(_QWORD *)a3 )
      {
        *j = 0;
        v62 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 132) = v48;
        v45 = *v62;
        goto LABEL_61;
      }
      *j = 1;
      v49 = *(_DWORD *)(a1 + 136);
      *(_DWORD *)(a1 + 132) = v48;
      v50 = v49 + 1;
      *(_DWORD *)(a1 + 136) = v50;
      if ( v48 >= v50 || v50 <= 0x40 || (unsigned __int8)sub_186AF10(v40) )
        goto LABEL_60;
      v70 = *(_DWORD *)(a1 + 128);
      v67 = 2LL * v70;
      v51 = (__int64 *)sub_186B270(v67 * 8);
      a6 = v51;
      v52 = &v51[v67];
      if ( v70 )
      {
        if ( ((16 * (_BYTE)v70) & 0x10) == 0 || (*(_OWORD *)v51 = 0, v51 += 2, v51 != v52) )
        {
          do
          {
            *(_OWORD *)v51 = 0;
            v51 += 4;
            *((_OWORD *)v51 - 1) = 0;
          }
          while ( v51 != v52 );
        }
      }
      LODWORD(a3) = *(_DWORD *)(a1 + 128);
      v53 = *(const __m128i **)(a1 + 120);
      v54 = a3 - 1;
      a4 = (__int64 *)(16LL * (unsigned int)a3);
      v55 = (__m128i *)((char *)a4 + (_QWORD)v53);
      v68 = a4;
      v56 = (char *)a4 + (_QWORD)a6;
      if ( v53 != (const __m128i *)((char *)a4 + (_QWORD)v53) )
      {
        do
        {
          a3 = v53->m128i_i64[0];
          if ( v53->m128i_i64[0] > 1uLL )
          {
            LODWORD(a4) = *(_DWORD *)(a3 + 12) & v54;
            v57 = 16LL * (unsigned int)a4;
            v58 = &a6[(unsigned __int64)v57 / 8];
            if ( v68 == (__int64 *)v57 )
            {
LABEL_99:
              if ( a6 == v58 )
              {
LABEL_108:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              a3 = (__int64)a6;
              while ( *(_QWORD *)a3 )
              {
                a3 += 16;
                if ( v58 == (__int64 *)a3 )
                  goto LABEL_108;
              }
            }
            else
            {
              a3 = (__int64)&a6[(unsigned __int64)v57 / 8];
              while ( *(_QWORD *)a3 )
              {
                a3 += 16;
                if ( v56 == (char *)a3 )
                  goto LABEL_99;
              }
            }
            *(__m128i *)a3 = _mm_loadu_si128(v53);
          }
          ++v53;
        }
        while ( v55 != v53 );
        v55 = *(__m128i **)(a1 + 120);
      }
      if ( v55 )
      {
        v69 = a6;
        sub_186B220(v55);
        a6 = v69;
      }
      v63 = *(__int64 **)(a1 + 8);
      *(_QWORD *)(a1 + 120) = a6;
      *(_DWORD *)(a1 + 136) = 0;
      v45 = *v63;
LABEL_61:
      if ( (*(_DWORD *)(v24 + 8))-- == 1 )
        sub_15D7BC0(v45, v24);
      if ( v65 == ++v23 )
      {
LABEL_64:
        sub_4CDCE0(a1 + 144, a2, a3, (int)a4, a5, (int)a6, v64);
        return sub_186B220(v13 - 1);
      }
    }
  }
  return sub_4CDCE0((int)a1 + 144, a2, a3, (int)a4, a5, (int)a6, v64);
}

