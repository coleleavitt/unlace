__int64 __fastcall sub_3B5280(int a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int16 v6; // [rsp+4h] [rbp-24h] BYREF
  __int16 v7; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  switch ( a1 )
  {
    case -1:
      if ( (byte_8BCD38 & 1) == 0 || byte_8CF9E8 )
      {
        v4 = *a2;
        v7 = 0;
        (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(v4 + 8))(a2, 2, &v7);
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a2 + 16))(a2, 2, 0);
      }
      break;
    case 1:
      (*(void (__fastcall **)(__int64 *, __int64, __int16 *))*a2)(a2, 1, &v6);
      v2 = *a2;
      if ( v6 )
      {
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v2 + 16))(a2, 2, (unsigned __int8)byte_8CF9E8 ^ 1u);
      }
      else
      {
        v7 = 0;
        (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(v2 + 8))(a2, 2, &v7);
        v5 = *a2;
        byte_8BCD38 &= ~2u;
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v5 + 16))(a2, 2, 0);
      }
      goto LABEL_4;
    case 2:
    case 4:
    case 16:
LABEL_4:
      byte_8BCD38 ^= a1;
      break;
    case 5:
      (*(void (__fastcall **)(__int64 *, __int64, char *, __int64))(*a2 + 80))(a2, 5, &byte_8CFA00, 4096);
      break;
    default:
      return 1;
  }
  return 1;
}
