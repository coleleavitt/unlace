unsigned __int64 __fastcall sub_191BD20(
        __int64 a1,
        _QWORD *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8

  v8 = sub_19179A0(a1, a2, 1u, a6, a7, a8, a3, a4);
  if ( v8 == 1 )
    return 1;
  v10 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v11 = sub_18C0DF0(a1, v8 & 0xFFFFFFFFFFFFFFFELL, *(double *)a3.m128_u64, *(double *)a4.m128_u64);
  if ( v11 == 1 )
    return 1;
  v16 = v11 & 0xFFFFFFFFFFFFFFFELL;
  v17 = *(_QWORD *)(v16 + 8);
  v18 = v16;
  if ( !sub_F61920(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL), v10, v12, v13, v14, v15) )
    return v18;
  v19 = sub_AA7480(*(_QWORD **)(a1 + 248), v18);
  if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    if ( !sub_A62E10(*(_QWORD *)(a1 + 248), v17, v20, v21, v22) )
      return v18;
    v19 = sub_AAF890(*(__int64 **)(a1 + 248), v17, v23, v24, v25);
  }
  return sub_160A600(a1, v18, v19, 0x1Bu, 0, 0, *(double *)a3.m128_u64, *(double *)a4.m128_u64, 0)
       & 0xFFFFFFFFFFFFFFFELL;
}
