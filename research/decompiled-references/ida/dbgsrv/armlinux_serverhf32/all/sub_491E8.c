/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_491E8
// Address: 0x000491E8

//----- (000491E8) --------------------------------------------------------
int __fastcall sub_491E8(_DWORD *a1)
{
  int v2; // r7
  int v3; // r3
  int v4; // r2
  int v5; // r3
  int v6; // r4
  int v8; // r2
  int v9; // r3
  void *ptr[3]; // [sp+4h] [bp-2Ch] BYREF
  unsigned __int8 v11[8]; // [sp+10h] [bp-20h] BYREF
  int v12; // [sp+18h] [bp-18h]
  int v13; // [sp+1Ch] [bp-14h]
  int v14; // [sp+20h] [bp-10h]
  int v15; // [sp+24h] [bp-Ch]

  memset(ptr, 0, sizeof(ptr));
  v2 = sub_46F80((int)a1, (__int64 *)ptr);
  if ( v2 )
  {
    v3 = a1[4];
    v11[0] = 2;
    v4 = a1[3];
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    sub_459A0(v11, (unsigned __int8 *)(v4 + 24 * v3 - 24));
    v5 = a1[4];
    if ( v5 )
    {
      v8 = a1[3];
      v9 = v5 - 1;
      a1[4] = v9;
      sub_455C8((unsigned __int8 *)(v8 + 24 * v9));
    }
    sub_455C8(v11);
    v6 = sub_48C54((int)a1, v2, (const char **)ptr, (unsigned __int8 *)(a1[3] + 24 * a1[4] - 24));
  }
  else
  {
    sub_4918C(a1);
    v6 = 0;
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    sub_77E08(ptr[0]);
  }
  return v6;
}
