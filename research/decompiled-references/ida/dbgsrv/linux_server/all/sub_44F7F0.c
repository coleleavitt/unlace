/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44F7F0
// Address: 0x000000000044F7F0

//----- (000000000044F7F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_44F7F0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int16 v4; // ax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  sub_44F740(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + 560);
      v8 = 1;
      v9 = 0;
      v4 = *(_WORD *)(v3 + 24);
      if ( v4 != 15934 )
        break;
      sub_44F740(a1, (__int64)&v8, 1);
      v6 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)a2 )
        v7 = (unsigned __int64)v6 >> v9;
      else
        v7 = v6 >> v9;
      *(_QWORD *)(a2 + 8) = v7;
    }
    if ( v4 != 15420 )
      break;
    sub_44F740(a1, (__int64)&v8, 1);
    *(_QWORD *)(a2 + 8) <<= v9;
  }
  return v10 - __readfsqword(0x28u);
}
