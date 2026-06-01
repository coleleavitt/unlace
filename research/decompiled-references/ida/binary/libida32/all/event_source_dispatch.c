__int64 __fastcall event_source_dispatch(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rdi
  __int64 result; // rax
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 16);
  v11 = __readfsqword(0x28u);
  v5 = *(__int64 **)(a1 + 8);
  v6 = &v5[v4];
  if ( v6 == v5 )
    return 0;
  while ( 1 )
  {
    v7 = *v5;
    v9 = _mm_loadu_si128(a3);
    v10 = a3[1].m128i_i64[0];
    result = (*(__int64 (__fastcall **)(__int64, __int64, __m128i *))(*(_QWORD *)v7 + 16LL))(v7, a2, &v9);
    if ( result )
      break;
    if ( v6 == ++v5 )
      return 0;
  }
  return result;
}

