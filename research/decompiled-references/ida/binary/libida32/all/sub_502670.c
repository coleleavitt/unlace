void __fastcall sub_502670(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  signed int v6; // r13d
  unsigned int v7; // ebp
  unsigned int v8; // r12d
  __int64 v9; // rsi
  unsigned __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r9
  unsigned int *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx

  if ( (*(_BYTE *)(a1 + 768) & 1) != 0 )
  {
    v4 = a1;
    v5 = *(_QWORD *)(a1 + 1576);
    v6 = *(_DWORD *)(a1 + 828);
    if ( v6 <= *(_DWORD *)(a1 + 832) )
    {
      v7 = a3;
      v8 = a2 - 1;
      if ( (_BYTE)a4 )
      {
        do
        {
          v9 = (unsigned int)v6++;
          sub_5019E0((__int64 *)v5, v9, v7, a4);
        }
        while ( *(_DWORD *)(a1 + 832) >= v6 );
      }
      else
      {
        do
        {
          while ( 1 )
          {
            if ( !*(_BYTE *)(v5 + 144) )
            {
              if ( !under_debugger )
                interr(1336);
              BUG();
            }
            v10 = v6 - *(_DWORD *)(*(_QWORD *)(v5 + 8) + 68LL);
            if ( v10 >= *(_QWORD *)(v5 + 40) )
              sub_4FC970(a1, a2, a3, a4);
            v11 = v10 << 6;
            *(_DWORD *)(*(_QWORD *)(v5 + 32) + v11 + 56) = v6;
            v13 = sub_4FED00((unsigned int **)(*(_QWORD *)(v5 + 32) + v11), v8);
            v14 = *(_QWORD *)v12 + 17LL * *(_QWORD *)(v12 + 8);
            if ( v13 == (unsigned int *)v14 )
              break;
            a2 = *v13;
            if ( v8 < (unsigned int)a2 )
              break;
            v15 = v13[1];
            if ( (unsigned int)a2 >= v7
              || v8 >= (unsigned int)v15
              || (unsigned int)v15 < v7
              && (unsigned int *)v14 != (unsigned int *)((char *)v13 + 17)
              && *(unsigned int *)((char *)v13 + 17) < v7 )
            {
              break;
            }
            a1 = *(unsigned int *)(v12 + 56);
            ++v6;
            sub_4FD960(a1, a2, v15, v7);
            v13[1] = v7;
            *((_BYTE *)v13 + 16) = 1;
            if ( *(_DWORD *)(v4 + 832) < v6 )
              return;
          }
          a2 = v8;
          a1 = v12;
          ++v6;
          sub_4FED90(v12, v8);
        }
        while ( *(_DWORD *)(v4 + 832) >= v6 );
      }
    }
  }
}

