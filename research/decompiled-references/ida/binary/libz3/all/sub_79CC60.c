__int64 __fastcall sub_79CC60(__int64 a1, unsigned int **a2)
{
  char **exception; // r15
  unsigned int *v3; // r15
  __int64 result; // rax
  __int16 v5; // dx
  __int64 v6; // r13
  __int64 v7; // r14
  __m128i v8; // kr00_16
  unsigned int v9; // eax
  unsigned int v10; // ebp
  unsigned int v11; // r13d
  __m128i v12; // kr10_16
  __int64 v13; // r9
  __int64 v14; // rdx
  void (__fastcall *v15)(__int64 *, __int64, unsigned __int64 *, __int128 *); // r8
  __int64 v16; // r9
  __int64 (__fastcall *v17)(__int64, __int64, unsigned __int64 *, __m128i *); // r8
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rdi
  int v22; // eax
  __int64 (__fastcall *v23)(_QWORD *, unsigned int); // rdx
  __int64 v24; // rdx
  unsigned int **v25; // r14
  __int64 v26; // rsi
  _QWORD *v27; // r12
  unsigned int **v28; // r13
  __int64 v29; // rdx
  int v30; // eax
  _QWORD *v31; // rdx
  __m128i v32; // kr20_16
  unsigned int v33; // eax
  unsigned int v34; // edx
  size_t v35; // rsi
  unsigned int *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // r13
  unsigned int v40; // r15d
  unsigned int v41; // eax
  __m128i v42; // xmm2
  int v43; // ebp
  __int64 v44; // rax
  __int64 v45; // r9
  void (__fastcall *v46)(__int64, __int64, unsigned __int64 *, __m128i *); // r8
  __int64 v47; // r15
  __int64 v48; // r9
  __int64 (__fastcall *v49)(__int64, __int64, __int128 *, __m128i *); // r8
  __int64 *v50; // rbx
  unsigned __int64 v51; // rbp
  __int64 v52; // rsi
  __int64 *v53; // r13
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 (__fastcall *v56)(__int64 *, __int64, unsigned int *, __int128 *); // r8
  __int64 v57; // [rsp+0h] [rbp-128h]
  __int64 v58; // [rsp+0h] [rbp-128h]
  __int64 v59; // [rsp+0h] [rbp-128h]
  unsigned __int64 v60; // [rsp+8h] [rbp-120h]
  __int64 v61; // [rsp+8h] [rbp-120h]
  unsigned int v62; // [rsp+10h] [rbp-118h]
  __int64 v63; // [rsp+10h] [rbp-118h]
  unsigned __int64 v64; // [rsp+18h] [rbp-110h]
  unsigned int v65; // [rsp+18h] [rbp-110h]
  __int64 *v67; // [rsp+20h] [rbp-108h]
  unsigned int v68; // [rsp+28h] [rbp-100h]
  __int64 v69; // [rsp+30h] [rbp-F8h]
  __int64 v70; // [rsp+38h] [rbp-F0h]
  unsigned int v71; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v72; // [rsp+4Ch] [rbp-DCh] BYREF
  unsigned __int64 v73; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v74; // [rsp+58h] [rbp-D0h] BYREF
  unsigned __int64 v75; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v76; // [rsp+68h] [rbp-C0h] BYREF
  __m128i v77; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v78; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v79; // [rsp+90h] [rbp-98h] BYREF
  __m128i v80; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v81; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v82; // [rsp+C0h] [rbp-68h] BYREF
  _OWORD v83[5]; // [rsp+D0h] [rbp-58h] BYREF

  v3 = *a2;
  result = sub_15D2CB0(*(_QWORD *)(a1 + 144), *a2);
  v5 = *((_WORD *)v3 + 2);
  if ( (_BYTE)result )
  {
    if ( v5 )
      return result;
    result = *(_QWORD *)(*((_QWORD *)v3 + 2) + 24LL);
    if ( !result || *(_DWORD *)result )
      return result;
  }
  else
  {
    if ( v5 )
      return result;
    result = *(_QWORD *)(*((_QWORD *)v3 + 2) + 24LL);
    if ( !result || *(_DWORD *)result )
      return result;
    if ( *(_DWORD *)(result + 4) == 4 )
    {
      v6 = *((_QWORD *)v3 + 5);
      v7 = *((_QWORD *)v3 + 6);
      v57 = *((_QWORD *)v3 + 4);
      sub_79AD00(&v77, a1, (__int64)v3, v6);
      v8 = v77;
      v9 = sub_79C480(a1, v77.m128i_i64[0]);
      v10 = v9;
      if ( v6 == v7 )
      {
        v71 = v9;
        v53 = *(__int64 **)(a1 + 24);
        sub_7A6FF0(v83, a1, 1, &v71);
        v55 = *v53;
        v72 = v10;
        v56 = *(__int64 (__fastcall **)(__int64 *, __int64, unsigned int *, __int128 *))(v55 + 16);
        v78 = v83[0];
        if ( (char *)v56 == (char *)sub_788610 )
        {
          v81 = (__m128i)v83[0];
          result = sub_11C4C20(v53, 1, &v72, &v81, v56, v54);
        }
        else
        {
          result = v56(v53, 1, &v72, &v78);
        }
      }
      else
      {
        v11 = sub_79C480(a1, v57);
        sub_79AD00(&v81, a1, (__int64)v3, v7);
        v12 = v81;
        v62 = sub_79C480(a1, v81.m128i_i64[0]);
        v60 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11 ^ 1), _mm_cvtsi32_si128(v10)).m128i_u64[0];
        v73 = v60;
        sub_7F1790(a1 + 160, 2, &v73);
        v64 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(v62)).m128i_u64[0];
        v74 = v64;
        sub_7F1790(a1 + 160, 2, &v74);
        v67 = *(__int64 **)(a1 + 24);
        sub_7A70F0(v83, a1, v11 ^ 1, v10);
        v14 = *v67;
        v75 = v60;
        v15 = *(void (__fastcall **)(__int64 *, __int64, unsigned __int64 *, __int128 *))(v14 + 16);
        v79 = v83[0];
        if ( (char *)v15 == (char *)sub_788610 )
        {
          v82 = (__m128i)v83[0];
          sub_11C4C20(v67, 2, &v75, &v82, v15, v13);
        }
        else
        {
          v15(v67, 2, &v75, &v79);
        }
        v58 = *(_QWORD *)(a1 + 24);
        sub_7A70F0(&v82, a1, v11, v62);
        v76 = v64;
        v17 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, __m128i *))(*(_QWORD *)v58 + 16LL);
        v80 = v82;
        if ( (char *)v17 == (char *)sub_788610 )
        {
          v83[0] = v82;
          result = sub_11C4C20(v58, 2, &v76, v83, v17, v16);
        }
        else
        {
          result = v17(v58, 2, &v76, &v80);
        }
        if ( v12.m128i_i64[0] )
        {
          v18 = (*(_DWORD *)(v12.m128i_i64[0] + 8))-- == 1;
          if ( v18 )
            result = sub_15D7BC0(v12.m128i_i64[1], v12.m128i_i64[0]);
        }
      }
      if ( v8.m128i_i64[0] )
      {
        v18 = (*(_DWORD *)(v8.m128i_i64[0] + 8))-- == 1;
        if ( v18 )
          return sub_15D7BC0(v8.m128i_i64[1], v8.m128i_i64[0]);
      }
      return result;
    }
  }
  result = *(unsigned int *)(result + 4);
  if ( (_DWORD)result == 3 )
  {
    v25 = a2;
    v26 = *((unsigned int *)a2 + 38);
    v70 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)&v79 = v70;
    if ( !(_DWORD)v26 )
    {
      v27 = nullptr;
      goto LABEL_54;
    }
    v69 = 0;
    v27 = nullptr;
    v68 = v26 - 2;
