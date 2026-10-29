__int64 __fastcall sub_9A48A0(_QWORD *a1, unsigned __int16 *a2, __int64 *a3)
{
  __int64 v4; // rax
  char *v5; // rsi
  char *v6; // rsi
  unsigned __int16 v7; // ax
  _QWORD v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = *a3;
  v5 = (char *)a1[1];
  *a3 = 0;
  v9[0] = v4;
  if ( v5 == (char *)a1[2] )
  {
    sub_9A4600((__int64)a1, v5, v9);
  }
  else
  {
    v9[0] = 0;
    v6 = v5 + 8;
    *((_QWORD *)v6 - 1) = v4;
    a1[1] = v6;
  }
  if ( v9[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[0] + 8LL))(v9[0]);
  v7 = ((__int64)(a1[1] - *a1) >> 3) - 1;
  *a2 = v7;
  return v7 | 0x10000u;
}

