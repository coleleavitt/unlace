void __fastcall sub_1FF5C90(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v5; // r14
  __int64 *v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rdx
  char *v12; // rsi
  char *v13; // rsi
  __int64 *v15[9]; // [rsp+8h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( *(_DWORD *)(a1 + 44) )
    {
      sub_1FF5C50(v15, *(__int64 **)(a1 + 32), *(_DWORD *)(a1 + 40) == 0);
      v5 = v15[0];
      sub_1FF5C50(v15, (__int64 *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)), 1);
      v6 = v15[0];
      while ( v6 != v5 )
      {
        while ( 1 )
        {
          if ( v5 != a3 )
          {
            v7 = *v5 + 8;
            sub_1FF5C50(v15, (__int64 *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)), 1);
            sub_1FF5C90(v7, a2, v15[0]);
          }
          v8 = v5[1];
          if ( v8 != -8 )
          {
            if ( v8 )
              break;
          }
          v9 = v5 + 2;
          do
          {
            do
            {
              v10 = *v9;
              v5 = v9++;
            }
            while ( v10 == -8 );
          }
          while ( !v10 );
          if ( v6 == v5 )
            return;
        }
        ++v5;
      }
    }
    else
    {
      v11 = *(__int64 **)a1;
      v12 = *(char **)(a2 + 8);
      v15[1] = *(__int64 **)(a1 + 8);
      v15[0] = v11;
      if ( v12 == *(char **)(a2 + 16) )
      {
        sub_1075D80(a2, v12, v15);
      }
      else
      {
        *(_QWORD *)v12 = v11;
        v13 = v12 + 16;
        *((_QWORD *)v13 - 1) = v3;
        *(_QWORD *)(a2 + 8) = v13;
      }
    }
  }
}
