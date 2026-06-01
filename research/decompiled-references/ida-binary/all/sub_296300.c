unsigned __int64 __fastcall sub_296300(_DWORD *a1, const char *a2, __int64 *a3, int a4)
{
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  __int64 i; // r14
  __int64 *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // rdx
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(__int64); // rax
  int v24; // eax
  __int64 v26; // rax
  int v27; // r8d
  __int64 *v28; // rax
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 *v36; // rbx
  const char *v37; // rsi
  __int64 v38; // r15
  __int64 v39; // rdi
  __m128i v40; // xmm0
  __int64 v41; // rdi
  bool v42; // cf
  const char *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 *v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // r15
  __int64 v50; // rsi
  __m128i v51; // xmm0
  __int64 v52; // rdi
  int v53; // [rsp+0h] [rbp-88h]
  unsigned __int64 v54; // [rsp+0h] [rbp-88h]
  unsigned __int64 v55; // [rsp+0h] [rbp-88h]
  unsigned __int64 v56; // [rsp+0h] [rbp-88h]
  unsigned __int64 v57; // [rsp+0h] [rbp-88h]
  unsigned __int64 v58; // [rsp+0h] [rbp-88h]
  unsigned __int64 v59; // [rsp+0h] [rbp-88h]
  unsigned __int64 v60; // [rsp+0h] [rbp-88h]
  __int64 v61; // [rsp+8h] [rbp-80h]
  __int64 v62; // [rsp+10h] [rbp-78h]
  __int64 v63; // [rsp+10h] [rbp-78h]
  __int64 v64; // [rsp+18h] [rbp-70h]
  __int64 v65; // [rsp+18h] [rbp-70h]
  _DWORD *v66; // [rsp+20h] [rbp-68h] BYREF
  __int128 v67; // [rsp+28h] [rbp-60h]
  __int64 v68; // [rsp+38h] [rbp-50h]
  unsigned __int64 v69; // [rsp+48h] [rbp-40h]

  v7 = *a3;
  v69 = __readfsqword(0x28u);
  LODWORD(v8) = a4;
  if ( v7 )
  {
    v9 = a3[1];
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = (__int64 *)(v7 + 32 * i);
        v12 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v12, a2);
          v7 = *a3;
        }
      }
    }
    a3[1] = 0;
    qfree(v7, a2);
    *a3 = 0;
    a3[2] = 0;
  }
  v13 = a3[1];
  v14 = (int)v8;
  if ( (int)v8 != v13 )
  {
    v68 = 0;
    v66 = nullptr;
    v67 = 0;
    if ( (int)v8 < v13 )
    {
      v8 = (int)v8;
      do
      {
        v28 = (__int64 *)(*a3 + 32 * v8);
        v29 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          v54 = v14;
          qfree(v29, a2);
          v14 = v54;
        }
        ++v8;
      }
      while ( v8 < v13 );
    }
    else
    {
      v15 = a3[2];
      if ( (unsigned __int64)&v66 < *a3 || (unsigned __int64)&v66 >= 32 * v15 + *a3 )
      {
        if ( v15 < v14 )
        {
          v55 = v14;
          v32 = qvector_reserve(a3, 0, v14, 32);
          v33 = a3[1];
          v34 = a3[2];
          a3[2] = v15;
          v35 = v55;
          v36 = (__int64 *)*a3;
          v62 = v32;
          v37 = (const char *)(v33 - 1);
          v64 = v34;
          if ( (__int64)v37 >= 0 )
          {
            v38 = v32;
            do
            {
              v39 = *v36;
              v40 = _mm_loadu_si128((const __m128i *)(v36 + 1));
              *v36 = 0;
              v36[2] = 0;
              *(_QWORD *)v38 = v39;
              *(__m128i *)(v38 + 8) = v40;
              *(_QWORD *)(v38 + 24) = v36[3];
              v41 = *v36;
              if ( *v36 )
              {
                v36[1] = 0;
                v56 = v35;
                qfree(v41, v37);
                v35 = v56;
              }
              v36 += 4;
              v38 += 32;
              v42 = v37-- == nullptr;
            }
            while ( !v42 );
            v36 = (__int64 *)*a3;
          }
          v57 = v35;
          qfree(v36, v37);
          v13 = a3[1];
          v14 = v57;
          *a3 = v62;
          a3[2] = v64;
        }
        if ( v13 < v14 )
        {
          do
          {
            v16 = v13++;
            v17 = *a3 + 32 * v16;
            *(_QWORD *)v17 = 0;
            *(_QWORD *)(v17 + 24) = 0;
            *(_OWORD *)(v17 + 8) = 0;
          }
          while ( v14 != v13 );
          a3[1] = v14;
          goto LABEL_15;
        }
      }
      else
      {
        if ( v15 < v14 )
        {
          v43 = nullptr;
          v58 = v14;
          v44 = qvector_reserve(a3, 0, v14, 32);
          v45 = a3[2];
          v46 = v58;
          a3[2] = v15;
          v63 = v44;
          v47 = (__int64 *)*a3;
          v65 = v45;
          v48 = a3[1] - 1;
          if ( v48 >= 0 )
          {
            v49 = v44;
            do
            {
              v50 = *v47;
              v51 = _mm_loadu_si128((const __m128i *)(v47 + 1));
              *v47 = 0;
              v47[2] = 0;
              *(_QWORD *)v49 = v50;
              *(__m128i *)(v49 + 8) = v51;
              v43 = (const char *)v47[3];
              *(_QWORD *)(v49 + 24) = v43;
              v52 = *v47;
              if ( *v47 )
              {
                v47[1] = 0;
                v61 = v48;
                v59 = v46;
                qfree(v52, v43);
                v48 = v61;
                v46 = v59;
              }
              v47 += 4;
              v49 += 32;
              v42 = v48-- == 0;
            }
            while ( !v42 );
            v47 = (__int64 *)*a3;
          }
          v60 = v46;
          qfree(v47, v43);
          v13 = a3[1];
          v14 = v60;
          *a3 = v63;
          a3[2] = v65;
        }
        if ( v13 < v14 )
        {
          do
          {
            v30 = v13++;
            v31 = *a3 + 32 * v30;
            *(_QWORD *)v31 = 0;
            *(_QWORD *)(v31 + 24) = 0;
            *(_OWORD *)(v31 + 8) = 0;
          }
          while ( v14 != v13 );
        }
      }
    }
    a3[1] = v14;
  }
