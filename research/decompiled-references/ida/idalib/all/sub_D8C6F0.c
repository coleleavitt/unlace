__int64 __fastcall sub_D8C6F0(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  void *v9; // rax
  unsigned __int64 v10; // rdx
  void *v11; // r12
  unsigned int v12; // ebx
  void *v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-40h]
  void *v16; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-30h]

  v5 = *((unsigned int *)a1 + 2);
  v6 = *a1;
  v7 = v5;
  v8 = (unsigned __int64)(v5 + 63) >> 6;
  if ( v8 == 1 )
  {
    v15 = v7;
    if ( (unsigned int)v7 > 0x40 )
    {
      sub_2205470(&v14, v6, 1);
    }
    else
    {
      v9 = (void *)(v6 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v7));
      if ( !(_DWORD)v7 )
        v9 = nullptr;
      v14 = v9;
    }
  }
  else
  {
    sub_2205610(&v14, v7, v8, v6);
  }
  v10 = ((unsigned __int64)a3 + 63) >> 6;
  if ( v10 == 1 )
  {
    v17 = a3;
    if ( a3 <= 0x40 )
    {
      v11 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)a3) & a2);
      if ( !a3 )
        v11 = nullptr;
      v16 = v11;
      v12 = (unsigned int)sub_2205E20(&v14, &v16) >> 31;
      goto LABEL_11;
    }
    sub_2205470(&v16, a2, 1);
  }
  else
  {
    sub_2205610(&v16, a3, v10, a2);
  }
  v12 = (unsigned int)sub_2205E20(&v14, &v16) >> 31;
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
LABEL_11:
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  return v12;
}
