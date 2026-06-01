void __fastcall sub_142A670(_QWORD *a1, unsigned int a2, int *a3)
{
  _BYTE *v5; // rax
  __int64 v6; // rsi
  int v7; // edx
  unsigned int v8[30]; // [rsp+0h] [rbp-78h] BYREF

  v5 = (_BYTE *)a1[7];
  if ( (v5[2] & 4) != 0 )
    goto LABEL_4;
  v6 = a1[6];
  v7 = *a3;
  if ( (*v5 & 0x20) == 0 )
  {
    sub_FC70B0((__int64)v8, v6, v7, 1242);
    sub_AEA040((__int64)v8);
LABEL_4:
    sub_142A3D0(a1, a2, (__int64)a3, 0, 0, 0);
    return;
  }
  sub_FC70B0((__int64)v8, v6, v7, 1137);
  sub_AEA040((__int64)v8);
  sub_141A820((__int64)a1, v8);
}
