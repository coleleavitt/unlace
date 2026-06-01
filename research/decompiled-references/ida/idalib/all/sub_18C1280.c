__int64 __fastcall sub_18C1280(__int64 *a1, __int64 a2, __int64 a3, __m128i *a4, _QWORD *a5, __int64 a6, double a7)
{
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v17[7]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a2 == 7 )
  {
    *(_DWORD *)(a3 + 272) = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 36LL);
    *(_DWORD *)(a3 + 276) = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 40LL);
    v11 = *(_QWORD *)(a2 + 8);
    v12 = v11 + 56;
    v13 = *(unsigned int *)(v11 + 44);
    v17[0] = v12;
    v17[1] = v13;
    sub_1CB4530(a1, v17, a3);
    sub_F22A90(&v16, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL));
    sub_A635F0((__int64)&v14, a1[31], v16, *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4LL), a7);
    result = v15;
    *a4 = _mm_loadu_si128(&v14);
    a4[1].m128i_i64[0] = result;
    *a5 = a3;
  }
  else
  {
    sub_17B41B0((__int64)&v14, a1, (unsigned int *)a2, a7, (__int64)a4, (__int64)a5, a6);
    result = v15;
    *a4 = _mm_loadu_si128(&v14);
    a4[1].m128i_i64[0] = result;
    *a5 = 0;
  }
  return result;
}
