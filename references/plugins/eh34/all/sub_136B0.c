__int64 __fastcall sub_136B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v6; // rax
  __m128 v7; // xmm0
  int *v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // eax
  __m128i v11; // xmm0
  _QWORD **v12; // rbx
  void *v13; // rdi
  _QWORD **v14; // rbx
  void *v15; // rdi
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128 v20; // xmm0
  int *v21; // rax
  __int64 v22; // rsi
  __int32 v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i v26; // xmm0
  int v27; // eax
  __int64 v28; // r14
  _DWORD *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __m128i v32; // xmm0
  __int64 v33; // [rsp+8h] [rbp-138h]
  _DWORD *v34; // [rsp+10h] [rbp-130h]
  _QWORD v36[2]; // [rsp+20h] [rbp-120h] BYREF
  __int64 v37; // [rsp+30h] [rbp-110h] BYREF
  __m128i v38; // [rsp+38h] [rbp-108h] BYREF
  char v39; // [rsp+48h] [rbp-F8h]
  __int64 v40; // [rsp+50h] [rbp-F0h] BYREF
  __m128i v41; // [rsp+58h] [rbp-E8h] BYREF
  char v42; // [rsp+68h] [rbp-D8h]
  __int64 v43; // [rsp+70h] [rbp-D0h] BYREF
  __m128i v44; // [rsp+78h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+88h] [rbp-B8h]
  __int64 v46; // [rsp+90h] [rbp-B0h]
  char v47[8]; // [rsp+A0h] [rbp-A0h] BYREF
  int v48; // [rsp+A8h] [rbp-98h] BYREF
  void *v49; // [rsp+B0h] [rbp-90h]
  int *v50; // [rsp+B8h] [rbp-88h] BYREF
  int *v51; // [rsp+C0h] [rbp-80h]
  __int64 v52; // [rsp+C8h] [rbp-78h]
  char v53[8]; // [rsp+D0h] [rbp-70h] BYREF
  int v54; // [rsp+D8h] [rbp-68h] BYREF
  void *v55[2]; // [rsp+E0h] [rbp-60h]
  int *v56; // [rsp+F0h] [rbp-50h]
  __int64 v57; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v58; // [rsp+108h] [rbp-38h]

  v4 = a2 + 592;
  v58 = __readfsqword(0x28u);
  sub_62880(v47, a2, *(_QWORD *)(a3 + 8), a2 + 592);
  v6 = *(_QWORD *)(a2 + 672);
  if ( v6 )
  {
    v7 = _mm_loadh_ps((const double *)(a2 + 680));
    v54 = *(_DWORD *)(a2 + 664);
    v8 = *(int **)(a2 + 688);
    *(__m128 *)v55 = v7;
    v56 = v8;
    *(_QWORD *)(v6 + 8) = &v54;
    v9 = *(_QWORD *)(a2 + 696);
    *(_QWORD *)(a2 + 672) = 0;
    v57 = v9;
    *(_QWORD *)(a2 + 680) = a2 + 664;
    *(_QWORD *)(a2 + 688) = a2 + 664;
    *(_QWORD *)(a2 + 696) = 0;
  }
  else
  {
    v54 = 0;
    v55[0] = nullptr;
    v55[1] = &v54;
    v56 = &v54;
    v57 = 0;
  }
  v10 = sub_26300(a2 + 592);
  sub_269C0(&v37, a2 + 592, v47, v10);
  if ( v39 )
  {
    v11 = _mm_loadu_si128(&v38);
    *(_QWORD *)a1 = v37;
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v11;
    goto LABEL_5;
  }
  if ( !(_BYTE)v37 )
  {
    *(_DWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
    goto LABEL_5;
  }
  sub_DD60(*(_QWORD **)(a2 + 672));
  v17 = v49;
  v18 = a2 + 664;
  v19 = 0;
  *(_QWORD *)(a2 + 672) = 0;
  *(_QWORD *)(a2 + 680) = a2 + 664;
  *(_QWORD *)(a2 + 688) = a2 + 664;
  *(_QWORD *)(a2 + 696) = 0;
  if ( v17 )
  {
    v20 = _mm_loadh_ps((const double *)&v50);
    *(_DWORD *)(a2 + 664) = v48;
    v21 = v51;
    *(__m128 *)(a2 + 672) = v20;
    *(_QWORD *)(a2 + 688) = v21;
    v17[1] = v18;
    v19 = v52;
    v49 = nullptr;
    *(_QWORD *)(a2 + 696) = v52;
    v50 = &v48;
    v51 = &v48;
    v52 = 0;
  }
  if ( v19 != v57 )
    goto LABEL_16;
  v28 = *(_QWORD *)(a2 + 680);
  v29 = v55[1];
  if ( v28 != v18 )
  {
    while ( 1 )
    {
      v33 = v18;
      v34 = v29;
      if ( *(_DWORD *)(v28 + 32) != v29[8] )
        break;
      v28 = std::_Rb_tree_increment(v28);
      v30 = std::_Rb_tree_increment(v34);
      v18 = v33;
      v29 = (_DWORD *)v30;
      if ( v33 == v28 )
        goto LABEL_20;
    }
LABEL_16:
    sub_6E500(&v40, a2 + 656);
    sub_6E500(&v43, v53);
    if ( v43 )
    {
      v44.m128i_i64[0] = 0;
      qfree(v43);
    }
    if ( v40 )
    {
      v41.m128i_i64[0] = 0;
      qfree(v40);
    }
  }
LABEL_20:
  v22 = *(_QWORD *)(a3 + 8);
  v23 = *(_DWORD *)(v22 + 64);
  sub_61040(a2, v22, *(_QWORD *)(a2 + 176), v4, a2 + 1152);
  v24 = *(_QWORD *)(a2 + 176);
  v45 = 0;
  v44 = 0;
  v43 = v24;
  v25 = *(_QWORD *)(a3 + 8);
  v44.m128i_i32[3] = v23;
  v44.m128i_i32[2] = 1;
  LODWORD(v25) = *(_DWORD *)(v25 + 64);
  BYTE4(v45) = 1;
  LODWORD(v45) = v25;
  v46 = v4;
  sub_FC00((const __m128i **)(a2 + 1080), (const __m128i *)&v43);
  v36[0] = 0;
  v36[1] = 0;
  sub_12B60((__int64)&v40, (_QWORD *)a2, a3, (__int64)v36);
  if ( v42 )
  {
    v26 = _mm_loadu_si128(&v41);
    *(_QWORD *)a1 = v40;
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v26;
  }
  else if ( (_BYTE)v40 )
  {
    *(_QWORD *)(a2 + 216) = v4;
    sub_112E0((__int64)&v43, a2, a3, (__int64)v36, 0, *(_DWORD *)(a2 + 464), -1);
    if ( (_BYTE)v45 )
    {
      v32 = _mm_loadu_si128(&v44);
      *(_QWORD *)a1 = v43;
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v32;
    }
    else if ( (_BYTE)v43 )
    {
      *(_DWORD *)a1 = 0;
      *(_BYTE *)(a1 + 24) = 0;
    }
    else
    {
      v31 = *(_DWORD *)(a2 + 296);
      *(_BYTE *)(a1 + 24) = 0;
      *(_DWORD *)a1 = v31;
    }
  }
  else
  {
    v27 = *(_DWORD *)(a2 + 296);
    *(_BYTE *)(a1 + 24) = 0;
    *(_DWORD *)a1 = v27;
  }
  qfree(v36[0]);
  if ( v39 && v37 )
  {
    v38.m128i_i64[0] = 0;
    qfree(v37);
  }
LABEL_5:
  v12 = (_QWORD **)v55[0];
  if ( v55[0] )
  {
    do
    {
      sub_DD60(v12[3]);
      v13 = v12;
      v12 = (_QWORD **)v12[2];
      operator delete(v13, 0x28u);
    }
    while ( v12 );
  }
  v14 = (_QWORD **)v49;
  if ( v49 )
  {
    do
    {
      sub_DD60(v14[3]);
      v15 = v14;
      v14 = (_QWORD **)v14[2];
      operator delete(v15, 0x28u);
    }
    while ( v14 );
  }
  return a1;
}
