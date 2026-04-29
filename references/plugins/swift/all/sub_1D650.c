__int64 __fastcall sub_1D650(_QWORD *a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+8h] [rbp-50h]
  __m128i v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v9 = 0;
  v8 = 0;
  v11 = 0;
  v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_27B58, (__m128i)(unsigned __int64)&v8);
  v1 = 1;
  if ( (unsigned int)sub_1C4A0((__int64)&v10, a1, 0, 0) != -1 )
    LOBYTE(v1) = (unsigned __int64)v9 > 4;
  v2 = v8;
  if ( v8 )
  {
    v3 = v9;
    if ( (_QWORD)v9 )
    {
      v4 = 0;
      do
      {
        v5 = (__int64 *)(v2 + 32 * v4);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6);
          v2 = v8;
        }
        ++v4;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&v9 = 0;
    qfree(v2);
  }
  return v1;
}
