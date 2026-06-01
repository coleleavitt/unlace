unsigned __int64 __fastcall sub_3F24B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  __int64 v7; // [rsp+8h] [rbp-440h] BYREF
  _BYTE v8[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v9; // [rsp+418h] [rbp-30h]

  v7 = a2;
  v3 = *(_QWORD *)(a1 + 24);
  v9 = __readfsqword(0x28u);
  v5 = sub_7BE950(&v7, v3, a3, v8, 1024, 83);
  if ( v5 > 0 )
    sub_7BE7C0(&v7, *(_QWORD *)(a1 + 24), a3, v8, v5, 83);
  return v9 - __readfsqword(0x28u);
}
