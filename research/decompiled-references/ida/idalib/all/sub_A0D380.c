__int64 __fastcall sub_A0D380(__int64 *a1, unsigned __int8 *a2, size_t a3)
{
  unsigned __int64 v3; // rax
  char v4; // dl
  __int64 v6; // rdx
  __int64 v7; // rsi
  int v8; // [rsp+0h] [rbp-44h] BYREF
  char v9; // [rsp+4h] [rbp-40h]
  int v10; // [rsp+8h] [rbp-3Ch]
  _BYTE v11[16]; // [rsp+Ch] [rbp-38h] BYREF
  unsigned int *v12; // [rsp+1Ch] [rbp-28h]

  if ( !*(_QWORD *)(*a1 + 88) )
    return 0;
  v3 = sub_A0A820(*a1, a2, a3);
  if ( v4
    && (v6 = *a1,
        v8 = -1,
        v10 = v3 >> 33,
        v7 = *(_QWORD *)(v6 + 88),
        v9 = 0,
        sub_A0C580((__int64)v11, v7, (__int64)&v8),
        v12) )
  {
    return *v12 | 0x100000000LL;
  }
  else
  {
    return 0;
  }
}
