/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000FA10
// Address: 0x000000010000FA10

//----- (000000010000FA10) ----------------------------------------------------
__int64 __fastcall sub_10000FA10(__int64 a1)
{
  unsigned int v1; // ebx
  int v4; // [rsp+4h] [rbp-1Ch] BYREF

  v1 = 0;
  qlseek(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 96), 0);
  if ( qlread(*(_QWORD *)(a1 + 48), &v4, 4) == 4 )
  {
    LOBYTE(v1) = 1;
    if ( v4 > -805638659 )
    {
      if ( (unsigned int)(v4 + 17958194) >= 2 && v4 != -805638658 )
        goto LABEL_9;
    }
    else
    {
      if ( v4 == -1095041334 || v4 == -889275714 )
        return (unsigned int)sub_10000FAD0(a1);
      if ( v4 != -822415874 )
      {
LABEL_9:
        if ( (*(_BYTE *)(a1 + 480) & 1) != 0 )
          return 0;
        return (unsigned int)sub_10000F490((__int64 *)a1);
      }
    }
  }
  return v1;
}
