unsigned __int64 __fastcall sub_3C8D0(__int64 *a1, __int64 a2)
{
  int v2; // ebp
  unsigned __int64 result; // rax
  int v4; // r13d
  __int64 v5; // r12
  __int16 v6; // dx
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // r12d
  int v12; // [rsp+Ch] [rbp-3Ch]

  v2 = *(unsigned __int16 *)(a2 + 6);
  result = (unsigned int)(v2 - 129);
  if ( (unsigned int)result <= 0x41 )
    return sub_3C700(a1, a2);
  v4 = *(char *)(a2 + 34) - 1;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v12 = *(char *)(a2 + 34);
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 123);
    sub_3A6C0(a1, v2, v4);
    v5 = *(_QWORD *)(a2 + 8);
    if ( (int)v5 - 1 > 0 )
    {
      v6 = *((_WORD *)a1 + 124);
      v7 = *(char *)(a2 + 33) + 1;
      if ( (unsigned __int16)(v6 - 1064) <= 0xBu || *(_BYTE *)(a2 + 33) || (unsigned int)(v12 + 1) > 1 )
      {
        v10 = v5 - 2;
        do
        {
          v2 += v7;
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
          sub_3A6C0(a1, v2, v4);
        }
        while ( v10-- != 0 );
        if ( !*(_BYTE *)(a2 + 32) )
          return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 125);
LABEL_9:
        v8 = *a1;
        v9 = 44;
LABEL_10:
        (*(void (__fastcall **)(__int64 *, __int64))(v8 + 32))(a1, v9);
        (*(void (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, "VPR", 33);
        return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 125);
      }
      (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, (unsigned int)((unsigned __int16)(v6 - 164) > 1u) + 44);
      sub_3A6C0(a1, v2 + v5 - 1, v4);
    }
    if ( !*(_BYTE *)(a2 + 32) )
      return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 125);
    goto LABEL_9;
  }
  if ( v4 >= 0 )
    return sub_3A6C0(a1, *(unsigned __int16 *)(a2 + 6), v4);
  if ( *(_BYTE *)(a2 + 32) )
  {
    v8 = *a1;
    v9 = 123;
    goto LABEL_10;
  }
  return result;
}
