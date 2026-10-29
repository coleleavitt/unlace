void __fastcall sub_51A370(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  signed int v6; // r13d
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r9
  unsigned __int64 *v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rdx

  if ( (*(_BYTE *)(a1 + 936) & 1) != 0 )
  {
    v4 = a1;
    v5 = *(_QWORD *)(a1 + 1768);
    v6 = *(_DWORD *)(a1 + 996);
    if ( v6 <= *(_DWORD *)(a1 + 1000) )
    {
      v8 = a2 - 1;
      if ( a4 )
      {
        do
        {
          v9 = (unsigned int)v6++;
          sub_519690((__int64 *)v5, v9, a3);
        }
        while ( *(_DWORD *)(a1 + 1000) >= v6 );
      }
      else
      {
        do
        {
          while ( 1 )
          {
            if ( !*(_BYTE *)(v5 + 152) )
            {
              if ( !under_debugger )
                interr(1336);
              BUG();
            }
            v10 = v6 - *(_DWORD *)(*(_QWORD *)(v5 + 8) + 68LL);
            if ( v10 >= *(_QWORD *)(v5 + 40) )
              sub_5144F0(a1, a2);
            v11 = v10 << 6;
            *(_DWORD *)(*(_QWORD *)(v5 + 32) + v11 + 56) = v6;
            v13 = sub_5168B0((unsigned __int64 **)(*(_QWORD *)(v5 + 32) + v11), v8);
            v14 = *(_QWORD *)v12 + 33LL * *(_QWORD *)(v12 + 8);
            if ( v13 == (unsigned __int64 *)v14 )
              break;
            a2 = *v13;
            if ( v8 < *v13 )
              break;
            v15 = v13[1];
            if ( a2 >= a3
              || v8 >= v15
              || v15 < a3
              && (unsigned __int64 *)v14 != (unsigned __int64 *)((char *)v13 + 33)
              && *(unsigned __int64 *)((char *)v13 + 33) < a3 )
            {
              break;
            }
            a1 = *(unsigned int *)(v12 + 56);
            ++v6;
            sub_5154D0(a1, a2, v15, a3);
            v13[1] = a3;
            *((_BYTE *)v13 + 32) = 1;
            if ( *(_DWORD *)(v4 + 1000) < v6 )
              return;
          }
          a2 = v8;
          a1 = v12;
          ++v6;
          sub_516950(v12, v8);
        }
        while ( *(_DWORD *)(v4 + 1000) >= v6 );
      }
    }
  }
}
