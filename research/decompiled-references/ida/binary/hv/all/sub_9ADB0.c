__int64 __fastcall sub_9ADB0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // ebp
  __int64 v4; // rax
  __m128i si128; // xmm0
  __int64 v6; // rbp
  const char *v7; // rax
  const char *v8; // rbx
  size_t v9; // rax
  size_t v10; // r12
  void *v11; // rdi
  size_t v12; // r13
  void *v13; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16));
  if ( !(_BYTE)v1 )
    return 0;
  v3 = v1;
  v4 = sub_AF2D0();
  *(_QWORD *)(a1 + 24) = v4;
  if ( !v4 )
  {
    *__errno_location() = 12;
    sub_8F860(1u);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = sub_978C0(-1);
    v8 = v7;
    if ( *(_QWORD *)(v6 + 32) <= 1u )
    {
      if ( v7 && (v9 = strlen(v7), (v10 = v9) != 0) )
      {
        v11 = *(void **)v6;
        v12 = v9 + 1;
        if ( *(_QWORD *)(v6 + 16) < v9 + 1 )
        {
          v13 = sub_96080(v6, *(void **)v6, v9 + 1, 1u);
          *(_QWORD *)v6 = v13;
          v11 = v13;
        }
        *(_QWORD *)(v6 + 8) = v12;
        memmove(v11, v8, v10);
        *(_BYTE *)(*(_QWORD *)v6 + v10) = 0;
      }
      else
      {
        *(_QWORD *)(v6 + 8) = 0;
      }
    }
    else
    {
      sub_17D80((char **)v6);
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 32824) )
    sub_B0350(v4, 100);
  sub_97420();
  sub_97430();
  sub_B0350(*(_QWORD *)(a1 + 24), 400);
  si128 = _mm_load_si128((const __m128i *)&xmmword_130550);
  *(_QWORD *)(a1 + 32) = a1 + 56;
  *(__m128i *)(a1 + 40) = si128;
  return v3;
}

