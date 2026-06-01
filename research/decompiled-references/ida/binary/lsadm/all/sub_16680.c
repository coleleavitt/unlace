__int64 __fastcall sub_16680(__int64 *a1, int a2, const void *a3, size_t a4)
{
  char v4; // bp
  int v6; // eax
  __int64 v7; // r14
  size_t v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  char *v12; // rax
  const char *v14; // rsi

  if ( !a4 )
    return 1;
  v4 = a2;
  v6 = a2;
  LOBYTE(v6) = a2 & 0x7F;
  if ( v6 == 1 )
  {
    sub_148F0(a1, a3, a4);
    return 1;
  }
  if ( v6 == 2 )
  {
    sub_148F0(a1, a3, a4);
    v7 = *a1;
    v8 = a1[1] - a4;
    if ( !(_BYTE)byte_7AA40 && __cxa_guard_acquire(&byte_7AA40) )
    {
      qword_7AA50 = 0;
      xmmword_7AA58 = 0;
      __cxa_atexit((void (*)(void *))sub_A2B0, &qword_7AA50, &off_78C40);
      __cxa_guard_release(&byte_7AA40);
    }
    v9 = xmmword_7AA58;
    if ( (unsigned __int64)xmmword_7AA58 > 1
      || (unsigned __int8)sub_28340(&qword_7AA50) && (v9 = xmmword_7AA58, (unsigned __int64)xmmword_7AA58 > 1) )
    {
      v10 = v9 - 1;
      v11 = 0;
      while ( 1 )
      {
        v12 = byte_7AA39;
        if ( (v11 % v10) | v9 )
          v12 = (char *)(v11 % v10 + qword_7AA50);
        *(_BYTE *)(v7 + v8 + v11++) ^= *v12;
        if ( a4 == v11 )
          break;
        v9 = xmmword_7AA58;
      }
      return 1;
    }
  }
  if ( (dword_7BCA4 & 0x200) != 0 )
  {
    v14 = "encrypt";
    if ( v4 < 0 )
      v14 = "decrypt";
    sub_15E90((__int64 (__fastcall ***)(_QWORD))"Failed to %s license info\n", v14);
  }
  return 0;
}

