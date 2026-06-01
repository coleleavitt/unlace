__int64 __fastcall sub_1843060(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5, double a6)
{
  __int64 v7; // rax
  unsigned __int8 v8; // dl
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // r13
  unsigned int v12; // eax
  unsigned __int64 v13; // rbp
  __int128 *v14; // rdi
  void *v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // r12
  int v22; // ecx
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // r11
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // r15
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rbp
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rbp
  unsigned __int64 v42; // r13
  __int64 v43; // rdx
  unsigned __int64 v44; // r15
  int v45; // r15d
  __int64 v46; // rax
  int v47; // r13d
  __int64 v48; // rax
  __int64 v49; // rbp
  unsigned int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // [rsp+8h] [rbp-100h]
  __int64 v53; // [rsp+8h] [rbp-100h]
  __int64 v54; // [rsp+8h] [rbp-100h]
  __int64 v55; // [rsp+8h] [rbp-100h]
  __int64 v56; // [rsp+10h] [rbp-F8h]
  __m128 v57; // [rsp+10h] [rbp-F8h]
  __int64 v58; // [rsp+10h] [rbp-F8h]
  __int64 v61; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+38h] [rbp-D0h]
  __int64 v63; // [rsp+40h] [rbp-C8h]
  __int64 v64; // [rsp+48h] [rbp-C0h]
  void *v65; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v66; // [rsp+58h] [rbp-B0h]
  void *v67; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v68; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h] BYREF
  __m128i si128; // [rsp+78h] [rbp-90h] BYREF
  __int64 v71; // [rsp+88h] [rbp-80h] BYREF
  __int128 v72; // [rsp+90h] [rbp-78h] BYREF
  void *v73[2]; // [rsp+A0h] [rbp-68h]
  void *dest[2]; // [rsp+B0h] [rbp-58h]
  void **p_ptr; // [rsp+C0h] [rbp-48h]

  v7 = sub_A72040(*(_QWORD **)(*a1 + 248LL), a2);
  if ( !v7 || (unsigned int)*(unsigned __int8 *)(v7 + 16) - 2 > 1 )
    return sub_1842C10((int *)a1, a2, a3, a4, a5, a6);
  v8 = *(_BYTE *)(v7 + 19);
  v9 = *(_QWORD *)(v7 + 40);
  if ( (v8 & 2) != 0 )
  {
    v66 = *(_DWORD *)(v9 + 8);
    if ( v66 > 0x40 )
    {
      v55 = v7;
      sub_2205510(&v65);
      v7 = v55;
    }
    else
    {
      v65 = *(void **)v9;
    }
  }
  else
  {
    v66 = 8 * ((v8 >> 2) & 0x1F);
    if ( (int)v66 > 64 )
    {
      v54 = v7;
      sub_2205470(&v65, v9, 0);
      v7 = v54;
    }
    else
    {
      v65 = (void *)v9;
    }
  }
  v63 = *(_QWORD *)(v7 + 32);
  v62 = a3;
  v61 = a4;
  v11 = sub_A63CE0(*(_QWORD **)(*a1 + 248LL));
  v12 = sub_A97D20(*(_QWORD *)(*a1 + 248LL), *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL));
  sub_2206D90(&v72, &v65, v12);
  if ( v66 > 0x40 && v65 )
    operator delete[](v65);
  LOBYTE(dest[1]) = 0;
  v65 = (void *)v72;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  v66 = DWORD2(v72);
  ptr = &v71;
  *(_OWORD *)v73 = 0;
  DWORD2(v72) = 2;
  *(_QWORD *)&v72 = &off_2BEBEE0;
  HIDWORD(dest[1]) = 1;
  dest[0] = nullptr;
  p_ptr = &ptr;
  sub_227B8B0(&v72, 0, 0, 0);
  v13 = j__strlen("i");
  if ( v13 > (char *)v73[1] - (char *)dest[0] )
  {
    v14 = (__int128 *)sub_227BF10(&v72, "i", v13);
  }
  else
  {
    v14 = &v72;
    if ( v13 )
    {
      memcpy(dest[0], "i", v13);
      dest[0] = (char *)dest[0] + v13;
      v14 = &v72;
    }
  }
  sub_227B910(v14, *((unsigned int *)a1 + 45));
  v15 = (void *)sub_6F3470(*(_QWORD *)(*(_QWORD *)(*a1 + 248LL) + 17504LL), *p_ptr, (size_t)p_ptr[1]);
  *(_QWORD *)&v72 = &unk_2C76288;
  sub_227B7A0(&v72);
  if ( ptr != &v71 )
    free(ptr);
  v16 = sub_A81910(*(_QWORD **)(*a1 + 248LL), v11, *((_DWORD *)a1 + 44));
  v56 = sub_B731A0(
          *(_QWORD *)(*a1 + 248LL),
          *(_QWORD *)(*a1 + 544LL),
          *((_DWORD *)a1 + 44),
          *((_DWORD *)a1 + 44),
          (__int64)v15,
          v11,
          (__int64)v16,
          0);
  v68 = sub_A97D20(*(_QWORD *)(*a1 + 248LL), *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v68 > 0x40 )
    sub_2205470(&v67, 0, 0);
  else
    v67 = nullptr;
  v17 = sub_C0C5D0(*(_QWORD **)(*a1 + 248LL), (__int64)&v67, v11, *((_DWORD *)a1 + 44));
  sub_B73850(v56, v17);
  v18 = *(_QWORD **)(*a1 + 248LL);
  LODWORD(v64) = *((_DWORD *)a1 + 44);
  v19 = sub_EEE9A0(24, v18, 8u);
  v20 = v64;
  v21 = v19;
  LOWORD(v19) = *(_WORD *)v19 & 0xFE00;
  LOBYTE(v19) = v19 | 0xF5;
  *(_WORD *)v21 = v19;
  if ( unk_2CD7484 )
  {
    sub_EE9B50(245);
    v20 = v64;
  }
  *(_DWORD *)(v21 + 16) = v20;
  *(_DWORD *)(v21 + 20) = v20;
  *(_QWORD *)(v21 + 8) = v56;
  v22 = *((_DWORD *)a1 + 44);
  v23 = *(_QWORD **)(*a1 + 248LL);
  v64 = *a1;
  v24 = sub_C0C5D0(v23, (__int64)&v65, v11, v22);
  v25 = *a1;
  v26 = v24;
  LODWORD(v24) = *((_DWORD *)a1 + 44);
  ptr = v15;
  si128.m128i_i32[0] = v24;
  sub_B85890(&si128.m128i_i64[1], (__int64)v15);
  v72 = 0;
  *(_OWORD *)v73 = 0;
  *(_OWORD *)dest = 0;
  v27 = sub_190AE60(v25, (unsigned int)&v72, (unsigned int)&ptr, v56, 0, 0, 0);
  v28 = v64;
  if ( HIDWORD(v73[1]) )
  {
    free(v73[0]);
    v28 = v64;
  }
  v29 = sub_1928110(v28, *((unsigned int *)a1 + 44), 15, v27 & 0xFFFFFFFFFFFFFFFELL, v26, 0);
  v30 = *a1;
  v64 = v29;
  LODWORD(v29) = *((_DWORD *)a1 + 44);
  ptr = v15;
  si128.m128i_i32[0] = v29;
  sub_B85890(&si128.m128i_i64[1], (__int64)v15);
  v72 = 0;
  *(_OWORD *)v73 = 0;
  *(_OWORD *)dest = 0;
  v31 = sub_190AE60(v30, (unsigned int)&v72, (unsigned int)&ptr, v56, 0, 0, 0);
  if ( HIDWORD(v73[1]) )
    free(v73[0]);
  v32 = sub_19249E0(v30, *((unsigned int *)a1 + 44), 2, v31 & 0xFFFFFFFFFFFFFFFELL, 0);
  if ( a3 != 1 )
  {
    ptr = v15;
    v33 = *a1;
    si128.m128i_i32[0] = *((_DWORD *)a1 + 44);
    sub_B85890(&si128.m128i_i64[1], (__int64)v15);
    v72 = 0;
    *(_OWORD *)v73 = 0;
    *(_OWORD *)dest = 0;
    v34 = sub_190AE60(v33, (unsigned int)&v72, (unsigned int)&ptr, v56, 0, 0, 0);
    if ( HIDWORD(v73[1]) )
    {
      v62 = v34;
      free(v73[0]);
      v34 = v62;
    }
    v62 = sub_191AF90(
            v33,
            a3 & 0xFFFFFFFFFFFFFFFELL,
            *((unsigned int *)a1 + 44),
            v34 & 0xFFFFFFFFFFFFFFFELL,
            *((unsigned int *)a1 + 44));
  }
  if ( a4 != 1 )
  {
    ptr = v15;
    v35 = *a1;
    si128.m128i_i32[0] = *((_DWORD *)a1 + 44);
    sub_B85890(&si128.m128i_i64[1], (__int64)v15);
    v72 = 0;
    *(_OWORD *)v73 = 0;
    *(_OWORD *)dest = 0;
    v36 = sub_190AE60(v35, (unsigned int)&v72, (unsigned int)&ptr, v56, 0, 0, 0);
    if ( HIDWORD(v73[1]) )
      free(v73[0]);
    v61 = sub_191AF90(
            v35,
            a4 & 0xFFFFFFFFFFFFFFFELL,
            *((unsigned int *)a1 + 44),
            v36 & 0xFFFFFFFFFFFFFFFELL,
            *((unsigned int *)a1 + 44));
  }
  ++*((_DWORD *)a1 + 45);
  v37 = v63;
  v57 = _mm_loadh_ps((const double *)&v61);
  v38 = sub_1843060(a1, v63, v57.m128_u64[0], v57.m128_u64[1]);
  --*((_DWORD *)a1 + 45);
  if ( v38 != 1 )
  {
    v41 = *a1;
    v42 = v38 & 0xFFFFFFFFFFFFFFFELL;
    if ( ((*(_WORD *)(v38 & 0xFFFFFFFFFFFFFFFELL) + 509) & 0x1FFu) > 0x7E )
    {
LABEL_36:
      v43 = 0;
      v44 = v32 & 0xFFFFFFFFFFFFFFFELL;
      if ( v44 )
        v43 = (unsigned int)sub_C00A40(v44, v37, 0, v39, v40);
      v45 = sub_19B4A30(v41, v44, v43, 1, 0, 0) & 0xFFFFFFFE;
      sub_1917B40((unsigned int)&ptr, *a1, 0, *((_DWORD *)a1 + 44), v64 & 0xFFFFFFFE, 0, 0);
      result = sub_1C4D120(
                 v41,
                 *((_DWORD *)a1 + 44),
                 *((_DWORD *)a1 + 44),
                 v21,
                 v45,
                 *((_DWORD *)a1 + 44),
                 (__int64)ptr,
                 si128.m128i_i64[0],
                 si128.m128i_i8[8],
                 v42);
      goto LABEL_39;
    }
    v46 = sub_19249E0(*a1, *((unsigned int *)a1 + 44), 9, v42, 0);
    v47 = v46;
    if ( v46 != 1 )
    {
      v48 = sub_19A26C0(*a1, *((unsigned int *)a1 + 44), 135);
      v49 = sub_1C46CA0(*a1, *((unsigned int *)a1 + 44), v48 & 0xFFFFFFFFFFFFFFFELL, 0);
      if ( v49 != 1 )
      {
        v58 = *a1;
        sub_1917B40((unsigned int)&v72, *a1, 0, *((_DWORD *)a1 + 44), v47 & 0xFFFFFFFE, 0, 0);
        v50 = *((_DWORD *)a1 + 44);
        v37 = v50;
        v51 = sub_1C3A020(
                v58,
                v50,
                0,
                v50,
                0,
                v50,
                v72,
                *((__int64 *)&v72 + 1),
                (char)v73[0],
                v49 & 0xFFFFFFFFFFFFFFFELL,
                0,
                0);
        if ( v51 != 1 )
        {
          v41 = *a1;
          v42 = v51 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_36;
        }
      }
    }
  }
  result = 1;
LABEL_39:
  if ( v68 > 0x40 && v67 )
  {
    v52 = result;
    operator delete[](v67);
    result = v52;
  }
  if ( v66 > 0x40 )
  {
    if ( v65 )
    {
      v53 = result;
      operator delete[](v65);
      return v53;
    }
  }
  return result;
}
