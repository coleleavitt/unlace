__int64 __fastcall sub_1AF1680(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, _QWORD, _QWORD),
        __int64 a5,
        char a6,
        unsigned __int8 (__fastcall *a7)(__int64, _QWORD, __int64, __int64, __int64),
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // r14
  __m128i v19; // xmm2
  __int64 v20; // rax
  __int64 v23; // [rsp+18h] [rbp-80h]
  __int64 v24; // [rsp+28h] [rbp-70h] BYREF
  __m128i v25; // [rsp+30h] [rbp-68h] BYREF
  __m128i v26; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+50h] [rbp-48h]

  v8 = *(unsigned int *)(a2 + 344);
  if ( !(_DWORD)v8 )
    goto LABEL_3;
  v10 = *(_QWORD *)(a2 + 336) + 6776 * v8 - 6776;
  if ( *(_QWORD *)(v10 + 6768) != *(_QWORD *)(a2 + 328) )
    goto LABEL_3;
  if ( *(_DWORD *)(v10 + 8) <= *(_DWORD *)(a2 + 27504) )
    goto LABEL_3;
  v23 = sub_1AEE450(a3);
  v13 = *(unsigned int *)(a2 + 344);
  if ( !(_DWORD)v13 )
    goto LABEL_3;
  v14 = *(_QWORD *)(a2 + 336) + 6776 * v13 - 6776;
  v15 = *(_QWORD *)v14;
  v16 = *(unsigned int *)(v14 + 8);
  v17 = *(unsigned int *)(a2 + 27504);
  v18 = v15 + 1688 * (v16 - v17);
  if ( a6 )
  {
    if ( v15 == v18 )
      goto LABEL_3;
    v18 -= 1688;
  }
  if ( v15 != v18 )
  {
    if ( a7(a8, *(unsigned int *)(v18 - 712), v17, v12, a5) )
    {
      v24 = v18;
      sub_1AF0DC0((__int64)&v25, a2, &v24, v23);
      if ( v18 == v24 )
      {
        if ( a4(a5, v25.m128i_u32[1], BYTE4(v27)) )
        {
          v19 = _mm_load_si128(&v26);
          v20 = v27;
          *(__m128i *)a1 = _mm_load_si128(&v25);
          *(__m128i *)(a1 + 16) = v19;
          *(_QWORD *)(a1 + 32) = v20;
          return a1;
        }
      }
    }
  }
LABEL_3:
  *(_QWORD *)a1 = 0x6A00000067LL;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  return a1;
}
