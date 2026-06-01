__int64 __fastcall sub_3EF330(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( !a3 && *(_QWORD *)(a1 + 64) != -1 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v8[0] = 0;
    v5 = sub_7BF1C0(a1 + 64, v4, v8, 8);
    v6 = -1;
    if ( v5 > 0 )
      v6 = v8[0];
    v7 = *(_QWORD *)(a1 + 24);
    v8[0] = v6;
    sub_7BF280(a1 + 64, v7, v8, 8);
  }
  return 1;
}
