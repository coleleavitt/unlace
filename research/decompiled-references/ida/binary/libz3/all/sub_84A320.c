__m128i *__fastcall sub_84A320(__m128i *a1, __int64 a2, __int64 a3)
{
  char **exception; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // ebx
  unsigned int v9; // ebx
  __int64 v10; // r14
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // r15
  __int64 v17; // rsi
  int v18; // eax
  __int64 *v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // r8d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rdi
  __m128i v31; // xmm1
  _QWORD *v32; // rbx
  void *v33; // rdi
  __int64 *v34; // rbx
  unsigned __int64 v35; // rbp
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 *v38; // rbx
  unsigned __int64 v39; // rbp
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 *v42; // rbx
  unsigned __int64 v43; // rbp
  __int64 v44; // rsi
  __int64 v45; // rdi
  _QWORD *v46; // rax
  __int64 *v47; // [rsp+0h] [rbp-148h]
  __int64 v49; // [rsp+20h] [rbp-128h]
  __int64 v50; // [rsp+20h] [rbp-128h]
  unsigned int v51; // [rsp+2Ch] [rbp-11Ch]
  __m128i v52; // [rsp+30h] [rbp-118h] BYREF
  __int64 v53; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-F0h]
  __int64 v55[4]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v56; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+88h] [rbp-C0h]
  __int64 *v58; // [rsp+90h] [rbp-B8h]
  __int64 v59; // [rsp+98h] [rbp-B0h]
  __int64 *v60; // [rsp+A0h] [rbp-A8h]
  __int64 v61; // [rsp+A8h] [rbp-A0h]
  __int64 v62; // [rsp+B0h] [rbp-98h]
  __int64 v63; // [rsp+B8h] [rbp-90h]
  __int64 v64; // [rsp+C0h] [rbp-88h]
  __int64 *v65; // [rsp+C8h] [rbp-80h]
  void *s; // [rsp+D0h] [rbp-78h]
  __int64 v67; // [rsp+D8h] [rbp-70h]
  void *v68; // [rsp+E0h] [rbp-68h]
  __int64 v69; // [rsp+E8h] [rbp-60h]
  int v70; // [rsp+F0h] [rbp-58h]
  __int64 v71; // [rsp+F8h] [rbp-50h]
  _QWORD v72[9]; // [rsp+100h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a2 + 280);
  v6 = *(_QWORD *)(a2 + 16);
  if ( v5 && (v7 = *(_DWORD *)(v5 - 4)) != 0 )
  {
    v56 = *(_QWORD *)(a2 + 16);
    v9 = v7 - 1;
    v57 = v6;
    v58 = nullptr;
    v59 = v6;
    v60 = nullptr;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = v6;
    v65 = nullptr;
    v52.m128i_i64[1] = (__int64)v72;
    s = v72;
    v67 = 1;
    v68 = nullptr;
    v69 = 0;
    v70 = 1065353216;
    v71 = 0;
    v72[0] = 0;
    while ( 1 )
    {
      v10 = 32LL * v9;
      sub_14EA2A0(&v56, *(_QWORD *)(v10 + v5 + 16), v10 + v5 + 16);
      sub_14EA0D0(&v56, *(_QWORD *)(*(_QWORD *)(a2 + 280) + v10), *(_QWORD *)(*(_QWORD *)(a2 + 280) + v10 + 16));
      if ( v9-- == 0 )
        break;
      v5 = *(_QWORD *)(a2 + 280);
    }
    v12 = sub_8493F0(a2, a3);
    v13 = *(_QWORD *)(a2 + 16);
    v14 = (__int64 *)v12[1];
    v52.m128i_i64[0] = v13;
    if ( v14 )
    {
      v47 = &v14[*((unsigned int *)v14 - 1)];
      if ( v47 != v14 )
      {
        v15 = v13;
        v16 = v14;
        v14 = nullptr;
        while ( 1 )
        {
          v23 = *v16;
          v54 = v15;
          v53 = 0;
          sub_14EA2A0(&v56, v23, &v53);
          v24 = v53;
          if ( v53 )
            ++*(_DWORD *)(v53 + 8);
          if ( v14 )
          {
            v25 = *((_DWORD *)v14 - 1);
            if ( v25 == *((_DWORD *)v14 - 2) )
            {
              v26 = (3 * v25 + 1) >> 1;
              v27 = 8 * v26 + 8;
              if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v55, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v55);
                sub_233E40((__int64)v55);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v51 = (3 * v25 + 1) >> 1;
              v49 = v24;
              v28 = (unsigned int *)sub_186B300(v14 - 1, v27);
              v29 = v28[1];
              v14 = (__int64 *)(v28 + 2);
              v20 = v53;
              v24 = v49;
              *v28 = v51;
              LODWORD(v28) = v29;
              v19 = &v14[v29];
              v18 = (_DWORD)v28 + 1;
            }
            else
            {
              v17 = v25;
              v18 = v25 + 1;
              v19 = &v14[v17];
              v20 = v24;
            }
          }
          else
          {
            v50 = v24;
            v46 = (_QWORD *)sub_186B270(0x18u);
            v14 = v46 + 1;
            v20 = v53;
            v24 = v50;
            *v46 = 2;
            v19 = v46 + 1;
            v18 = 1;
          }
          *v19 = v24;
          *((_DWORD *)v14 - 1) = v18;
          if ( v20 && (v21 = v54, v22 = *(_DWORD *)(v20 + 8) == 1, --*(_DWORD *)(v20 + 8), v22) )
          {
            sub_15D7BC0(v21, v20);
            if ( v47 == ++v16 )
              goto LABEL_24;
          }
          else if ( v47 == ++v16 )
          {
            goto LABEL_24;
          }
          v15 = *(_QWORD *)(a2 + 16);
        }
      }
      v14 = nullptr;
    }
