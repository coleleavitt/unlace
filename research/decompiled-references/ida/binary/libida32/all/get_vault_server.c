__int64 get_vault_server()
{
  __int64 v1; // rax
  __m128i si128; // xmm0
  __int64 v3; // rbx
  void *v4; // rdi
  size_t v5; // r12
  void *v6; // rax
  void *v7; // rsi
  void *src; // [rsp+0h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( !(_BYTE)byte_2CAD388 && __cxa_guard_acquire(&byte_2CAD388) )
  {
    v1 = operator new(0xE8u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384A80);
    v3 = v1;
    *(_DWORD *)(v1 + 24) = 8;
    *(__m128i *)(v1 + 8) = si128;
    *(_QWORD *)v1 = &off_2B14020;
    src = nullptr;
    *(_OWORD *)n = 0;
    src = (void *)qvector_reserve(&src, 0, 9, 1);
    n[0] = 9;
    strcpy((char *)src, "hexvault");
    v4 = src;
    v5 = n[0];
    *(_QWORD *)(v3 + 40) = 0;
    *(_OWORD *)(v3 + 48) = 0;
    if ( v5 )
    {
      v6 = (void *)qalloc_or_throw(v5, nullptr);
      *(_QWORD *)(v3 + 40) = v6;
      v7 = src;
      *(_QWORD *)(v3 + 56) = v5;
      memcpy(v6, v7, v5);
      *(_QWORD *)(v3 + 48) = v5;
      v4 = src;
    }
    *(_WORD *)(v3 + 64) = -103;
    *(_QWORD *)(v3 + 72) = 0;
    *(_QWORD *)(v3 + 96) = 0;
    *(_QWORD *)(v3 + 32) = &off_2B07160;
    *(_QWORD *)(v3 + 120) = 0;
    *(_WORD *)(v3 + 144) = 0;
    *(_QWORD *)(v3 + 152) = 0;
    *(_QWORD *)(v3 + 176) = 0;
    *(_DWORD *)(v3 + 200) = 0;
    *(_OWORD *)(v3 + 80) = 0;
    *(_OWORD *)(v3 + 104) = 0;
    *(_OWORD *)(v3 + 128) = 0;
    *(_OWORD *)(v3 + 160) = 0;
    *(_OWORD *)(v3 + 184) = 0;
    if ( v4 )
    {
      n[0] = 0;
      qfree(v4);
    }
    *(_QWORD *)(v3 + 208) = 0;
    *(_QWORD *)(v3 + 32) = &off_2B071A8;
    *(_OWORD *)(v3 + 216) = 0;
    qword_2CAD390 = v3;
    __cxa_guard_release(&byte_2CAD388);
  }
  return qword_2CAD390;
}

