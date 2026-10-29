unsigned __int64 __fastcall sub_3D3BD0(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  int v6; // r15d
  int v7; // r12d
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+10h] [rbp-98h] BYREF
  __m128i si128; // [rsp+18h] [rbp-90h]
  __int64 v18; // [rsp+28h] [rbp-80h]
  unsigned __int64 v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  unsigned __int64 v21; // [rsp+40h] [rbp-68h]
  void *ptr; // [rsp+48h] [rbp-60h]
  __int128 v23; // [rsp+50h] [rbp-58h]
  unsigned __int64 v24; // [rsp+68h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a4 > 2 )
  {
    v6 = *(_DWORD *)(a1 + 224) & 0x100000;
    v7 = *(_DWORD *)(a1 + 224) & 0x80000;
    if ( !v7 || !v6 )
    {
      v16 = 0;
      v9 = node2ea(a2);
      getinf_buf(26, &v16, 8);
      if ( v9 < (unsigned int)v16 || v9 >= HIDWORD(v16) )
      {
        if ( v7 )
        {
          if ( !v6 )
          {
            v16 = 0x800000;
            v19 = 0xFFFFFFFF00000000LL;
            si128 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
            v18 = 0;
            v20 = 0;
            v21 = 0xFFFFFFFF00000002LL;
            ptr = nullptr;
            v23 = 0;
            sub_5834E0(&v16, a3, a4);
            if ( (v16 & 0x4000) != 0 )
            {
              v12 = *(_QWORD *)(a1 + 240);
              v13 = *(_QWORD *)(a1 + 232);
              if ( *(_QWORD *)(a1 + 248) < (unsigned __int64)(v12 + 1) )
              {
                v15 = qvector_reserve(a1 + 232, v13, v12 + 1, 4);
                *(_QWORD *)(a1 + 232) = v15;
                v13 = v15;
                v12 = *(_QWORD *)(a1 + 240);
              }
              *(_DWORD *)(v13 + 4 * v12) = v9;
              ++*(_QWORD *)(a1 + 240);
            }
            if ( ptr )
            {
              *(_QWORD *)&v23 = 0;
              qfree(ptr);
            }
          }
        }
        else
        {
          v10 = *(_QWORD *)(a1 + 240);
          v11 = *(_QWORD *)(a1 + 232);
          if ( *(_QWORD *)(a1 + 248) < (unsigned __int64)(v10 + 1) )
          {
            v14 = qvector_reserve(a1 + 232, v11, v10 + 1, 4);
            *(_QWORD *)(a1 + 232) = v14;
            v11 = v14;
            v10 = *(_QWORD *)(a1 + 240);
          }
          *(_DWORD *)(v11 + 4 * v10) = v9;
          ++*(_QWORD *)(a1 + 240);
        }
      }
    }
  }
  return v24 - __readfsqword(0x28u);
}

