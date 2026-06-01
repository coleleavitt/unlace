unsigned __int64 __fastcall sub_785800(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  sub_7856A0(a1, a2, a3, a4, a5, a6);
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 560);
    v13 = 1;
    v14 = 0;
    v10 = *(_WORD *)(v9 + 24);
    if ( v10 == 43 )
    {
      sub_7856A0(a1, (__int64)&v13, 1u, v6, v7, v8);
      v12 = *(_QWORD *)(a2 + 8) + v14;
      goto LABEL_6;
    }
    if ( v10 != 45 )
      return v15 - __readfsqword(0x28u);
    sub_7856A0(a1, (__int64)&v13, 1u, v6, v7, v8);
    v12 = *(_QWORD *)(a2 + 8) - v14;
LABEL_6:
    *(_QWORD *)(a2 + 8) = v12;
  }
}

