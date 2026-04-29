__int64 sub_380690(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // r9
  const char *v3; // r15
  unsigned int v4; // r12d
  gcc_va_list va; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-F0h]
  __int64 v8; // [rsp+30h] [rbp-D8h]
  __int64 v9; // [rsp+38h] [rbp-D0h]
  __int64 v10; // [rsp+40h] [rbp-C8h]
  __int64 v11; // [rsp+48h] [rbp-C0h]

  va_start(va, a2);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  v2 = v11;
  va_end(va);
  v7 = __readfsqword(0x28u);
  while ( 1 )
  {
    va_start(va, a2);
    v4 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __va_list_tag *, __int64))callui)(
           32,
           a1,
           9,
           a2,
           va,
           v2);
    if ( !(_BYTE)v4 )
      break;
    if ( *(_QWORD *)(a1 + 8) <= 1u )
      break;
    v3 = *(const char **)a1;
    if ( (unsigned __int8)sub_326F50(*(char **)a1) )
      break;
    sub_2ADAF0((__int64)"AUTOHIDE NONE\nNot a valid C identifier: %s", v3);
  }
  return v4;
}
