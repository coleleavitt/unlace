__int64 __fastcall sub_901D80(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rbx
  const __m128i *v10; // rbx
  __m128i *v11; // rax
  _QWORD v12[4]; // [rsp+0h] [rbp-68h] BYREF
  int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+30h] [rbp-38h]

  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !(unsigned __int8)sub_9D4FE0(a1, a2, v4, 2) || !(unsigned __int8)sub_9D7120(a1, a2, v4, 2) )
    return 0;
  sub_A1C030(v12, *(_QWORD *)(v4 + 24), (unsigned int)(a3 + *(_DWORD *)v4), (unsigned int)(a3 + *(_DWORD *)v4));
  v6 = sub_9E4580(a1, a2, v12, 0);
  if ( (_BYTE)v6 )
  {
    v7 = *(_QWORD *)(a1 + 184);
    v8 = v12[3];
    v9 = v12[0];
    if ( !v14 && *(_BYTE *)(sub_8E5480((__int64)v12) + 51) && v9 == v13 )
      v10 = (const __m128i *)(v8 + v9 + 72);
    else
      v10 = (const __m128i *)(v8 + v9 + 40);
    v11 = (__m128i *)sub_A1A4E0(v7, 24);
    *v11 = _mm_loadu_si128(v10);
    v11[1].m128i_i64[0] = v10[1].m128i_i64[0];
    sub_A1C0C0(v12);
  }
  else
  {
    sub_A1C0C0(v12);
  }
  return v6;
}

