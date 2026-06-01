/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457BA0
// Address: 0x0000000000457BA0

//----- (0000000000457BA0) ----------------------------------------------------
__int64 __fastcall sub_457BA0(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // x0
  int v6; // w0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  __int64 v12; // x0
  char v13[8]; // [xsp+28h] [xbp-18h] BYREF
  __int64 v14; // [xsp+30h] [xbp-10h]
  __int64 v15; // [xsp+38h] [xbp-8h]

  if ( a3 )
    sub_457918(a1);
  v5 = *(_QWORD *)(a1 + 672);
  v13[0] = 1;
  v14 = 0;
  v6 = *(unsigned __int16 *)(v5 + 24);
  switch ( v6 )
  {
    case '-':
      sub_457BA0(a1, v13, 1);
      v9 = -v14;
      *(_BYTE *)a2 = v13[0];
      *(_QWORD *)(a2 + 8) = v9;
      break;
    case '+':
      sub_457BA0(a1, v13, 1);
      v10 = v14;
      *(_BYTE *)a2 = v13[0];
      *(_QWORD *)(a2 + 8) = v10;
      break;
    case '!':
      sub_457BA0(a1, v13, 1);
      v11 = v14 == 0;
      *(_BYTE *)a2 = v13[0];
      v12 = v11;
      *(_QWORD *)(a2 + 8) = v12;
      break;
    case '~':
      sub_457BA0(a1, v13, 1);
      v8 = ~v14;
      *(_BYTE *)a2 = v13[0];
      *(_QWORD *)(a2 + 8) = v8;
      break;
    default:
      sub_457A58(a1, a2);
      break;
  }
  return v15 ^ _stack_chk_guard;
}
