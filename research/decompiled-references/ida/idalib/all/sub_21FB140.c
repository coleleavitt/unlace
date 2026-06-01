__int64 __fastcall sub_21FB140(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  void *v8; // rdx
  char v9; // al
  void *v10; // rsi
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  void *v14; // rdx
  void *v15; // r14
  unsigned int v16; // [rsp+Ch] [rbp-5Ch]
  void *v17; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-50h]
  void *v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-40h]

  v6 = *(unsigned int *)(a2 + 8);
  v7 = (unsigned __int64)(v6 + 63) >> 6;
  v18 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)v6 <= 0x40 )
  {
    v8 = *(void **)a2;
    v9 = *(_BYTE *)(a1 + 20) & 0xF7;
    v17 = *(void **)a2;
    *(_BYTE *)(a1 + 20) = v9;
    if ( !a3 )
    {
LABEL_3:
      v10 = &v17;
      goto LABEL_4;
    }
    v12 = (unsigned __int64)v8;
    v13 = 1LL << ((unsigned __int8)v6 - 1);
LABEL_9:
    if ( (v12 & v13) == 0 )
      goto LABEL_3;
    v20 = v6;
    *(_BYTE *)(a1 + 20) = v9 | 8;
    goto LABEL_11;
  }
  sub_2205510(&v17);
  LODWORD(v6) = v18;
  v9 = *(_BYTE *)(a1 + 20) & 0xF7;
  *(_BYTE *)(a1 + 20) = v9;
  if ( !a3 )
    goto LABEL_19;
  v12 = (unsigned __int64)v17;
  v13 = 1LL << ((unsigned __int8)v6 - 1);
  if ( (unsigned int)v6 <= 0x40 )
    goto LABEL_9;
  if ( (v13 & *((_QWORD *)v17 + ((unsigned int)(v6 - 1) >> 6))) == 0 )
    goto LABEL_20;
  v20 = v6;
  *(_BYTE *)(a1 + 20) = v9 | 8;
  sub_2205510(&v19);
  LODWORD(v6) = v20;
  if ( v20 <= 0x40 )
  {
    v12 = (unsigned __int64)v19;
LABEL_11:
    v14 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v6) & ~v12);
    if ( !(_DWORD)v6 )
      v14 = nullptr;
    v19 = v14;
    goto LABEL_14;
  }
  sub_2205FC0(&v19, &v17);
LABEL_14:
  sub_2205900(&v19);
  LODWORD(v6) = v20;
  v20 = 0;
  v15 = v19;
  if ( v18 <= 0x40 || !v17 )
  {
    v17 = v19;
    v18 = v6;
    if ( (unsigned int)v6 <= 0x40 )
      goto LABEL_3;
    goto LABEL_20;
  }
  operator delete[](v17);
  v17 = v15;
  v18 = v6;
  if ( v20 > 0x40 && v19 )
  {
    operator delete[](v19);
    LODWORD(v6) = v18;
  }
LABEL_19:
  if ( (unsigned int)v6 <= 0x40 )
    goto LABEL_3;
LABEL_20:
  v10 = v17;
LABEL_4:
  result = sub_21FAFE0(a1, (__int64)v10, v7, a4);
  if ( v18 > 0x40 )
  {
    if ( v17 )
    {
      v16 = result;
      operator delete[](v17);
      return v16;
    }
  }
  return result;
}
