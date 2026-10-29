void __fastcall sub_C12610(__int64 a1)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // r12
  unsigned int v4; // r13d
  void *v5; // rdi
  unsigned __int64 v6; // r12
  unsigned int v7; // ebp
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-30h]

  v2 = *(_DWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 12) )
  {
    sub_2206CD0(&v9, a1, v2 + 1);
    v2 = v10;
    v3 = v9;
    goto LABEL_10;
  }
  v3 = *(_QWORD *)a1;
  v4 = v2 - 1;
  if ( v2 <= 0x40 )
  {
    if ( 1LL << v4 != v3 )
    {
      v10 = *(_DWORD *)(a1 + 8);
      goto LABEL_14;
    }
    goto LABEL_9;
  }
  if ( ((1LL << v4) & *(_QWORD *)(v3 + 8LL * (v4 >> 6))) != 0 && (unsigned int)sub_22068B0() == v4 )
  {
LABEL_9:
    sub_2206B70(&v9, a1, v2 + 1);
    v2 = v10;
    v3 = v9;
LABEL_10:
    if ( *(_DWORD *)(a1 + 8) > 0x40u )
    {
      v5 = *(void **)a1;
      if ( *(_QWORD *)a1 )
        operator delete[](v5);
    }
    *(_QWORD *)a1 = v3;
    *(_DWORD *)(a1 + 8) = v2;
    *(_BYTE *)(a1 + 12) = 0;
    v10 = v2;
    if ( v2 <= 0x40 )
      goto LABEL_14;
    goto LABEL_6;
  }
  v10 = v2;
LABEL_6:
  sub_2205510(&v9);
  v2 = v10;
  if ( v10 > 0x40 )
  {
    sub_2205FC0(&v9, a1);
    goto LABEL_17;
  }
  v3 = v9;
LABEL_14:
  v6 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v2) & ~v3;
  if ( !v2 )
    v6 = 0;
  v9 = v6;
LABEL_17:
  sub_2205900(&v9);
  v7 = v10;
  v8 = v9;
  if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
    operator delete[](*(void **)a1);
  *(_QWORD *)a1 = v8;
  *(_DWORD *)(a1 + 8) = v7;
  *(_BYTE *)(a1 + 12) = 0;
}
