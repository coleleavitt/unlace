void __fastcall sub_4D86D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax

  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 == *(_QWORD *)(a1 + 16) && v2 == *(_QWORD *)(a1 + 40) )
  {
    v4 = *(_QWORD *)(a2 + 16);
    v5 = a2;
    if ( v2 == v4 && v4 == *(_QWORD *)(a2 + 40) )
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( !v6 )
      {
        if ( v4 )
        {
          v7 = 0;
          while ( 1 )
          {
            v12 = *(_QWORD *)(a1 + 8) + 24 * v7;
            v13 = *(_QWORD *)v5;
            if ( v4 < v6 + 1 )
            {
              v14 = qvector_reserve(v5, v13, v6 + 1, 24);
              v6 = *(_QWORD *)(v5 + 8);
              *(_QWORD *)v5 = v14;
              v13 = v14;
            }
            v8 = v13 + 24 * v6;
            *(_OWORD *)v8 = 0;
            *(_QWORD *)(v8 + 16) = 0;
            ++*(_QWORD *)(v5 + 8);
            *(_DWORD *)v8 = *(_DWORD *)v12;
            *(_DWORD *)(v8 + 4) = *(_DWORD *)(v12 + 4);
            *(_BYTE *)(v8 + 8) = *(_BYTE *)(v12 + 8);
            *(_BYTE *)(v8 + 9) = *(_BYTE *)(v12 + 9);
            *(_QWORD *)(v8 + 16) = *(_QWORD *)(v12 + 16);
            v9 = *(_QWORD *)(v5 + 32);
            v10 = *(_QWORD *)(v5 + 24);
            v11 = *(_QWORD *)(a1 + 32) + 16 * v7;
            if ( *(_QWORD *)(v5 + 40) < (unsigned __int64)(v9 + 1) )
            {
              v16 = qvector_reserve(v5 + 24, v10, v9 + 1, 16);
              *(_QWORD *)(v5 + 24) = v16;
              v10 = v16;
              v9 = *(_QWORD *)(v5 + 32);
            }
            ++v7;
            a2 = 16 * v9 + v10;
            *(_DWORD *)(a2 + 8) = 0;
            ++*(_QWORD *)(v5 + 32);
            *(_QWORD *)a2 = *(_QWORD *)v11;
            *(_DWORD *)(a2 + 8) = *(_DWORD *)(v11 + 8);
            if ( v7 >= *(_QWORD *)(a1 + 136) )
              break;
            v6 = *(_QWORD *)(v5 + 8);
            v4 = *(_QWORD *)(v5 + 16);
          }
        }
        *(_QWORD *)(v5 + 104) = *(_QWORD *)(a1 + 112);
        *(_DWORD *)(v5 + 112) = *(_DWORD *)(a1 + 120);
        *(_DWORD *)(v5 + 116) = *(_DWORD *)(a1 + 124);
        *(_QWORD *)(v5 + 120) = *(_QWORD *)(a1 + 128);
        v15 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 40) = 0;
        *(_DWORD *)(a1 + 104) = -1;
        if ( v15 )
        {
          *(_QWORD *)(a1 + 64) = 0;
          qfree(v15, (const char *)a2);
        }
        *(_OWORD *)(a1 + 56) = 0;
        *(_OWORD *)(a1 + 72) = 0;
        *(_OWORD *)(a1 + 88) = 0;
        *(_QWORD *)(a1 + 112) = 12;
        *(_QWORD *)(a1 + 120) = -1;
        *(_QWORD *)(a1 + 128) = -1;
      }
    }
  }
}