LABEL_24:
    v31 = (__m128i)(unsigned __int64)v14;
    v32 = v68;
    *a1 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v52), v31);
    while ( v32 )
    {
      v33 = v32;
      v32 = (_QWORD *)*v32;
      operator delete(v33, 0x18u);
    }
    memset(s, 0, 8 * v67);
    v69 = 0;
    v68 = nullptr;
    if ( s != (void *)v52.m128i_i64[1] )
      operator delete(s, 8 * v67);
    v34 = v65;
    if ( v65 )
    {
      v35 = (unsigned __int64)&v65[*((unsigned int *)v65 - 1)];
      if ( (unsigned __int64)v65 >= v35 )
        goto LABEL_36;
      do
      {
        while ( 1 )
        {
          v36 = *v34;
          if ( *v34 )
          {
            v37 = v64;
            v22 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( (unsigned __int64)++v34 >= v35 )
            goto LABEL_35;
        }
        sub_15D7BC0(v37, v36);
        ++v34;
      }
      while ( (unsigned __int64)v34 < v35 );
LABEL_35:
      v34 = v65;
      if ( v65 )
LABEL_36:
        sub_186B220(v34 - 1);
    }
    if ( v63 )
      sub_186B220((void *)(v63 - 8));
    if ( v62 )
      sub_186B220((void *)(v62 - 8));
    if ( v61 )
      sub_186B220((void *)(v61 - 8));
    v38 = v60;
    if ( v60 )
    {
      v39 = (unsigned __int64)&v60[*((unsigned int *)v60 - 1)];
      if ( (unsigned __int64)v60 >= v39 )
        goto LABEL_51;
      do
      {
        while ( 1 )
        {
          v40 = *v38;
          if ( *v38 )
          {
            v41 = v59;
            v22 = (*(_DWORD *)(v40 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( (unsigned __int64)++v38 >= v39 )
            goto LABEL_50;
        }
        sub_15D7BC0(v41, v40);
        ++v38;
      }
      while ( (unsigned __int64)v38 < v39 );
LABEL_50:
      v38 = v60;
      if ( v60 )
LABEL_51:
        sub_186B220(v38 - 1);
    }
    v42 = v58;
    if ( v58 )
    {
      v43 = (unsigned __int64)&v58[*((unsigned int *)v58 - 1)];
      if ( (unsigned __int64)v58 >= v43 )
        goto LABEL_60;
      do
      {
        while ( 1 )
        {
          v44 = *v42;
          if ( *v42 )
          {
            v45 = v57;
            v22 = (*(_DWORD *)(v44 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( (unsigned __int64)++v42 >= v43 )
            goto LABEL_59;
        }
        sub_15D7BC0(v45, v44);
        ++v42;
      }
      while ( (unsigned __int64)v42 < v43 );
LABEL_59:
      v42 = v58;
      if ( v58 )
LABEL_60:
        sub_186B220(v42 - 1);
    }
  }
  else
  {
    a1->m128i_i64[0] = v6;
    a1->m128i_i64[1] = 0;
  }
  return a1;
}

