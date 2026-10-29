unsigned __int64 __fastcall sub_60C6E0(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (__fastcall ***a3)(_QWORD, __int64, __int64, __int64, __int64))
{
  unsigned int v5; // r13d
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 named_type; // rbx
  __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+10h] [rbp-68h] BYREF
  __int64 v20; // [rsp+18h] [rbp-60h] BYREF
  __m128i v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 180);
  v22 = __readfsqword(0x28u);
  if ( (v5 & 2) == 0 )
  {
    v7 = 0;
    *(_DWORD *)(a1 + 180) = v5 & 0xFFFFFFDF;
    while ( *(_DWORD *)(a2 + 16) > (int)v7 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v7++);
      sub_60C6E0(a1, v8, a3);
    }
    *(_DWORD *)(a1 + 180) = v5;
  }
  if ( (v5 & 0x20) == 0 )
  {
    named_type = first_named_type(a2, v5);
    if ( named_type )
    {
      v18 = a1 + 184;
      do
      {
        if ( (unsigned int)get_named_type(
                             a2,
                             named_type,
                             *(_DWORD *)(a1 + 180),
                             (unsigned int)&v19,
                             (unsigned int)&v20,
                             0,
                             0,
                             0,
                             0)
          && (!a3 || (**a3)(a3, a2, named_type, v19, v20)) )
        {
          v17 = *(_QWORD *)(a1 + 192);
          v21.m128i_i64[0] = named_type;
          v16 = *(_QWORD *)(a1 + 184);
          v21.m128i_i64[1] = a2;
          v12 = *(_QWORD *)(a1 + 200);
          v13 = v17 + 1;
          if ( (unsigned __int64)&v21 < v16 || (unsigned __int64)&v21 >= v16 + 16 * v12 )
          {
            if ( v12 < v13 )
            {
              v14 = qvector_reserve(v18, v16, v17 + 1, 16);
              *(_QWORD *)(a1 + 184) = v14;
              v16 = v14;
              v17 = *(_QWORD *)(a1 + 192);
            }
            *(__m128i *)(v16 + 16 * v17) = _mm_load_si128(&v21);
          }
          else
          {
            if ( v12 < v13 )
            {
              v15 = qvector_reserve(v18, v16, v17 + 1, 16);
              *(_QWORD *)(a1 + 184) = v15;
              v16 = v15;
              v17 = *(_QWORD *)(a1 + 192);
            }
            v11 = (__int64 *)(v16 + 16 * v17);
            *v11 = named_type;
            v11[1] = a2;
          }
          ++*(_QWORD *)(a1 + 192);
        }
        named_type = next_named_type(a2, named_type, *(unsigned int *)(a1 + 180));
      }
      while ( named_type );
    }
  }
  return v22 - __readfsqword(0x28u);
}
