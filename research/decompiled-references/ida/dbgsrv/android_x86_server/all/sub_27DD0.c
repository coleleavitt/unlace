/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27DD0
// Address: 0x00027DD0

//----- (00027DD0) --------------------------------------------------------
int __cdecl sub_27DD0(int a1)
{
  int v1; // eax
  int v2; // eax
  int result; // eax

  v1 = *(_DWORD *)(a1 + 468);
  if ( v1 )
    (*(void (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v1,
      a1 + 472,
      *(unsigned __int8 *)(a1 + 473));
  *(_DWORD *)(a1 + 468) = 0;
  *(_BYTE *)(a1 + 473) = 0;
  v2 = *(_DWORD *)(a1 + 476);
  if ( v2 )
    (*(void (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v2,
      a1 + 480,
      *(unsigned __int8 *)(a1 + 481));
  *(_DWORD *)(a1 + 476) = 0;
  *(_BYTE *)(a1 + 481) = 0;
  result = *(_DWORD *)(a1 + 484);
  if ( result )
    result = (*(int (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
               a1,
               4,
               result,
               a1 + 488,
               *(unsigned __int8 *)(a1 + 489));
  *(_DWORD *)(a1 + 484) = 0;
  *(_BYTE *)(a1 + 489) = 0;
  return result;
}
