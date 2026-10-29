__int64 __fastcall sub_97ED90(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // rbx
  char v8; // r15
  unsigned int v9; // ebx
  unsigned int v11; // eax
  __int64 v12; // rax
  void *v13; // rdx
  void *v14; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-60h]
  char v16; // [rsp+Ch] [rbp-5Ch]
  void *v17; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-40h]
  char v21; // [rsp+2Ch] [rbp-3Ch]

  v3 = sub_8CA760(
         *(__int64 **)(a1 + 192),
         *(_QWORD *)(*(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3)) + 8LL));
  v4 = *(_QWORD *)(a1 + 184);
  v19 = v3;
  sub_97E960((__int64)&v14, v4, v3, 0);
  v5 = v15;
  v6 = v15 - 1;
  v18 = v15;
  v7 = 1LL << ((unsigned __int8)v15 - 1);
  if ( v15 > 0x40 )
  {
    sub_2585A50(&v17, 0, 0);
    v5 = v18;
    if ( v18 <= 0x40 )
    {
      v7 |= (unsigned __int64)v17;
      v11 = v15;
      v17 = (void *)v7;
    }
    else
    {
      *((_QWORD *)v17 + (v6 >> 6)) |= v7;
      v5 = v18;
      v7 = (__int64)v17;
      v11 = v15;
    }
    v20 = v5;
    v19 = v7;
    v18 = 0;
    v21 = 0;
    if ( v11 > 0x40 )
    {
      v8 = sub_2586760(&v14, &v19);
      goto LABEL_4;
    }
  }
  else
  {
    v17 = (void *)(1LL << ((unsigned __int8)v15 - 1));
    v20 = v15;
    v19 = (__int64)v17;
    v18 = 0;
    v21 = 0;
  }
  v8 = v14 == (void *)v7;
LABEL_4:
  if ( v5 > 0x40 )
  {
    if ( v7 )
    {
      operator delete[]((void *)v7);
      if ( v18 > 0x40 )
      {
        if ( v17 )
          operator delete[](v17);
      }
    }
  }
  v9 = 0;
  if ( !v8 )
  {
    if ( v16 )
    {
LABEL_11:
      v9 = 1;
      sub_97E3E0(a1, (__int64)&v14, *(_QWORD *)(a2 + 8));
      goto LABEL_12;
    }
    v12 = 1LL << ((unsigned __int8)v15 - 1);
    if ( v15 <= 0x40 )
    {
      if ( (v12 & (unsigned __int64)v14) == 0 )
        goto LABEL_11;
      v13 = (void *)((0xFFFFFFFFFFFFFFFFLL >> (63 - ((v15 - 1) & 0x3F))) & ~(unsigned __int64)v14);
      if ( !v15 )
        v13 = nullptr;
      v14 = v13;
    }
    else
    {
      if ( (*((_QWORD *)v14 + ((v15 - 1) >> 6)) & v12) == 0 )
        goto LABEL_11;
      sub_25869C0(&v14, v15);
    }
    sub_25860D0(&v14);
    goto LABEL_11;
  }
LABEL_12:
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  return v9;
}

