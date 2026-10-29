void __fastcall sub_1845320(_QWORD *a1, unsigned int a2, __int64 a3)
{
  bool v3; // sf
  __int64 v5; // rsi
  unsigned __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // r12
  __int64 v17; // r14
  unsigned int v18; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int8 *v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v3 = *(char *)(a3 + 28) < 0;
  v18 = a2;
  if ( !v3 && !(unsigned __int8)sub_1837DD0((_QWORD *)a1[31], *(_QWORD *)(a3 + 48)) )
  {
    v5 = *(_QWORD *)(a3 + 48);
    v6 = sub_A71450(a1[31], v5);
    v11 = sub_F63270(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL), v5, v7, v8, v9, v10);
    v16 = v11;
    if ( v11 )
    {
      if ( (*((_BYTE *)v11 + 73) >> 5 != 2 || (*((_BYTE *)v11 + 75) & 1) == 0) && *((char *)v11 + 28) >= 0 )
      {
        sub_7052B0((__int64 *)(v11[13] + 96LL), v11[13], v12, v13, v14, v15);
        if ( *(char *)(v16[16] + 7LL) >= 0 )
        {
          v17 = sub_1A69EF0(a1, v16);
          if ( v17 )
          {
            sub_168B9B0((__int64)&v19, (__int64)(a1 + 1), 2948);
            sub_AE9DF0(&v19, *(_QWORD *)(a3 + 40), 9u);
            sub_AE9DF0(&v19, v6, 8u);
            sub_16602B0(a1, *(_DWORD *)(a3 + 24), v17, (__int64)&v19, 0);
            if ( v19 )
            {
              if ( v20 )
                sub_1580C40(v20, (unsigned __int64)v19);
            }
            sub_1910D40(a1, v18, v17, 1);
            sub_18F5260((_DWORD)a1, v17, (unsigned int)&v18, 1, 0, 0, 0, 0, 0);
          }
        }
      }
    }
  }
}
