/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E5A8
// Address: 0x000000000047E5A8

//----- (000000000047E5A8) ----------------------------------------------------
__int64 __fastcall sub_47E5A8(__int64 a1, int a2)
{
  __int64 v4; // x19
  __int64 *v5; // x2
  int v6; // w0
  __int64 *v8; // x5
  __int64 v9; // x3
  __int64 *v10; // [xsp+48h] [xbp-28h]
  unsigned __int64 v11; // [xsp+58h] [xbp-18h] BYREF
  __int64 v12; // [xsp+60h] [xbp-10h]

  if ( (unsigned __int64)a2 > 0x147 || *(unsigned __int16 *)((char *)qword_4DAD30 + 5 * a2) != 0xFFFF )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(1473);
  }
  v4 = 0;
  v5 = qword_4DB398;
  if ( !a2 )
    goto LABEL_11;
  while ( ++v4 != 328 )
  {
    v6 = *(unsigned __int16 *)((char *)qword_4DAD30 + 5 * v4);
    if ( v6 == 0xFFFF )
      v6 = v4;
    if ( a2 == v6 )
    {
LABEL_11:
      v11 = 0;
      v12 = 0;
      if ( (unsigned int)(v4 - 1) > 0x146 )
        return 0;
      v10 = v5;
      v8 = &v5[v4];
      v9 = (unsigned int)(*((_DWORD *)v8 + 1) + 1);
      v11 = *(unsigned int *)v8;
      v12 = v9;
      sub_497350(a1, &v11);
      v5 = v10;
    }
  }
  return 1;
}
// 4DAD30: using guessed type __int64 qword_4DAD30[205];
// 4DB398: using guessed type __int64 qword_4DB398[];
// 52451C: using guessed type char under_debugger;
