__int64 __fastcall sub_821BE0(_QWORD *a1, __int64 a2, int a3)
{
  __int64 *v3; // r12
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rsi
  unsigned int v10; // eax

  v3 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 42 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 <= 1
    && (v6 = sub_B0D320(v6)) != 0 )
  {
    while ( (*(_BYTE *)(v6 + 18) & 0x10) != 0 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 42 <= 1 )
          break;
        v6 = sub_B0D320(v6);
        if ( (*(_BYTE *)(v6 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
LABEL_5:
    v3 = (__int64 *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  }
  v7 = v3[1];
  if ( (v7 & 8) != 0 && (*((_BYTE *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
    return 1;
  v9 = *v3;
  if ( *(_BYTE *)(a1[270] + 204LL) > 0x3Fu && a3 != 3 )
    return sub_70CFB0((__int64)a1, v9);
  v10 = sub_70BB40(a1, v9);
  return sub_70CF80((__int64)a1, v10);
}

