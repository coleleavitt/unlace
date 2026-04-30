unsigned __int64 __fastcall sub_297BA0(_QWORD *a1, _QWORD *a2, __int64 a3, signed int a4, __m128 a5)
{
  __int64 v6; // r13
  signed int v7; // r15d
  int v8; // eax
  int v10; // edx
  __int64 v11; // rbp
  int v12; // edi
  int i; // ecx
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r13
  signed int v18; // r14d
  unsigned __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  signed int v25; // eax
  __int64 (__fastcall *v26)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v27)(__int64); // rax
  int v28; // eax
  __m128 *v29; // rbx
  __m128i v30; // xmm0
  unsigned int v31; // eax
  int v32; // edi
  _QWORD *v33; // r14
  int v34; // ebp
  _QWORD *v35; // rcx
  int v36; // r15d
  int v37; // r14d
  int v38; // ebx
  _QWORD *v39; // rbp
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // r12
  __int64 (__fastcall *v45)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v46)(__int64); // rax
  int v47; // eax
  int *v48; // r12
  __int64 (__fastcall *v49)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v50)(__int64); // rax
  int v51; // eax
  int *v52; // r13
  int v53; // edx
  int v54; // eax
  __int64 (__fastcall *v55)(__int64, unsigned int); // r8
  __int64 v56; // rsi
  __int64 (__fastcall *v57)(__int64); // rax
  int v58; // eax
  __int64 v59; // rdx
  unsigned __int64 v60; // rsi
  __int64 (__fastcall *v61)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v62)(__int64); // rax
  int v63; // eax
  _DWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rdx
  __int64 (__fastcall *v70)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v71)(__int64); // rax
  int v72; // eax
  _DWORD *v73; // rax
  __int64 (__fastcall *v74)(__int64); // rax
  int v75; // eax
  int v77; // [rsp+8h] [rbp-90h]
  int v78; // [rsp+Ch] [rbp-8Ch]
  __int64 v79; // [rsp+10h] [rbp-88h]
  _DWORD *v80; // [rsp+10h] [rbp-88h]
  _QWORD *v81; // [rsp+10h] [rbp-88h]
  _QWORD *v82; // [rsp+10h] [rbp-88h]
  _QWORD *v83; // [rsp+10h] [rbp-88h]
  _QWORD *v84; // [rsp+10h] [rbp-88h]
  _QWORD *v85; // [rsp+10h] [rbp-88h]
  _QWORD *v86; // [rsp+10h] [rbp-88h]
  int v89; // [rsp+20h] [rbp-78h]
  int v90; // [rsp+24h] [rbp-74h]
  int v91; // [rsp+24h] [rbp-74h]
  int v92; // [rsp+28h] [rbp-70h]
  int v93; // [rsp+28h] [rbp-70h]
  int v94; // [rsp+2Ch] [rbp-6Ch]
  int v95; // [rsp+2Ch] [rbp-6Ch]
  int v96; // [rsp+30h] [rbp-68h]
  int v97; // [rsp+34h] [rbp-64h]
  __int64 v98; // [rsp+38h] [rbp-60h]
  _QWORD *v99; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v100; // [rsp+48h] [rbp-50h]
  unsigned __int64 v101; // [rsp+58h] [rbp-40h]

  v6 = a2[1];
  v101 = __readfsqword(0x28u);
  v7 = a4;
  v97 = v6;
  if ( (_DWORD)v6 )
  {
    v8 = 0;
    v10 = v6;
    v79 = a3;
    v11 = a3 + 8;
    v12 = 0;
    for ( i = 1; ; i = -1 )
    {
      v78 = 0x7FFFFFFF;
      v92 = i;
      v94 = v10;
      v96 = v12;
      v98 = v6;
      do
      {
        v14 = *a2 + 32LL * v8;
        if ( *(_QWORD *)(v14 + 8) )
        {
          v90 = v8;
          v15 = (__int64)a1;
          v16 = v14;
          v17 = v15;
          v18 = 0;
          v19 = 0;
          do
          {
            v20 = *(int *)(*(_QWORD *)v16 + 4 * v19);
            v21 = *(_QWORD *)(v79 + 16);
            if ( v21 )
            {
              v22 = v11;
              do
              {
                while ( 1 )
                {
                  v23 = *(_QWORD *)(v21 + 16);
                  v24 = *(_QWORD *)(v21 + 24);
                  if ( (int)v20 > *(_DWORD *)(v21 + 32) )
                    break;
                  v22 = v21;
                  v21 = *(_QWORD *)(v21 + 16);
                  if ( !v23 )
                    goto LABEL_11;
                }
                v21 = *(_QWORD *)(v21 + 24);
              }
              while ( v24 );
LABEL_11:
              if ( v11 != v22 && (int)v20 >= *(_DWORD *)(v22 + 32) )
                v18 += 8;
            }
            v25 = sub_2976C0(v17, (__int64 *)v16, v19, v96 ^ 1u, a4, *(double *)a5.m128_u64);
            if ( !v19 || v18 <= v25 )
            {
              v32 = v78;
              v18 = v25;
              if ( v78 > v25 )
                v32 = v25;
              v78 = v32;
            }
            v26 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v17 + 152LL);
            if ( v26 == interactive_graph_t__::vfunc_19 )
            {
              v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL);
              if ( v27 == interactive_graph_t__::vfunc_7 )
                v28 = *(_DWORD *)(v17 + 184);
              else
                v28 = v27(v17);
              if ( (int)v20 >= v28 )
                sub_16B930((__int64)"nrect(%d) failed", v20);
              v29 = (__m128 *)(*(_QWORD *)(v17 + 224) + 16 * v20);
            }
            else
            {
              v29 = (__m128 *)v26(v17, v20);
            }
            v30 = _mm_cvtsi32_si128(v18);
            ++v19;
            v31 = v18 + v29->m128_i32[2] - v29->m128_i32[0];
            v18 = v31 + 10;
            a5 = (__m128)_mm_unpacklo_epi64(
                           _mm_unpacklo_epi32(v30, _mm_cvtsi32_si128(*(_DWORD *)(v16 + 24))),
                           _mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(v31),
                             _mm_cvtsi32_si128(*(_DWORD *)(v16 + 24) + v29->m128_i32[3] - v29->m128_i32[1])));
            *v29 = a5;
          }
          while ( v19 < *(_QWORD *)(v16 + 8) );
          v8 = v90;
          a1 = (_QWORD *)v17;
        }
        v8 += v92;
      }
      while ( v8 != v94 );
      v6 = v98;
      if ( v96 == 1 )
        break;
      v12 = 1;
      v10 = -1;
      v8 = v97 - 1;
    }
    v91 = v98;
    v7 = a4;
    if ( (_DWORD)v98 == 1 )
      goto LABEL_86;
  }
  else
  {
    v91 = 0;
    v78 = 0x7FFFFFFF;
  }
  v77 = 0;
  v33 = a1;
  v34 = v7;
  v89 = 1;
  v93 = 1;
  do
  {
LABEL_33:
    v35 = v33;
    v36 = 0;
    v37 = v34;
    v38 = 1;
    v39 = (_QWORD *)(*a2 + 32LL * v89);
    do
    {
      v40 = v36;
      if ( v38 == 1 )
      {
        if ( v39[1] == v36 )
        {
          --v36;
          v38 = -1;
          v40 = v36;
        }
      }
      else
      {
        v38 = -1;
      }
      v41 = *(int *)(*v39 + 4 * v40);
      if ( (int)v41 >= v37 )
      {
        v80 = v35;
        v42 = *v35;
        v43 = v77 == 1
            ? (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v42 + 112))(v35, (unsigned int)v41, 0)
            : (*(unsigned __int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v42 + 120))(v35, (unsigned int)v41, 0);
        v35 = v80;
        v44 = v43;
        if ( v37 <= v43 )
        {
          v45 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v80 + 152LL);
          if ( v45 == interactive_graph_t__::vfunc_19 )
          {
            v46 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v80 + 56LL);
            if ( v46 == interactive_graph_t__::vfunc_7 )
            {
              v47 = v80[46];
            }
            else
            {
              v47 = v46((__int64)v80);
              v35 = v80;
            }
            if ( (int)v44 >= v47 )
            {
              LODWORD(v56) = v44;
              goto LABEL_104;
            }
            v48 = (int *)(v35[28] + 16 * v44);
          }
          else
          {
            v66 = v45((__int64)v80, v43);
            v35 = v80;
            v48 = (int *)v66;
          }
          v49 = *(__int64 (__fastcall **)(__int64, unsigned int))(*v35 + 152LL);
          if ( v49 == interactive_graph_t__::vfunc_19 )
          {
            v50 = *(__int64 (__fastcall **)(__int64))(*v35 + 56LL);
            if ( v50 == interactive_graph_t__::vfunc_7 )
            {
              v51 = *((_DWORD *)v35 + 46);
            }
            else
            {
              v82 = v35;
              v51 = v50((__int64)v35);
              v35 = v82;
            }
            if ( (int)v41 >= v51 )
            {
LABEL_105:
              LODWORD(v56) = v41;
LABEL_104:
              sub_16B930((__int64)"nrect(%d) failed", v56);
            }
            v52 = (int *)(v35[28] + 16 * v41);
          }
          else
          {
            v81 = v35;
            v65 = v49((__int64)v35, v41);
            v35 = v81;
            v52 = (int *)v65;
          }
          v53 = *v52;
          v54 = *v48;
          if ( *v52 != *v48 )
          {
            if ( v53 <= v54 )
            {
              v60 = v36 + 1;
              if ( v60 >= v39[1] )
                goto LABEL_60;
              v61 = *(__int64 (__fastcall **)(__int64, unsigned int))(*v35 + 152LL);
              v56 = *(unsigned int *)(*v39 + 4 * v60);
              if ( v61 == interactive_graph_t__::vfunc_19 )
              {
                v62 = *(__int64 (__fastcall **)(__int64))(*v35 + 56LL);
                if ( v62 == interactive_graph_t__::vfunc_7 )
                {
                  v63 = *((_DWORD *)v35 + 46);
                }
                else
                {
                  v86 = v35;
                  v63 = v62((__int64)v35);
                  v35 = v86;
                }
                if ( (int)v56 >= v63 )
                  goto LABEL_104;
                v64 = (_DWORD *)(v35[28] + 16LL * (int)v56);
              }
              else
              {
                v84 = v35;
                v64 = (_DWORD *)v61((__int64)v35, v56);
                v35 = v84;
              }
              if ( *v64 >= v48[2] + 10 )
              {
                v54 = *v48;
LABEL_59:
                v53 = *v52;
LABEL_60:
                *v52 = v54;
                v52[2] += v54 - v53;
              }
            }
            else
            {
              if ( v36 <= 0 )
                goto LABEL_60;
              v55 = *(__int64 (__fastcall **)(__int64, unsigned int))(*v35 + 152LL);
              v56 = *(unsigned int *)(*v39 + 4LL * (v36 - 1));
              if ( v55 == interactive_graph_t__::vfunc_19 )
              {
                v57 = *(__int64 (__fastcall **)(__int64))(*v35 + 56LL);
                if ( v57 == interactive_graph_t__::vfunc_7 )
                {
                  v58 = *((_DWORD *)v35 + 46);
                }
                else
                {
                  v95 = *(_DWORD *)(*v39 + 4LL * (v36 - 1));
                  v85 = v35;
                  v58 = v57((__int64)v35);
                  LODWORD(v56) = v95;
                  v35 = v85;
                }
                if ( (int)v56 >= v58 )
                  goto LABEL_104;
                v59 = v35[28] + 16LL * (int)v56;
              }
              else
              {
                v83 = v35;
                v67 = v55((__int64)v35, v56);
                v35 = v83;
                v59 = v67;
              }
              v54 = *v48;
              if ( *(_DWORD *)(v59 + 8) + 10 <= *v48 )
                goto LABEL_59;
            }
          }
        }
      }
      v36 += v38;
    }
    while ( v38 != -1 || v36 >= 0 );
    v34 = v37;
    v33 = v35;
    v89 += v93;
  }
  while ( v89 != v91 );
  if ( v77 != 1 )
  {
    v77 = 1;
    v93 = -1;
    v91 = -1;
    v89 = v97 - 2;
    goto LABEL_33;
  }
  a1 = v35;
