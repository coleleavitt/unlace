__int64 __fastcall sub_1051A40(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  bool v4; // zf
  __int64 result; // rax

  sub_1051490(a1, a2, a3);
  *(_BYTE *)(a1 + 273) = 0;
  *(_QWORD *)a1 = &off_2C00310;
  v3 = a2[2].m128i_i32[3];
  if ( (v3 & 0xFFFFFFF7) == 1 )
  {
    *(_BYTE *)(a1 + 273) = sub_22941F0(a2, 10, 7, 0) ^ 1;
  }
  else
  {
    switch ( v3 )
    {
      case 27:
      case 5:
        if ( (unsigned __int8)sub_2294160(a2) )
        {
          *(_BYTE *)(a1 + 273) = (unsigned int)sub_2293DC0(a2) > 7;
        }
        else if ( (unsigned __int8)sub_2294180(a2) )
        {
          if ( a2[3].m128i_i32[0] == 31 )
            *(_BYTE *)(a1 + 273) = (unsigned int)sub_2293DC0(a2) > 9;
          else
            *(_BYTE *)(a1 + 273) = (unsigned int)sub_2293DC0(a2) > 8;
        }
        break;
      case 28:
        if ( a2[3].m128i_i32[0] == 31 )
          *(_BYTE *)(a1 + 273) = (unsigned int)sub_2293DC0(a2) > 2;
        else
          *(_BYTE *)(a1 + 273) = (unsigned int)sub_2293DC0(a2) > 1;
        break;
      case 31:
        *(_BYTE *)(a1 + 273) = 1;
        break;
    }
  }
  *(_BYTE *)(a1 + 392) |= 1u;
  v4 = a2[2].m128i_i32[1] == 26;
  *(_QWORD *)(a1 + 328) = &unk_22D6A7B;
  *(_QWORD *)a1 = &off_2C02A50;
  result = 2;
  if ( v4 )
  {
    *(_BYTE *)(a1 + 184) &= ~1u;
    result = 4;
  }
  *(_DWORD *)(a1 + 340) = result;
  return result;
}

