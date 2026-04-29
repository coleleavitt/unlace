__int64 __fastcall sub_3CB8E0(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebp
  int v5; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i v9; // xmm0
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 (__fastcall **v19)(); // [rsp+0h] [rbp-C8h] BYREF
  _BYTE v20[28]; // [rsp+8h] [rbp-C0h]
  __int128 v21; // [rsp+28h] [rbp-A0h]
  __int128 v22; // [rsp+38h] [rbp-90h]
  _QWORD v23[5]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v24; // [rsp+78h] [rbp-50h]
  __int128 v25; // [rsp+88h] [rbp-40h]
  unsigned __int64 v26; // [rsp+98h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v2 = a2->m128i_i64[0];
  if ( !a2->m128i_i64[0] )
    return 0;
  v3 = 0;
  if ( (unsigned int)(*(_DWORD *)(v2 + 60) - 1) > 1 )
    return v3;
  *(_QWORD *)&v20[20] = 0x4900000000LL;
  *(_QWORD *)((char *)&v23[3] + 4) = 0x4900000000LL;
  v22 = -1;
  v25 = -1;
  v5 = *(_DWORD *)(v2 + 60);
  v19 = off_4E8410;
  *(_QWORD *)&v20[4] = 3;
  *(_QWORD *)&v20[12] = 0;
  v23[0] = off_4E8410;
  *(_QWORD *)((char *)&v23[1] + 4) = 3;
  *(_QWORD *)((char *)&v23[2] + 4) = 0;
  v21 = -1;
  v24 = -1;
  if ( (unsigned int)(v5 - 1) > 1 )
    return 0;
  if ( *(int *)(*(_QWORD *)(v2 + 64) + 64LL) <= 0 )
    return 0;
  *(_DWORD *)v20 = 0;
  sub_3CA9E0(a1, (__int64)&v19, v2);
  v3 = sub_3CAD80(a1, v23, a2->m128i_i64[0]);
  if ( !(_BYTE)v3 )
    return 0;
  v9 = _mm_loadu_si128(a2);
  *a2 = 0;
  v10 = *(volatile signed __int32 **)(a1 + 72);
  v11 = v9.m128i_i64[0];
  *(__m128i *)(a1 + 64) = v9;
  if ( v10 )
  {
    sub_3CB2E0(v10);
    v11 = *(_QWORD *)(a1 + 64);
  }
  v12 = *(_DWORD *)(v11 + 56);
  v13 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 56) = v12;
  if ( v13 )
    qfree();
  v14 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)(), _QWORD *, __int64, __int64))callui)(
    74,
    v14,
    &v19,
    v23,
    v7,
    v8);
  callui(67, *(_QWORD *)a1, v15, v16, v17, v18, v19, *(_QWORD *)v20, *(_QWORD *)&v20[8], *(_QWORD *)&v20[16]);
  return v3;
}
