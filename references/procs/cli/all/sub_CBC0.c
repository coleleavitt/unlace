__int64 __fastcall sub_CBC0(
        __int64 a1,
        __int64 *a2,
        unsigned __int8 **a3,
        unsigned __int64 a4,
        double a5,
        double a6,
        __m128 a7)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  size_t v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rsi
  unsigned __int64 v19; // r15
  size_t v20; // r13
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r12
  size_t v31; // r14
  __int64 v32; // rsi
  __int64 v33; // r12
  size_t v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp-8h] [rbp-80h]
  void *v39; // [rsp+8h] [rbp-70h] BYREF
  __int128 v40; // [rsp+10h] [rbp-68h]
  void *src; // [rsp+28h] [rbp-50h] BYREF
  __int128 v42; // [rsp+30h] [rbp-48h]
  unsigned __int64 v43; // [rsp+40h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  v39 = nullptr;
  src = nullptr;
  v40 = 0;
  v42 = 0;
  sub_C470(a1, (__int64 *)&v39, (__int64 *)&src, a3, a4, 0, 0.0, a6, a7, nullptr);
  v11 = v38;
  v12 = v40;
  if ( (_QWORD)v40 )
  {
    v13 = v40 - 1;
    if ( (_QWORD)v40 != 1 )
    {
      v33 = a2[1];
      v34 = v40 - 1;
      if ( v33 )
      {
        --v33;
        v34 = v13 + v33;
        v12 = v40 + v33;
      }
      v35 = *a2;
      if ( a2[2] < v12 )
      {
        v37 = qvector_reserve(a2, v35, v12, 1);
        *a2 = v37;
        v35 = v37;
      }
      a2[1] = v12;
      *(_BYTE *)(v35 + v34) = 0;
      memcpy((void *)(v33 + *a2), v39, v13);
    }
  }
  v14 = a2[1];
  v15 = v14;
  if ( !v14 )
  {
    v18 = *a2;
    v16 = 2;
    v17 = 1;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_5;
LABEL_17:
    v29 = qvector_reserve(a2, v18, v16, 1);
    *a2 = v29;
    v18 = v29;
    goto LABEL_5;
  }
  v16 = v14 + 1;
  v17 = a2[1];
  v18 = *a2;
  v15 = v14 - 1;
  if ( a2[2] < (unsigned __int64)(v14 + 1) )
    goto LABEL_17;
LABEL_5:
  a2[1] = v16;
  *(_BYTE *)(v18 + v17) = 0;
  *(_BYTE *)(v15 + *a2) = 40;
  v19 = v42;
  if ( (_QWORD)v42 )
  {
    v20 = v42 - 1;
    if ( (_QWORD)v42 != 1 )
    {
      v30 = a2[1];
      v31 = v42 - 1;
      if ( v30 )
      {
        --v30;
        v31 = v20 + v30;
        v19 = v42 + v30;
      }
      v32 = *a2;
      if ( a2[2] < v19 )
      {
        v36 = qvector_reserve(a2, v32, v19, 1);
        *a2 = v36;
        v32 = v36;
      }
      a2[1] = v19;
      *(_BYTE *)(v32 + v31) = 0;
      memcpy((void *)(v30 + *a2), src, v20);
    }
  }
  v21 = a2[1];
  v22 = v21;
  if ( v21 )
  {
    v23 = v21 + 1;
    v24 = a2[1];
    v25 = *a2;
    v22 = v21 - 1;
    if ( a2[2] >= (unsigned __int64)(v21 + 1) )
      goto LABEL_9;
  }
  else
  {
    v25 = *a2;
    v23 = 2;
    v24 = 1;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_9;
  }
  v28 = qvector_reserve(a2, v25, v23, 1);
  *a2 = v28;
  v25 = v28;
LABEL_9:
  a2[1] = v23;
  *(_BYTE *)(v25 + v24) = 0;
  *(_BYTE *)(v22 + *a2) = 41;
  v26 = *a2;
  if ( src )
  {
    *(_QWORD *)&v42 = 0;
    qfree(src, v25, v8, v11, v9, v10);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, v25, v8, v11, v9, v10);
  }
  return v26;
}
