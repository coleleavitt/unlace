int sub_2290D70()
{
  std::chrono::_V2::system_clock *v1; // rdi
  int v2; // eax
  int v3; // ebx
  int v4; // ebp
  __int64 v5; // rbx
  __pid_t v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _BYTE v9[12]; // [rsp+0h] [rbp-98h] BYREF

  if ( (_BYTE)byte_2D0ADC8 || !__cxa_guard_acquire(&byte_2D0ADC8) )
    return rand();
  v1 = (std::chrono::_V2::system_clock *)"/dev/urandom";
  v2 = open("/dev/urandom", 0);
  v3 = v2;
  if ( v2 == -1
    || (v4 = read(v2, v9, 4u), close(v3), v1 = (std::chrono::_V2::system_clock *)*(unsigned int *)v9, v4 != 4) )
  {
    v5 = std::chrono::_V2::system_clock::now(v1);
    v6 = getpid();
    *(_QWORD *)v9 = v5;
    *(_DWORD *)&v9[8] = v6;
    v7 = __ROR8__(*(_QWORD *)&v9[4] + 12LL, 12);
    v8 = 0x9DDFEA08EB382D69LL
       * (v7
        ^ (0x9DDFEA08EB382D69LL * (v7 ^ v5 ^ 0xFF51AFD7ED558CCDLL))
        ^ ((0x9DDFEA08EB382D69LL * (v7 ^ v5 ^ 0xFF51AFD7ED558CCDLL)) >> 47));
    LODWORD(v1) = HIDWORD(v5) ^ (-348639895 * (v8 ^ (v8 >> 47)));
  }
  srand((unsigned int)v1);
  __cxa_guard_release(&byte_2D0ADC8);
  return rand();
}
