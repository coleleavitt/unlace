__int64 __fastcall sub_1F6ADE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 i; // r13
  __int64 v7; // r12
  __int64 *v8; // r15
  __int64 *v9; // rcx
  __int64 v10; // r13
  __int64 *v11; // rbx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v19; // [rsp+10h] [rbp-48h]

  v5 = (a3 - 1) / 2;
  v19 = a3 & 1;
  if ( a2 >= v5 )
  {
    v8 = (__int64 *)(a1 + 16 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    v7 = a2;
    goto LABEL_16;
  }
  for ( i = a2; ; i = v7 )
  {
    v7 = 2 * (i + 1);
    v8 = (__int64 *)(a1 + 32 * (i + 1));
    if ( (int)sub_B84BB0(*v8, *(v8 - 2)) < 0 )
    {
      --v7;
      v8 = (__int64 *)(a1 + 16 * v7);
    }
    v9 = (__int64 *)(a1 + 16 * i);
    *v9 = *v8;
    v9[1] = v8[1];
    if ( v7 >= v5 )
      break;
  }
  if ( !v19 )
  {
LABEL_16:
    if ( (a3 - 2) / 2 == v7 )
    {
      v13 = v7 + 1;
      v7 = 2 * (v7 + 1) - 1;
      v14 = (__int64 *)(a1 + 32 * v13 - 16);
      v15 = *v14;
      v16 = v14[1];
      *v8 = v15;
      v8[1] = v16;
      v8 = (__int64 *)(a1 + 16 * v7);
    }
  }
  v10 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      v11 = (__int64 *)(a1 + 16 * v10);
      v8 = (__int64 *)(a1 + 16 * v7);
      if ( (int)sub_B84BB0(*v11, a4) >= 0 )
        break;
      v7 = v10;
      *v8 = *v11;
      v8[1] = v11[1];
      if ( a2 >= v10 )
      {
        v8 = (__int64 *)(a1 + 16 * v10);
        break;
      }
      v10 = (v10 - 1) / 2;
    }
  }
LABEL_13:
  *v8 = a4;
  v8[1] = a5;
  return a5;
}
