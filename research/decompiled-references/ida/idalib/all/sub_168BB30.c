__int64 __fastcall sub_168BB30(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, char a5)
{
  unsigned int v7; // r12d
  char v8; // al
  __int64 v9; // rbx
  char v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  char v14; // al
  __int64 v15; // rsi
  _BYTE v17[200]; // [rsp+10h] [rbp-C8h] BYREF

  v7 = sub_FD4940(*(_QWORD *)(*a2 + 232), a4);
  v8 = sub_FD3670(*(_QWORD *)(*(_QWORD *)(*a2 + 264) + 32LL), v7);
  v9 = *a2;
  v10 = v8;
  v11 = *(_QWORD *)(*a2 + 232);
  if ( (*(_BYTE *)(v11 + 60) & 0x10) == 0 || (*(_BYTE *)(v11 + 96) & 1) == 0 || (v14 = sub_FD3450(v7), v9 = *a2, !v14) )
  {
    if ( !v10 )
    {
LABEL_5:
      v12 = sub_15F1640(v9, 0);
      sub_1606AE0(a1, 1u, a3, v7, v12, v9);
      return a1;
    }
LABEL_4:
    *(_BYTE *)(v9 + 504) = 1;
    v9 = *a2;
    goto LABEL_5;
  }
  if ( !a5 && *(_BYTE *)(v9 + 11160) != 1 && v10 )
    goto LABEL_4;
  v15 = *(_QWORD *)(v9 + 664);
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 232) + 89LL) & 4) != 0 )
    sub_178F5D0(v17, v15);
  else
    sub_178F6C0(v17, v15);
  if ( v10 )
    *(_BYTE *)(*a2 + 504) = v17[120];
  sub_15F1750(a1, (__int64)v17);
  sub_15F7200(v17);
  return a1;
}
