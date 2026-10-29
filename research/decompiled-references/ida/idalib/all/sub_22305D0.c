__int64 __fastcall sub_22305D0(__int64 a1, __int64 a2, const void ***a3)
{
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdx
  size_t v9; // r14
  void *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-4058h] BYREF
  __int64 v14; // [rsp+8h] [rbp-4050h] BYREF
  void *ptr; // [rsp+10h] [rbp-4048h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-4040h]
  _BYTE v17[16432]; // [rsp+28h] [rbp-4030h] BYREF

  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23ABB20);
  ptr = v17;
  sub_22900D0(&v13, a2, &ptr, 0x4000);
  if ( v13 )
  {
    v14 = v13;
    v13 = 0;
    v5 = sub_2220DB0((std::_V2 *)&v14);
    v6 = v14;
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_DWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v7;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  else
  {
    v9 = n[0];
    v10 = ptr;
    sub_2230400(&v14, n[0], a3, 0);
    v11 = v14;
    if ( v14 )
    {
      if ( v9 )
      {
        memmove(*(void **)(v14 + 8), v10, v9);
        v11 = v14;
      }
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)a1 = v11;
    }
    else
    {
      v12 = std::_V2::generic_category((std::_V2 *)&v14);
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_DWORD *)a1 = 12;
      *(_QWORD *)(a1 + 8) = v12;
    }
  }
  if ( ptr != v17 )
    free(ptr);
  return a1;
}
