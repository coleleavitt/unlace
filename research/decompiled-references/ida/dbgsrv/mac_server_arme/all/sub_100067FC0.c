/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067FC0
// Address: 0x0000000100067FC0

//----- (0000000100067FC0) ----------------------------------------------------
__int64 __fastcall sub_100067FC0(__int64 a1, int a2)
{
  __darwin_time_t v4; // x21
  __int64 result; // x0
  int v6; // w0
  unsigned int v7; // w0
  const char *v8; // x8
  __darwin_time_t v10; // x0
  char v11; // [xsp+7h] [xbp-59h] BYREF

  v4 = qtime64();
  if ( (*(int (__fastcall **)(_QWORD))(qword_1000A5AD8 + 272))(*(_QWORD *)(a1 + 88)) > 0 )
  {
LABEL_2:
    *(_DWORD *)(a1 + 76) = -1;
    return 1;
  }
  result = sub_1000624B0(*(_QWORD *)(a1 + 32));
  if ( (int)result >= 1 )
  {
    while ( 1 )
    {
      *(_DWORD *)(a1 + 76) = a2;
      v6 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(qword_1000A5AD8 + 264))(*(_QWORD *)(a1 + 88), &v11, 1);
      if ( (v6 & 0x80000000) == 0 )
        goto LABEL_2;
      if ( v6 != -1 )
        break;
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_1000A5AD8 + 232))(*(_QWORD *)(a1 + 88), 0xFFFFFFFFLL);
      if ( v7 == 5 )
        v8 = "irs";
      else
        v8 = "openssl";
      *(_QWORD *)(a1 + 64) = v8;
      if ( v7 <= 6 && ((1 << v7) & 0x62) != 0 )
        return 0xFFFFFFFFLL;
      *(_QWORD *)(a1 + 64) = &byte_1000931E5;
      *(_DWORD *)(a1 + 72) = 0;
      if ( a2 != -1 )
        goto LABEL_19;
LABEL_5:
      result = sub_1000624B0(*(_QWORD *)(a1 + 32));
      if ( (int)result < 1 )
        goto LABEL_20;
    }
    if ( a2 == -1 )
      goto LABEL_5;
LABEL_19:
    v10 = qtime64();
    a2 = (a2 - (v10 - v4) / 0x3E8uLL) & ~((int)(a2 - (v10 - v4) / 0x3E8uLL) >> 31);
    v4 = v10;
    goto LABEL_5;
  }
LABEL_20:
  *(_QWORD *)(a1 + 64) = "irs";
  return result;
}
// 1000931E5: using guessed type char byte_1000931E5;
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
