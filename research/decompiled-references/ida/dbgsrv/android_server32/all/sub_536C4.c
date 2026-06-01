/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_536C4
// Address: 0x000536C4

//----- (000536C4) --------------------------------------------------------
int __fastcall sub_536C4(int a1, int a2, int a3)
{
  unsigned int *i; // r4
  int v6; // r1
  bool v7; // cf
  int v8; // r0
  int v9; // r1
  _BYTE v11[8]; // [sp+Ch] [bp-14h] BYREF
  unsigned int v12; // [sp+14h] [bp-Ch]
  int v13; // [sp+18h] [bp-8h]
  int v14; // [sp+1Ch] [bp-4h]

  sub_53528(a1, a2, a3);
  for ( i = (unsigned int *)(a2 + 8); ; i[1] += v9 + v7 )
  {
    while ( 1 )
    {
      v11[0] = 1;
      v12 = 0;
      v13 = 0;
      v8 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 444) + 12);
      if ( v8 != 45 )
        break;
      sub_53528(a1, (int)v11, 1);
      v6 = v13;
      v7 = *i >= v12;
      *i -= v12;
      i[1] -= v6 + !v7;
    }
    if ( v8 != 43 )
      break;
    sub_53528(a1, (int)v11, 1);
    v9 = v13;
    v7 = __CFADD__(v12, *i);
    *i += v12;
  }
  return _stack_chk_guard - v14;
}
