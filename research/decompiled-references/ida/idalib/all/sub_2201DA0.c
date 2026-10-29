__int64 __fastcall sub_2201DA0(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        int a6,
        _BYTE *a7)
{
  unsigned __int64 *v9; // r13
  unsigned int v11; // r12d
  unsigned int v12; // r10d
  unsigned int v14; // r8d
  char v15; // r9
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v19; // [rsp+0h] [rbp-78h]
  char v20; // [rsp+4h] [rbp-74h]
  unsigned int v21; // [rsp+Ch] [rbp-6Ch]
  void *v22; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-60h]
  _QWORD v24[2]; // [rsp+20h] [rbp-58h] BYREF
  char v25; // [rsp+34h] [rbp-44h]

  v9 = a2;
  sub_22010F0((__int64)&v22, a1);
  sub_21FF1C0(v24, &v22);
  if ( (_UNKNOWN *)v24[0] == &unk_26F7B20 )
  {
    v11 = sub_2201DA0((unsigned int)v24, (_DWORD)a2, a3, a4, a5, a6, (__int64)a7);
    goto LABEL_3;
  }
  v11 = sub_21FA4F0((__int64)v24, a2, a3, a4, a5, a6, a7);
  v12 = a5;
  if ( v11 != 1 )
    goto LABEL_3;
  v14 = (a4 + 63) >> 6;
  if ( a4 + 63 <= 0x7F )
    v14 = 1;
  v15 = v25 & 8;
  if ( (v25 & 7) == 1 )
    goto LABEL_22;
  if ( !v15 )
  {
    v16 = a4 - a5;
    v12 = v16;
    if ( v16 > 0x40 )
    {
      v21 = v14;
      v19 = (v16 - 65) >> 6;
      memset(a2, 255, 8LL * v19 + 8);
      v15 = 0;
      v14 = v21;
      LOBYTE(v12) = a4 - a5 - ((_BYTE)v19 << 6) - 64;
      v17 = v19 + 2;
      a2 += v19 + 1;
      goto LABEL_15;
    }
  }
  if ( !v12 )
  {
LABEL_22:
    v17 = 0;
    goto LABEL_16;
  }
  v17 = 1;
LABEL_15:
  *a2 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v12);
  if ( (unsigned int)v17 < v14 )
  {
LABEL_16:
    v20 = v15;
    memset(&v9[v17], 0, 8LL * (v14 - 1 - (unsigned int)v17) + 8);
    v15 = v20;
  }
  if ( v15 && a5 )
    sub_220A060(v9);
LABEL_3:
  if ( (_UNKNOWN *)v24[0] == &unk_26F7B20 )
    sub_A4F010((__int64)v24);
  else
    sub_21F9170(v24);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  return v11;
}
