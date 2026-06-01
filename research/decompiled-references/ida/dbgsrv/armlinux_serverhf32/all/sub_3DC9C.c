/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DC9C
// Address: 0x0003DC9C

//----- (0003DC9C) --------------------------------------------------------
const char *__fastcall sub_3DC9C(_DWORD *a1, int a2, const char *a3, int a4)
{
  const char *v5; // r4
  unsigned __int8 v7[8]; // [sp+0h] [bp-20h] BYREF
  int v8; // [sp+8h] [bp-18h]
  int v9; // [sp+Ch] [bp-14h]
  int v10; // [sp+10h] [bp-10h]
  int v11; // [sp+14h] [bp-Ch]

  v7[0] = 2;
  v9 = 0;
  v8 = 0;
  v10 = 0;
  v11 = 0;
  v5 = sub_3DBF4((int)v7, a2, a3, a4);
  if ( v5 )
  {
    sub_46348((int)v7);
    *a1 = v8;
  }
  sub_455C8(v7);
  return v5;
}
