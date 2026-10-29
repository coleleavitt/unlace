void __fastcall sub_81F730(__int64 a1, __int64 a2)
{
  char v3; // bp
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r13
  const void *v10; // r12
  __int64 v11; // [rsp+8h] [rbp-90h]
  char v12; // [rsp+1Fh] [rbp-79h]
  unsigned int v13; // [rsp+20h] [rbp-78h] BYREF
  char v14; // [rsp+24h] [rbp-74h]

  v3 = *(_BYTE *)(a1 + 128) & 1;
  if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v4 = *(_QWORD *)a1;
    v5 = *(_QWORD *)(a1 + 8);
    v13 = 0;
    v14 &= ~1u;
    sub_6A37F0((__int64)&v13);
    sub_6A3550((__int64)&v13, v4, v5, (_QWORD *)(a1 + 16), v3);
    sub_6A01B0(a2, (__int64)&v13);
    if ( v13 <= 1 )
      goto LABEL_4;
    goto LABEL_3;
  }
  v6 = *(unsigned int *)(a1 + 56);
  v7 = *(_QWORD *)a1;
  v12 = *(_BYTE *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 8);
  v14 &= ~1u;
  v9 = v6;
  v10 = *(const void **)(a1 + 48);
  v11 = v8;
  v13 = 0;
  sub_6A37F0((__int64)&v13);
  sub_6A3690((__int64)&v13, v7, v11, (_QWORD *)(a1 + 16), v10, v9, (v12 & 2) != 0, v3);
  sub_6A01B0(a2, (__int64)&v13);
  if ( v13 > 1 )
LABEL_3:
    sub_69F740((__int64)&v13);
LABEL_4:
  if ( *(_BYTE *)(a1 + 129) )
    *(_BYTE *)(a2 + 4) |= 1u;
}

