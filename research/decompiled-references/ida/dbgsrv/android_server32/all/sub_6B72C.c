/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B72C
// Address: 0x0006B72C

//----- (0006B72C) --------------------------------------------------------
int __fastcall sub_6B72C(int a1, const char *a2, int a3)
{
  __suseconds_t v4; // r0
  int v5; // r1
  const char *v6; // r3
  int v7; // r4
  char *v9; // [sp+4h] [bp-2Ch] BYREF
  int v10; // [sp+8h] [bp-28h]
  int v11; // [sp+Ch] [bp-24h]
  char v12[28]; // [sp+10h] [bp-20h] BYREF

  v10 = 0;
  v9 = nullptr;
  v11 = 0;
  sub_26F18((int)&v9, a2, a3);
  v4 = qtime64();
  format_timestamp(v12, 25, v4, v5, 0);
  if ( v10 )
    v6 = v9;
  else
    v6 = &byte_B3CBE;
  v7 = sub_6F20C("%s [%u] %s", v12, *(_DWORD *)(a1 + 84), v6);
  if ( v9 )
  {
    v10 = 0;
    qfree(v9);
    v11 = 0;
    v9 = nullptr;
  }
  return v7;
}
// 6B75A: variable 'v5' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
