__int64 __fastcall sub_13FDF0(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __m128i v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h] BYREF
  __m128i v15; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v4 = sub_174CB0(a1 + 136);
  if ( !(_BYTE)v4 )
  {
    v5 = v4;
    v7 = sub_1545C0(a3);
    if ( !v7 )
      return v5;
    sub_154460(&v14, v7);
    v8 = *a2;
    v9 = v14;
    v14 = 0;
    v10 = _mm_loadu_si128(&v15);
    v15 = 0;
    if ( v8 )
    {
      a2[1] = 0;
      v13 = v10;
      qfree();
      v11 = _mm_load_si128(&v13);
      v12 = v14;
      *a2 = v9;
      *(__m128i *)(a2 + 1) = v11;
      if ( v12 )
      {
        v15.m128i_i64[0] = 0;
        qfree();
      }
    }
    else
    {
      *a2 = v9;
      *(__m128i *)(a2 + 1) = v10;
    }
  }
  return 1;
}

