__int64 __fastcall sub_19A92A0(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 *v5; // r13
  unsigned int v6; // ebp
  __int64 v7; // rdi
  int v8; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v9[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    return 0;
  v4 = sub_15F1540(a1, 0);
  v5 = (__int64 *)(a1 + 8);
  if ( (*(_BYTE *)(v4 + 8) & 0x7Fu) - 35 <= 3
    && v4 != 72
    && ((v6 = sub_B981D0((_QWORD *)(v4 - 72), 0), (_BYTE)v6)
     || (v7 = *(_QWORD *)(a1 + 544)) != 0
     && (*(_BYTE *)(v7 + 8) & 0x7Fu) - 35 <= 3
     && sub_C1DDA0(v7 - 72)
     && (v6 = sub_B981D0((_QWORD *)(v7 - 72), 0), (_BYTE)v6)) )
  {
    sub_168B9F0((__int64)v9, v5, a2, 0xFDEu, 0);
    v8 = 1;
    sub_1587D10((__int64)v9, &v8);
    sub_15F7200(v9);
    return v6;
  }
  else
  {
    sub_168B9F0((__int64)v9, v5, a2, 0xFDEu, 0);
    v8 = 0;
    sub_1587D10((__int64)v9, &v8);
    sub_15F7200(v9);
    return 1;
  }
}
