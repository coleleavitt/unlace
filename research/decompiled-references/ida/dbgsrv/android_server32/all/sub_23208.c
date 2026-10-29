/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23208
// Address: 0x00023208

//----- (00023208) --------------------------------------------------------
int __fastcall sub_23208(int a1)
{
  int v2; // r2
  _DWORD *v3; // r1
  int v4; // r2
  int v5; // r2

  v2 = *(_DWORD *)(a1 + 800);
  if ( v2 )
    (*(void (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v2,
      a1 + 804,
      *(unsigned __int8 *)(a1 + 808));
  *(_DWORD *)(a1 + 800) = 0;
  *(_BYTE *)(a1 + 808) = 0;
  v3 = (_DWORD *)(a1 + 812);
  v4 = *(_DWORD *)(a1 + 812);
  if ( v4 )
  {
    (*(void (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v4,
      a1 + 816,
      *(unsigned __int8 *)(a1 + 820));
    v3 = (_DWORD *)(a1 + 812);
  }
  *v3 = 0;
  *(_BYTE *)(a1 + 820) = 0;
  v5 = *(_DWORD *)(a1 + 824);
  if ( v5 )
    (*(void (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v5,
      a1 + 828,
      *(unsigned __int8 *)(a1 + 832));
  *(_DWORD *)(a1 + 824) = 0;
  *(_BYTE *)(a1 + 832) = 0;
  return a1 + 832;
}
