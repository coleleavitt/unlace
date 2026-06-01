/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53528
// Address: 0x00053528

//----- (00053528) --------------------------------------------------------
int __fastcall sub_53528(int a1, int a2, int a3)
{
  __int64 *i; // r5
  int v6; // r0
  __int64 v7; // r0
  unsigned __int64 v8; // r2
  __int64 v9; // r0
  unsigned __int64 v10; // r0
  struct __jmp_buf_tag *env; // [sp+8h] [bp-28h]
  unsigned __int8 *v13; // [sp+10h] [bp-20h]
  _BYTE v14[8]; // [sp+1Ch] [bp-14h] BYREF
  __int64 v15; // [sp+24h] [bp-Ch]
  int v16; // [sp+2Ch] [bp-4h]

  sub_53220(a1, a2, a3);
  env = (struct __jmp_buf_tag *)(a1 + 188);
  v13 = (unsigned __int8 *)a2;
  for ( i = (__int64 *)(a2 + 8); ; *i *= v15 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v14[0] = 1;
        v15 = 0;
        v6 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 444) + 12);
        if ( v6 != 37 )
          break;
        sub_53220(a1, (int)v14, 1);
        if ( !v15 )
          longjmp(env, 86);
        v7 = *i;
        if ( v14[0] | *v13 )
          v8 = v7 % (unsigned __int64)v15;
        else
          v8 = v7 % v15;
        *i = v8;
      }
      if ( v6 != 47 )
        break;
      sub_53220(a1, (int)v14, 1);
      if ( !v15 )
        longjmp(env, 86);
      v9 = *i;
      if ( v14[0] | *v13 )
        v10 = v9 / (unsigned __int64)v15;
      else
        v10 = v9 / v15;
      *i = v10;
    }
    if ( v6 != 42 )
      break;
    sub_53220(a1, (int)v14, 1);
  }
  return _stack_chk_guard - v16;
}
