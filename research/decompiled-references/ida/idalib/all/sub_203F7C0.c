__int64 __fastcall sub_203F7C0(__int64 a1, _DWORD *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 *v4; // [rsp+8h] [rbp-20h]
  __int64 *v5; // [rsp+8h] [rbp-20h]

  if ( (BYTE1(*(_QWORD *)a2) & 0x7F) == 1 )
  {
    v4 = a3;
    sub_995540(a1, "distinct ");
    a3 = v4;
  }
  else if ( (BYTE1(*(_QWORD *)a2) & 0x7F) == 2 )
  {
    v5 = a3;
    sub_995540(a1, "<temporary!> ");
    a3 = v5;
  }
  switch ( *(_BYTE *)a2 )
  {
    case 5:
      result = sub_203F5D0(a1, (__int64)a2, a3);
      break;
    case 6:
      result = sub_203A1C0(a1, (__int64)a2, (__int64)a3);
      break;
    case 7:
      result = sub_2030E90(a1, (__int64)a2);
      break;
    case 8:
      result = sub_203E090(a1, (__int64)a2, (__int64)a3);
      break;
    case 9:
      result = sub_203E8A0(a1, (__int64)a2, (char *)a3);
      break;
    case 0xA:
      result = sub_203A460(a1, (__int64)a2, (__int64)a3);
      break;
    case 0xB:
      result = sub_2031F10(a1, (__int64)a2);
      break;
    case 0xC:
      result = sub_203A660(a1, a2, (__int64)a3);
      break;
    case 0xD:
      result = sub_203B0A0(a1, (__int64)a2, (__int64)a3);
      break;
    case 0xE:
      result = sub_203B920(a1, (__int64)a2, (__int64)a3);
      break;
    case 0xF:
      result = sub_2039D80(a1, (__int64)a2, (const char *)a3);
      break;
    case 0x10:
      result = sub_2032090(a1, (__int64)a2);
      break;
    case 0x11:
      result = sub_203C100(a1, (__int64)a2, (const char *)a3);
      break;
    case 0x12:
      result = sub_203C6A0(a1, (__int64)a2, (const char *)a3);
      break;
    case 0x13:
      result = sub_203CF60(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x14:
      result = sub_203D0C0(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x15:
      result = sub_2039F10(a1, a2, (__int64)a3);
      break;
    case 0x16:
      result = sub_203D4E0(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x17:
      result = sub_203A030(a1, a2, (__int64)a3);
      break;
    case 0x18:
      result = sub_203D730(a1, a2, (__int64)a3);
      break;
    case 0x19:
      result = sub_203D8B0(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x1A:
      result = sub_203DC30(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x1B:
      result = sub_203DEA0(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x1C:
      result = sub_203E190(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x1D:
      result = sub_203E380(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x1E:
      result = sub_995540(a1, "!DIAssignID()");
      break;
    case 0x1F:
      result = sub_2031510(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x20:
      result = sub_203D3C0(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x21:
      result = sub_203D200(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x22:
      result = sub_203AE40(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x23:
      result = sub_203AAF0(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x24:
      result = sub_203B560(a1, (__int64)a2, (__int64)a3);
      break;
    case 0x25:
      result = sub_203A810(a1, a2, (const char *)a3);
      break;
  }
  return result;
}
