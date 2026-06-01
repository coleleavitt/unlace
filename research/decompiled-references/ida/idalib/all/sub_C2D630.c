__int64 __fastcall sub_C2D630(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r14
  unsigned int v8; // r15d
  bool v9; // zf
  __int64 v10; // rax
  char v11; // r12
  __int64 v12; // r9
  __int64 v13; // r13
  char *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rdx
  char v19; // r14
  _BYTE *v20; // rdi
  int *v21; // rbp
  int *v22; // rbx
  unsigned int v24; // ebx
  unsigned int v25; // ecx
  char v26; // al
  unsigned int v27; // r10d
  void *v28; // r11
  char v29; // r9
  int *v30; // rax
  __int64 v31; // r14
  int *v32; // r12
  __int32 v33; // r15d
  unsigned __int64 v34; // r13
  _QWORD *v35; // rax
  _QWORD *v36; // rbx
  _QWORD *v37; // rdx
  __int64 v38; // r13
  int *v39; // rsi
  __int64 v40; // rdi
  bool v41; // cc
  __int64 v42; // r8
  int v43; // r12d
  void **p_ptr; // rsi
  void **v45; // rdi
  __int64 v46; // rsi
  int *v47; // r13
  __int64 v48; // r14
  int *v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rdi
  int *v52; // rbp
  int v53; // edx
  char *v54; // rcx
  char *v55; // rdx
  char v56; // al
  char v57; // si
  int v58; // [rsp+0h] [rbp-218h]
  __int64 v59; // [rsp+0h] [rbp-218h]
  int *v60; // [rsp+10h] [rbp-208h]
  _QWORD *v61; // [rsp+18h] [rbp-200h]
  __int64 v62; // [rsp+20h] [rbp-1F8h]
  __int64 v64; // [rsp+38h] [rbp-1E0h]
  char v65; // [rsp+58h] [rbp-1C0h]
  int v66; // [rsp+58h] [rbp-1C0h]
  unsigned int v67; // [rsp+64h] [rbp-1B4h]
  void *v68; // [rsp+68h] [rbp-1B0h]
  __int64 v69; // [rsp+78h] [rbp-1A0h] BYREF
  void *v70; // [rsp+80h] [rbp-198h] BYREF
  unsigned int v71; // [rsp+88h] [rbp-190h]
  char v72; // [rsp+8Ch] [rbp-18Ch]
  void *v73; // [rsp+90h] [rbp-188h] BYREF
  unsigned int v74; // [rsp+98h] [rbp-180h]
  void *v75; // [rsp+A0h] [rbp-178h] BYREF
  unsigned int v76; // [rsp+A8h] [rbp-170h]
  char v77; // [rsp+ACh] [rbp-16Ch]
  void *ptr; // [rsp+B0h] [rbp-168h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-160h]
  _BYTE v80[32]; // [rsp+C8h] [rbp-150h] BYREF
  char v81; // [rsp+E8h] [rbp-130h]
  int *v82; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v83; // [rsp+F8h] [rbp-120h]
  _BYTE v84[280]; // [rsp+100h] [rbp-118h] BYREF

  v7 = *(_QWORD *)(a3 + 32);
  v8 = *(_DWORD *)(a3 + 20);
  v58 = 1;
  if ( !(unsigned __int8)sub_F579D0(a3, *(_QWORD *)(*a2 + 16)) )
    v58 = sub_A97D20(*(_QWORD *)(*a2 + 16), *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL));
  v82 = (int *)v84;
  v83 = 0x400000000LL;
  if ( v8 > 4uLL )
    sub_C25F00((__int64)&v82, v8);
  v9 = (unsigned __int8)sub_F579D0(a3, *(_QWORD *)(*a2 + 16)) == 0;
  v10 = *a2;
  if ( !v9 )
  {
    v11 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 17448LL) + 272LL);
    ptr = v80;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
    v12 = (v8 >> 3) + a4;
    if ( v8 >> 3 > 8 )
    {
      sub_2236E10(&ptr, v80, v8 >> 3, 1);
      v13 = a2[1];
      v12 = (v8 >> 3) + a4;
    }
    else
    {
      v13 = a2[1];
      if ( a4 == v12 )
        goto LABEL_27;
    }
    v14 = (char *)(*(_QWORD *)v13 + 2 * a4);
    if ( !v14[1] )
    {
LABEL_15:
      v20 = ptr;
      *(_BYTE *)(a1 + 56) = 0;
      if ( v20 != v80 )
        free(v20);
      goto LABEL_17;
    }
    v15 = a4 + 1;
    v16 = si128.m128i_i64[0];
    v17 = v12;
    v62 = v7;
    while ( 1 )
    {
      v19 = *v14;
      if ( (unsigned __int64)(v16 + 1) > si128.m128i_i64[1] )
      {
        sub_2236E10(&ptr, v80, v16 + 1, 1);
        v16 = si128.m128i_i64[0];
      }
      *((_BYTE *)ptr + v16) = v19;
      v18 = si128.m128i_i64[0];
      v16 = ++si128.m128i_i64[0];
      if ( v17 == v15 )
        break;
      v14 = (char *)(*(_QWORD *)v13 + 2 * v15++);
      if ( !v14[1] )
        goto LABEL_15;
    }
    v7 = v62;
    if ( !*(_BYTE *)(v13 + 88) )
    {
      v54 = (char *)ptr;
      if ( ptr != (char *)ptr + v16 )
      {
        v55 = (char *)ptr + v18;
        if ( ptr < v55 )
        {
          do
          {
            v56 = *v54;
            v57 = *v55;
            ++v54;
            --v55;
            *(v54 - 1) = v57;
            v55[1] = v56;
          }
          while ( v54 < v55 );
          v71 = v8;
          if ( v8 > 0x40 )
            goto LABEL_80;
          goto LABEL_28;
        }
      }
    }
