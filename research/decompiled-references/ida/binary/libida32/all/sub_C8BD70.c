__int64 __fastcall sub_C8BD70(__int64 a1, __int64 a2)
{
  void **v3; // rdi
  __int64 v4; // rax
  void *v5; // rcx
  __int64 v6; // r12
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  void *v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-20h]

  v3 = (void **)(*(_BYTE *)(a2 + 2) >> 3);
  v4 = sub_21D4FB0(v3);
  v5 = *(void **)(a2 + 16);
  v6 = v4;
  v7 = *(unsigned int *)(a2 + 24);
  v8 = (v7 + 63) >> 6;
  if ( v8 > 1 )
  {
    v3 = &v10;
    sub_21E18D0(&v10, v7, v8, v5);
  }
  else
  {
    v11 = v7;
    if ( (unsigned int)v7 > 0x40 )
    {
      v7 = (unsigned __int64)v5;
      v3 = &v10;
      sub_21E1730(&v10, v5, 0);
    }
    else
    {
      v10 = v5;
    }
  }
  if ( v6 == sub_21D5390(v3, v7, v8) )
    sub_21DC060(a1, v6, &v10);
  else
    sub_21DBA90(a1, v6, &v10);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  return a1;
}

