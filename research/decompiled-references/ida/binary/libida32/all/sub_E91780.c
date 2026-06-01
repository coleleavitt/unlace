unsigned __int64 *__fastcall sub_E91780(unsigned __int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  unsigned __int64 v5; // rax

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3
    && (*(_WORD *)v3 & 0x1FF) == 0xF5
    && (v4 = *(_QWORD *)(v3 + 8), (*(_BYTE *)(v4 + 28) & 0x7F) == 0x2C)
    && (v5 = sub_B4FAB0(v4)) != 0 )
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
    *a1 = a2 + 32;
    a1[3] = a2 + 40;
    a1[4] = 0;
    return a1;
  }
}

