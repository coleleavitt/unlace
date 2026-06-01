__int64 __fastcall sub_91180(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v7; // rdi
  __int64 v8; // rax
  char v9; // al
  _BYTE v10[4]; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    v4 += 160;
  sub_F1870(v10, v4);
  if ( *(_BYTE *)(a1 + 21)
    || *(_BYTE *)(a1 + 22)
    || (v7 = *(_QWORD *)(a1 + 8), *(_BYTE *)(v7 + 985))
    || a1 != sub_15E0E0(v7) && !*(_BYTE *)(a1 + 20)
    || *(_DWORD *)(a1 + 16)
    || !unk_2530A9
    && (v8 = *(_QWORD *)a1,
        *(_BYTE *)(a1 + 22) = 1,
        v9 = (*(__int64 (__fastcall **)(__int64, __int64))(v8 + 304))(a1, a2),
        *(_BYTE *)(a1 + 22) = 0,
        !v9) )
  {
    v5 = 0;
  }
  else
  {
    sub_91100((__int64 *)a1);
    v5 = 1;
  }
  sub_F18E0(v10);
  return v5;
}

