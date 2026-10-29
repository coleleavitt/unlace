__int64 __fastcall sub_82B810(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v4; // ebp
  __int64 v5; // rax
  __m128i si128; // xmm0
  __int64 *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  const char *v10; // rax
  const char *v11; // rbx
  size_t v12; // rax
  size_t v13; // r12
  void *v14; // rdi
  size_t v15; // r13
  __int64 v16; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16));
  if ( !(_BYTE)v2 )
    return 0;
  v4 = v2;
  v5 = sub_8ECEF0();
  *(_QWORD *)(a1 + 24) = v5;
  if ( !v5 )
  {
    *__errno_location() = 12;
    set_qerrno(1, a2);
    v7 = *(__int64 **)(a1 + 8);
    v10 = (const char *)qstrerror(0xFFFFFFFFLL, a2, v8, v9);
    v11 = v10;
    if ( (unsigned __int64)v7[4] <= 1 )
    {
      if ( v10 && (v12 = strlen(v10), (v13 = v12) != 0) )
      {
        v14 = (void *)*v7;
        v15 = v12 + 1;
        if ( v7[2] < v12 + 1 )
        {
          v16 = qvector_reserve(v7, *v7, v12 + 1, 1);
          *v7 = v16;
          v14 = (void *)v16;
        }
        v7[1] = v15;
        memmove(v14, v11, v13);
        *(_BYTE *)(*v7 + v13) = 0;
      }
      else
      {
        v7[1] = 0;
      }
    }
    else
    {
      sub_3573A0((char **)v7);
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 32824) )
    sub_8EDF70(v5, 100);
  get_physical_core_count();
  get_available_core_count();
  sub_8EDF70(*(_QWORD *)(a1 + 24), 400);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384880);
  *(_QWORD *)(a1 + 32) = a1 + 56;
  *(__m128i *)(a1 + 40) = si128;
  return v4;
}

