__int64 __fastcall sub_990F70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r14d
  int v7; // eax
  __int64 v8; // rdx
  int v9; // r15d
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  char v14; // cl
  __int64 v15; // rax
  __int64 v16; // rdx
  char v18; // [rsp+Fh] [rbp-49h] BYREF
  unsigned __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v6 = sub_990EA0(a2);
  v7 = sub_13B8320(*(unsigned int *)(a2 + 24), 0, a3, a4);
  v8 = *(_QWORD *)(a2 + 56);
  v9 = v7;
  if ( (v8 & 4) != 0 )
  {
    v10 = (unsigned __int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    v11 = *v10;
    if ( *v10 )
    {
      v12 = v10[1];
      v19 = v11;
      v20 = v12;
      v13 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v13 )
      {
        v19 = v13;
        v14 = 0;
        while ( (*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v14 = 1;
          v13 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v14 )
          v19 = v13;
      }
      v6 = sub_E6C7F0(&v19);
    }
  }
  if ( (v9 >= 0 || (unsigned __int8)sub_13B8260((unsigned int)v9, a3, a4, 0))
    && (v19 = __PAIR64__(v9, v6),
        LOBYTE(v20) = 0,
        v18 = 0,
        v15 = sub_13B94E0(__PAIR64__(v9, v6), (unsigned int)v20, a3, a4, &v18),
        !v18) )
  {
    *(_QWORD *)a1 = v15;
    *(_QWORD *)(a1 + 8) = v16;
    *(_BYTE *)(a1 + 16) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 16) = 0;
  }
  return a1;
}

