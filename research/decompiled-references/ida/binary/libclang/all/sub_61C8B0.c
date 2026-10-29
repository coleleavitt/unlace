__int64 __fastcall sub_61C8B0(__int64 *a1, const __m128i *a2, unsigned int *a3)
{
  unsigned int *v3; // rbp
  unsigned int v4; // eax
  unsigned int v5; // r13d
  __int64 v6; // rax
  const __m128i *v7; // rbx
  unsigned int *v8; // r15
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __m128i v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h]
  __int64 v14; // [rsp+18h] [rbp-40h]

  v3 = a3;
  v4 = sub_619380(a1, a2[2].m128i_i64[0], *a3);
  if ( (_BYTE)v4 )
    return 1;
  v5 = v4;
  v6 = a2[1].m128i_u32[1];
  if ( (_DWORD)v6 )
  {
    v7 = a2 + 3;
    v8 = &v3[2 * v6];
    while ( 1 )
    {
      v9 = _mm_loadu_si128(v7);
      v10 = v7[1].m128i_i64[0];
      v14 = *((_QWORD *)v3 + 2);
      v13 = v10;
      v12 = v9;
      if ( (unsigned __int8)sub_61C470(a1, (__int64)&v12) )
        break;
      v3 += 2;
      v7 = (const __m128i *)((char *)v7 + 24);
      if ( v3 == v8 )
        return v5;
    }
    return 1;
  }
  return v5;
}

