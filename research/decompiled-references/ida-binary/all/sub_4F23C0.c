__int64 __fastcall sub_4F23C0(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 *v5; // r10
  __int64 *v6; // r9
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdi

  if ( a2 )
  {
    v5 = *(__int64 **)(a1 + 48);
    v6 = &v5[*(_QWORD *)(a1 + 56)];
    if ( v6 != v5 )
    {
      while ( 1 )
      {
        v7 = v5;
        do
        {
          v8 = *v7;
          if ( !*(_BYTE *)(*v7 + 24) )
          {
            v9 = *(_QWORD *)(v8 + 16);
            if ( v9 )
            {
              if ( a2 == v9 )
              {
                v10 = *(_QWORD *)(v8 + 32);
                if ( !a3 || *(_DWORD *)(v10 + 8) == a3 )
                  return v10;
              }
            }
          }
          ++v7;
        }
        while ( v6 != v7 );
        if ( !a4 )
          break;
        a4 = 0;
        a2 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL);
        if ( !a2 )
          return 0;
      }
    }
    return 0;
  }
  return a2;
}
