unsigned __int64 __fastcall sub_33F870(__int64 a1, void (__fastcall ***a2)(_QWORD, __int64 *, __m128i *))
{
  bool v2; // zf
  _DWORD *v4; // rax
  int v5; // r15d
  __int64 v6; // rbp
  size_t v8; // rbp
  __int64 *v9; // rax
  __int64 *v10; // rsi
  __int64 *v11; // r12
  __int64 *v12; // rbp
  __int64 *v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i v17; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v2 = *(_BYTE *)(a1 + 345) == 0;
  v18 = __readfsqword(0x28u);
  v4 = *(_DWORD **)(a1 + 32);
  v17 = _mm_loadu_si128((const __m128i *)(a1 + 184));
  if ( v2 )
    v5 = v4[7] + 1 - v4[5];
  else
    v5 = v4[8] + 1 - v4[6];
  v6 = *(_QWORD *)(a1 + 120);
  if ( v6 )
  {
    v8 = 32 * v6;
    v9 = (__int64 *)qalloc_or_throw(v8);
    v10 = *(__int64 **)(a1 + 112);
    v11 = v9;
    memcpy(v9, v10, v8);
    v12 = &v11[v8 / 8];
    if ( v12 != v11 )
    {
      v13 = v11;
      do
      {
        v15 = v13[2];
        if ( v15 == -1 )
          v16 = -1;
        else
          v16 = v15 - *(_QWORD *)(a1 + 200);
        if ( v16 >= v5 )
          break;
        if ( !*((_BYTE *)v13 + 24) )
        {
          v14 = v13[1];
          if ( v17.m128i_i64[0] < v14 )
          {
            if ( v17.m128i_i64[0] < (unsigned __int64)*v13 )
              v17.m128i_i64[0] = *v13;
            v17.m128i_i64[1] = v14;
            v10 = v13;
            (**a2)(a2, v13, &v17);
          }
        }
        v13 += 4;
      }
      while ( v12 != v13 );
    }
    if ( v11 )
      qfree(v11, (const char *)v10);
  }
  return v18 - __readfsqword(0x28u);
}
