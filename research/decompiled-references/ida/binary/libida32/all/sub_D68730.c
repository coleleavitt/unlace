__int64 __fastcall sub_D68730(__int64 a1, void *a2, unsigned int a3)
{
  void *v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned int v9; // ebx
  void *v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-40h]
  void *v13; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-30h]

  v5 = *(void **)a1;
  v6 = *(unsigned int *)(a1 + 8);
  v7 = (unsigned __int64)(v6 + 63) >> 6;
  if ( v7 == 1 )
  {
    v12 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)v6 > 0x40 )
      sub_21E1730(&v11, v5, 0);
    else
      v11 = v5;
  }
  else
  {
    sub_21E18D0(&v11, v6, v7, v5);
  }
  v8 = ((unsigned __int64)a3 + 63) >> 6;
  if ( v8 == 1 )
  {
    v14 = a3;
    if ( a3 <= 0x40 )
    {
      v13 = a2;
      v9 = (unsigned int)sub_21E2070(&v11, &v13) >> 31;
      goto LABEL_7;
    }
    sub_21E1730(&v13, a2, 0);
  }
  else
  {
    sub_21E18D0(&v13, a3, v8, a2);
  }
  v9 = (unsigned int)sub_21E2070(&v11, &v13) >> 31;
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
LABEL_7:
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  return v9;
}

