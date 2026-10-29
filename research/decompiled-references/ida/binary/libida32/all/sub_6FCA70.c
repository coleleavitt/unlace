__int64 __fastcall sub_6FCA70(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 v33; // rdi
  __int64 v34; // r15

  v11 = sub_6F7DE0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( !(_BYTE)v11 )
    return 0;
  v16 = v11;
  if ( (*(_BYTE *)(a2 + 74) & 1) != 0 )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v12, v13, v14, v15);
    v22 = *(_QWORD *)(a2 + 128);
    v23 = (*(_BYTE *)(v22 + 24) & 1) != 0 ? sub_B72C40() : *(_QWORD *)(v22 + 24);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v18, v19, v20, v21);
    v24 = v23 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v25, v26, v27, v28);
    v33 = *(_QWORD *)(a2 + 128);
    v34 = (*(_BYTE *)(v33 + 24) & 1) != 0 ? sub_B72C40() : *(_QWORD *)(v33 + 24);
    if ( v24 != v34 )
    {
      while ( (unsigned __int8)sub_6F74E0(
                                 a1,
                                 **(_QWORD **)(v34 + 16),
                                 *(_QWORD *)(v34 + 16) + 8LL,
                                 v29,
                                 v30,
                                 a3,
                                 a4,
                                 a5,
                                 a6,
                                 v31,
                                 v32,
                                 a9,
                                 a10) )
      {
        v34 += 24;
        if ( v34 == v24 )
          return v16;
      }
      return 0;
    }
  }
  return v16;
}

