__int64 __fastcall sub_75A60(__int64 a1, __int64 (__fastcall **a2)(_QWORD, int *, _QWORD *, __int64), unsigned int a3)
{
  __int64 v4; // r12
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 *v10; // rbx
  __m128i *v11; // rsi
  __m128i si128; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-60h] BYREF
  __int64 (__fastcall **v16[3])(_QWORD, int *, _QWORD *, __int64); // [rsp+10h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 144) + 120LL * a3;
  if ( *(_WORD *)(v4 + 82) == 0xFFFF || !*(_DWORD *)(v4 + 92) )
  {
    return 1;
  }
  else
  {
    (*(void (__fastcall **)(__int64 *))(**(_QWORD **)(a1 + 608) + 24LL))(&v15);
    if ( v15
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 40LL))(
           v15,
           (unsigned int)(*(_DWORD *)(v4 + 84) + *(_DWORD *)(v4 + 88))) )
    {
      v6 = *(_QWORD *)(a1 + 600);
      v7 = *(_DWORD *)(v4 + 92);
      v16[1] = (__int64 (__fastcall **)(_QWORD, int *, _QWORD *, __int64))a1;
      v16[0] = (__int64 (__fastcall **)(_QWORD, int *, _QWORD *, __int64))&off_B2278;
      v16[2] = a2;
      v17 = a3;
      v8 = sub_55CF0(&v15, v7, v16, v6);
    }
    else
    {
      v10 = *(__int64 **)(a1 + 600);
      v11 = (__m128i *)*v10;
      if ( (unsigned __int64)v10[2] <= 0x24 )
      {
        v14 = qvector_reserve(v10, v11, 37, 1);
        *v10 = v14;
        v11 = (__m128i *)v14;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_94250);
      v10[1] = 37;
      v11[2].m128i_i32[0] = 173229390;
      *v11 = si128;
      v11[1] = _mm_load_si128((const __m128i *)&xmmword_94260);
      v13 = *v10;
      v8 = 0;
      *(_BYTE *)(v13 + 36) = 0;
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  }
  return v8;
}
