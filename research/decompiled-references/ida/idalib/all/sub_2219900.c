__int64 __fastcall sub_2219900(_QWORD *a1, void (__fastcall *a2)(__int64), __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 addr; // rax
  __int64 v6; // rdx
  int v7; // edx

  if ( !byte_2D0A7B8
    || (v4 = operator new(0xE0u),
        *(_QWORD *)(v4 + 8) = a1,
        *(_BYTE *)(v4 + 216) &= ~1u,
        addr = __tls_get_addr(&stru_2C77838),
        *a1 = v4,
        v6 = *(_QWORD *)(addr + 280),
        *(_QWORD *)(addr + 280) = v4,
        LOBYTE(addr) = *(_BYTE *)(v4 + 216),
        *(_QWORD *)v4 = v6,
        *(_BYTE *)(v4 + 216) = addr & 0xF9 | 4,
        v7 = _setjmp((struct __jmp_buf_tag *)(v4 + 16)),
        result = 0,
        !v7) )
  {
    a2(a3);
    return 1;
  }
  return result;
}
