__int64 __fastcall sub_2EC300(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 1;
  v12[1] = __readfsqword(0x28u);
  v2 = sub_3047E0(QT::QCoreApplication::self, 1);
  result = 0;
  if ( v2 )
  {
    v11.m128i_i32[2] = 0;
    v12[0] = 0;
    v11.m128i_i64[0] = getinf(19);
    v8 = *((_DWORD *)a1 + 2);
    if ( v8 == 27 )
    {
      v1 = 0;
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 720LL))(*a1, 0);
      if ( v10 != -1 )
        v11.m128i_i64[0] = v10;
    }
    else if ( v8 == 58 )
    {
      v1 = a1[26];
      if ( v1 )
      {
        v11.m128i_i32[2] = *(_DWORD *)(v1 + 24);
        sub_3ADD60(v12);
      }
    }
    v9 = _mm_load_si128(&v11);
    sub_2EC1D0(v2, v1, v4, v5, v6, v7, v9.m128i_i64[0], v9.m128i_i64[1], v12[0]);
    return 1;
  }
  return result;
}
