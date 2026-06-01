__int64 __fastcall sub_29F3B0(__int64 a1, __int64 a2, int a3, double a4, __m128i a5)
{
  unsigned __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v13)(__int64); // rax
  signed int v14; // eax
  unsigned int *v15; // r12
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm3
  __int64 (__fastcall *v21)(__int64); // rax
  int v22; // eax
  signed int v23; // ebp
  __int64 (__fastcall *v24)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v25)(__int64); // rax
  signed int v26; // eax
  __int64 v27; // r12
  _DWORD *v28; // rax
  __int64 (__fastcall *v29)(__int64, unsigned int); // rdx
  unsigned int v30; // ebx
  double v31; // xmm0_8
  unsigned int v32; // ecx
  __int64 (__fastcall *v33)(__int64); // rax
  signed int v34; // eax
  __m128i *v35; // rax
  __int64 (__fastcall **v36)(); // rbx
  int v37; // edx
  int v38; // r10d
  int v39; // ecx
  __int64 (__fastcall *v40)(__int64, unsigned int); // rax
  int v41; // r11d
  __int64 (__fastcall *v42)(__int64); // rax
  _DWORD *v43; // rax
  signed int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 (__fastcall *v47)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v48)(__int64); // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 *v51; // rax
  __int64 (__fastcall *v52)(__int64); // rax
  int v53; // eax
  int v54; // r12d
  __int64 (__fastcall **v55)(); // rdi
  int v56; // [rsp+8h] [rbp-F0h]
  int v57; // [rsp+8h] [rbp-F0h]
  int v58; // [rsp+Ch] [rbp-ECh]
  int v59; // [rsp+Ch] [rbp-ECh]
  int v60; // [rsp+10h] [rbp-E8h]
  int v61; // [rsp+10h] [rbp-E8h]
  int v62; // [rsp+14h] [rbp-E4h]
  int v63; // [rsp+14h] [rbp-E4h]
  double v64; // [rsp+20h] [rbp-D8h]
  double v65; // [rsp+28h] [rbp-D0h]
  int v66; // [rsp+48h] [rbp-B0h]
  int v67; // [rsp+4Ch] [rbp-ACh]
  __int64 v69; // [rsp+58h] [rbp-A0h]
  int v70; // [rsp+68h] [rbp-90h]
  double v72; // [rsp+70h] [rbp-88h] BYREF
  double v73; // [rsp+78h] [rbp-80h] BYREF
  __int64 v74; // [rsp+80h] [rbp-78h] BYREF
  int v75; // [rsp+88h] [rbp-70h]
  __int64 v76; // [rsp+90h] [rbp-68h] BYREF
  unsigned int v77; // [rsp+98h] [rbp-60h]
  __int64 (__fastcall **v78)(); // [rsp+A0h] [rbp-58h] BYREF
  __int128 v79; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v80; // [rsp+B8h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1) )
  {
    v78 = drawable_graph_t::clear_layout_info;
    v8 = (unsigned __int64)&v78;
    sub_298EA0(a1, &v78, 1, a4);
    *(_DWORD *)(a1 + 36) = 0;
    *(_BYTE *)(a1 + 32) = 0;
    sub_29F280(a1, a4, a5);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
    v78 = nullptr;
    v74 = a1;
    v79 = 0;
    v75 = 0;
    v70 = 5 * (v9 / 15) + 5;
    v10 = node_iterator_goup(&v74);
    v11 = *(_QWORD *)v10;
    LODWORD(v10) = *(_DWORD *)(v10 + 8);
    v69 = a2 >> 32;
    v76 = v11;
    v77 = v10;
    while ( 1 )
    {
      v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
      v22 = v21 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a1 + 184) : v21(a1);
      v23 = v77;
      if ( v22 == v77 && a1 == v76 )
        break;
      v24 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
      if ( v24 == interactive_graph_t__::vfunc_19 )
      {
        v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
        if ( v25 == interactive_graph_t__::vfunc_7 )
          v26 = *(_DWORD *)(a1 + 184);
        else
          v26 = v25(a1);
        if ( v23 >= v26 )
          sub_16B930((__int64)"nrect(%d) failed", v23);
        v27 = 16LL * v23;
        v28 = (_DWORD *)(v27 + *(_QWORD *)(a1 + 224));
      }
      else
      {
        v28 = (_DWORD *)v24(a1, v77);
        v27 = 16LL * v23;
      }
      v66 = *v28 + 30;
      v67 = *v28 + 100130;
      v64 = (double)(int)v28[1];
      v65 = (double)v70;
      do
      {
        sincos((double)v66, &v73, &v72);
        v29 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
        v30 = (int)((v72 * v64 * v65 + 10.0) * 0.5 + (double)(int)a2);
        v31 = (v64 * v73 * v65 + 10.0) * 0.5 + (double)(int)v69;
        v32 = (int)v31;
        if ( v29 == interactive_graph_t__::vfunc_19 )
        {
          v33 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
          if ( v33 == interactive_graph_t__::vfunc_7 )
          {
            v34 = *(_DWORD *)(a1 + 184);
          }
          else
          {
            v34 = v33(a1);
            v32 = (int)v31;
          }
          if ( v23 >= v34 )
            sub_16B930((__int64)"nrect(%d) failed", v23);
          v35 = (__m128i *)(v27 + *(_QWORD *)(a1 + 224));
        }
        else
        {
          v35 = (__m128i *)v29(a1, v23);
          v32 = (int)v31;
        }
        *v35 = _mm_unpacklo_epi64(
                 _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), _mm_cvtsi32_si128(v32)),
                 _mm_unpacklo_epi32(
                   _mm_cvtsi32_si128(v30 + v35->m128i_i32[2] - v35->m128i_i32[0]),
                   _mm_cvtsi32_si128(v32 + v35->m128i_i32[3] - v35->m128i_i32[1])));
        v36 = v78;
        if ( !(16LL * (_QWORD)v79) )
          break;
        while ( 1 )
        {
          v37 = *(_DWORD *)v36;
          v38 = *((_DWORD *)v36 + 1);
          v39 = *((_DWORD *)v36 + 2);
          v40 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
          v41 = *((_DWORD *)v36 + 3);
          if ( v40 == interactive_graph_t__::vfunc_19 )
          {
            v42 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
            if ( v42 == interactive_graph_t__::vfunc_7 )
            {
              if ( v23 >= *(_DWORD *)(a1 + 184) )
                goto LABEL_40;
            }
            else
            {
              v63 = *((_DWORD *)v36 + 3);
              v61 = *((_DWORD *)v36 + 2);
              v59 = *((_DWORD *)v36 + 1);
              v57 = *(_DWORD *)v36;
              v44 = v42(a1);
              v41 = v63;
              v39 = v61;
              v38 = v59;
              v37 = v57;
              if ( v23 >= v44 )
LABEL_40:
                sub_16B930((__int64)"nrect(%d) failed", v23);
            }
            v43 = (_DWORD *)(v27 + *(_QWORD *)(a1 + 224));
          }
          else
          {
            v62 = *((_DWORD *)v36 + 3);
            v60 = *((_DWORD *)v36 + 2);
            v58 = *((_DWORD *)v36 + 1);
            v56 = *(_DWORD *)v36;
            v43 = (_DWORD *)v40(a1, v23);
            v41 = v62;
            v39 = v60;
            v38 = v58;
            v37 = v56;
          }
          if ( v37 < v43[2] && v39 > *v43 && v38 < v43[3] && v43[1] < v41 )
            break;
          v36 += 2;
          if ( v36 == &v78[2 * (_QWORD)v79] )
            goto LABEL_8;
        }
        v66 += 100;
      }
      while ( v66 != v67 );
