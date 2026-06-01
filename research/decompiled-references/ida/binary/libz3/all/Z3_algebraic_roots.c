_QWORD *__fastcall Z3_algebraic_roots(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  char **exception; // r12
  char v9; // bp
  __int64 v10; // rsi
  _QWORD *v11; // r12
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __m128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rdi
  unsigned int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r14
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // r13
  __int64 v40; // rsi
  unsigned int v41; // r15d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // [rsp+8h] [rbp-140h]
  int v47[2]; // [rsp+18h] [rbp-130h] BYREF
  int v48[2]; // [rsp+20h] [rbp-128h]
  __int64 v49; // [rsp+28h] [rbp-120h]
  __int64 *v50; // [rsp+30h] [rbp-118h]
  __m128 *v51; // [rsp+38h] [rbp-110h]
  __int64 v52; // [rsp+40h] [rbp-108h] BYREF
  char v53[8]; // [rsp+48h] [rbp-100h] BYREF
  __int64 v54; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v55; // [rsp+58h] [rbp-F0h]
  int v56[4]; // [rsp+60h] [rbp-E8h] BYREF
  int v57[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+78h] [rbp-D0h]
  __int64 v59; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+88h] [rbp-C0h]
  __m128 v61; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-A8h]
  _QWORD v63[3]; // [rsp+A8h] [rbp-A0h] BYREF
  int *v64; // [rsp+C0h] [rbp-88h] BYREF
  int v65; // [rsp+C8h] [rbp-80h]
  __int128 v66; // [rsp+D0h] [rbp-78h]
  __int128 v67; // [rsp+E0h] [rbp-68h]
  __int64 v68; // [rsp+F0h] [rbp-58h]
  __int16 v69; // [rsp+F8h] [rbp-50h]
  __int64 v70; // [rsp+100h] [rbp-48h]

  v9 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v9 )
    sub_29F160();
  v54 = 0;
  *(_DWORD *)(a1 + 1520) = 0;
  v55 = a1 + 2264;
  v62 = sub_177C960(a1 + 2264);
  v10 = *(_QWORD *)(a1 + 232);
  v63[0] = 0;
  v63[1] = 0;
  sub_1632D10(v56, v10, a1 + 2264, 0, 1);
  if ( !(unsigned __int8)sub_1633040(v56, a2, &v54) || (unsigned int)sub_177C8F0(v54) >= a3 + 1 )
  {
    sub_24EA30(a1, 3u, nullptr);
    v11 = nullptr;
    goto LABEL_6;
  }
  v13 = *(_QWORD *)(a1 + 304);
  *(_QWORD *)v48 = a1 + 296;
  if ( !v13 )
    sub_16669E0(a1 + 296);
  v46 = sub_1666310();
  v58 = v46;
  *(_QWORD *)v47 = v57;
  *(_QWORD *)v57 = 0;
  if ( (unsigned __int8)sub_27A130(a1, a3, a4, v57) )
  {
    v69 = 0;
    v60 = v46;
    v14 = *(_QWORD *)(a1 + 232);
    v59 = 0;
    v70 = v14;
    v65 = 0;
    v64 = &off_1C4C9C8;
    v68 = 0;
    v66 = 0;
    v67 = 0;
    sub_24FD10(&v52, a1, (__int64)&v64);
    sub_15B10B0(a1 + 96);
    sub_18561B0((unsigned int)v53, *(_DWORD *)(a1 + 100), (unsigned int)&v64, v15, v16, v17);
    v51 = &v61;
    v18 = _mm_loadh_ps((const double *)v47);
    v50 = &v59;
    v61 = v18;
    sub_17B7550(v46, &v54);
    sub_1856400(v53);
    sub_24E910(&v52);
    v64 = &off_1C4C9C8;
    if ( (_BYTE)v69 )
      sub_18296D0(v70);
    if ( HIBYTE(v69) )
      sub_1829760(v70);
    v19 = sub_186B270(0x28u);
    v20 = *(_QWORD *)(a1 + 232);
    v11 = (_QWORD *)v19;
    sub_2518F0(v19, a1);
    v11[3] = v20;
    *v11 = &off_1C4CA20;
    v11[4] = 0;
    sub_24FBE0(a1, (__int64)v11);
    v21 = v59;
    if ( v59 )
    {
      v22 = 0;
      while ( v22 < *(_DWORD *)(v21 - 4) )
      {
        v23 = v21 + 8LL * v22;
        v24 = *(_QWORD *)(a1 + 304);
        if ( !v24 )
        {
          v49 = v23;
          sub_16669E0(*(_QWORD *)v48);
          v24 = *(_QWORD *)(a1 + 304);
          v23 = v49;
        }
        v25 = sub_166B840(v24, v46, v23, 0);
        v26 = v25;
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        v27 = (_QWORD *)v11[4];
        if ( v27 )
        {
          v28 = *((_DWORD *)v27 - 1);
          if ( v28 == *((_DWORD *)v27 - 2) )
          {
            v41 = (3 * v28 + 1) >> 1;
            v42 = 8 * v41 + 8;
            if ( 8 * v28 + 8 >= (unsigned int)v42 || v28 >= v41 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v64, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v64);
              sub_233E40((__int64)&v64);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v43 = (unsigned int *)sub_186B300(v27 - 1, v42);
            v44 = v43[1];
            v27 = v43 + 2;
            *v43 = v41;
            v11[4] = v43 + 2;
            LODWORD(v43) = v44;
            v31 = &v27[v44];
            v30 = (_DWORD)v43 + 1;
          }
          else
          {
            v29 = v28;
            v30 = v28 + 1;
            v31 = &v27[v29];
          }
        }
        else
        {
          v45 = (_QWORD *)sub_186B270(0x18u);
          v27 = v45 + 1;
          *v45 = 2;
          v30 = 1;
          v11[4] = v27;
          v31 = v27;
        }
        v21 = v59;
        *v31 = v26;
        ++v22;
        *((_DWORD *)v27 - 1) = v30;
        if ( !v21 )
        {
          if ( !v9 )
            goto LABEL_35;
          goto LABEL_29;
        }
      }
      if ( !v9 )
        goto LABEL_30;
      goto LABEL_29;
    }
    if ( v9 )
    {
LABEL_29:
      sub_2BB620(v11);
      v21 = v59;
      if ( v59 )
      {
LABEL_30:
        v32 = *(unsigned int *)(v21 - 4);
        if ( !(_DWORD)v32 )
          goto LABEL_34;
        v33 = 8 * v32;
        v34 = 0;
        do
        {
          v35 = v21 + v34;
          v34 += 8;
          sub_17B1E70(v60, v35);
          v21 = v59;
        }
        while ( v34 != v33 );
        if ( v59 )
        {
LABEL_34:
          *(_DWORD *)(v21 - 4) = 0;
          sub_186B220((void *)(v21 - 8));
        }
      }
    }
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
    v11 = nullptr;
  }
LABEL_35:
  v36 = *(_QWORD *)v57;
  if ( *(_QWORD *)v57 )
  {
    v37 = *(unsigned int *)(*(_QWORD *)v57 - 4LL);
    if ( !(_DWORD)v37 )
      goto LABEL_40;
    v38 = 8 * v37;
    v39 = 0;
    do
    {
      v40 = v36 + v39;
      v39 += 8;
      sub_17B1E70(v58, v40);
      v36 = *(_QWORD *)v57;
    }
    while ( v39 != v38 );
    if ( *(_QWORD *)v57 )
    {
LABEL_40:
      *(_DWORD *)(v36 - 4) = 0;
      sub_186B220((void *)(v36 - 8));
    }
  }
LABEL_6:
  sub_16329F0(v56);
  sub_182EF00(v62, v63);
  if ( v54 )
    sub_177F260(v55);
  if ( v9 )
    byte_1C7EBA0 = 1;
  return v11;
}

