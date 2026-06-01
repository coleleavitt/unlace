void __fastcall sub_14A1D90(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // r13d
  __int64 v3; // r14
  unsigned int v4; // r12d
  unsigned __int64 v5; // [rsp+4h] [rbp-D4h] BYREF
  char v6; // [rsp+Ch] [rbp-CCh]
  unsigned __int8 *v7[10]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v8[15]; // [rsp+60h] [rbp-78h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  if ( (unsigned __int16)(*(_WORD *)(a1 + 32) - 406) > 8u )
  {
    v2 = sub_14A1B60(a1);
    if ( !v2 )
      return;
    goto LABEL_3;
  }
  v3 = *(_QWORD *)(a1 + 24);
  v4 = sub_14A1B60(a1);
  v2 = v4;
  if ( v4 )
  {
    if ( v3 )
    {
      sub_1564820(v7, a1, v1, 1716);
      sub_AE9DF0(v7, v3, 5u);
      sub_FC70F0((__int64)v8, (__int64)v7);
      v5 = __PAIR64__(v4, v1);
      v6 = 1;
      sub_AEC610(v8, (__int64 *)&v5);
      sub_AEA040((__int64)v8);
      sub_AEA040((__int64)v7);
      return;
    }
LABEL_3:
    sub_1564820(v8, a1, v1, 1558);
    v5 = __PAIR64__(v2, v1);
    v6 = 1;
    sub_AEC610(v8, (__int64 *)&v5);
    sub_AEA040((__int64)v8);
  }
}