LABEL_8:
      v12 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
      if ( v12 == interactive_graph_t__::vfunc_19 )
      {
        v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
        if ( v13 == interactive_graph_t__::vfunc_7 )
          v14 = *(_DWORD *)(a1 + 184);
        else
          v14 = v13(a1);
        if ( v23 >= v14 )
          sub_16B930((__int64)"nrect(%d) failed", v23);
        v15 = (unsigned int *)(*(_QWORD *)(a1 + 224) + v27);
      }
      else
      {
        v15 = (unsigned int *)v12(a1, v23);
      }
      v16 = v79;
      v17 = _mm_cvtsi32_si128(*v15);
      v18 = _mm_cvtsi32_si128(v15[1]);
      v19 = _mm_cvtsi32_si128(v15[2]);
      v20 = _mm_cvtsi32_si128(v15[3]);
      v8 = (unsigned __int64)v78;
      if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + 1) )
      {
        v8 = qvector_reserve(&v78, v78, v79 + 1, 16);
        v78 = (__int64 (__fastcall **)())v8;
        v20 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v20));
        v16 = v79;
        v19 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v19));
        v18 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v18));
        v17 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v17));
      }
      *(__m128i *)(v8 + 16 * v16) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v17, v18), _mm_unpacklo_epi32(v19, v20));
      *(_QWORD *)&v79 = v79 + 1;
      ++v77;
      node_iterator_goup(&v76);
    }
    v77 = 0;
    v45 = node_iterator_goup(&v76);
    v46 = *(_QWORD *)v45;
    LODWORD(v45) = *(_DWORD *)(v45 + 8);
    v76 = v46;
    v77 = v45;
    while ( 1 )
    {
      v52 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
      v53 = v52 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a1 + 184) : v52(a1);
      v54 = v77;
      if ( v53 == v77 && a1 == v76 )
        break;
      v47 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
      if ( v47 == interactive_graph_t__::vfunc_19 )
      {
        v48 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
        if ( v48 == interactive_graph_t__::vfunc_7 )
          v49 = *(_DWORD *)(a1 + 184);
        else
          v49 = v48(a1);
        if ( v54 >= v49 )
          sub_16B930((__int64)"nrect(%d) failed", v54);
        v50 = v54;
        v51 = (__int64 *)(*(_QWORD *)(a1 + 224) + 16LL * v54);
      }
      else
      {
        v8 = v77;
        v51 = (__int64 *)v47(a1, v77);
        v50 = v54;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 104) + v50) & 2) == 0 )
      {
        v8 = (unsigned int)v54;
        sub_295540(a1, v54, *v51);
      }
      ++v77;
      node_iterator_goup(&v76);
    }
    v55 = v78;
    *(_DWORD *)(a1 + 36) = 4;
    *(_QWORD *)(a1 + 40) = a2;
    *(_DWORD *)(a1 + 48) = a3;
    if ( v55 )
    {
      *(_QWORD *)&v79 = 0;
      qfree(v55, (const char *)v8);
    }
  }
  return 1;
}
