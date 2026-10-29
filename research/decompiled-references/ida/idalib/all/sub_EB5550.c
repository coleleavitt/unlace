unsigned __int64 *__fastcall sub_EB5550(unsigned __int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  unsigned __int64 v5; // rax

  v3 = *(_QWORD *)(a2 + 24);
  if ( v3
    && (*(_WORD *)v3 & 0x1FF) == 0xF5
    && (v4 = *(_QWORD *)(v3 + 8), (*(_BYTE *)(v4 + 28) & 0x7F) == 0x2C)
    && (v5 = sub_B737F0(v4)) != 0 )
  {
    *a1 = v5;
    a1[3] = v5 + 8;
    a1[1] = 0;
    a1[4] = 0;
    return a1;
  }
  else
  {
    a1[1] = 0;
    *a1 = a2 + 16;
    a1[3] = a2 + 24;
    a1[4] = 0;
    return a1;
  }
}
