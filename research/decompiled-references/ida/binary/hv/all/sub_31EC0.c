__int64 sub_31EC0()
{
  __int64 v1; // rax
  __m128i si128; // xmm0
  __int64 v3; // rbx
  void *v4; // rdi
  size_t v5; // r12
  void *v6; // rax
  void *v7; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( !(_BYTE)byte_1659C8 && __cxa_guard_acquire(&byte_1659C8) )
  {
    v1 = operator new(0xE8u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1301F0);
    v3 = v1;
    *(_DWORD *)(v1 + 24) = 8;
    *(__m128i *)(v1 + 8) = si128;
    *(_QWORD *)v1 = &off_1612F8;
    ptr = nullptr;
    *(_OWORD *)n = 0;
    ptr = (void *)sub_96080(&ptr, 0, 9, 1);
    n[0] = 9;
    strcpy((char *)ptr, "hexvault");
    v4 = ptr;
    v5 = n[0];
    *(_QWORD *)(v3 + 40) = 0;
    *(_OWORD *)(v3 + 48) = 0;
    if ( v5 )
    {
      v6 = (void *)sub_96030(v5);
      *(_QWORD *)(v3 + 40) = v6;
      v7 = ptr;
      *(_QWORD *)(v3 + 56) = v5;
      memcpy(v6, v7, v5);
      *(_QWORD *)(v3 + 48) = v5;
      v4 = ptr;
    }
    *(_WORD *)(v3 + 64) = -103;
    *(_QWORD *)(v3 + 72) = 0;
    *(_QWORD *)(v3 + 96) = 0;
    *(_QWORD *)(v3 + 32) = &off_15F0D8;
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
      j__free(v4);
    }
    *(_QWORD *)(v3 + 208) = 0;
    *(_QWORD *)(v3 + 32) = &off_15F120;
    *(_OWORD *)(v3 + 216) = 0;
    qword_1659D0 = v3;
    __cxa_guard_release(&byte_1659C8);
  }
  return qword_1659D0;
}

