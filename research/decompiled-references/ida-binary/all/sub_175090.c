__int64 __fastcall sub_175090(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v7; // rdi
  __int64 v8; // rax
  char v9; // al
  _BYTE v10[4]; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    v4 += 104;
  sub_277780(v10, v4);
  if ( *(_BYTE *)(a1 + 29)
    || *(_BYTE *)(a1 + 30)
    || (v7 = *(_QWORD *)(a1 + 16), *(_BYTE *)(v7 + 969))
    || a1 != sub_1EB5B0(v7) && !*(_BYTE *)(a1 + 28)
    || *(_DWORD *)(a1 + 24)
    || !byte_8CD800
    && (v8 = *(_QWORD *)a1,
        *(_BYTE *)(a1 + 30) = 1,
        v9 = (*(__int64 (__fastcall **)(__int64, __int64))(v8 + 384))(a1, a2),
        *(_BYTE *)(a1 + 30) = 0,
        !v9) )
  {
    v5 = 0;
  }
  else
  {
    sub_174FE0((__int64 *)a1);
    v5 = 1;
  }
  sub_277860(v10);
  return v5;
}
