void __fastcall sub_A055F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbp
  __int64 i; // r14
  __int64 v8; // r12
  unsigned int *v9; // r15
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v16; // [rsp+18h] [rbp-F0h]
  unsigned int v17[4]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D8h] BYREF

  v6 = (a3 - 1) / 2;
  v16 = a3 & 1;
  if ( a2 >= v6 )
  {
    v9 = (unsigned int *)(a1 + 176 * a2);
    if ( (a3 & 1) != 0 )
    {
      sub_9FD1B0((__int64)v17, a4);
      goto LABEL_13;
    }
    v8 = a2;
    goto LABEL_16;
  }
  for ( i = a2; ; i = v8 )
  {
    v8 = 2 * (i + 1);
    v9 = (unsigned int *)(a1 + 352 * (i + 1));
    if ( (unsigned __int8)sub_9E60E0(v9, v9 - 44) )
    {
      --v8;
      v9 = (unsigned int *)(a1 + 176 * v8);
    }
    sub_A05520(a1 + 176 * i, (__int64)v9);
    if ( v8 >= v6 )
      break;
  }
  if ( !v16 )
  {
LABEL_16:
    if ( (a3 - 2) / 2 == v8 )
    {
      v12 = v8 + 1;
      v13 = 2 * (v8 + 1);
      v14 = v13 + 2 * (v13 + 8 * v12);
      v8 = v13 - 1;
      sub_A05520((__int64)v9, a1 + 16 * v14 - 176);
      v9 = (unsigned int *)(a1 + 176 * v8);
    }
  }
  sub_9FD1B0((__int64)v17, a4);
  v10 = (v8 - 1) / 2;
  if ( v8 > a2 )
  {
    while ( 1 )
    {
      v9 = (unsigned int *)(a1 + 176 * v8);
      if ( !(unsigned __int8)sub_9E60E0((unsigned int *)(a1 + 176 * v10), v17) )
        break;
      v11 = a1 + 176 * v8;
      v8 = v10;
      sub_A05520(v11, a1 + 176 * v10);
      if ( a2 >= v10 )
      {
        v9 = (unsigned int *)(a1 + 176 * v10);
        break;
      }
      v10 = (v10 - 1) / 2;
    }
  }
LABEL_13:
  sub_A05520((__int64)v9, (__int64)v17);
  sub_9E5F30((__int64)&v18);
}

