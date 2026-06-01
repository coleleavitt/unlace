/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A680
// Address: 0x0001A680

//----- (0001A680) --------------------------------------------------------
int __fastcall sub_1A680(int a1, int a2)
{
  int v4; // r2
  int v5; // r4
  int v7; // [sp+4h] [bp-40h] BYREF
  int v8[5]; // [sp+Ch] [bp-38h] BYREF
  char v9; // [sp+20h] [bp-24h]
  int v10; // [sp+24h] [bp-20h]
  char v11; // [sp+28h] [bp-1Ch]
  char v12; // [sp+29h] [bp-1Bh]
  int v13; // [sp+2Ch] [bp-18h]
  void *ptr; // [sp+30h] [bp-14h]
  int v15; // [sp+34h] [bp-10h]
  int v16; // [sp+38h] [bp-Ch]

  v8[0] = a2;
  v8[1] = a2;
  memset(&v8[2], 0, 12);
  v9 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  ptr = nullptr;
  v15 = 0;
  v16 = 0;
  v10 = 1;
  sub_1A588((int)&v7, (_DWORD *)(a1 + 1000), v8);
  if ( ptr )
  {
    v15 = 0;
    sub_77F70(ptr);
  }
  v4 = a2;
  v5 = v7 + 20;
  sub_18920(a1, (int *)(v7 + 52), v4);
  return v5;
}
