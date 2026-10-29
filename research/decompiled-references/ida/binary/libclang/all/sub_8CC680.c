void __fastcall sub_8CC680(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbp
  unsigned int v5; // eax
  __int64 v6; // rsi
  void *v7; // rdx
  bool v8; // cc
  unsigned int v9; // eax
  void *v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-30h]
  void *v12; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD **)a2;
  if ( *(_DWORD *)(a2 + 8) > 0x40u )
    v4 = (_QWORD *)*v4;
  v5 = *(_DWORD *)(a1 + 8);
  v11 = v5;
  if ( v5 <= 0x40 )
  {
    v10 = *(void **)a1;
LABEL_5:
    v6 = 0;
    if ( (_DWORD)v4 != v5 )
      v6 = (_QWORD)v10 << (char)v4;
    v13 = v5;
    v7 = (void *)(v6 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v5));
    if ( !v5 )
      v7 = nullptr;
    v10 = v7;
    goto LABEL_10;
  }
  sub_2585B30(&v10);
  v5 = v11;
  if ( v11 <= 0x40 )
    goto LABEL_5;
  sub_258CCA0(&v10, (unsigned int)v4);
  v13 = v11;
  if ( v11 > 0x40 )
  {
    sub_2585B30(&v12);
    goto LABEL_11;
  }
  v7 = v10;
LABEL_10:
  v12 = v7;
LABEL_11:
  if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
    operator delete[](*(void **)a3);
  v8 = v11 <= 0x40;
  *(_QWORD *)a3 = v12;
  v9 = v13;
  v13 = 0;
  *(_DWORD *)(a3 + 8) = v9;
  if ( !v8 )
  {
    if ( v10 )
      operator delete[](v10);
  }
}