LABEL_35:
    if ( v68 != -1 )
    {
      v28 = v25;
      v63 = (__int64)(&a2[v69] + v68 + 1);
      sub_79AD00(&v82, a1, *(_QWORD *)v25[22], *(_QWORD *)v25[23]);
      while ( 1 )
      {
        v32 = v82;
        if ( v82.m128i_i64[0] )
          ++*(_DWORD *)(v82.m128i_i64[0] + 8);
        if ( v27 )
        {
          v33 = *((_DWORD *)v27 - 1);
          if ( v33 == *((_DWORD *)v27 - 2) )
          {
            v34 = (3 * v33 + 1) >> 1;
            v35 = 8 * v34 + 8;
            if ( 8 * v33 + 8 >= (unsigned int)v35 || v33 >= v34 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v83, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v83);
              sub_233E40((__int64)v83);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v65 = (3 * v33 + 1) >> 1;
            v36 = (unsigned int *)sub_186B300(v27 - 1, v35);
            v27 = v36 + 2;
            *v36 = v65;
            LODWORD(v36) = v36[1];
            v31 = &v27[(unsigned int)v36];
            v30 = (_DWORD)v36 + 1;
          }
          else
          {
            v29 = v33;
            v30 = v33 + 1;
            v31 = &v27[v29];
          }
        }
        else
        {
          v37 = (_QWORD *)sub_186B270(0x18u);
          v27 = v37 + 1;
          v31 = v37 + 1;
          *v37 = 2;
          v30 = 1;
        }
        *v31 = v32.m128i_i64[0];
        *((_DWORD *)v27 - 1) = v30;
        if ( v32.m128i_i64[0]
          && (v18 = *(_DWORD *)(v32.m128i_i64[0] + 8) == 1, --*(_DWORD *)(v32.m128i_i64[0] + 8), v18) )
        {
          ++v28;
          sub_15D7BC0(v32.m128i_i64[1], v32.m128i_i64[0]);
          if ( (unsigned int **)v63 == v28 )
          {
LABEL_50:
            ++v69;
            ++v25;
            --v68;
            goto LABEL_35;
          }
        }
        else if ( (unsigned int **)v63 == ++v28 )
        {
          goto LABEL_50;
        }
        sub_79AD00(&v82, a1, *(_QWORD *)v25[22], *(_QWORD *)v28[23]);
      }
    }
    if ( v27 )
      v26 = *((unsigned int *)v27 - 1);
    else
      v26 = 0;
