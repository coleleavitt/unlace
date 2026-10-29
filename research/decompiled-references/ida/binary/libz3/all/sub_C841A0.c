__int64 __fastcall sub_C841A0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // rsi
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 result; // rax
  char *v8; // r12
  void *v9; // [rsp+0h] [rbp-18h]

  v1 = (__int64 *)sub_186B270(0x30u);
  v2 = *(__int64 **)(a1 + 16);
  v3 = *v2;
  *v1 = *v2;
  sub_16669D0(v1 + 1, v3);
  result = sub_14B7810((int)v1 + 24, *v1, (int)a1 + 24, v4, v5, v6, v9);
  v8 = *(char **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v1;
  if ( v8 )
  {
    sub_14B63F0(v8 + 24);
    return sub_186B220(v8);
  }
  return result;
}

