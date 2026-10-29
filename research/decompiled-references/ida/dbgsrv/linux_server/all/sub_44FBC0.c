/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44FBC0
// Address: 0x000000000044FBC0

//----- (000000000044FBC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_44FBC0(__int64 a1, __int64 a2, char a3)
{
  __int16 i; // ax
  __int64 v4; // rax
  __int16 v5; // ax
  _BOOL8 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+8h] [rbp-60h]
  __int64 v11; // [rsp+10h] [rbp-58h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  sub_44FB00(a1, a2, a3);
  for ( i = *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL); i == 38; i = *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) )
  {
    v13 = 1;
    v14 = 0;
    sub_44FB00(a1, (__int64)&v13, 1);
    *(_QWORD *)(a2 + 8) &= v14;
  }
  if ( i == 94 )
  {
    while ( 1 )
    {
      v9 = 1;
      v10 = 0;
      sub_44FB00(a1, (__int64)&v9, 1);
      if ( *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) == 38 )
        break;
      v7 = v10;
LABEL_13:
      *(_QWORD *)(a2 + 8) ^= v7;
      if ( *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) != 94 )
        return v15 - __readfsqword(0x28u);
    }
LABEL_8:
    v11 = 1;
    v12 = 0;
    sub_44F8C0(a1, (__int64)&v11, 1);
    while ( 1 )
    {
      v13 = 1;
      v4 = *(_QWORD *)(a1 + 560);
      v14 = 0;
      v5 = *(_WORD *)(v4 + 24);
      if ( v5 == 15677 )
      {
        sub_44F8C0(a1, (__int64)&v13, 1);
        v6 = v12 == v14;
      }
      else
      {
        if ( v5 != 8509 )
        {
          v7 = v12 & v10;
          v10 &= v12;
          if ( v5 != 38 )
            goto LABEL_13;
          goto LABEL_8;
        }
        sub_44F8C0(a1, (__int64)&v13, 1);
        v6 = v12 != v14;
      }
      v12 = v6;
      LOBYTE(v11) = 0;
    }
  }
  return v15 - __readfsqword(0x28u);
}
