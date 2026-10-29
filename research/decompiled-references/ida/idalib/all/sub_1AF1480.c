__int64 __fastcall sub_1AF1480(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, _QWORD, _QWORD, _QWORD),
        __int64 a5,
        char a6,
        unsigned __int8 (__fastcall *a7)(__int64, __int64),
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  unsigned int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __m128i v19; // xmm2
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // al
  __int64 v26; // [rsp+10h] [rbp-98h]
  __int64 v28; // [rsp+28h] [rbp-80h]
  unsigned __int64 v29; // [rsp+38h] [rbp-70h] BYREF
  __m128i v30; // [rsp+40h] [rbp-68h] BYREF
  __m128i v31; // [rsp+50h] [rbp-58h] BYREF
  __int64 v32; // [rsp+60h] [rbp-48h]

  v8 = *(unsigned int *)(a2 + 344);
  if ( !(_DWORD)v8 )
    goto LABEL_3;
  v10 = *(_QWORD *)(a2 + 336) + 6776 * v8 - 6776;
  if ( *(_QWORD *)(v10 + 6768) != *(_QWORD *)(a2 + 328) )
    goto LABEL_3;
  if ( *(_DWORD *)(v10 + 8) <= *(_DWORD *)(a2 + 27504) )
    goto LABEL_3;
  v26 = sub_1AEE450(a3);
  v12 = *(unsigned int *)(a2 + 344);
  if ( !(_DWORD)v12 )
    goto LABEL_3;
  v13 = *(_QWORD *)(a2 + 336) + 6776 * v12 - 6776;
  v28 = *(_QWORD *)v13;
  v14 = *(_QWORD *)v13 + 1688 * (*(unsigned int *)(v13 + 8) - (unsigned __int64)*(unsigned int *)(a2 + 27504));
  if ( a6 )
  {
    if ( *(_QWORD *)v13 == v14 )
    {
LABEL_3:
      *(_QWORD *)a1 = 0x6A00000067LL;
      *(_OWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      return a1;
    }
    v14 -= 1688LL;
  }
  if ( v28 == v14 )
    goto LABEL_3;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v14 - 712);
    if ( a7(a8, v15)
      || (v16 = *(_DWORD *)(v14 - 712), sub_FFE740(v16))
      || sub_FFEA60(v16, v15, v17, v18)
      || (v23 = sub_FFEF70(v16, v15, v21, v22), v16 == 103)
      || v23 )
    {
      v29 = v14;
      sub_1AF0DC0((__int64)&v30, a2, (__int64 *)&v29, v26);
      if ( v29 == v14 )
      {
        if ( a4(a5, v30.m128i_u32[1], BYTE4(v32), *(unsigned int *)(v14 - 760)) )
          break;
      }
    }
    v14 -= 1688LL;
    if ( v28 == v14 )
      goto LABEL_3;
  }
  v19 = _mm_load_si128(&v31);
  v20 = v32;
  *(__m128i *)a1 = _mm_load_si128(&v30);
  *(__m128i *)(a1 + 16) = v19;
  *(_QWORD *)(a1 + 32) = v20;
  return a1;
}