LABEL_15:
  v66 = a1;
  LODWORD(v67) = 0;
  v18 = node_iterator_goup(&v66);
  v19 = *(_DWORD **)v18;
  LODWORD(v18) = *(_DWORD *)(v18 + 8);
  v66 = v19;
  LODWORD(v67) = v18;
  while ( 1 )
  {
    v23 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    v24 = v23 == interactive_graph_t__::vfunc_7 ? a1[46] : v23((__int64)a1);
    v27 = v67;
    if ( v24 == (_DWORD)v67 && a1 == v66 )
      break;
    v20 = (__int64 *)(*a3 + 32LL * *(int *)(*(_QWORD *)a2 + 4LL * (int)v67));
    v21 = v20[1];
    v22 = *v20;
    if ( v20[2] < (unsigned __int64)(v21 + 1) )
    {
      v53 = v67;
      v26 = qvector_reserve(*a3 + 32LL * *(int *)(*(_QWORD *)a2 + 4LL * (int)v67), v22, v21 + 1, 4);
      v27 = v53;
      *v20 = v26;
      v22 = v26;
      v21 = v20[1];
    }
    *(_DWORD *)(v22 + 4 * v21) = v27;
    ++v20[1];
    LODWORD(v67) = v67 + 1;
    node_iterator_goup(&v66);
  }
  return v69 - __readfsqword(0x28u);
}
