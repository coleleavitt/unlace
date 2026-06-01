__int64 __fastcall sub_DFEF80(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  __int64 v4; // rbp
  unsigned __int64 v5; // rdx
  int v6; // ebp
  __int64 v7; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  void *v11; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-50h]
  void *v13; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+28h] [rbp-30h]

  v3 = *(void **)a2;
  v4 = *(unsigned int *)(a2 + 8);
  v5 = (unsigned __int64)(v4 + 63) >> 6;
  if ( v5 == 1 )
  {
    v12 = *(_DWORD *)(a2 + 8);
    if ( (unsigned int)v4 <= 0x40 )
    {
      v11 = v3;
      v14 = v4;
      goto LABEL_4;
    }
    sub_21E1730(&v11, v3, 0);
  }
  else
  {
    sub_21E18D0(&v11, (unsigned int)v4, v5, v3);
  }
  v9 = *(unsigned int *)(a2 + 8);
  v10 = (unsigned __int64)(v9 + 63) >> 6;
  if ( v10 != 1 )
  {
    sub_21E18D0(&v13, v9, v10, *(_QWORD *)a2);
    goto LABEL_5;
  }
  v3 = *(void **)a2;
  v14 = v9;
  if ( (unsigned int)v9 > 0x40 )
  {
    sub_21E1730(&v13, v3, 0);
    goto LABEL_5;
  }
LABEL_4:
  v13 = v3;
LABEL_5:
  sub_21E2F90(&v15, &v13, (unsigned int)v4);
  v6 = v16;
  v7 = v15;
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  *(_QWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 16) = v6;
  *(_BYTE *)(a1 + 4) &= ~1u;
  *(_BYTE *)(a1 + 20) = 1;
  *(_DWORD *)a1 = 2;
  return a1;
}

