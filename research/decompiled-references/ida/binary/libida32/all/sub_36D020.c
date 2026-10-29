__int64 __fastcall sub_36D020(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // r15
  __m128i v5; // xmm0
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __m128i v10; // [rsp+8h] [rbp-90h] BYREF
  __int64 v11; // [rsp+18h] [rbp-80h] BYREF
  void *v12; // [rsp+20h] [rbp-78h] BYREF
  __m128i v13; // [rsp+28h] [rbp-70h] BYREF
  __int64 v14; // [rsp+38h] [rbp-60h]
  void *ptr; // [rsp+40h] [rbp-58h]
  __int128 v16; // [rsp+48h] [rbp-50h]
  unsigned __int64 v17; // [rsp+58h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v11 = 0;
  v2 = sub_36C270((__int64)&v11, (char *)(a1 + 32), 0);
  if ( !v2 )
  {
    if ( *(_BYTE *)(a1 + 64) == 10 )
    {
      v4 = deref_idcv(a1 + 64, 1);
      v12 = nullptr;
      v14 = 0;
      ptr = nullptr;
      v13 = 0;
      v16 = 0;
      v2 = pack_idcobj_to_bv(a1, (int)&v11, (int)&v12);
      if ( !v2 )
      {
        if ( *(_DWORD *)(a2 + 8) == 5 )
        {
          v8 = getinf_flag(3, 32);
          relocate_relobj(&v12, *(unsigned int *)(a1 + 136), v8);
        }
        v5 = _mm_loadl_epi64(&v13);
        *(_BYTE *)v4 = 7;
        *(_QWORD *)(v4 + 8) = 0;
        v6 = (__int64)v12;
        v7 = v13.m128i_i64[0];
        *(_OWORD *)(v4 + 16) = 0;
        if ( v7 < v13.m128i_i64[1] )
        {
          if ( v7 )
          {
            if ( v6 )
            {
              v10.m128i_i64[0] = v5.m128i_i64[0];
              v9 = qrealloc();
              v5 = _mm_loadl_epi64(&v10);
              v6 = v9;
              if ( !v9 )
                v6 = (__int64)v12;
            }
          }
        }
        v12 = nullptr;
        v13 = 0;
        *(_QWORD *)(v4 + 8) = v6;
        *(__m128i *)(v4 + 16) = _mm_unpacklo_epi64(v5, v5);
      }
      if ( ptr )
      {
        *(_QWORD *)&v16 = 0;
        qfree(ptr);
      }
      if ( v12 )
      {
        v13.m128i_i64[0] = 0;
        qfree(v12);
      }
    }
    else
    {
      v2 = pack_idcobj_to_idb(a1, (int)&v11, *(unsigned int *)(a1 + 72));
    }
  }
  clear_tinfo_t(&v11);
  return v2;
}

