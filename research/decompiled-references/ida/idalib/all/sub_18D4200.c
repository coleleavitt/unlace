void __fastcall sub_18D4200(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4, char a5, double a6)
{
  unsigned __int64 v7; // r14
  __int16 v8; // bx
  unsigned __int64 v9; // r15
  __int16 v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int16 v16; // r10
  __int64 v17; // rax
  __int16 v19; // [rsp+8h] [rbp-F0h]
  __int16 v20; // [rsp+8h] [rbp-F0h]
  bool v22; // [rsp+17h] [rbp-E1h] BYREF
  __int64 v23; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v26[200]; // [rsp+30h] [rbp-C8h] BYREF

  v7 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  v8 = *(_WORD *)sub_BFBAE0(v7) & 0x1FF;
  v9 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  v22 = v8 == 58;
  v10 = *(_WORD *)sub_BFBAE0(v9) & 0x1FF;
  if ( v8 == 58 )
  {
    v23 = *(_QWORD *)(v9 + 8);
  }
  else
  {
    v23 = *(_QWORD *)(v7 + 8);
    if ( v10 != 58 )
      return;
  }
  v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  if ( (unsigned __int8)v11 > 0x21u || (v15 = 0x206000800LL, !_bittest64(&v15, v11)) )
  {
    if ( !a5 )
    {
      v19 = v10;
      sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a4, 0x1BFCu, 0);
      v16 = v19;
      if ( v22 )
      {
        v17 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, a1 + 8, a6);
        v16 = v19;
        v24 = v17;
      }
      else
      {
        v24 = 0;
      }
      v20 = v16;
      v14 = sub_1587DB0((__int64)v26, &v24);
      if ( v20 != 58 )
      {
        v25 = 0;
        goto LABEL_11;
      }
LABEL_10:
      v25 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v24, a6);
LABEL_11:
      sub_1587DB0(v14, &v25);
      sub_15F7200(v26);
      return;
    }
    if ( (v11 & 0xF7) != 0x22 && (v10 == 58) != (v8 == 58) && ((unsigned __int8)(v11 - 2) > 4u || (_BYTE)v11 == 3) )
    {
      sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a4, 0x1BFDu, 0);
      v12 = sub_15890D0((__int64)v26, (unsigned __int8 *)&v22);
      v13 = sub_1605D30(v12, &v23);
      v24 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v23, a6);
      v14 = sub_1587DB0(v13, &v24);
      goto LABEL_10;
    }
  }
}
