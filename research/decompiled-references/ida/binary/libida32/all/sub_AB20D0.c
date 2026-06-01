void __fastcall sub_AB20D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 *v11; // r12
  __int64 v12; // r8
  __int64 *v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]

  v6 = (__int64 *)(a2 + 56);
  v7 = *(unsigned int *)(a2 + 52);
  v13 = (__int64 *)(a2 + 56);
  v14 = 0;
  v8 = a2 + 56 + 8 * v7;
  v9 = 0;
LABEL_2:
  if ( (__int64 *)v8 == v6 )
    goto LABEL_7;
  do
  {
    do
    {
      if ( (v9 & 3) != 0 )
        v6 = (__int64 *)sub_ECEDF0(&v13);
      sub_AAE4E0(a1 + 8, 0, 0, *v6, a1, a6);
      v9 = v14;
      if ( (v14 & 3) != 0 )
      {
        if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_ECEC20(&v13);
        else
          sub_ECEA10(&v13, 1);
        v6 = v13;
        v9 = v14;
        goto LABEL_2;
      }
      v6 = v13 + 1;
      v13 = v6;
    }
    while ( (__int64 *)v8 != v6 );
LABEL_7:
    ;
  }
  while ( v9 );
  v10 = *(__int64 **)(a2 + 24);
  v11 = &v10[*(_QWORD *)(a2 + 32)];
  while ( v11 != v10 )
  {
    v12 = *v10++;
    sub_AB1900(a1 + 8, &byte_22CD811, 0, a1, v12);
  }
}

