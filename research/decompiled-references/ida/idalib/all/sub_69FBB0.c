__int64 *__fastcall sub_69FBB0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // r14
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 *v10; // rbp
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  _BYTE *v16; // r13
  int v17; // ebp
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 *v27; // rbp
  __int64 v28; // r13
  unsigned __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-88h]
  void *v47; // [rsp+10h] [rbp-78h] BYREF
  __int128 v48; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v50; // [rsp+38h] [rbp-50h]
  unsigned __int64 v51; // [rsp+48h] [rbp-40h]

  v3 = a2[1];
  v4 = a1[1];
  v51 = __readfsqword(0x28u);
  v6 = *a2;
  if ( a2[2] < (unsigned __int64)(v3 + 1) )
  {
    v41 = qvector_reserve(a2, v6, v3 + 1, 24);
    v3 = a2[1];
    *a2 = v41;
    v6 = v41;
  }
  v7 = v6 + 24 * v3;
  *(_QWORD *)v7 = 0;
  *(_OWORD *)(v7 + 8) = 0;
  ++a2[1];
  sub_35A910((__int64 *)v7);
  v8 = a2[1];
  v9 = *a2;
  if ( a2[2] < (unsigned __int64)(v8 + 1) )
  {
    v45 = qvector_reserve(a2, v9, v8 + 1, 24);
    v8 = a2[1];
    *a2 = v45;
    v9 = v45;
  }
  v10 = (__int64 *)(v9 + 24 * v8);
  *(_OWORD *)(v10 + 1) = 0;
  *v10 = 0;
  ++a2[1];
  v11 = v10[1];
  if ( v11 )
  {
    v12 = v11 + 1;
    v13 = v10[1];
    v14 = *v10;
    --v11;
    if ( v10[2] >= v12 )
      goto LABEL_7;
  }
  else
  {
    v14 = *v10;
    v12 = 2;
    v13 = 1;
    if ( (unsigned __int64)v10[2] >= 2 )
      goto LABEL_7;
  }
  v46 = v13;
  v39 = qvector_reserve(v10, v14, v12, 1);
  v13 = v46;
  *v10 = v39;
  v14 = v39;
LABEL_7:
  v10[1] = v12;
  v15 = 0;
  *(_BYTE *)(v14 + v13) = 0;
  v16 = (_BYTE *)(*v10 + v11);
  v17 = 0;
  for ( *v16 = 123; v17 < v4; v15 = v17 )
  {
    v47 = nullptr;
    v19 = 16 * v15;
    v20 = *a1;
    v48 = 0;
    get_ea_diffpos_name(&v47, *(_QWORD *)(v20 + v19));
    v21 = *a1;
    ptr = nullptr;
    v50 = 0;
    get_ea_diffpos_name(&ptr, *(_QWORD *)(v21 + v19 + 8));
    v22 = a2[1];
    v23 = *a2;
    if ( a2[2] < (unsigned __int64)(v22 + 1) )
    {
      v24 = qvector_reserve(a2, v23, v22 + 1, 24);
      *a2 = v24;
      v22 = a2[1];
      v23 = v24;
    }
    v18 = v23 + 24 * v22;
    *(_QWORD *)v18 = 0;
    *(_OWORD *)(v18 + 8) = 0;
    ++a2[1];
    sub_35A910((__int64 *)v18);
    if ( ptr )
    {
      *(_QWORD *)&v50 = 0;
      qfree(ptr);
    }
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree(v47);
    }
    ++v17;
  }
  v25 = a2[1];
  v26 = *a2;
  if ( a2[2] < (unsigned __int64)(v25 + 1) )
  {
    v44 = qvector_reserve(a2, v26, v25 + 1, 24);
    v25 = a2[1];
    *a2 = v44;
    v26 = v44;
  }
  v27 = (__int64 *)(v26 + 24 * v25);
  *(_OWORD *)(v27 + 1) = 0;
  *v27 = 0;
  ++a2[1];
  v28 = v27[1];
  if ( v28 )
  {
    v29 = v28 + 1;
    v30 = v27[1];
    v31 = *v27;
    --v28;
    if ( v27[2] >= v29 )
      goto LABEL_20;
  }
  else
  {
    v31 = *v27;
    v29 = 2;
    v30 = 1;
    if ( (unsigned __int64)v27[2] >= 2 )
      goto LABEL_20;
  }
  v40 = qvector_reserve(v27, v31, v29, 1);
  *v27 = v40;
  v31 = v40;
LABEL_20:
  v27[1] = v29;
  *(_BYTE *)(v31 + v30) = 0;
  *(_BYTE *)(*v27 + v28) = 125;
  v32 = a2[1];
  v33 = *a2;
  if ( a2[2] < (unsigned __int64)(v32 + 1) )
  {
    v43 = qvector_reserve(a2, v33, v32 + 1, 24);
    v32 = a2[1];
    *a2 = v43;
    v33 = v43;
  }
  v34 = v33 + 24 * v32;
  *(_QWORD *)v34 = 0;
  *(_OWORD *)(v34 + 8) = 0;
  ++a2[1];
  sub_35A910((__int64 *)v34);
  v35 = a2[1];
  v36 = *a2;
  if ( a2[2] < (unsigned __int64)(v35 + 1) )
  {
    v42 = qvector_reserve(a2, v36, v35 + 1, 24);
    v35 = a2[1];
    *a2 = v42;
    v36 = v42;
  }
  v37 = v36 + 24 * v35;
  *(_QWORD *)v37 = 0;
  *(_OWORD *)(v37 + 8) = 0;
  ++a2[1];
  return sub_35A910((__int64 *)v37);
}
