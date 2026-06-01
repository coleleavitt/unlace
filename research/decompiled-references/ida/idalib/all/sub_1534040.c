__int64 __fastcall sub_1534040(__int64 a1, __m128i a2)
{
  __int64 result; // rax
  __int64 v3; // kr00_8

  while ( 2 )
  {
    result = (unsigned __int16)(*(_WORD *)(a1 + 32) - 427);
    v3 = result;
LABEL_2:
    switch ( v3 )
    {
      case 0LL:
        sub_1526F20(a1);
        continue;
      case 1LL:
        sub_1526F60(a1);
        continue;
      case 4LL:
        sub_1527030(a1, a2);
        continue;
      case 5LL:
        sub_1526FD0(a1);
        continue;
      case 6LL:
        sub_1527000(a1);
        continue;
      case 7LL:
        sub_1527550(a1);
        continue;
      case 8LL:
        sub_15275C0(a1);
        continue;
      case 9LL:
        sub_15276A0(a1);
        continue;
      case 10LL:
        sub_1527780(a1);
        continue;
      case 11LL:
      case 12LL:
        sub_1527850(a1);
        continue;
      case 13LL:
        sub_15278A0(a1);
        continue;
      case 14LL:
        sub_15278E0(a1);
        continue;
      case 15LL:
        sub_15277F0(a1);
        continue;
      case 16LL:
        sub_1527CF0(a1);
        continue;
      case 17LL:
        sub_1527D30(a1);
        continue;
      case 18LL:
        sub_1527D90(a1);
        continue;
      case 19LL:
        sub_1527A60(a1);
        continue;
      case 26LL:
        sub_1528120(a1);
        result = (unsigned __int16)(*(_WORD *)(a1 + 32) - 427);
        v3 = result;
        if ( (unsigned __int16)result <= 0x1Au )
          goto LABEL_2;
        break;
      default:
        return result;
    }
    return result;
  }
}
