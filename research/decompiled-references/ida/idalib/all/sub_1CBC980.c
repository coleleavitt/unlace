__int64 __fastcall sub_1CBC980(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 *v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // [rsp+8h] [rbp-A0h] BYREF
  _BYTE v8[152]; // [rsp+10h] [rbp-98h] BYREF

  v7 = a4;
  switch ( a2 )
  {
    case 0:
    case 6:
      result = 0;
      break;
    case 1:
    case 5:
      sub_168BB30((__int64)v8, (__int64 *)(a1 + 8), a3, 3u, 0);
      sub_15884C0((__int64)v8, &v7);
      sub_15F7200(v8);
      result = 0;
      break;
    case 2:
      v5 = (__int64 *)(a1 + 8);
      v6 = 5150;
      goto LABEL_4;
    case 3:
    case 4:
      v5 = (__int64 *)(a1 + 8);
      v6 = 5149;
LABEL_4:
      sub_168B9F0((__int64)v8, v5, a3, v6, 0);
      sub_15884C0((__int64)v8, &v7);
      sub_15F7200(v8);
      result = 1;
      break;
  }
  return result;
}
