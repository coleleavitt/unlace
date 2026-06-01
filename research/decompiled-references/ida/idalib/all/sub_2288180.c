__int64 __fastcall sub_2288180(size_t *a1, _DWORD *a2, _QWORD *a3)
{
  void *p_ptr; // rdi
  ssize_t v5; // rax
  size_t v6; // rbx
  __int64 v8; // rdi
  const char *v9; // rax
  char *v10; // rbx
  int v11; // edx
  unsigned int v12; // eax
  bool v13; // cf
  __int64 v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  void *ptr; // [rsp+0h] [rbp-10C8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-10C0h]
  _BYTE v19[136]; // [rsp+18h] [rbp-10B0h] BYREF
  char buf[4136]; // [rsp+A0h] [rbp-1028h] BYREF

  a3[1] = 0;
  if ( !(_BYTE)byte_2D0ADB8 && __cxa_guard_acquire(&byte_2D0ADB8) )
  {
    byte_2D0ADC0 = access("/proc/self/fd", 4) == 0;
    __cxa_guard_release(&byte_2D0ADB8);
  }
  if ( byte_2D0ADC0 )
  {
    snprintf((char *)&ptr, 0x40u, "/proc/self/fd/%d", *a2);
    p_ptr = &ptr;
    v5 = readlink((const char *)&ptr, buf, 0x1000u);
    v6 = v5;
    if ( v5 > 0 )
    {
      v8 = a3[1];
      if ( (unsigned __int64)(v5 + v8) > a3[2] )
      {
        sub_2236E10((__int64)a3, a3 + 3, v5 + v8, 1);
        v8 = a3[1];
      }
      p_ptr = (void *)(*a3 + v8);
      memcpy(p_ptr, buf, v6);
      a3[1] += v6;
    }
    goto LABEL_4;
  }
  ptr = v19;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v9 = (const char *)sub_2253CC0(a1, &ptr);
  if ( realpath(v9, buf) )
  {
    v10 = buf;
    do
    {
      v11 = *(_DWORD *)v10;
      v10 += 4;
      v12 = ~v11 & (v11 - 16843009) & 0x80808080;
    }
    while ( !v12 );
    if ( (~v11 & (v11 - 16843009) & 0x8080) == 0 )
    {
      LOBYTE(v12) = (~v11 & (v11 - 16843009) & 0x80808080) >> 16;
      v10 += 2;
    }
    v13 = __CFADD__((_BYTE)v12, (_BYTE)v12);
    v14 = a3[1];
    v15 = &v10[-v13 - 3] - buf;
    if ( (unsigned __int64)(v15 + v14) > a3[2] )
    {
      sub_2236E10((__int64)a3, a3 + 3, v15 + v14, 1);
      v14 = a3[1];
    }
    if ( !v15 )
      goto LABEL_19;
    v16 = (_QWORD *)(v14 + *a3);
    if ( (unsigned int)v15 >= 8 )
    {
      *v16 = *(_QWORD *)buf;
      *(_QWORD *)((char *)v16 + (unsigned int)v15 - 8) = *(_QWORD *)&v19[(unsigned int)v15 + 128];
      qmemcpy(
        (void *)((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(buf - ((char *)v16 - ((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)v15 + (_DWORD)v16 - (((_DWORD)v16 + 8) & 0xFFFFFFF8)) >> 3));
    }
    else
    {
      if ( (v15 & 4) != 0 )
      {
        *(_DWORD *)v16 = *(_DWORD *)buf;
        *(_DWORD *)((char *)v16 + (unsigned int)v15 - 4) = *(_DWORD *)&v19[(unsigned int)v15 + 132];
        v14 = a3[1];
        goto LABEL_19;
      }
      if ( !(_DWORD)v15 )
      {
LABEL_19:
        a3[1] = v14 + v15;
        goto LABEL_20;
      }
      *(_BYTE *)v16 = buf[0];
      if ( (v15 & 2) != 0 )
      {
        *(_WORD *)((char *)v16 + (unsigned int)v15 - 2) = *(_WORD *)&v19[(unsigned int)v15 + 134];
        v14 = a3[1];
        goto LABEL_19;
      }
    }
    v14 = a3[1];
    goto LABEL_19;
  }
LABEL_20:
  p_ptr = ptr;
  if ( ptr != v19 )
    free(ptr);
LABEL_4:
  std::_V2::system_category((std::_V2 *)p_ptr);
  return 0;
}
