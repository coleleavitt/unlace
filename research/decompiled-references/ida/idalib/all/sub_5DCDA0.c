_BOOL8 __fastcall sub_5DCDA0(_QWORD *a1, __int64 a2, _BOOL4 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // rax
  _BOOL4 v7; // r13d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  char v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
  v13 = __readfsqword(0x28u);
  v6 = sub_3BE900(a1, v4, 4);
  if ( (v6 & 0x10000) == 0 )
    return 1;
  if ( (~(_WORD)v6 & 0x600) != 0 )
    return 1;
  if ( (v6 & 0x1000) != 0 )
    return 1;
  v7 = sub_5DC940((__int64)a1, nullptr, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26));
  if ( v7 )
    return 1;
  v9 = sub_3792E0(0x25u, a2, a3);
  if ( v9 < 0 )
    return v7;
  if ( v9 == 1 )
  {
    return 1;
  }
  else
  {
    v7 = a3;
    if ( !(unsigned __int8)is_call_insn(a2) )
    {
      v10 = *(_QWORD *)(a2 + 16);
      v12 = 0;
      v11 = -1;
      return (_BOOL4)sub_3E1CA0(a1, (__int64)&v11, v10);
    }
  }
  return v7;
}
