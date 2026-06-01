__int64 __fastcall sub_9FBD90(__int64 *a1, _BYTE *a2, size_t a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v7; // rbx
  void *v8; // rax
  __m128i si128; // xmm0
  __int64 v11; // rdx
  size_t v12[8]; // [rsp+8h] [rbp-40h] BYREF

  v5 = a3;
  v7 = operator new(0x388u);
  v8 = (void *)(v7 + 16);
  *(_QWORD *)v7 = v7 + 16;
  if ( &a2[a3] && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v12[0] = a3;
  if ( a3 > 0xF )
  {
    v8 = (void *)sub_9FADF0((__int64 *)v12, 0);
    v11 = v12[0];
    *(_QWORD *)v7 = v8;
    *(_QWORD *)(v7 + 16) = v11;
    goto LABEL_10;
  }
  if ( a3 != 1 )
  {
    if ( !a3 )
      goto LABEL_6;
LABEL_10:
    memcpy(v8, a2, a3);
    v5 = v12[0];
    v8 = *(void **)v7;
    goto LABEL_6;
  }
  *(_BYTE *)(v7 + 16) = *a2;
LABEL_6:
  *(_QWORD *)(v7 + 8) = v5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
  *((_BYTE *)v8 + v5) = 0;
  *(_QWORD *)(v7 + 40) = v7 + 56;
  *(_QWORD *)(v7 + 32) = a4;
  *(_QWORD *)(v7 + 48) = 0x4000000000LL;
  *(_QWORD *)(v7 + 568) = 0;
  *(__m128i *)(v7 + 576) = si128;
  *(_QWORD *)(v7 + 592) = 0;
  *(_QWORD *)(v7 + 600) = 0;
  *(_DWORD *)(v7 + 608) = 0;
  *(_QWORD *)(v7 + 616) = 0;
  *(_QWORD *)(v7 + 624) = 0;
  *(_DWORD *)(v7 + 632) = 0;
  *(_QWORD *)(v7 + 640) = 0;
  *(_QWORD *)(v7 + 648) = 0;
  *(_DWORD *)(v7 + 656) = 0;
  *(_QWORD *)(v7 + 664) = 0;
  *(_QWORD *)(v7 + 672) = 0;
  *(_DWORD *)(v7 + 680) = 0;
  *(_QWORD *)(v7 + 688) = 0;
  *(_QWORD *)(v7 + 696) = 0;
  *(_DWORD *)(v7 + 704) = 0;
  *(_QWORD *)(v7 + 712) = 0;
  *(_QWORD *)(v7 + 720) = 0;
  *(_DWORD *)(v7 + 728) = 0;
  *(_QWORD *)(v7 + 736) = 0;
  *(_QWORD *)(v7 + 744) = 0;
  *(_DWORD *)(v7 + 752) = 0;
  *(_QWORD *)(v7 + 760) = 0;
  *(_QWORD *)(v7 + 768) = 0;
  *(_DWORD *)(v7 + 776) = 0;
  *(_QWORD *)(v7 + 784) = 0;
  *a1 = v7;
  *(_QWORD *)(v7 + 792) = 0;
  *(_DWORD *)(v7 + 800) = 0;
  *(_QWORD *)(v7 + 808) = 0;
  *(_QWORD *)(v7 + 816) = 0;
  *(_DWORD *)(v7 + 824) = 0;
  *(_QWORD *)(v7 + 832) = 0;
  *(_QWORD *)(v7 + 840) = 0;
  *(_DWORD *)(v7 + 848) = 0;
  *(_QWORD *)(v7 + 856) = 0;
  *(_QWORD *)(v7 + 864) = 0;
  *(_DWORD *)(v7 + 872) = 0;
  *(_QWORD *)(v7 + 880) = 0;
  *(_QWORD *)(v7 + 888) = 0;
  *(_DWORD *)(v7 + 896) = 0;
  return 0x4000000000LL;
}

