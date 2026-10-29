__int64 __fastcall sub_205B240(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rax

  switch ( *(_BYTE *)a1 )
  {
    case 0:
      sub_2051750((__int64)a1);
    case 1:
      sub_2051840((__int64)a1);
      break;
    case 2:
      sub_2051480((__int64)a1);
      break;
    case 3:
    case 4:
      sub_20540F0(a1);
      break;
    case 5:
    case 6:
    case 9:
    case 0x15:
      sub_205ABB0((__int64)a1);
      break;
    case 7:
      sub_2051690((__int64)a1);
      break;
    case 8:
      sub_20515D0((__int64)a1);
      break;
    case 0xA:
      sub_205A290((__int64)a1);
      break;
    case 0xB:
      sub_205A5C0((__int64)a1);
      break;
    case 0xC:
      sub_205A8F0((__int64)a1);
      break;
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
      sub_2EB590((__int64)a1, a2, a3, a4);
    case 0x11:
      sub_2051900((__int64)a1);
      break;
    case 0x12:
      sub_205B140((__int64)a1);
      break;
    case 0x13:
      sub_20519A0((__int64)a1);
      break;
    case 0x14:
      sub_2051A40((__int64)a1);
      break;
  }
  for ( i = a1[2]; i; i = a1[2] )
    sub_205B240(*(_QWORD *)(i + 24));
  return sub_2051200((__int64)a1);
}
