__int64 __fastcall sub_84F170(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // ebp
  __int64 v4; // rax
  __m128i si128; // xmm0
  __int64 *v6; // rbp
  const char *v7; // rax
  const char *v8; // rbx
  size_t v9; // rax
  size_t v10; // r12
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16));
  if ( !(_BYTE)v1 )
    return 0;
  v3 = v1;
  v4 = sub_910C30();
  *(_QWORD *)(a1 + 24) = v4;
  if ( !v4 )
  {
    *__errno_location() = 12;
    set_qerrno(1);
    v6 = *(__int64 **)(a1 + 8);
    v7 = (const char *)qstrerror(0xFFFFFFFFLL);
    v8 = v7;
    if ( (unsigned __int64)v6[4] <= 1 )
    {
      if ( v7 && (v9 = strlen(v7), (v10 = v9) != 0) )
      {
        v11 = (void *)*v6;
        v12 = v9 + 1;
        if ( v6[2] < v9 + 1 )
        {
          v13 = qvector_reserve(v6, *v6, v9 + 1, 1);
          *v6 = v13;
          v11 = (void *)v13;
        }
        v6[1] = v12;
        memmove(v11, v8, v10);
        *(_BYTE *)(*v6 + v10) = 0;
      }
      else
      {
        v6[1] = 0;
      }
    }
    else
    {
      sub_35A790((char **)v6);
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 32824) )
    sub_911CB0(v4, 100);
  get_physical_core_count();
  get_available_core_count();
  sub_911CB0(*(_QWORD *)(a1 + 24), 400);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A88C0);
  *(_QWORD *)(a1 + 32) = a1 + 56;
  *(__m128i *)(a1 + 40) = si128;
  return v3;
}
