unsigned __int64 __fastcall sub_3D9930(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v6; // r15d
  int v7; // r12d
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  _OWORD v16[4]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-78h]
  __int64 v18; // [rsp+58h] [rbp-70h]
  __int64 v19; // [rsp+60h] [rbp-68h]
  __int64 v20; // [rsp+68h] [rbp-60h]
  void *ptr; // [rsp+70h] [rbp-58h]
  __int128 v22; // [rsp+78h] [rbp-50h]
  unsigned __int64 v23; // [rsp+88h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a4 > 2 )
  {
    v6 = *(_DWORD *)(a1 + 240) & 0x100000;
    v7 = *(_DWORD *)(a1 + 240) & 0x80000;
    if ( !v7 || !v6 )
    {
      v9 = node2ea(a2);
      v16[0] = 0;
      getinf_buf(26, v16, 16);
      if ( v9 < *(_QWORD *)&v16[0] || v9 >= *((_QWORD *)&v16[0] + 1) )
      {
        if ( v7 )
        {
          if ( !v6 )
          {
            v17 = 0xFFFFFFFFLL;
            *(_QWORD *)&v16[0] = &loc_800000;
            *(__m128i *)((char *)v16 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A7890);
            *(_OWORD *)((char *)&v16[1] + 8) = -1;
            memset((char *)&v16[2] + 8, 0, 24);
            v18 = 0;
            v19 = 2;
            v20 = -1;
            ptr = nullptr;
            v22 = 0;
            sub_59D1B0(v16, a3, a4);
            if ( (BYTE1(v16[0]) & 0x40) != 0 )
            {
              v12 = *(_QWORD *)(a1 + 256);
              v13 = *(_QWORD *)(a1 + 248);
              if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v12 + 1) )
              {
                v15 = qvector_reserve(a1 + 248, v13, v12 + 1, 8);
                *(_QWORD *)(a1 + 248) = v15;
                v13 = v15;
                v12 = *(_QWORD *)(a1 + 256);
              }
              *(_QWORD *)(v13 + 8 * v12) = v9;
              ++*(_QWORD *)(a1 + 256);
            }
            if ( ptr )
            {
              *(_QWORD *)&v22 = 0;
              qfree(ptr);
            }
          }
        }
        else
        {
          v10 = *(_QWORD *)(a1 + 256);
          v11 = *(_QWORD *)(a1 + 248);
          if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v10 + 1) )
          {
            v14 = qvector_reserve(a1 + 248, v11, v10 + 1, 8);
            *(_QWORD *)(a1 + 248) = v14;
            v11 = v14;
            v10 = *(_QWORD *)(a1 + 256);
          }
          *(_QWORD *)(v11 + 8 * v10) = v9;
          ++*(_QWORD *)(a1 + 256);
        }
      }
    }
  }
  return v23 - __readfsqword(0x28u);
}
