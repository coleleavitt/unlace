/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2FDC
// Address: 0x00000000000A2FDC

//----- (00000000000A2FDC) ----------------------------------------------------
__int64 __fastcall sub_A2FDC(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD, char *, __int64))
{
  __int64 v10; // x8
  unsigned int v11; // w23
  char *v13; // x1
  __int64 v14; // x0
  __int64 v15; // x9

  if ( (*(_BYTE *)(a1 + 28) & 8) == 0 )
  {
    v10 = *(_QWORD *)(a4 + 8);
    goto LABEL_20;
  }
  v11 = *(unsigned __int8 *)(a4 + 32);
  if ( v11 == 160 )
  {
    LODWORD(v10) = 0;
    goto LABEL_20;
  }
  if ( v11 < 0x10 || v11 - 61 < 0x20 )
  {
LABEL_14:
    v13 = (char *)*(&off_15E6A0 + *(unsigned __int8 *)(a4 + 32));
    goto LABEL_15;
  }
  if ( (v11 | 2) != 0x12 )
  {
    if ( v11 - 129 >= 0x1F && v11 - 163 >= 0x20 )
    {
      if ( v11 == 161 )
      {
        v13 = "SP";
      }
      else
      {
        if ( v11 != 162 )
        {
          sub_4EC28((__int64)"Bad register number passed to arm.get_register_value: %d", v11);
          LODWORD(v10) = 0;
          goto LABEL_20;
        }
        v13 = "PC";
      }
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v13 = byte_1071D3;
LABEL_15:
  v14 = (**a6)(a6, v13, a5);
  v15 = 8;
  if ( (a3 & 1) != 0 )
    v15 = 4;
  if ( v11 != 15 )
    v15 = 0;
  v10 = *(_QWORD *)(v14 + 8) + v15;
LABEL_20:
  switch ( *(_BYTE *)(a4 + 33) )
  {
    case 0:
      a2 <<= v10;
      return a2;
    case 1:
      a2 >>= v10;
      return a2;
    case 2:
      return (unsigned int)((int)a2 >> v10);
    case 3:
      return (unsigned int)rotate_left(a2, -(int)v10, 0, 0x20u);
    case 4:
      return (a2 >> 1) | (*(_DWORD *)((**a6)(a6, byte_1071D3, a5) + 8) >> 29 << 31);
    default:
      return a2;
  }
}
// 15E6A0: using guessed type _UNKNOWN *off_15E6A0;
