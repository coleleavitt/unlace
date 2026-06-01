__int64 __fastcall sub_2290390(__int64 a1, std::_V2 *a2, unsigned int a3, char a4)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  int v9; // r14d
  std::_V2 *v10; // rax
  std::_V2 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdi
  size_t v15; // r14
  __int64 v16; // rax
  int v17; // [rsp+4h] [rbp-114h] BYREF
  std::_V2 *v18; // [rsp+8h] [rbp-110h] BYREF
  std::_V2 *v19; // [rsp+10h] [rbp-108h] BYREF
  __int64 v20; // [rsp+18h] [rbp-100h] BYREF
  __int64 v21; // [rsp+20h] [rbp-F8h] BYREF
  void *src; // [rsp+28h] [rbp-F0h] BYREF
  size_t n; // [rsp+30h] [rbp-E8h]
  _QWORD v24[2]; // [rsp+38h] [rbp-E0h] BYREF
  int v25; // [rsp+48h] [rbp-D0h]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-C0h]
  _BYTE v28[176]; // [rsp+68h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v28;
  v5 = sub_228F900(a2, &v17, &ptr, 0, 1, a4 | 8u, a3);
  if ( v5 )
  {
    sub_2220500(&v21, v5, v6);
    v7 = v21;
    *(_BYTE *)(a1 + 48) |= 1u;
    *(_QWORD *)a1 = v7;
  }
  else
  {
    LOBYTE(v21) = 0;
    v9 = v17;
    src = v24;
    sub_2288020(&src, ptr, (__int64)ptr + si128.m128i_i64[0]);
    v25 = v9;
    if ( (unsigned __int8)sub_2296DB0(ptr, si128.m128i_i64[0], 0) )
    {
      sub_2290280(&v18, (__int64)&v21);
      v10 = v18;
      v18 = nullptr;
      v19 = v10;
      sub_A05760(&v20, (_QWORD **)&v19);
      if ( v19 )
        (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v19 + 8LL))(v19);
      v11 = v18;
      if ( v18 )
        (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v18 + 8LL))(v18);
      v12 = std::_V2::generic_category(v11);
      sub_2220500(&v20, 1, v12);
      v13 = v20;
      *(_BYTE *)(a1 + 48) |= 1u;
      v14 = src;
      *(_QWORD *)a1 = v13;
    }
    else
    {
      v14 = src;
      *(_BYTE *)(a1 + 48) &= ~1u;
      *(_BYTE *)a1 = 0;
      v15 = n;
      *(_QWORD *)(a1 + 8) = a1 + 24;
      *(_QWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 40) = -1;
      if ( v14 == v24 )
      {
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            *(_BYTE *)(a1 + 24) = v24[0];
          }
          else
          {
            memcpy((void *)(a1 + 24), v14, v15);
            v14 = src;
          }
        }
        *(_QWORD *)(a1 + 16) = v15;
        *(_BYTE *)(a1 + v15 + 24) = 0;
      }
      else
      {
        v16 = v24[0];
        *(_QWORD *)(a1 + 16) = v15;
        src = v24;
        *(_QWORD *)(a1 + 24) = v16;
        *(_QWORD *)(a1 + 8) = v14;
        v14 = v24;
      }
      LOBYTE(v24[0]) = 0;
      n = 0;
      *(_DWORD *)(a1 + 40) = v25;
      LOBYTE(v21) = 1;
      v25 = -1;
    }
    if ( v14 != v24 )
      operator delete(v14);
  }
  if ( ptr != v28 )
    free(ptr);
  return a1;
}
