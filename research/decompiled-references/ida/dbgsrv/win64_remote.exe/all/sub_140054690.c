/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054690
// Address: 0x0000000140054690

//----- (0000000140054690) ----------------------------------------------------
bool __fastcall sub_140054690(struct __crt_locale_pointers *a1, signed __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v6; // rdx
  unsigned int v8; // r14d
  int v9; // esi
  bool result; // al
  __int16 *v11; // rdx
  int v12; // eax
  struct __crt_locale_pointers *v13; // rbx
  unsigned __int64 v14; // rdi
  int v15; // eax
  int v16; // [rsp+20h] [rbp-98h]
  int tm_mday; // [rsp+28h] [rbp-90h]
  int tm_hour; // [rsp+38h] [rbp-80h]
  int tm_min; // [rsp+40h] [rbp-78h]
  int tm_sec; // [rsp+48h] [rbp-70h]
  struct tm v21; // [rsp+50h] [rbp-68h] BYREF

  v6 = HIDWORD(a3);
  v8 = a3;
  v9 = a4 & 1;
  if ( (a4 & 1) != 0 )
    result = sub_14005A750((__int64)&v21, v6);
  else
    result = sub_14005A780(&v21, v6);
  if ( result )
  {
    v11 = &word_1400929C4;
    if ( (a4 & 2) != 0 )
      v11 = (__int16 *)"T";
    tm_sec = v21.tm_sec;
    tm_min = v21.tm_min;
    tm_hour = v21.tm_hour;
    tm_mday = v21.tm_mday;
    v16 = v21.tm_mon + 1;
    v12 = sub_14005B0A0(
            a1,
            a2,
            "%04u-%02u-%02u%s%02u:%02u:%02u",
            (unsigned int)(v21.tm_year + 1900),
            v16,
            tm_mday,
            v11,
            tm_hour,
            tm_min,
            tm_sec);
    v13 = (struct __crt_locale_pointers *)((char *)a1 + v12);
    v14 = a2 - v12;
    if ( (a4 & 4) != 0 )
    {
      v15 = sub_14005B0A0(v13, v14, ".%03u", v8 / 0x3E8);
      v13 = (struct __crt_locale_pointers *)((char *)v13 + v15);
      v14 -= v15;
    }
    if ( (a4 & 2) != 0 && v9 && v14 >= 2 )
      LOWORD(v13->locinfo) = 90;
    return 1;
  }
  return result;
}
// 1400929C4: using guessed type __int16 word_1400929C4;
