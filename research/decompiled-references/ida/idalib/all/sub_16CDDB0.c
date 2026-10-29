__int64 __fastcall sub_16CDDB0(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int16 v6; // ax
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdi
  unsigned int v10; // eax
  __int64 v11; // [rsp+8h] [rbp-B0h] BYREF
  int v12; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v14; // [rsp+20h] [rbp-98h]
  int v15; // [rsp+28h] [rbp-90h]
  __int64 v16; // [rsp+30h] [rbp-88h]

  v4 = sub_BFD550(a2);
  v5 = v4;
  v6 = *(_WORD *)v4 & 0x1FF;
  if ( (v6 == 9 || v6 == 29 && (v5 = *(_QWORD *)(v4 + 16)) != 0) && ((*(_BYTE *)(v5 + 2) >> 3) & 5) == 0 )
  {
    v7 = sub_A70010(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18648LL) | 1LL);
    v8 = *(_QWORD **)(a1 + 248);
    v13 = 0;
    v15 = 0;
    v12 = 1;
    v14 = sub_A73320(v8, v7);
    v16 = 0;
    return sub_1A24E20(a1, &v12, 0, v5, 0, 0);
  }
  else
  {
    v10 = sub_EEB7E0(v4, a2, a3);
    sub_168B9F0((__int64)&v12, (__int64 *)(a1 + 8), v10, 0x127Fu, 0);
    v11 = sub_EEC8C0(v4, a1 + 8, a3);
    sub_1587DB0((__int64)&v12, &v11);
    sub_15F7200(&v12);
    return 1;
  }
}
