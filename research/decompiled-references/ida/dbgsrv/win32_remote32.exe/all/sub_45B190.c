/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B190
// Address: 0x0045B190

//----- (0045B190) --------------------------------------------------------
void __stdcall sub_45B190(_DWORD *a1)
{
  int v1; // ecx
  _DWORD *v2; // edi
  void *v3; // eax
  void *v4; // [esp-4h] [ebp-1Ch]

  v1 = a1[4] & 0xFFFFFFF;
  switch ( v1 )
  {
    case 1:
    case 8:
    case 11:
      if ( v1 != 1 && v1 != 11 && v1 != 8 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(3295);
      }
      goto LABEL_5;
    case 3:
    case 9:
    case 10:
      if ( v1 != 3 && v1 != 9 && v1 != 10 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(3297);
      }
LABEL_5:
      if ( a1[5] )
      {
        v4 = (void *)a1[5];
        a1[6] = 0;
        sub_453A20(v4);
        a1[5] = 0;
        a1[7] = 0;
      }
      break;
    case 5:
      sub_40CCF0(a1);
      break;
    case 7:
      v2 = sub_410C10(a1);
      v3 = (void *)v2[3];
      if ( v3 )
      {
        v2[4] = 0;
        sub_453A20(v3);
        v2[3] = 0;
        v2[5] = 0;
      }
      break;
    default:
      break;
  }
  a1[4] = 0;
}
// 4B70F0: using guessed type char byte_4B70F0;
