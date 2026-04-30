unsigned __int64 __fastcall sub_282AB0(volatile signed __int32 *a1, __int64 a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v3; // r12
  volatile signed __int32 *v4; // r8
  volatile signed __int32 *v5; // rbp
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  volatile signed __int32 *v9; // r9
  volatile signed __int32 *v10; // rax
  __m128 v11; // xmm0
  __int64 v12; // rcx
  __m128 v13; // xmm0
  __int64 v14; // rcx
  __m128 v15; // xmm0
  __int64 v17; // rax
  volatile signed __int32 *v18; // r8
  _QWORD *v19; // r9
  __int64 v20; // r15
  volatile signed __int32 *v21; // rax
  volatile signed __int32 *v22; // r13
  __int64 v23; // r15
  _QWORD *v24; // r14
  _QWORD *v25; // rbx
  __int64 v26; // rbp
  void *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  volatile signed __int32 *v36; // rdx
  __int64 v38; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+10h] [rbp-C8h]
  __int64 v40; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+20h] [rbp-B8h]
  __int64 v42; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+30h] [rbp-A8h]
  volatile signed __int32 *v44; // [rsp+38h] [rbp-A0h]
  volatile signed __int32 *v45; // [rsp+40h] [rbp-98h]
  volatile signed __int32 *v46; // [rsp+48h] [rbp-90h]
  unsigned __int64 v47; // [rsp+98h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(volatile signed __int32 **)a2;
  v47 = __readfsqword(0x28u);
  v4 = a1;
  v42 = v2;
  v43 = *(_QWORD *)(a2 + 16);
  if ( v3 )
    _InterlockedAdd(v3, 1u);
  v5 = *(volatile signed __int32 **)(a2 + 24);
  v40 = *(_QWORD *)(a2 + 32);
  v41 = *(_QWORD *)(a2 + 40);
  if ( v5 )
    _InterlockedAdd(v5, 1u);
  v6 = *(volatile signed __int32 **)(a2 + 48);
  v38 = *(_QWORD *)(a2 + 56);
  v39 = *(_QWORD *)(a2 + 64);
  if ( v6 )
    _InterlockedAdd(v6, 1u);
  v7 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  if ( v8 < v7 + 1 )
  {
    v44 = a1;
    v17 = qvector_reserve(a1, 0, v7 + 1, 72);
    v18 = a1;
    v19 = (_QWORD *)v17;
    v20 = *((_QWORD *)a1 + 1);
    v21 = *((volatile signed __int32 **)a1 + 2);
    *((_QWORD *)a1 + 2) = v8;
    v22 = *(volatile signed __int32 **)a1;
    v44 = v21;
    v23 = v20 - 1;
    if ( v23 >= 0 )
    {
      v45 = v6;
      v24 = v19;
      v25 = v19;
      v46 = v5;
      v26 = v23;
      do
      {
        v27 = *(void **)v22;
        *(_QWORD *)v22 = 0;
        *v25 = v27;
        v28 = *((_QWORD *)v22 + 1);
        *((_QWORD *)v22 + 1) = 0;
        v25[1] = v28;
        v29 = *((_QWORD *)v22 + 2);
        *((_QWORD *)v22 + 2) = 0;
        v25[2] = v29;
        v30 = *((_QWORD *)v22 + 3);
        *((_QWORD *)v22 + 3) = 0;
        v25[3] = v30;
        v31 = *((_QWORD *)v22 + 4);
        *((_QWORD *)v22 + 4) = 0;
        v25[4] = v31;
        v32 = *((_QWORD *)v22 + 5);
        *((_QWORD *)v22 + 5) = 0;
        v25[5] = v32;
        v33 = *((_QWORD *)v22 + 6);
        *((_QWORD *)v22 + 6) = 0;
        v25[6] = v33;
        v34 = *((_QWORD *)v22 + 7);
        *((_QWORD *)v22 + 7) = 0;
        v25[7] = v34;
        v35 = *((_QWORD *)v22 + 8);
        *((_QWORD *)v22 + 8) = 0;
        v25[8] = v35;
        v36 = *((volatile signed __int32 **)v22 + 3);
        if ( v36 && !_InterlockedSub(v36, 1u) )
          free(*((void **)v22 + 3));
        if ( *(_QWORD *)v22 && !_InterlockedSub(*(volatile signed __int32 **)v22, 1u) )
          free(*(void **)v22);
        v22 += 18;
        v25 += 9;
      }
      while ( v26-- != 0 );
      v19 = v24;
      v18 = a1;
      v22 = *(volatile signed __int32 **)a1;
    }
    v46 = v18;
    v45 = (volatile signed __int32 *)v19;
    qfree(v22, nullptr);
    v4 = v46;
    v9 = v45;
    *((_QWORD *)v46 + 2) = v44;
    v7 = *((_QWORD *)v4 + 1);
    *(_QWORD *)v4 = v9;
  }
  else
  {
    v9 = *(volatile signed __int32 **)a1;
  }
  v10 = &v9[18 * v7];
  v11 = _mm_loadh_ps((const double *)&v42);
  *((_QWORD *)v10 + 2) = v43;
  v12 = v41;
  *(__m128 *)v10 = v11;
  v13 = _mm_loadh_ps((const double *)&v40);
  *((_QWORD *)v10 + 5) = v12;
  v14 = v39;
  *(__m128 *)(v10 + 6) = v13;
  v15 = _mm_loadh_ps((const double *)&v38);
  *((_QWORD *)v10 + 8) = v14;
  *((__m128 *)v10 + 3) = v15;
  ++*((_QWORD *)v4 + 1);
  return v47 - __readfsqword(0x28u);
}
