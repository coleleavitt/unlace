__int64 __fastcall sub_862B60(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // r13
  char **v4; // r13
  __int64 v8; // rax
  _QWORD *v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  int v13; // r8d
  int v14; // r9d
  __int64 *v15; // r12
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  bool v18; // zf
  unsigned __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rsi
  unsigned int v27; // edx
  size_t v28; // rsi
  _DWORD *v29; // rax
  unsigned int v30; // r14d
  size_t v31; // rsi
  unsigned int *v32; // rax
  _DWORD *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r12
  unsigned int v37; // r15d
  int v38; // eax
  unsigned int v39; // r13d
  __int64 *v40; // r12
  unsigned __int64 v41; // r14
  __int64 v42; // rsi
  __int64 *v43; // rbx
  unsigned __int64 v44; // r12
  __int64 v45; // rsi
  int v47; // [rsp+0h] [rbp-D0h]
  __int64 v48; // [rsp+8h] [rbp-C8h]
  __int64 v49; // [rsp+10h] [rbp-C0h]
  __m128i *v50; // [rsp+18h] [rbp-B8h]
  __int64 *v51; // [rsp+20h] [rbp-B0h]
  __int64 v52; // [rsp+20h] [rbp-B0h]
  __int64 *v53; // [rsp+28h] [rbp-A8h]
  int v54[2]; // [rsp+28h] [rbp-A8h]
  __int64 v55; // [rsp+30h] [rbp-A0h]
  int v56[2]; // [rsp+38h] [rbp-98h]
  int v57; // [rsp+40h] [rbp-90h]
  void *v58; // [rsp+48h] [rbp-88h]
  __m128i v59; // [rsp+70h] [rbp-60h] BYREF
  _QWORD v60[10]; // [rsp+80h] [rbp-50h] BYREF

  ++*(_DWORD *)(a1 + 132);
  v55 = a3;
  v8 = sub_15D1F10(a2);
  v9 = sub_85E550(a1, v8);
  v10 = *(_QWORD *)(a1 + 72);
  ++*(_DWORD *)(a2 + 8);
  v48 = v10;
  v11 = (_QWORD *)sub_186B270(0x18u);
  v11[1] = a2;
  *(_QWORD *)v56 = v11 + 1;
  *v11 = 0x100000002LL;
  if ( a3 )
    ++*(_DWORD *)(v55 + 8);
  v12 = (_QWORD *)sub_186B270(0x18u);
  v15 = (__int64 *)v9[1];
  *v12 = 0x100000002LL;
  v16 = v12 + 1;
  v12[1] = v55;
  if ( v15 )
  {
    v51 = &v15[*((unsigned int *)v15 - 1)];
    if ( v51 != v15 )
    {
      v53 = v60;
      v50 = &v59;
      do
      {
        while ( 1 )
        {
          v19 = *(_QWORD *)(a1 + 72);
          v20 = *v15;
          v60[0] = a2;
          v60[1] = v55;
          v21 = sub_15DC610(
                  v19,
                  v20,
                  2,
                  (int)v53,
                  v13,
                  v14,
                  v47,
                  v48,
                  v49,
                  (int)v50,
                  (int)v51,
                  (char)v53,
                  v55,
                  v56[0],
                  v57,
                  v58);
          v59 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)v19);
          if ( v21 )
            ++*(_DWORD *)(v21 + 8);
          sub_7E5890(a1, (__int64)v50);
          v22 = v59.m128i_i64[0];
          if ( v59.m128i_i64[0] )
            ++*(_DWORD *)(v59.m128i_i64[0] + 8);
          v23 = v22;
          v24 = *(_DWORD *)(*(_QWORD *)v56 - 4LL);
          if ( v24 == *(_DWORD *)(*(_QWORD *)v56 - 8LL) )
          {
            v30 = (3 * v24 + 1) >> 1;
            v31 = 8 * v30 + 8;
            if ( 8 * v24 + 8 >= (unsigned int)v31 || v24 >= v30 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v53, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v53);
              sub_233E40((__int64)v53);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v49 = v22;
            v32 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v56 - 8LL), v31);
            v33 = v32 + 2;
            *v32 = v30;
            v22 = v49;
            v23 = v59.m128i_i64[0];
            v24 = v32[1];
            *(_QWORD *)v56 = v33;
          }
          *(_QWORD *)(*(_QWORD *)v56 + 8LL * v24) = v22;
          *(_DWORD *)(*(_QWORD *)v56 - 4LL) = v24 + 1;
          if ( v23 )
            ++*(_DWORD *)(v23 + 8);
          v25 = *((_DWORD *)v16 - 1);
          v26 = v23;
          if ( v25 == *((_DWORD *)v16 - 2) )
          {
            v27 = (3 * v25 + 1) >> 1;
            v28 = 8 * v27 + 8;
            if ( 8 * v25 + 8 >= (unsigned int)v28 || v25 >= v27 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v53, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v53);
              sub_233E40((__int64)v53);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v49) = (3 * v25 + 1) >> 1;
            v29 = (_DWORD *)sub_186B300(v16 - 1, v28);
            v16 = v29 + 2;
            v26 = v59.m128i_i64[0];
            *v29 = v49;
            v25 = v29[1];
          }
          v16[v25] = v23;
          *((_DWORD *)v16 - 1) = v25 + 1;
          if ( v26 )
          {
            v17 = v59.m128i_i64[1];
            v18 = (*(_DWORD *)(v26 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( v51 == ++v15 )
            goto LABEL_24;
        }
        sub_15D7BC0(v17, v26);
        ++v15;
      }
      while ( v51 != v15 );
    }
  }
LABEL_24:
  *(_QWORD *)v54 = *(_QWORD *)(a1 + 72);
  v34 = sub_15DCAD0(*(_QWORD *)(a1 + 120), v56[0], 0);
  v35 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v52 = *(_QWORD *)(a1 + 72);
  v36 = sub_15DCAD0(*(_QWORD *)(a1 + 120), (int)v16, 0);
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  v37 = sub_7E58D0(a1, a2, v55);
  v38 = sub_7E58D0(a1, v35, v36);
  v39 = sub_7E5400(a1, v37, v38 ^ 1u, nullptr);
  if ( v36 )
  {
    v18 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v52, v36);
  }
  if ( v35 )
  {
    v18 = (*(_DWORD *)(v35 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(*(_QWORD *)v54, v35);
  }
  v40 = v16;
  v41 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
  if ( (unsigned __int64)v16 < v41 )
  {
    do
    {
      while ( 1 )
      {
        v42 = *v40;
        if ( *v40 )
        {
          v18 = (*(_DWORD *)(v42 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v40 >= v41 )
          goto LABEL_40;
      }
      ++v40;
      sub_15D7BC0(v48, v42);
    }
    while ( (unsigned __int64)v40 < v41 );
  }
LABEL_40:
  sub_186B220(v16 - 1);
  v43 = *(__int64 **)v56;
  v44 = *(_QWORD *)v56 + 8LL * *(unsigned int *)(*(_QWORD *)v56 - 4LL);
  if ( *(_QWORD *)v56 < v44 )
  {
    do
    {
      while ( 1 )
      {
        v45 = *v43;
        if ( *v43 )
        {
          v18 = (*(_DWORD *)(v45 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v43 >= v44 )
          goto LABEL_46;
      }
      ++v43;
      sub_15D7BC0(v48, v45);
    }
    while ( (unsigned __int64)v43 < v44 );
  }
LABEL_46:
  sub_186B220((void *)(*(_QWORD *)v56 - 8LL));
  return v39;
}

