unsigned __int64 __fastcall sub_1FBDB40(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // dl
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int64 result; // rax

  v3 = *(_BYTE *)(a2 + 87);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = ((unsigned __int64)v3 >> 5) & 1;
  if ( (v3 & 0x40) != 0 )
    v6 |= 2u;
  sub_9B9C90(v5, v6);
  v7 = *(unsigned __int8 *)(a2 + 87);
  if ( (v7 & 0x40) == 0 )
  {
    sub_9B9C90(*(_QWORD *)(a1 + 24), (v7 >> 6) & 2);
    if ( (*(_BYTE *)(a2 + 87) & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_7;
  }
  v8 = *(_QWORD *)(a2 + 16LL * ((v7 & 0x20) != 0) + 176);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (2 * (_BYTE)v8) & 6 | (unsigned __int64)((v8 & 0xFFFFFFFFFFFFFFFCLL) != 0));
  if ( (v8 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    sub_183F100(a1 + 32, v8 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)(a2 + 87) & 0x20) != 0 )
  {
LABEL_7:
    v13 = *(_QWORD *)(a2 + 176);
    v14 = *(_QWORD *)(a2 + 184);
    if ( v13 )
    {
      sub_1F92A90(*(_QWORD *)(a1 + 16), v13, *(_QWORD *)(a1 + 24));
      sub_1F92A90(*(_QWORD *)(a1 + 16), v14, *(_QWORD *)(a1 + 24));
    }
  }
LABEL_9:
  result = sub_1FBD8D0(a1, a2, v9, v10, v11, v12);
  *(_DWORD *)(a1 + 224) = 102;
  return result;
}
