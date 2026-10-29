unsigned __int64 __fastcall sub_655F50(__int64 *a1, __int64 a2)
{
  int v3; // r13d
  int v5; // esi
  __int32 v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  __m128i v11; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( *(char *)(a2 + 9) >= 0 )
    {
      v3 = *(_DWORD *)(a2 + 88);
      if ( v3 )
      {
        if ( !*(_QWORD *)(a2 + 96) )
        {
          v5 = *(_DWORD *)a2;
          ptr = nullptr;
          v13 = 0;
          v6 = sub_3B90A0(a1, v5);
          v7 = *a1;
          v11.m128i_i32[0] = v6;
          if ( sub_79BAE0(&v11, v7, &ptr, 1, 24576, 83) <= 0 )
          {
            *(_DWORD *)(a2 + 88) = 0;
            sub_365330();
          }
          v11 = _mm_unpacklo_epi64(
                  (__m128i)(unsigned __int64)ptr,
                  (__m128i)(unsigned __int64)((unsigned __int64)ptr + v13));
          v8 = qcalloc(v3, 24);
          v9 = v8;
          if ( !v8 )
            sub_3B74D0((int)"read_regargs");
          *(_QWORD *)(a2 + 96) = v8;
          if ( v3 > 0 )
          {
            v10 = v8 + 24LL * v3;
            do
            {
              *(_DWORD *)v9 = unpack_dd(&v11);
              *(_QWORD *)(v9 + 8) = unpack_ds(&v11, v11.m128i_i64[1], 1);
              *(_QWORD *)(v9 + 16) = unpack_ds(&v11, v11.m128i_i64[1], 1);
              v9 += 24;
            }
            while ( v9 != v10 );
          }
          if ( ptr )
          {
            *(_QWORD *)&v13 = 0;
            qfree(ptr);
          }
        }
      }
    }
  }
  return v14 - __readfsqword(0x28u);
}

