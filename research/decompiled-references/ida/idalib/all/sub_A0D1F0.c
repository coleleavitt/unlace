__int64 __fastcall sub_A0D1F0(__int64 *a1, unsigned __int8 *a2, size_t a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  char v6; // dl
  __int64 v8; // rsi
  int v9; // [rsp+0h] [rbp-54h] BYREF
  char v10; // [rsp+4h] [rbp-50h]
  int v11; // [rsp+8h] [rbp-4Ch]
  _BYTE v12[16]; // [rsp+Ch] [rbp-48h] BYREF
  unsigned int *v13; // [rsp+1Ch] [rbp-38h]

  if ( !*(_QWORD *)(*a1 + 88) )
    return 0;
  v5 = sub_A0A820(*a1, a2, a3);
  if ( !v6 )
    return 0;
  v10 = 2;
  if ( !BYTE4(a4) )
    LODWORD(a4) = -1;
  v8 = *(_QWORD *)(*a1 + 88);
  v11 = v5 >> 33;
  v9 = a4;
  sub_A0C580((__int64)v12, v8, (__int64)&v9);
  if ( v13 )
    return *v13 | 0x100000000LL;
  else
    return 0;
}