LABEL_86:
  v99 = a1;
  v100 = 0;
  v68 = node_iterator_goup(&v99);
  v69 = *(_QWORD **)v68;
  LODWORD(v68) = *(_DWORD *)(v68 + 8);
  v99 = v69;
  v100 = v68;
  while ( 1 )
  {
    v74 = *(__int64 (__fastcall **)(__int64))(*a1 + 56LL);
    v75 = v74 == interactive_graph_t__::vfunc_7 ? *((_DWORD *)a1 + 46) : v74((__int64)a1);
    LODWORD(v41) = v100;
    if ( v75 == v100 && a1 == v99 )
      return v101 - __readfsqword(0x28u);
    v70 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a1 + 152LL);
    if ( v70 == interactive_graph_t__::vfunc_19 )
    {
      v71 = *(__int64 (__fastcall **)(__int64))(*a1 + 56LL);
      if ( v71 == interactive_graph_t__::vfunc_7 )
        v72 = *((_DWORD *)a1 + 46);
      else
        v72 = v71((__int64)a1);
      if ( (int)v41 >= v72 )
        goto LABEL_105;
      v73 = (_DWORD *)(a1[28] + 16LL * (int)v41);
    }
    else
    {
      v73 = (_DWORD *)v70((__int64)a1, v100);
    }
    *v73 -= v78;
    v73[2] -= v78;
    ++v100;
    node_iterator_goup(&v99);
  }
}
