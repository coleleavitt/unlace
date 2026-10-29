/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448BA8
// Address: 0x0000000000448BA8

//----- (0000000000448BA8) ----------------------------------------------------
__int64 __fastcall sub_448BA8(__int64 *a1)
{
  unsigned int v2; // w0
  size_t v3; // x0
  size_t v4; // x24
  size_t v5; // x22
  void *v6; // x0
  __int64 result; // x0
  char v8; // w0
  _BYTE *v9; // x0
  char v10; // w2
  int v11; // w0
  _BYTE *v12; // x0
  char v13; // w1
  char v14[1024]; // [xsp+48h] [xbp-408h] BYREF

  while ( 1 )
  {
    v2 = *(unsigned __int8 *)a1;
    if ( v2 == 7 )
      return 0;
    if ( v2 <= 7 )
      break;
    if ( v2 == 9 )
    {
      v8 = *((_BYTE *)a1 + 8);
      a1[1] = 0;
      a1[2] = 0;
      a1[3] = 0;
      v14[0] = v8;
      v9 = sub_491288((__int64)(a1 + 1), nullptr, 2u, 1u);
      a1[1] = (__int64)v9;
      v10 = v14[0];
      a1[2] = 2;
      *v9 = v10;
      *(_BYTE *)(a1[1] + 1) = 0;
      *(_BYTE *)a1 = 7;
      return 0;
    }
    if ( v2 != 10 )
      return sub_4869C8(1531);
    if ( !sub_448A08(a1, 2) )
      return sub_4869A0();
  }
  if ( v2 != 2 )
  {
    if ( v2 == 3 )
    {
      sub_4890C8(v14, 0x400u, a1 + 1, 50);
      a1[1] = 0;
      a1[2] = 0;
      a1[3] = 0;
      v3 = strlen(v14);
      v4 = v3 + 1;
      v5 = v3;
      v6 = sub_491288((__int64)(a1 + 1), nullptr, v3 + 1, 1u);
      a1[1] = (__int64)v6;
      a1[2] = v4;
      memmove(v6, v14, v5);
      result = 0;
      *(_BYTE *)(a1[1] + v5) = 0;
      *(_BYTE *)a1 = 7;
      return result;
    }
    return sub_4869C8(1531);
  }
  v11 = *((unsigned __int8 *)a1 + 8);
  a1[1] = 0;
  v14[0] = v11;
  a1[2] = 0;
  a1[3] = 0;
  if ( v11 )
  {
    v12 = sub_491288((__int64)(a1 + 1), nullptr, 2u, 1u);
    a1[1] = (__int64)v12;
    v13 = v14[0];
    a1[2] = 2;
    *v12 = v13;
    *(_BYTE *)(a1[1] + 1) = 0;
  }
  *(_BYTE *)a1 = 7;
  return 0;
}
// 448BA8: could not find valid save-restore pair for x22
// 448BA8: could not find valid save-restore pair for x24
