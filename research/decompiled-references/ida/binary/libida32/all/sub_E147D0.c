void __fastcall sub_E147D0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 v7; // rax
  _BYTE *v8; // rax
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  void *v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-30h]
  void *v15; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-20h]

  v4 = *a1;
  if ( *(_BYTE *)(a2 + 12) )
    goto LABEL_12;
  v5 = *(_QWORD *)a2;
  v6 = *(_DWORD *)(a2 + 8);
  v7 = 1LL << ((unsigned __int8)v6 - 1);
  if ( v6 <= 0x40 )
  {
    if ( (v5 & v7) != 0 )
      goto LABEL_4;
LABEL_12:
    sub_21E8630(a2, v4, 0);
    return;
  }
  if ( (*(_QWORD *)(v5 + 8LL * ((v6 - 1) >> 6)) & v7) == 0 )
    goto LABEL_12;
LABEL_4:
  v8 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v4 + 24) )
  {
    sub_2257CD0(v4, 110);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v8 + 1;
    *v8 = 110;
  }
  v9 = *(_DWORD *)(a2 + 8);
  v10 = *(_QWORD *)a2;
  v11 = 1LL << ((unsigned __int8)v9 - 1);
  if ( v9 <= 0x40 )
  {
    if ( (v11 & v10) == 0 )
    {
      v14 = *(_DWORD *)(a2 + 8);
      v13 = (void *)v10;
      goto LABEL_9;
    }
    v16 = *(_DWORD *)(a2 + 8);
    goto LABEL_19;
  }
  if ( (v11 & *(_QWORD *)(v10 + 8LL * ((v9 - 1) >> 6))) == 0 )
  {
    v14 = *(_DWORD *)(a2 + 8);
    sub_21E17D0(&v13);
    goto LABEL_9;
  }
  v16 = *(_DWORD *)(a2 + 8);
  sub_21E17D0(&v15);
  v9 = v16;
  if ( v16 <= 0x40 )
  {
    v10 = (unsigned __int64)v15;
LABEL_19:
    v12 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v9) & ~v10;
    if ( !v9 )
      v12 = 0;
    v15 = (void *)v12;
    goto LABEL_22;
  }
  sub_21E2280(&v15, a2);
LABEL_22:
  sub_21E1BC0(&v15);
  v14 = v16;
  v13 = v15;
LABEL_9:
  sub_21E8630(&v13, *a1, 0);
  if ( v14 > 0x40 )
  {
    if ( v13 )
      operator delete[](v13);
  }
}

