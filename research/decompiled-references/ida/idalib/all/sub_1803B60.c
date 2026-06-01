void __fastcall sub_1803B60(__int64 a1, __int64 a2, const __m128i *a3)
{
  switch ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL) )
  {
    case 7:
      sub_1650DB0(*(__int64 **)(a1 + 640), a2, a3);
      break;
    case 0xF:
      sub_1A6CA70(*(_QWORD *)(a1 + 704));
      break;
    case 0x10:
    case 0x11:
      sub_1A722D0(*(_QWORD *)(a1 + 712));
      break;
    case 0x14:
      sub_1A767E0(*(_QWORD *)(a1 + 720));
      break;
    case 0x1B:
    case 0x1C:
      sub_1C2D250(*(_QWORD *)(a1 + 784));
      break;
    case 0x25:
    case 0x26:
      sub_1E9E9D0(*(_QWORD *)(a1 + 832));
      break;
    default:
      sub_162EF90(*(_QWORD **)(a1 + 632), a2, a3);
      break;
  }
}
