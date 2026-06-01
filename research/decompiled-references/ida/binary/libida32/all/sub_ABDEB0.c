void __fastcall sub_ABDEB0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // r8
  __int64 *v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h]

  v2 = (__int64 *)(a2 + 56);
  v3 = *(unsigned int *)(a2 + 52);
  v9 = (__int64 *)(a2 + 56);
  v10 = 0;
  v4 = a2 + 56 + 8 * v3;
  v5 = 0;
LABEL_2:
  if ( (__int64 *)v4 == v2 )
    goto LABEL_7;
  do
  {
    do
    {
      if ( (v5 & 3) != 0 )
        v2 = (__int64 *)sub_ECEDF0(&v9);
      sub_ABAAB0(a1 + 8, 0, 0, *v2, a1);
      v5 = v10;
      if ( (v10 & 3) != 0 )
      {
        if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_ECEC20(&v9);
        else
          sub_ECEA10(&v9, 1);
        v2 = v9;
        v5 = v10;
        goto LABEL_2;
      }
      v2 = v9 + 1;
      v9 = v2;
    }
    while ( (__int64 *)v4 != v2 );
LABEL_7:
    ;
  }
  while ( v5 );
  v6 = *(__int64 **)(a2 + 24);
  v7 = &v6[*(_QWORD *)(a2 + 32)];
  while ( v7 != v6 )
  {
    v8 = *v6++;
    sub_ABD7B0((char *)(a1 + 8), (char *)&byte_22CD811, 0, a1, v8);
  }
}

