bool *__fastcall sub_269C0(bool *a1, _QWORD *a2, _QWORD *a3, int a4)
{
  __int64 v5; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  void *v9; // rcx
  int *v10; // rdx
  int *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // r12
  int v14; // r14d
  int *v15; // rbx
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // r15d
  _QWORD *v21; // rsi
  __int64 v22; // rdi
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  int *v27; // rdx
  __m128 v28; // xmm1
  __int64 v29; // rdx
  _QWORD **v30; // rbx
  void *v31; // rdi
  __int64 v32; // rax
  bool *v33; // rax
  bool v34; // zf
  _QWORD **v35; // rbx
  void *v36; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  int *v45; // rdx
  int *v46; // r8
  bool v47; // dl
  __int64 v48; // rax
  bool *v49; // rcx
  __m128i v50; // xmm0
  _QWORD **v51; // rbx
  void *v52; // rdi
  __m128 v53; // xmm0
  int *v55; // [rsp+20h] [rbp-E8h] BYREF
  bool *v56; // [rsp+28h] [rbp-E0h]
  int *v57; // [rsp+30h] [rbp-D8h]
  __int64 v58; // [rsp+38h] [rbp-D0h]
  __int64 v59; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v60; // [rsp+48h] [rbp-C0h] BYREF
  char v61; // [rsp+58h] [rbp-B0h]
  __int64 v62; // [rsp+60h] [rbp-A8h] BYREF
  int v63; // [rsp+68h] [rbp-A0h] BYREF
  void *v64[2]; // [rsp+70h] [rbp-98h]
  int *v65; // [rsp+80h] [rbp-88h]
  __int64 v66; // [rsp+88h] [rbp-80h]
  char v67[8]; // [rsp+90h] [rbp-78h] BYREF
  int v68; // [rsp+98h] [rbp-70h] BYREF
  void *v69[2]; // [rsp+A0h] [rbp-68h] BYREF
  int *v70; // [rsp+B0h] [rbp-58h]
  __int64 v71; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v72; // [rsp+C8h] [rbp-40h]

  v56 = a1;
  v5 = a3[2];
  v72 = __readfsqword(0x28u);
  v63 = 0;
  v64[0] = nullptr;
  v55 = &v63;
  v64[1] = &v63;
  v65 = &v63;
  v66 = 0;
  if ( v5 )
  {
    v7 = (_QWORD *)sub_25D90(v5, (__int64)&v63);
    v8 = v7;
    do
    {
      v9 = v8;
      v8 = (_QWORD *)v8[2];
    }
    while ( v8 );
    v64[1] = v9;
    v10 = (int *)v7;
    do
    {
      v11 = v10;
      v10 = *((int **)v10 + 3);
    }
    while ( v10 );
    v12 = a3[5];
    v65 = v11;
    v64[0] = v7;
    v66 = v12;
  }
  v13 = a3 + 1;
  sub_25E60(&v62, a4);
  v14 = a2[26] - 2;
  if ( v66 )
  {
    while ( 1 )
    {
      v68 = 0;
      v69[1] = &v68;
      v70 = &v68;
      v69[0] = nullptr;
      v71 = 0;
      v15 = v55;
      if ( v64[1] != v55 )
        break;
      v23 = v64[0];
      if ( v64[0] )
      {
        v26 = _mm_loadh_ps((const double *)&v55);
LABEL_49:
        *(__m128 *)v69 = v26;
        v68 = v63;
        v70 = v65;
        v23[1] = &v68;
        v64[0] = nullptr;
        v71 = v66;
        v66 = 0;
        v64[1] = v55;
        v65 = v55;
LABEL_26:
        v30 = (_QWORD **)v69[0];
        if ( v69[0] )
        {
          do
          {
            sub_25BC0(v30[3]);
            v31 = v30;
            v30 = (_QWORD **)v30[2];
            operator delete(v31, 0x28u);
          }
          while ( v30 );
        }
      }
LABEL_28:
      v32 = v66;
LABEL_29:
      if ( !v32 )
        goto LABEL_30;
    }
    do
    {
      v16 = *(_DWORD *)(std::_Rb_tree_decrement(v15) + 32);
      if ( v16 > a4 )
      {
        if ( v16 > v14 )
        {
          sub_64B50(
            (unsigned int)&v59,
            *a2,
            (unsigned int)"saturate_states: curr_state %d not within range [%d,%d]",
            v16,
            a4,
            v14);
LABEL_42:
          v49 = v56;
          *(_QWORD *)v56 = v59;
          v50 = _mm_loadu_si128(&v60);
          v49[24] = 1;
          *(__m128i *)(v49 + 8) = v50;
          v51 = (_QWORD **)v69[0];
          if ( v69[0] )
          {
            do
            {
              sub_25BC0(v51[3]);
              v52 = v51;
              v51 = (_QWORD **)v51[2];
              operator delete(v52, 0x28u);
            }
            while ( v51 );
          }
          goto LABEL_31;
        }
        sub_26920((__int64)&v59, (__int64)(a2 + 16), v16);
        if ( v61 )
          goto LABEL_42;
        v19 = a3[2];
        v20 = a4;
        if ( (int)v59 >= a4 )
          v20 = v59;
        if ( !v19 )
          goto LABEL_52;
        v21 = a3 + 1;
        do
        {
          while ( 1 )
          {
            v17 = *(_QWORD *)(v19 + 16);
            v22 = *(_QWORD *)(v19 + 24);
            if ( v20 <= *(_DWORD *)(v19 + 32) )
              break;
            v19 = *(_QWORD *)(v19 + 24);
            if ( !v22 )
              goto LABEL_19;
          }
          v21 = (_QWORD *)v19;
          v19 = *(_QWORD *)(v19 + 16);
        }
        while ( v17 );
LABEL_19:
        if ( v13 == v21 || v20 < *((_DWORD *)v21 + 8) )
        {
LABEL_52:
          if ( (int)v59 > a4 )
          {
            v38 = sub_25960((__int64)a3, (unsigned int)v20, v17, (unsigned int)v59, v18);
            if ( v39 )
            {
              LOBYTE(v57) = v13 == (_QWORD *)v39 || v38 != 0;
              if ( !(_BYTE)v57 )
                LOBYTE(v57) = v20 < *(_DWORD *)(v39 + 32);
              v58 = v39;
              v40 = operator new(0x28u);
              *(_DWORD *)(v40 + 32) = v20;
              std::_Rb_tree_insert_and_rebalance((unsigned __int8)v57, v40, v58, a3 + 1);
              ++a3[5];
              v44 = sub_25960((__int64)v67, (unsigned int)v20, v41, v42, v43);
              v46 = v45;
              if ( v45 )
              {
                v47 = v44 != 0 || v45 == &v68;
                if ( !v47 )
                  v47 = v20 < v46[8];
                LOBYTE(v58) = v47;
                v57 = v46;
                v48 = operator new(0x28u);
                *(_DWORD *)(v48 + 32) = v20;
                std::_Rb_tree_insert_and_rebalance((unsigned __int8)v58, v48, v57, &v68);
                ++v71;
              }
            }
          }
        }
      }
      v15 = (int *)std::_Rb_tree_decrement(v15);
    }
    while ( v15 != v64[1] );
    v23 = v64[0];
    v24 = v69[0];
    if ( !v64[0] )
    {
      if ( !v69[0] )
        goto LABEL_28;
      v53 = _mm_loadh_ps((const double *)&v69[1]);
      v63 = v68;
      *(__m128 *)v64 = v53;
      v65 = v70;
      *((_QWORD *)v69[0] + 1) = v55;
      v32 = v71;
      v66 = v71;
      goto LABEL_29;
    }
    v25 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v64[0], (__m128i)(unsigned __int64)v15);
    v26 = v25;
    if ( !v69[0] )
      goto LABEL_49;
    v27 = v65;
    v28 = _mm_loadh_ps((const double *)&v69[1]);
    *(__m128 *)v69 = v25;
    v65 = v70;
    v70 = v27;
    *(__m128 *)v64 = v28;
    v24[1] = v55;
    *((_QWORD *)v69[0] + 1) = &v68;
    v29 = v71;
    v71 = v66;
    v66 = v29;
    goto LABEL_26;
  }
LABEL_30:
  sub_25E60(a3, a4);
  v33 = v56;
  v34 = a3[5] == 0;
  v56[24] = 0;
  *v33 = !v34;
LABEL_31:
  v35 = (_QWORD **)v64[0];
  if ( v64[0] )
  {
    do
    {
      sub_25BC0(v35[3]);
      v36 = v35;
      v35 = (_QWORD **)v35[2];
      operator delete(v36, 0x28u);
    }
    while ( v35 );
  }
  return v56;
}
