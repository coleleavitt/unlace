__int64 __fastcall sub_184A5D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // r12d
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v12[184]; // [rsp+20h] [rbp-B8h] BYREF

  v10 = a3;
  if ( HIDWORD(a3) )
    *(_DWORD *)(a2 + 140) = HIDWORD(a3);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  if ( (*(_QWORD *)(v4 + 80) & 0x40000LL) != 0
    || ((*(_QWORD *)(v4 + 80) >> 16) & 8) != 0
    || (unsigned int)sub_B984E0(v4) )
  {
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v7 & 4) != 0 )
    v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v8 )
    v8 -= 64LL;
  if ( (unsigned __int8)sub_B8E180(v8 + 64) )
  {
LABEL_5:
    v5 = 0;
    sub_B74970(a2, 1);
  }
  else
  {
    v5 = 1;
    if ( *(char *)(a2 + 28) >= 0 )
    {
      sub_168B9F0((__int64)v12, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x10DCu, 0);
      v11 = *(_QWORD *)(a2 + 40);
      v9 = sub_15894B0((__int64)v12, &v11);
      sub_15884C0(v9, &v10);
      sub_15F7200(v12);
    }
  }
  return v5;
}
