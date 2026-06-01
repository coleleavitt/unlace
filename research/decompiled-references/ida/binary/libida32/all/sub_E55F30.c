void __fastcall sub_E55F30(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v4; // eax
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  void *v7; // rdx
  unsigned int v8; // r12d
  void *v9; // r13
  __int64 v10; // rdi
  _BYTE *v11; // rax
  unsigned int v12; // eax
  void *v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-40h]
  void *v15; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-30h]

  v2 = 64;
  if ( *(_DWORD *)(a2 + 8) >= 0x40u )
    v2 = *(unsigned int *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 12) )
    sub_21E2F90(&v15, a2, v2);
  else
    sub_21E2E30(&v15, a2, v2);
  v4 = v16;
  v5 = (unsigned __int64)v15;
  v14 = v16;
  v13 = v15;
  v6 = 1LL << ((unsigned __int8)v16 - 1);
  if ( v16 <= 0x40 )
  {
    if ( (v6 & (unsigned __int64)v15) == 0 )
      goto LABEL_31;
    goto LABEL_16;
  }
  if ( (v6 & *((_QWORD *)v15 + ((v16 - 1) >> 6))) != 0 )
  {
    sub_21E17D0(&v15);
    v4 = v16;
    if ( v16 > 0x40 )
    {
      sub_21E2280(&v15, &v13);
      goto LABEL_19;
    }
    v5 = (unsigned __int64)v15;
LABEL_16:
    v7 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v4) & ~v5);
    if ( !v4 )
      v7 = nullptr;
    v15 = v7;
LABEL_19:
    sub_21E1BC0(&v15);
    v8 = v16;
    v16 = 0;
    v9 = v15;
    if ( v14 > 0x40 && v13 )
    {
      operator delete[](v13);
      v13 = v9;
      v14 = v8;
      if ( v16 > 0x40 && v15 )
      {
        operator delete[](v15);
        v10 = *(_QWORD *)(a1 + 8);
        v11 = *(_BYTE **)(v10 + 32);
        if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
        {
LABEL_24:
          sub_2257CD0(v10, 63);
          v12 = v14;
          goto LABEL_30;
        }
LABEL_29:
        *(_QWORD *)(v10 + 32) = v11 + 1;
        *v11 = 63;
        v12 = v14;
LABEL_30:
        v16 = v12;
        if ( v12 > 0x40 )
          goto LABEL_7;
LABEL_31:
        v15 = v13;
        goto LABEL_8;
      }
    }
    else
    {
      v13 = v15;
      v14 = v8;
    }
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_BYTE **)(v10 + 32);
    if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
      goto LABEL_24;
    goto LABEL_29;
  }
LABEL_7:
  sub_21E17D0(&v15);
LABEL_8:
  sub_E55B70((__int64 *)(a1 + 8), (__int64)&v15);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  if ( v14 > 0x40 )
  {
    if ( v13 )
      operator delete[](v13);
  }
}

