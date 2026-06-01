void __fastcall sub_8CC560(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbp
  unsigned int v5; // edx
  void *v6; // rax
  void *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  bool v11; // cc
  unsigned int v12; // eax
  void *v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-30h]
  void *v15; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD **)a2;
  if ( *(_DWORD *)(a2 + 8) > 0x40u )
    v4 = (_QWORD *)*v4;
  v5 = *(_DWORD *)(a1 + 8);
  v14 = v5;
  if ( v5 <= 0x40 )
  {
    v6 = *(void **)a1;
LABEL_5:
    v7 = nullptr;
    if ( v5 )
    {
      v8 = (__int64)((_QWORD)v6 << (64 - (unsigned __int8)v5)) >> (64 - (unsigned __int8)v5);
      v9 = v8 >> (char)v4;
      v10 = v8 >> 63;
      if ( (_DWORD)v4 == v5 )
        v9 = v10;
      v7 = (void *)(v9 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v5));
    }
    v13 = v7;
    v16 = v5;
    goto LABEL_10;
  }
  sub_2585B30(&v13);
  v5 = v14;
  if ( v14 <= 0x40 )
  {
    v6 = v13;
    goto LABEL_5;
  }
  sub_2587FC0(&v13, (unsigned int)v4);
  v16 = v14;
  if ( v14 > 0x40 )
  {
    sub_2585B30(&v15);
    goto LABEL_11;
  }
  v7 = v13;
LABEL_10:
  v15 = v7;
LABEL_11:
  if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
    operator delete[](*(void **)a3);
  v11 = v14 <= 0x40;
  *(_QWORD *)a3 = v15;
  v12 = v16;
  v16 = 0;
  *(_DWORD *)(a3 + 8) = v12;
  if ( !v11 )
  {
    if ( v13 )
      operator delete[](v13);
  }
}

