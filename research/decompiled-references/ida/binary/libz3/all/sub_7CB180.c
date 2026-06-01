void __fastcall sub_7CB180(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  const __m128i *v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  __m128i v8; // [rsp+10h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 1880);
  if ( v1 )
  {
    v3 = *(unsigned int *)(a1 + 1872);
    do
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(v1 - 4) || *(_BYTE *)(*(_QWORD *)(a1 + 24) + 3184LL) || *(_BYTE *)(a1 + 1828) )
        break;
      v4 = (const __m128i *)(32 * v3 + v1);
      v7 = _mm_loadu_si128(v4);
      v8 = _mm_loadu_si128(v4 + 1);
      if ( v8.m128i_i64[1] )
      {
        if ( !(unsigned __int8)sub_7CB0A0(a1, (__int64)&v7) )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(a1 + 2400) + 8LL * v7.m128i_u32[0]);
          (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v5 + 400LL))(v5, &v7);
        }
      }
      else
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 2400) + 8LL * v7.m128i_u32[0]);
        (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v6 + 416LL))(v6, &v7);
      }
      sub_13D6430(a1 + 1592);
      v1 = *(_QWORD *)(a1 + 1880);
      v3 = (unsigned int)(*(_DWORD *)(a1 + 1872) + 1);
      *(_DWORD *)(a1 + 1872) = v3;
    }
    while ( v1 );
  }
}