LABEL_54:
    v38 = sub_15EC240(v70, v26);
    v39 = v38;
    if ( v38 )
      ++*(_DWORD *)(v38 + 8);
    v40 = 2
        * (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 152) + 32LL))(
            *(_QWORD *)(a1 + 152),
            v3);
    v41 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 152) + 24LL))(*(_QWORD *)(a1 + 152), v39);
    v42 = _mm_cvtsi32_si128(v40);
    v40 ^= 1u;
    v43 = v41 ^ 1;
    LODWORD(v73) = v40;
    HIDWORD(v73) = v41 ^ 1;
    v59 = _mm_unpacklo_epi32(v42, _mm_cvtsi32_si128(v41)).m128i_u64[0];
    sub_7F1790(a1 + 160, 2, &v73);
    v74 = v59;
    sub_7F1790(a1 + 160, 2, &v74);
    v44 = *(_QWORD *)(a1 + 24);
    v75 = __PAIR64__(v43, v40);
    v61 = v44;
    sub_7A7070(v83, a1, 2, &v75);
    v76 = __PAIR64__(v43, v40);
    v46 = *(void (__fastcall **)(__int64, __int64, unsigned __int64 *, __m128i *))(*(_QWORD *)v61 + 16LL);
    v80 = (__m128i)v83[0];
    if ( (char *)v46 == (char *)sub_788610 )
    {
      v82 = (__m128i)v83[0];
      sub_11C4C20(v61, 2, &v76, &v82, v46, v45);
    }
    else
    {
      v46(v61, 2, &v76, &v80);
    }
    v47 = *(_QWORD *)(a1 + 24);
    v77.m128i_i64[0] = v59;
    sub_7A7070(&v82, a1, 2, &v77);
    *(_QWORD *)&v78 = v59;
    v49 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *, __m128i *))(*(_QWORD *)v47 + 16LL);
    v81 = v82;
    if ( (char *)v49 == (char *)sub_788610 )
    {
      v83[0] = v82;
      result = sub_11C4C20(v47, 2, &v78, v83, v49, v48);
    }
    else
    {
      result = v49(v47, 2, &v78, &v81);
    }
    if ( v39 )
    {
      v18 = (*(_DWORD *)(v39 + 8))-- == 1;
      if ( v18 )
        result = sub_15D7BC0(v70, v39);
    }
    if ( v27 )
    {
      v50 = v27;
      v51 = (unsigned __int64)&v27[*((unsigned int *)v27 - 1)];
      if ( (unsigned __int64)v27 < v51 )
      {
        do
        {
          v52 = *v50;
          if ( *v50 )
          {
            v18 = (*(_DWORD *)(v52 + 8))-- == 1;
            if ( v18 )
              sub_15D7BC0(v70, v52);
          }
          ++v50;
        }
        while ( (unsigned __int64)v50 < v51 );
      }
      return sub_186B220(v27 - 1);
    }
  }
  else if ( (_DWORD)result == 2 && v3[6] == 2 )
  {
    result = sub_15D2CB0(*(_QWORD *)(a1 + 144), *((_QWORD *)v3 + 4));
    if ( !(_BYTE)result )
    {
      v19 = *(_QWORD *)(a1 + 1720);
      if ( v19 )
      {
        v20 = *v3;
        if ( (unsigned int)v20 >= *(_DWORD *)(v19 - 4) )
          v19 = 0;
        else
          v19 = *(_QWORD *)(v19 + 8 * v20);
      }
      v21 = *(_QWORD **)(a1 + 24);
      v22 = *(_DWORD *)(v19 + 28);
      v23 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*v21 + 48LL);
      if ( v23 == sub_784580 )
      {
        v24 = v21[412];
        result = v22 & 0x7FFFFFFF;
        if ( v24 )
        {
          if ( (unsigned int)result < *(_DWORD *)(v24 - 4) )
          {
            *(_BYTE *)(v21[431] + result) = 1;
            *(_BYTE *)(v21[432] + result) = 1;
          }
        }
      }
      else
      {
        return v23(v21, 2 * v22);
      }
    }
  }
  return result;
}

