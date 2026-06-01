unsigned __int64 __fastcall sub_1E97D0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 *v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a2 + 24) )
  {
    if ( !*(_BYTE *)(a1 + 24) )
      return sub_1E9040(a1, a2);
    v4 = *(_QWORD *)a2;
    v5 = a2 + 8;
    *(_QWORD *)a1 = v4;
    if ( v5 != a1 + 8 )
    {
      sub_1E4290((__int64 *)&v9, v5);
      v6 = *(unsigned __int64 **)(a1 + 8);
      v7 = v10;
      *(_QWORD *)(a1 + 8) = v9;
      v8 = *(_QWORD *)(a1 + 16);
      v9 = v6;
      *(_QWORD *)(a1 + 16) = v7;
      v10 = v8;
      if ( v6 )
      {
        sub_13FCB0(&v9);
        if ( v9 )
          qfree();
      }
    }
    *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  }
  return v11 - __readfsqword(0x28u);
}
