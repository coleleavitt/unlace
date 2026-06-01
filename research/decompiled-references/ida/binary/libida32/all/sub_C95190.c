__int64 __fastcall sub_C95190(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  void *v8; // rax
  void *v9; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-40h]
  void *v11; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-30h]
  char v13; // [rsp+1Ch] [rbp-2Ch]
  void *v14; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-20h]

  v2 = *(unsigned __int8 *)(a1 + 1360);
  if ( (_BYTE)v2 )
    return v2;
  v5 = *(void **)(a2 + 16);
  v6 = *(unsigned int *)(a2 + 24);
  v7 = (unsigned __int64)(v6 + 63) >> 6;
  if ( v7 > 1 )
  {
    sub_21E18D0(&v9, v6, v7, v5);
    LODWORD(v6) = v10;
  }
  else
  {
    v10 = v6;
    if ( (unsigned int)v6 <= 0x40 )
    {
      v9 = v5;
      goto LABEL_6;
    }
    sub_21E1730(&v9, v5, 0);
    LODWORD(v6) = v10;
  }
  v15 = v6;
  if ( (unsigned int)v6 > 0x40 )
  {
    sub_21E17D0(&v14);
    LODWORD(v6) = v15;
    v8 = v14;
    goto LABEL_7;
  }
LABEL_6:
  v8 = v9;
  v14 = v9;
LABEL_7:
  v12 = v6;
  v11 = v8;
  v15 = 0;
  v13 = 1;
  v2 = sub_C950B0(a1, (__int64)&v11, a2);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  if ( v10 <= 0x40 || !v9 )
    return v2;
  operator delete[](v9);
  return v2;
}

