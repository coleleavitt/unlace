__int64 __fastcall sub_2265270(__int64 a1, __int64 a2, const char **a3)
{
  __m128i v4; // xmm0
  __int64 v5; // rax
  int v7; // eax
  _QWORD v8[2]; // [rsp+0h] [rbp-138h] BYREF
  __m128i v9; // [rsp+10h] [rbp-128h] BYREF
  __m128i v10; // [rsp+20h] [rbp-118h] BYREF
  __int64 v11; // [rsp+30h] [rbp-108h]
  __int64 v12; // [rsp+38h] [rbp-100h]
  __int64 v13; // [rsp+40h] [rbp-F8h]
  __int64 v14; // [rsp+48h] [rbp-F0h]
  char v15; // [rsp+50h] [rbp-E8h]
  void *ptr[3]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+F8h] [rbp-40h]
  char v19; // [rsp+100h] [rbp-38h]

  sub_2264B90((__int64)ptr, a2, a3, 1, 0);
  if ( (v19 & 1) != 0 )
  {
    v7 = (int)ptr[0];
    *(_BYTE *)(a1 + 88) |= 1u;
    *(_DWORD *)a1 = v7;
    *(void **)(a1 + 8) = ptr[1];
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64, const char **))(*(_QWORD *)v18 + 16LL))(v8, v18, a3);
    *(_BYTE *)(a1 + 88) &= ~1u;
    *(_QWORD *)a1 = a1 + 16;
    if ( (__m128i *)v8[0] == &v9 )
    {
      *(__m128i *)(a1 + 16) = _mm_load_si128(&v9);
    }
    else
    {
      *(_QWORD *)a1 = v8[0];
      *(_QWORD *)(a1 + 16) = v9.m128i_i64[0];
    }
    v4 = _mm_load_si128(&v10);
    *(_QWORD *)(a1 + 8) = v8[1];
    v5 = v11;
    *(__m128i *)(a1 + 32) = v4;
    *(_QWORD *)(a1 + 48) = v5;
    *(_QWORD *)(a1 + 56) = v12;
    *(_QWORD *)(a1 + 64) = v13;
    *(_QWORD *)(a1 + 72) = v14;
    *(_BYTE *)(a1 + 80) = v15;
    if ( (v19 & 1) == 0 && ptr[0] != &v17 )
      free(ptr[0]);
  }
  return a1;
}
