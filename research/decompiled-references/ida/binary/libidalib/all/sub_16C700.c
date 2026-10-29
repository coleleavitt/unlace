unsigned __int64 __fastcall sub_16C700(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r12d
  __int32 v7; // eax
  int v8; // r13d
  _DWORD *v9; // rbp
  __int64 v10; // rbx
  __m128i v12; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v13; // [rsp+10h] [rbp-A8h]
  __int32 v14; // [rsp+20h] [rbp-98h]
  __int64 v15; // [rsp+28h] [rbp-90h]
  _BYTE v16[88]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp-30h]

  v6 = a3;
  v7 = a2[2].m128i_i32[0];
  v17 = __readfsqword(0x28u);
  v8 = a4;
  v9 = (_DWORD *)a2[2].m128i_i64[1];
  v15 = 0;
  v12 = _mm_loadu_si128(a2);
  v14 = v7;
  v13 = _mm_loadu_si128(a2 + 1);
  if ( v9 )
  {
    v15 = (*(__int64 (__fastcall **)(_DWORD *, const __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int32))(*(_QWORD *)v9 + 16LL))(
            v9,
            a2,
            a3,
            a4,
            a5,
            a6,
            v12.m128i_i64[0],
            v12.m128i_i64[1],
            v13.m128i_i64[0],
            v13.m128i_i64[1],
            v14);
    v9 = (_DWORD *)v15;
  }
  if ( v9[2] == -1 )
    v9[2] = (*(__int16 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a1 + 288LL))(a1, &v12);
  if ( (v6 & 1) != 0 )
    sub_15EA20(a1, &v12);
  sub_169320((__int64)v16, a1, 6, v8, -32768, a6);
  if ( (v6 & 4) != 0 )
    sub_1758E0(TProgram::application + 136LL, a1, 1);
  if ( (v6 & 0x10000) != 0 )
  {
    v10 = a1 + 440;
    if ( (unsigned __int8)sub_15D340(a1 + 440, nullptr) || (v6 & 2) != 0 )
      goto LABEL_11;
  }
  else
  {
    v10 = a1 + 440;
    if ( (v6 & 2) != 0 )
    {
LABEL_11:
      sub_16B2E0(v10, &v12, byte_251368);
      goto LABEL_12;
    }
  }
  sub_16B280(v10, &v12);
LABEL_12:
  sub_169C90((__int64)v16);
  if ( v15 )
    qfree();
  return v17 - __readfsqword(0x28u);
}

