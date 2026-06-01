void __fastcall sub_BEBB50(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // r15
  const void *v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // [rsp+0h] [rbp-98h]
  __int64 v12; // [rsp+0h] [rbp-98h]
  const void *v13; // [rsp+10h] [rbp-88h]
  char v14; // [rsp+1Fh] [rbp-79h]
  unsigned int v15; // [rsp+20h] [rbp-78h] BYREF
  char v16; // [rsp+24h] [rbp-74h]

  v2 = (__int64 *)(a1 + 16);
  v4 = *(_BYTE *)(a1 + 128) & 1;
  if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)a1;
    v15 = 0;
    v16 &= ~1u;
    v11 = v5;
    sub_A2D690((__int64)&v15);
    sub_A2D390((__int64)&v15, v6, v11, v2, v4);
    sub_A2BFE0(a2, (__int64)&v15);
    if ( v15 <= 1 )
      goto LABEL_3;
  }
  else
  {
    v7 = *(const void **)(a1 + 48);
    v8 = *(_QWORD *)a1;
    v14 = *(_BYTE *)(a1 + 24);
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(unsigned int *)(a1 + 56);
    v15 = 0;
    v13 = v7;
    v12 = v9;
    v16 &= ~1u;
    sub_A2D690((__int64)&v15);
    sub_A2D530((__int64)&v15, v8, v12, v2, v13, v10, (v14 & 2) != 0, v4);
    sub_A2BFE0(a2, (__int64)&v15);
    if ( v15 <= 1 )
      goto LABEL_3;
  }
  sub_A2BBA0((int *)&v15);
LABEL_3:
  if ( *(_BYTE *)(a1 + 129) )
    *(_BYTE *)(a2 + 4) |= 1u;
}

