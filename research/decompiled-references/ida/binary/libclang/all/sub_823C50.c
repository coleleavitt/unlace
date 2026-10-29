void __fastcall sub_823C50(__int64 a1)
{
  unsigned int v2; // ebp
  _QWORD *v3; // rsi
  unsigned int v4; // r12d
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-30h]

  v2 = *(_DWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 12) )
  {
    sub_2587D60(&v13, a1);
    v2 = v14;
    v7 = v13;
    goto LABEL_10;
  }
  v3 = *(_QWORD **)a1;
  v4 = v2 - 1;
  if ( v2 <= 0x40 )
  {
    v6 = v2 + 1;
    if ( v3 != (_QWORD *)(1LL << v4) )
    {
      v14 = *(_DWORD *)(a1 + 8);
      goto LABEL_14;
    }
    goto LABEL_9;
  }
  if ( (v3[v4 >> 6] & (1LL << v4)) != 0 )
  {
    v5 = sub_25875E0();
    v6 = v2 + 1;
    if ( v4 == v5 )
    {
LABEL_9:
      sub_2587BE0(&v13, a1, v6);
      v2 = v14;
      v7 = v13;
LABEL_10:
      if ( *(_DWORD *)(a1 + 8) > 0x40u )
      {
        v8 = *(_QWORD **)a1;
        if ( *(_QWORD *)a1 )
          operator delete[](v8);
      }
      *(_QWORD *)a1 = v7;
      *(_DWORD *)(a1 + 8) = v2;
      *(_BYTE *)(a1 + 12) = 0;
      v14 = v2;
      if ( v2 > 0x40 )
        goto LABEL_6;
LABEL_14:
      v9 = *(_QWORD *)a1;
      goto LABEL_15;
    }
  }
  v14 = v2;
LABEL_6:
  sub_2585B30(&v13);
  v2 = v14;
  if ( v14 > 0x40 )
  {
    sub_25869C0(&v13, a1);
    goto LABEL_18;
  }
  v9 = v13;
LABEL_15:
  v10 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v2) & ~v9;
  if ( !v2 )
    v10 = 0;
  v13 = v10;
LABEL_18:
  sub_25860D0(&v13);
  v11 = v14;
  v12 = v13;
  if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
    operator delete[](*(void **)a1);
  *(_QWORD *)a1 = v12;
  *(_DWORD *)(a1 + 8) = v11;
  *(_BYTE *)(a1 + 12) = 0;
}

