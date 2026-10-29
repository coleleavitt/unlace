_QWORD *__fastcall Z3_polynomial_subresultants(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i *exception; // r14
  char *v5; // rax
  char v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned int i; // r13d
  __int64 v21; // r15
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rsi
  int v26; // eax
  _QWORD *v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rdi
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r13
  unsigned int v33; // r8d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rsi
  _QWORD *v37; // rax
  __int64 v39; // [rsp+8h] [rbp-140h]
  __int64 v40; // [rsp+8h] [rbp-140h]
  unsigned int v41; // [rsp+10h] [rbp-138h]
  unsigned int v42; // [rsp+1Ch] [rbp-12Ch]
  __int64 v43; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v44[8]; // [rsp+28h] [rbp-120h] BYREF
  __int64 v45; // [rsp+30h] [rbp-118h] BYREF
  __int64 v46; // [rsp+38h] [rbp-110h]
  __int64 v47; // [rsp+40h] [rbp-108h] BYREF
  __int64 v48; // [rsp+48h] [rbp-100h]
  __int64 v49; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-F0h]
  __int64 v51; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+68h] [rbp-E0h]
  __int64 v53; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+78h] [rbp-D0h]
  __int64 v55; // [rsp+80h] [rbp-C8h]
  _QWORD v56[3]; // [rsp+88h] [rbp-C0h] BYREF
  _QWORD v57[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-98h]
  int *v59; // [rsp+C0h] [rbp-88h] BYREF
  int v60; // [rsp+C8h] [rbp-80h]
  __int128 v61; // [rsp+D0h] [rbp-78h]
  __int128 v62; // [rsp+E0h] [rbp-68h]
  __int64 v63; // [rsp+F0h] [rbp-58h]
  __int16 v64; // [rsp+F8h] [rbp-50h]
  __int64 v65; // [rsp+100h] [rbp-48h]

  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v8 )
    sub_29F2C0(a1, a2, a3, a4);
  v45 = 0;
  *(_DWORD *)(a1 + 1520) = 0;
  v46 = a1 + 2264;
  v47 = 0;
  v48 = a1 + 2264;
  v9 = sub_177C960(a1 + 2264);
  v10 = *(_QWORD *)(a1 + 232);
  v55 = v9;
  v56[0] = 0;
  v56[1] = 0;
  sub_1632EE0(v57, v10, a1 + 2264);
  if ( (unsigned __int8)sub_1633040(v57, a2, &v45) && (unsigned __int8)sub_1633040(v57, a3, &v47) )
  {
    v13 = sub_186B270(0x28u);
    v14 = *(_QWORD *)(a1 + 232);
    v11 = (_QWORD *)v13;
    sub_2518F0(v13, a1);
    v11[3] = v14;
    *v11 = &off_1C4CA20;
    v11[4] = 0;
    sub_24FBE0(a1, (__int64)v11);
    if ( (unsigned __int8)sub_1632CC0(v57, a4) )
    {
      v15 = sub_1632CF0(v57);
      v42 = sub_16235A0(v15, a4);
      v16 = *(_QWORD *)(a1 + 232);
      v49 = a1 + 2264;
      v50 = 0;
      v54 = v16;
      v64 = 0;
      v51 = 0;
      v52 = a1 + 2264;
      v53 = 0;
      v60 = 0;
      v59 = &off_1C4C9C8;
      v63 = 0;
      v65 = a1 + 1624;
      v61 = 0;
      v62 = 0;
      sub_24FD10(&v43, a1, (__int64)&v59);
      sub_15B10B0(a1 + 96);
      sub_18561B0((unsigned int)v44, *(_DWORD *)(a1 + 100), (unsigned int)&v59, v17, v18, (unsigned int)v44);
      sub_1787900(a1 + 2264, v45, v47, v42, &v49);
      sub_1856400(v44);
      sub_24E910(&v43);
      v59 = &off_1C4C9C8;
      if ( (_BYTE)v64 )
        sub_18296D0(v65);
      if ( HIBYTE(v64) )
        sub_1829760(v65);
      v19 = v50;
      for ( i = 0; v50; v19 = v50 )
      {
        if ( i >= *(_DWORD *)(v19 - 4) )
          break;
        v21 = *(_QWORD *)(v19 + 8LL * i);
        if ( v21 )
          sub_177CDE0(v52, *(_QWORD *)(v19 + 8LL * i));
        if ( v51 )
          sub_177F260(v52);
        v51 = v21;
        sub_1632F10(v57, &v51, 1, &v53);
        v22 = v53;
        if ( v53 )
          ++*(_DWORD *)(v53 + 8);
        v23 = (_QWORD *)v11[4];
        if ( v23 )
        {
          v24 = *((_DWORD *)v23 - 1);
          if ( v24 == *((_DWORD *)v23 - 2) )
          {
            v33 = (3 * v24 + 1) >> 1;
            v34 = 8 * v33 + 8;
            if ( 8 * v24 + 8 >= (unsigned int)v34 || v24 >= v33 )
            {
              exception = (__m128i *)__cxa_allocate_exception(0x28u);
              v5 = (char *)operator new(0x2Bu);
              strcpy(v5, "Overflow encountered when expanding vector");
              exception->m128i_i64[1] = (__int64)v5;
              exception->m128i_i64[0] = (__int64)off_1C63128;
              exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v41 = (3 * v24 + 1) >> 1;
            v39 = v22;
            v35 = (unsigned int *)sub_186B300(v23 - 1, v34);
            v36 = v35[1];
            v23 = v35 + 2;
            v11[4] = v35 + 2;
            v22 = v39;
            *v35 = v41;
            LODWORD(v35) = v36;
            v27 = &v23[v36];
            v26 = (_DWORD)v35 + 1;
          }
          else
          {
            v25 = v24;
            v26 = v24 + 1;
            v27 = &v23[v25];
          }
        }
        else
        {
          v40 = v22;
          v37 = (_QWORD *)sub_186B270(0x18u);
          v23 = v37 + 1;
          *v37 = 2;
          v22 = v40;
          v26 = 1;
          v11[4] = v23;
          v27 = v23;
        }
        *v27 = v22;
        ++i;
        *((_DWORD *)v23 - 1) = v26;
      }
      v28 = v53;
      if ( v53 )
      {
        v29 = v54;
        if ( (*(_DWORD *)(v53 + 8))-- == 1 )
          sub_15D7BC0(v29, v28);
      }
      if ( v51 )
        sub_177F260(v52);
      v31 = v50;
      if ( v50 )
      {
        v32 = v50 + 8LL * *(unsigned int *)(v50 - 4);
        if ( v50 >= v32 )
          goto LABEL_42;
        do
        {
          v31 += 8LL;
          sub_177F260(v49);
        }
        while ( v31 < v32 );
        v31 = v50;
        if ( v50 )
LABEL_42:
          sub_186B220((void *)(v31 - 8));
      }
    }
    if ( v8 )
      sub_2BB620(v11);
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
    v11 = nullptr;
  }
  v57[0] = &off_1C62610;
  if ( v58 )
    sub_186B220((void *)(v58 - 8));
  sub_16329F0(v57);
  sub_182EF00(v55, v56);
  if ( v47 )
    sub_177F260(v48);
  if ( v45 )
    sub_177F260(v46);
  if ( v8 )
    byte_1C7EBA0 = 1;
  return v11;
}

