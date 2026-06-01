__int64 __fastcall sub_E2A120(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int32 v7; // r15d
  __int64 v8; // rax
  __m128 *v9; // rax
  __int64 *v10; // rcx
  __m128 v11; // xmm0
  __int64 v12; // rbp
  bool v13; // zf
  _DWORD *v14; // rax
  __int64 *v15; // r8
  __int64 *v16; // rbx
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 result; // rax
  unsigned int v23; // r12d
  size_t v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rdi
  _QWORD *i; // rax
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  unsigned int *v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // r13
  __int64 v44; // r12
  __int64 v45; // rcx
  char *v46; // rax
  unsigned int *v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rsi
  char **exception; // r13
  __int64 *v53; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int *v54; // [rsp+8h] [rbp-F0h]
  _QWORD *v55; // [rsp+10h] [rbp-E8h]
  _QWORD *v56; // [rsp+18h] [rbp-E0h]
  _QWORD *v57; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v58; // [rsp+28h] [rbp-D0h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+38h] [rbp-C0h]
  __int64 v61; // [rsp+40h] [rbp-B8h] BYREF
  char v62; // [rsp+48h] [rbp-B0h] BYREF

  v3 = a2;
  v4 = (_QWORD *)a1[14];
  v53 = (__int64 *)a1[12];
  v5 = a1[15];
  if ( v4 )
  {
    v6 = *((_DWORD *)v4 - 1);
    if ( a2 )
    {
      ++*(_DWORD *)(a2 + 8);
      if ( v5 )
      {
        v7 = *(_DWORD *)(v5 - 4);
        v8 = *((unsigned int *)v4 - 1);
      }
      else
      {
        v8 = *((unsigned int *)v4 - 1);
        v7 = 0;
      }
    }
    else if ( v5 )
    {
      v7 = *(_DWORD *)(v5 - 4);
      v8 = v6;
    }
    else
    {
      v8 = v6;
      v7 = 0;
    }
    if ( *((_DWORD *)v4 - 2) == (_DWORD)v8 )
    {
      v23 = (unsigned int)(3 * v8 + 1) >> 1;
      v24 = 40 * v23 + 8;
      if ( 40 * (int)v8 + 8 >= (unsigned int)v24 || (unsigned int)v8 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &ptr);
        sub_233E40((__int64)&ptr);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = sub_186B270(v24);
      v26 = (_QWORD *)a1[14];
      v54 = (unsigned int *)v25;
      v27 = v25;
      v4 = (_QWORD *)(v25 + 8);
      if ( v26 )
      {
        v28 = *((unsigned int *)v26 - 1);
        v29 = v4;
        *(_DWORD *)(v27 + 4) = v28;
        v30 = &v26[5 * v28];
        for ( i = v26; v30 != i; *((_DWORD *)v29 - 1) = *((_DWORD *)i - 1) )
        {
          v32 = i[1];
          i += 5;
          v29 += 5;
          *(v29 - 4) = v32;
          v33 = *(i - 5);
          *(i - 5) = 0;
          *(v29 - 5) = v33;
          *(v29 - 2) = *(i - 2);
          v34 = *(i - 3);
          *(i - 3) = 0;
          *(v29 - 3) = v34;
          *((_BYTE *)v29 - 8) = *((_BYTE *)i - 8);
        }
        v35 = *((unsigned int *)v26 - 1);
        if ( (_DWORD)v35 )
        {
          v36 = &v26[5 * v35];
          do
          {
            while ( 1 )
            {
              v39 = v26[2];
              if ( v39 )
              {
                v40 = v26[3];
                v13 = (*(_DWORD *)(v39 + 8))-- == 1;
                if ( v13 )
                {
                  v56 = v36;
                  v55 = v26;
                  sub_15D7BC0(v40, v39);
                  v36 = v56;
                  v26 = v55;
                }
              }
              v37 = *v26;
              if ( *v26 )
              {
                v38 = v26[1];
                v13 = (*(_DWORD *)(v37 + 8))-- == 1;
                if ( v13 )
                  break;
              }
              v26 += 5;
              if ( v26 == v36 )
                goto LABEL_44;
            }
            v56 = v36;
            v55 = v26;
            sub_15D7BC0(v38, v37);
            v36 = v56;
            v26 = v55 + 5;
          }
          while ( v55 + 5 != v56 );
LABEL_44:
          v26 = (_QWORD *)a1[14];
        }
        sub_186B220(v26 - 1);
        v9 = (__m128 *)&v4[5 * v54[1]];
      }
      else
      {
        *(_DWORD *)(v25 + 4) = 0;
        v9 = (__m128 *)(v25 + 8);
      }
      v41 = v54;
      a1[14] = v4;
      *v41 = v23;
    }
    else
    {
      v9 = (__m128 *)&v4[5 * v8];
    }
  }
  else
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    if ( v5 )
      v7 = *(_DWORD *)(v5 - 4);
    else
      v7 = 0;
    v42 = (_QWORD *)sub_186B270(0x58u);
    v4 = v42 + 1;
    *v42 = 2;
    v6 = 0;
    a1[14] = v42 + 1;
    v9 = (__m128 *)(v42 + 1);
  }
  v10 = v53;
  v9[1].m128_u64[0] = 0;
  v11 = _mm_loadh_ps((const double *)&v53);
  v9[2].m128_i8[0] = 0;
  v9[1].m128_u64[1] = (unsigned __int64)v10;
  v9[2].m128_i32[1] = v7;
  *v9 = v11;
  ++*((_DWORD *)v4 - 1);
  v12 = (__int64)(a1 + 27);
  sub_15D08E0(a1 + 27);
  v13 = *(_WORD *)(v3 + 4) == 0;
  v57 = a1;
  v54 = (unsigned int *)&v61;
  ptr = &v61;
  v58 = v6;
  v60 = 0x1000000000LL;
  if ( v13 && (v14 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL)) != nullptr && !*v14 && v14[1] == 5 )
  {
    result = *(unsigned int *)(v3 + 24);
    if ( !(_DWORD)result )
      return result;
    v15 = (__int64 *)v54;
    v43 = v3 + 8 * result;
    LODWORD(v44) = 16;
    LODWORD(v19) = 0;
    while ( 1 )
    {
      v45 = *(_QWORD *)(v3 + 32);
      v18 = (unsigned int)v19;
      v3 += 8;
      v19 = (unsigned int)(v19 + 1);
      v15[v18] = v45;
      LODWORD(v60) = v19;
      if ( v3 == v43 )
        break;
      if ( (unsigned int)v19 >= (unsigned int)v44 )
      {
        v44 = (unsigned int)(2 * v44);
        v46 = (char *)sub_186B270(8 * v44);
        LODWORD(v19) = v60;
        v47 = (unsigned int *)ptr;
        v15 = (__int64 *)v46;
        if ( (_DWORD)v60 )
        {
          if ( (unsigned int)(v60 - 1) <= 2 || v46 == (char *)ptr + 8 )
          {
            v50 = 0;
            v51 = 8LL * (unsigned int)v60;
            do
            {
              v15[v50 / 8] = *(_QWORD *)&v47[v50 / 4];
              v50 += 8LL;
            }
            while ( v51 != v50 );
          }
          else
          {
            v48 = 0;
            v49 = 16LL * ((unsigned int)v60 >> 1);
            do
            {
              *(__m128i *)&v15[v48 / 8] = _mm_loadu_si128((const __m128i *)&v47[v48 / 4]);
              v48 += 16LL;
            }
            while ( v48 != v49 );
            if ( (v19 & 1) != 0 )
              v15[(unsigned int)v19 & 0xFFFFFFFE] = *(_QWORD *)&v47[2 * (v19 & 0xFFFFFFFE)];
          }
        }
        if ( v47 != v54 && v47 )
        {
          v53 = v15;
          sub_186B220(v47);
          LODWORD(v19) = v60;
          v15 = v53;
        }
        ptr = v15;
        HIDWORD(v60) = v44;
      }
    }
    v16 = &v15[v19];
    if ( v16 == v15 )
      goto LABEL_23;
  }
  else
  {
    LODWORD(v60) = 1;
    v15 = (__int64 *)v54;
    v61 = v3;
    v16 = (__int64 *)&v62;
  }
  v17 = v15;
  v18 = (__int64)v15;
  do
  {
    v19 = *(_QWORD *)v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 4LL) == 2 )
    {
      LOBYTE(v53) = 1;
      goto LABEL_17;
    }
    v18 += 8;
  }
  while ( v16 != (__int64 *)v18 );
  LOBYTE(v53) = 0;
  while ( 1 )
  {
LABEL_17:
    while ( 1 )
    {
      v20 = *v17;
      if ( *(_WORD *)(*v17 + 4) != 2 )
        break;
LABEL_18:
      LODWORD(v18) = *(_DWORD *)(v20 + 72);
      if ( !(_DWORD)v18 )
        goto LABEL_16;
      v21 = 0;
      do
        v18 = sub_E298E0(&v57, v12, *(_QWORD *)(v20 + 16LL * *(unsigned int *)(v20 + 20) + 8 * v21++ + 80), 0);
      while ( (unsigned int)v21 < *(_DWORD *)(v20 + 72) );
      if ( v16 == ++v17 )
        goto LABEL_22;
    }
    if ( !(_BYTE)v53 )
      break;
LABEL_16:
    if ( v16 == ++v17 )
      goto LABEL_22;
  }
  while ( 1 )
  {
    v18 = sub_E298E0(&v57, v12, v20, 0);
    if ( v16 == ++v17 )
      break;
    v20 = *v17;
    if ( *(_WORD *)(*v17 + 4) == 2 )
      goto LABEL_18;
  }
LABEL_22:
  v15 = (__int64 *)ptr;
LABEL_23:
  LOBYTE(v18) = v15 == nullptr;
  LOBYTE(v19) = v15 == (__int64 *)v54;
  result = (unsigned int)v19 | (unsigned int)v18;
  if ( !(_BYTE)result )
    return sub_186B220(v15);
  return result;
}

