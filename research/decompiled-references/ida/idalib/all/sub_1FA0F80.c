void __fastcall sub_1FA0F80(__int64 a1, unsigned int *a2)
{
  __int64 *v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11[8]; // [rsp+10h] [rbp-40h] BYREF

  if ( a2 )
  {
    sub_9B9C90(*(_QWORD *)(a1 + 16), *a2);
    sub_9B9C90(*(_QWORD *)(a1 + 16), a2[1]);
    sub_9B9C90(*(_QWORD *)(a1 + 16), *((unsigned __int8 *)a2 + 8));
    if ( *a2 )
    {
      v3 = (__int64 *)(a2 + 4);
      v4 = (__int64)&a2[2 * *a2 + 4];
      do
      {
        v5 = *v3++;
        v11[0] = a1;
        sub_1F9F200(v11, v5);
      }
      while ( (__int64 *)v4 != v3 );
    }
    v6 = a2[1];
    if ( *((_BYTE *)a2 + 8) )
    {
      sub_183F100(a1 + 24, *(_QWORD *)&a2[2 * *a2 + 4 + 2 * v6]);
      LODWORD(v6) = a2[1];
    }
    if ( (_DWORD)v6 )
    {
      v7 = 0;
      v8 = 8LL * (unsigned int)(v6 - 1) + 8;
      do
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v7 + sub_EF5320(a2));
          v10 = *(unsigned int *)(a1 + 32);
          if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
            break;
          v7 += 8;
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v10) = v9;
          ++*(_DWORD *)(a1 + 32);
          if ( v7 == v8 )
            return;
        }
        v7 += 8;
        sub_2237220(a1 + 24, a1 + 40, v10 + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v9;
      }
      while ( v7 != v8 );
    }
  }
}
