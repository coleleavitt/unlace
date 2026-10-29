__int64 __fastcall sub_1506700(const __m128i *a1)
{
  unsigned int v2; // r12d
  unsigned int *v3; // rbp
  const __m128i *v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  _BYTE *v7; // rbp
  signed __int64 v8; // r15
  void *v9; // rdi
  _BYTE *v11; // r15
  signed __int64 v12; // r14
  int v13; // ebp
  int v14; // edx
  __int64 *v15; // rdi
  int v16; // [rsp+0h] [rbp-118h]
  int *m128i_i32; // [rsp+10h] [rbp-108h]
  unsigned __int32 v18; // [rsp+1Ch] [rbp-FCh]
  __m128i v19; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-D8h]
  void *v21; // [rsp+50h] [rbp-C8h] BYREF
  signed __int64 v22; // [rsp+58h] [rbp-C0h]
  _BYTE v23[16]; // [rsp+60h] [rbp-B8h] BYREF
  void *v24; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+78h] [rbp-A0h]
  _BYTE v26[16]; // [rsp+80h] [rbp-98h] BYREF
  void *v27[2]; // [rsp+90h] [rbp-88h] BYREF
  char v28; // [rsp+A0h] [rbp-78h] BYREF

  if ( !(_BYTE)byte_2CD8B08 && __cxa_guard_acquire(&byte_2CD8B08) )
  {
    sub_20FD9A0(&unk_2CD8B10, 1);
    __cxa_atexit(sub_1506B30, &unk_2CD8B10, &off_2B25620);
    __cxa_guard_release(&byte_2CD8B08);
  }
  v2 = 103;
  v20 = a1[2].m128i_i64[0];
  v19 = _mm_loadu_si128(a1 + 1);
  if ( sub_10CCDE0(v20) )
    return v2;
  sub_13D35F0(
    (__int64)&v21,
    (__int64)&v19,
    *(_QWORD *)(a1->m128i_i64[1] + 88),
    *(_QWORD *)(a1->m128i_i64[1] + 56),
    nullptr);
  v18 = v19.m128i_i32[0];
  v3 = (unsigned int *)sub_20FDA40(&unk_2CD8B10, &unk_2CD8B10, v21, v22);
  if ( !v3 )
  {
LABEL_14:
    v9 = v21;
    if ( v21 == v23 )
      return v2;
LABEL_15:
    operator delete(v9);
    return v2;
  }
  m128i_i32 = a1[1].m128i_i32;
  while ( !sub_10CCDE0(v20) )
  {
    v5 = a1->m128i_i64[1];
    v2 = *v3;
    v6 = *(_QWORD *)(v5 + 2944);
    if ( v6 < *(unsigned int *)(v5 + 2912) )
      v4 = (const __m128i *)(*(_QWORD *)(v5 + 2904) + 24 * v6);
    else
      v4 = (const __m128i *)sub_14180A0(v5, 1u);
    v19 = _mm_loadu_si128(v4);
    LODWORD(v20) = v4[1].m128i_i32[0];
    if ( !sub_10CCDE0(v20) )
    {
      sub_13D35F0(
        (__int64)&v24,
        (__int64)&v19,
        *(_QWORD *)(a1->m128i_i64[1] + 88),
        *(_QWORD *)(a1->m128i_i64[1] + 56),
        nullptr);
      v3 = (unsigned int *)sub_20FDA40(&unk_2CD8B10, v3, v24, v25);
      if ( !v3 )
      {
        v7 = v21;
        v8 = v22;
        v16 = *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL);
        if ( (int)((unsigned __int64)sub_20EDA70(v21, v22) >> 32) > v16 )
        {
          sub_1564820(v27, a1, v18, 2173);
          sub_AEC220((unsigned __int8 **)v27, v7, v8);
          sub_AEA040((__int64)v27);
        }
        if ( v24 != v26 )
          operator delete(v24);
        goto LABEL_14;
      }
      sub_13ACC30((__int64)v27, 32, (__int64)&v24);
      sub_9EE560(&v21, (_BYTE *)v27[0], (size_t)v27[1]);
      if ( v27[0] != &v28 )
        operator delete(v27[0]);
      v15 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v15, m128i_i32);
      if ( v24 != v26 )
        operator delete(v24);
    }
  }
  v11 = v21;
  v12 = v22;
  v2 = *v3;
  v13 = *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL);
  v24 = (void *)sub_20EDA70(v21, v22);
  LODWORD(v25) = v14;
  if ( SHIDWORD(v24) <= v13 )
    goto LABEL_14;
  sub_1564820(v27, a1, v18, 2173);
  sub_AEC220((unsigned __int8 **)v27, v11, v12);
  sub_AEA040((__int64)v27);
  v9 = v21;
  if ( v21 != v23 )
    goto LABEL_15;
  return v2;
}
