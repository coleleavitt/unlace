/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4585C0
// Address: 0x00000000004585C0

//----- (00000000004585C0) ----------------------------------------------------
__int64 __fastcall sub_4585C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // x0
  char *v7; // x23
  char v8; // w1
  __int64 v9; // x0
  char v10[8]; // [xsp+48h] [xbp-38h] BYREF
  __int64 v11; // [xsp+50h] [xbp-30h]
  char v12[8]; // [xsp+58h] [xbp-28h] BYREF
  __int64 v13; // [xsp+60h] [xbp-20h]
  char v14[8]; // [xsp+68h] [xbp-18h] BYREF
  __int64 v15; // [xsp+70h] [xbp-10h]
  __int64 v16; // [xsp+78h] [xbp-8h]

  v10[0] = 1;
  v11 = 0;
  sub_4584F8(a1, (__int64)v10, a3);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 672) + 24LL) == 63 )
  {
    v12[0] = 1;
    v13 = 0;
    sub_4585C0(a1, v12, 1);
    if ( *(_WORD *)(*(_QWORD *)(a1 + 672) + 24LL) != 58 )
      sub_451CA0(a1);
    v7 = v14;
    v14[0] = 1;
    v15 = 0;
    sub_4585C0(a1, v14, 1);
    if ( v11 )
    {
      v8 = v12[0];
      v7 = v12;
    }
    else
    {
      v8 = v14[0];
    }
    v9 = *((_QWORD *)v7 + 1);
    *(_BYTE *)a2 = v8;
    *(_QWORD *)(a2 + 8) = v9;
  }
  else
  {
    v5 = v11;
    *(_BYTE *)a2 = v10[0];
    *(_QWORD *)(a2 + 8) = v5;
  }
  return v16 ^ _stack_chk_guard;
}
// 4585C0: could not find valid save-restore pair for x23
