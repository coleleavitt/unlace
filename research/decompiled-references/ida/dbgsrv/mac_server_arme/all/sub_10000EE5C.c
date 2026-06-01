/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000EE5C
// Address: 0x000000010000EE5C

//----- (000000010000EE5C) ----------------------------------------------------
__int64 __fastcall sub_10000EE5C(__int64 a1)
{
  __int64 result; // x0
  int v5; // [xsp+4h] [xbp-1Ch] BYREF

  qlseek(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 96), 0);
  if ( qlread(*(_QWORD *)(a1 + 48), &v5, 4u) != 4 )
    return 0;
  result = 1;
  if ( v5 > -805638659 )
  {
    if ( (unsigned int)(v5 + 17958194) >= 2 && v5 != -805638658 )
      goto LABEL_15;
  }
  else
  {
    if ( v5 == -1095041334 || v5 == -889275714 )
      return sub_10000EF64(a1);
    if ( v5 != -822415874 )
    {
LABEL_15:
      if ( (*(_BYTE *)(a1 + 480) & 1) == 0 )
        return sub_10000E8B0((__int64 *)a1);
      return 0;
    }
  }
  return result;
}
