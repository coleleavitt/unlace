__int64 __fastcall sub_1075780(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  bool v4; // zf
  __int64 result; // rax

  sub_10751D0(a1, a2, a3);
  *(_BYTE *)(a1 + 273) = 0;
  *(_QWORD *)a1 = &off_2C2A310;
  v3 = a2[2].m128i_i32[3];
  if ( (v3 & 0xFFFFFFF7) == 1 )
  {
    *(_BYTE *)(a1 + 273) = sub_22B7F30(a2, 10, 7, 0) ^ 1;
  }
  else
  {
    switch ( v3 )
    {
      case 27:
      case 5:
        if ( (unsigned __int8)sub_22B7EA0(a2) )
        {
          *(_BYTE *)(a1 + 273) = (unsigned int)sub_22B7B00(a2) > 7;
        }
        else if ( (unsigned __int8)sub_22B7EC0(a2) )
        {
          if ( a2[3].m128i_i32[0] == 31 )
            *(_BYTE *)(a1 + 273) = (unsigned int)sub_22B7B00(a2) > 9;
          else
            *(_BYTE *)(a1 + 273) = (unsigned int)sub_22B7B00(a2) > 8;
        }
        break;
      case 28:
        if ( a2[3].m128i_i32[0] == 31 )
          *(_BYTE *)(a1 + 273) = (unsigned int)sub_22B7B00(a2) > 2;
        else
          *(_BYTE *)(a1 + 273) = (unsigned int)sub_22B7B00(a2) > 1;
        break;
      case 31:
        *(_BYTE *)(a1 + 273) = 1;
        break;
    }
  }
  *(_BYTE *)(a1 + 392) |= 1u;
  v4 = a2[2].m128i_i32[1] == 26;
  *(_QWORD *)(a1 + 328) = &unk_22F9E9A;
  *(_QWORD *)a1 = &off_2C2CA50;
  result = 2;
  if ( v4 )
  {
    *(_BYTE *)(a1 + 184) &= ~1u;
    result = 4;
  }
  *(_DWORD *)(a1 + 340) = result;
  return result;
}