LABEL_27:
    v71 = v8;
    if ( v8 > 0x40 )
    {
LABEL_80:
      sub_2205470(&v70, 0, 0);
      v72 = 1;
      sub_220BA80(&v70, ptr, si128.m128i_u32[0]);
      goto LABEL_29;
    }
LABEL_28:
    v70 = nullptr;
    v72 = 1;
    sub_220BA80(&v70, ptr, si128.m128i_u32[0]);
    if ( !v8 )
    {
LABEL_38:
      if ( v71 > 0x40 && v70 )
        operator delete[](v70);
      if ( ptr != v80 )
        free(ptr);
      goto LABEL_43;
    }
LABEL_29:
    v24 = 0;
    v61 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
    do
    {
      v25 = v24;
      if ( v11 )
        v25 = v8 - 1 - v24;
      sub_2206280(&v73, &v70, 1, v58 * v25);
      v26 = sub_F65140(*v61);
      v27 = v74;
      v28 = v73;
      v74 = 0;
      v29 = v26 ^ 1;
      if ( (unsigned int)v83 >= HIDWORD(v83) )
      {
        v68 = v73;
        v67 = v27;
        v65 = v26 ^ 1;
        v64 = sub_2237400(&v82, v84, 0, 56, &v69);
        v76 = v67;
        v75 = v68;
        v77 = v65;
        sub_B96770(v64 + 56LL * (unsigned int)v83, (__int64 *)&v75);
        if ( v76 > 0x40 && v75 )
          operator delete[](v75);
        v47 = &v82[14 * (unsigned int)v83];
        if ( v82 != v47 )
        {
          v48 = v64;
          v49 = v82;
          do
          {
            v50 = (__int64)v49;
            v51 = v48;
            v49 += 14;
            v48 += 56;
            sub_A4F8A0(v51, v50);
          }
          while ( v47 != v49 );
          v47 = &v82[14 * (unsigned int)v83];
          if ( v82 != v47 )
          {
            v52 = v82;
            do
            {
              while ( 1 )
              {
                v47 -= 14;
                if ( (unsigned int)*v47 > 1 )
                  break;
                if ( v52 == v47 )
                  goto LABEL_70;
              }
              sub_A4F8E0(v47);
            }
            while ( v52 != v47 );
LABEL_70:
            v47 = v82;
          }
        }
        v53 = v69;
        if ( v47 != (int *)v84 )
        {
          v66 = v69;
          free(v47);
          v53 = v66;
        }
        HIDWORD(v83) = v53;
        LODWORD(v83) = v83 + 1;
        v82 = (int *)v64;
      }
      else
      {
        v30 = &v82[14 * (unsigned int)v83];
        *((_BYTE *)v30 + 4) &= ~1u;
        *v30 = 2;
        *((_QWORD *)v30 + 1) = v28;
        LODWORD(v83) = v83 + 1;
        v30[4] = v27;
        *((_BYTE *)v30 + 20) = v29;
      }
      if ( v74 > 0x40 && v73 )
        operator delete[](v73);
      ++v24;
    }
    while ( v24 < v8 );
    goto LABEL_38;
  }
  v59 = sub_AAE980(*(_QWORD *)(v10 + 16), v7);
  if ( !v8 )
  {
LABEL_43:
    v31 = (unsigned int)v83;
    v32 = v82;
    si128.m128i_i64[0] = 0;
    BYTE4(ptr) &= ~1u;
    v33 = v83;
    si128.m128i_i32[2] = 0;
    LODWORD(ptr) = 8;
    v34 = 56LL * (unsigned int)v83 + 8;
    v35 = (_QWORD *)operator new[](v34);
    v36 = v35 + 1;
    *v35 = v31;
    v37 = v35 + 1;
    if ( v31 )
    {
      do
      {
        *(_DWORD *)v37 = 0;
        *((_BYTE *)v37 + 4) &= ~1u;
        v37 += 7;
      }
      while ( (_QWORD *)((char *)v35 + v34) != v37 );
    }
    si128.m128i_i64[0] = (__int64)(v35 + 1);
    si128.m128i_i32[2] = v33;
    if ( v33 )
    {
      v38 = (__int64)&v35[7 * (unsigned int)(v33 - 1) + 8];
      do
      {
        v39 = v32;
        v40 = (__int64)v36;
        v36 += 7;
        v32 += 14;
        sub_A54D20(v40, v39);
      }
      while ( v36 != (_QWORD *)v38 );
    }
    sub_A4F8A0(a1, (__int64)&ptr);
    v41 = (unsigned int)ptr <= 1;
    *(_BYTE *)(a1 + 56) = 1;
    if ( !v41 )
      sub_A4F8E0((int *)&ptr);
    goto LABEL_17;
  }
  v43 = 0;
  while ( 1 )
  {
    sub_C2C5D0((__int64)&ptr, a2, v7, a4, v42);
    if ( !v81 )
      break;
    p_ptr = &ptr;
    v45 = (void **)&v82[14 * (unsigned int)v83];
    if ( (unsigned __int64)(unsigned int)v83 + 1 > HIDWORD(v83) )
    {
      v46 = (unsigned int)v83 + 1LL;
      v60 = v82;
      if ( v82 > (int *)&ptr || v45 <= &ptr )
      {
        sub_C25F00((__int64)&v82, v46);
        p_ptr = &ptr;
        v45 = (void **)&v82[14 * (unsigned int)v83];
      }
      else
      {
        sub_C25F00((__int64)&v82, v46);
        p_ptr = (void **)((char *)v82 + (char *)&ptr - (char *)v60);
        v45 = (void **)&v82[14 * (unsigned int)v83];
      }
    }
    sub_A4F8A0((__int64)v45, (__int64)p_ptr);
    LODWORD(v83) = v83 + 1;
    if ( v81 && (unsigned int)ptr > 1 )
      sub_A4F8E0((int *)&ptr);
    ++v43;
    a4 += v59;
    if ( v43 == v8 )
      goto LABEL_43;
  }
  *(_BYTE *)(a1 + 56) = 0;
LABEL_17:
  v21 = v82;
  v22 = &v82[14 * (unsigned int)v83];
  if ( v82 != v22 )
  {
    do
    {
      while ( 1 )
      {
        v22 -= 14;
        if ( (unsigned int)*v22 > 1 )
          break;
        if ( v21 == v22 )
          goto LABEL_20;
      }
      sub_A4F8E0(v22);
    }
    while ( v21 != v22 );
LABEL_20:
    v22 = v82;
  }
  if ( v22 != (int *)v84 )
    free(v22);
  return a1;
}
