__int64 __fastcall sub_1EA140(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  __m128i v12; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v11 = 0;
  v3 = (__int64 *)unk_8CAC18;
  v12 = 0;
  if ( !unk_8CAC18 )
  {
    v10 = operator new(0x18u);
    *(_QWORD *)v10 = 0;
    v3 = (__int64 *)v10;
    unk_8CAC18 = v10;
    *(_OWORD *)(v10 + 8) = 0;
  }
  v4 = sub_194860(v3, &v11, *(_QWORD *)(a1 + 96), 1);
  v5 = v11;
  v6 = v4;
  if ( a2 )
  {
    v5 = *(_QWORD *)a2;
    v7 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v11;
    v8 = _mm_loadu_si128(&v12);
    v11 = v5;
    v12.m128i_i64[1] = v7;
    *(__m128i *)(a2 + 8) = v8;
  }
  if ( v5 )
  {
    v12.m128i_i64[0] = 0;
    qfree(v5, (const char *)&v11);
  }
  return v6;
}
