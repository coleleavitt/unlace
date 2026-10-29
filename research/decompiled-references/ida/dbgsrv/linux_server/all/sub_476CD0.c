/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476CD0
// Address: 0x0000000000476CD0

//----- (0000000000476CD0) ----------------------------------------------------
__int64 __fastcall sub_476CD0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r15
  unsigned int v5; // r12d
  signed __int64 v6; // rbx
  size_t v7; // rax
  _BYTE v9[4104]; // [rsp+0h] [rbp-1048h] BYREF
  unsigned __int64 v10; // [rsp+1008h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  sub_47F740(a1, 0, 0);
  v1 = sub_47F710(a1);
  if ( v1 <= 0 )
  {
    return 0;
  }
  else
  {
    v4 = v1;
    v5 = 0;
    while ( 1 )
    {
      v6 = 4096;
      if ( (unsigned __int64)v4 <= 0x1000 )
        v6 = v4;
      v7 = sub_47F6E0(a1, v9, v6, v2, v3);
      if ( v7 != v6 )
        break;
      v4 -= v7;
      v5 = sub_476CC0(v5, v9, v7);
      if ( v4 <= 0 )
        return v5;
    }
    return (unsigned int)-1;
  }
}
// 476D4E: variable 'v2' is possibly undefined
// 476D4E: variable 'v3' is possibly undefined
