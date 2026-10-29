__int64 __fastcall sub_17F4A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax

  result = *(_QWORD *)(a1 + 136);
  if ( result == *(_QWORD *)(a1 + 16) && result == *(_QWORD *)(a1 + 40) )
  {
    v4 = *(_QWORD *)(a2 + 16);
    if ( result == v4 && v4 == *(_QWORD *)(a2 + 40) )
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( !v6 )
      {
        if ( v4 )
        {
          v7 = 0;
          while ( 1 )
          {
            v13 = *(_QWORD *)(a1 + 8) + 24 * v7;
            v14 = *(_QWORD *)a2;
            if ( v4 < v6 + 1 )
            {
              v15 = qvector_reserve();
              v6 = *(_QWORD *)(a2 + 8);
              *(_QWORD *)a2 = v15;
              v14 = v15;
            }
            v8 = v14 + 24 * v6;
            *(_OWORD *)v8 = 0;
            *(_QWORD *)(v8 + 16) = 0;
            ++*(_QWORD *)(a2 + 8);
            *(_DWORD *)v8 = *(_DWORD *)v13;
            *(_DWORD *)(v8 + 4) = *(_DWORD *)(v13 + 4);
            *(_BYTE *)(v8 + 8) = *(_BYTE *)(v13 + 8);
            *(_BYTE *)(v8 + 9) = *(_BYTE *)(v13 + 9);
            *(_QWORD *)(v8 + 16) = *(_QWORD *)(v13 + 16);
            v9 = *(_QWORD *)(a2 + 32);
            v10 = *(_QWORD *)(a2 + 24);
            v11 = *(_QWORD *)(a1 + 32) + 16 * v7;
            if ( *(_QWORD *)(a2 + 40) < (unsigned __int64)(v9 + 1) )
            {
              v17 = qvector_reserve();
              *(_QWORD *)(a2 + 24) = v17;
              v10 = v17;
              v9 = *(_QWORD *)(a2 + 32);
            }
            ++v7;
            v12 = 16 * v9 + v10;
            *(_DWORD *)(v12 + 8) = 0;
            ++*(_QWORD *)(a2 + 32);
            *(_QWORD *)v12 = *(_QWORD *)v11;
            *(_DWORD *)(v12 + 8) = *(_DWORD *)(v11 + 8);
            if ( v7 >= *(_QWORD *)(a1 + 136) )
              break;
            v6 = *(_QWORD *)(a2 + 8);
            v4 = *(_QWORD *)(a2 + 16);
          }
        }
        *(_QWORD *)(a2 + 104) = *(_QWORD *)(a1 + 112);
        *(_DWORD *)(a2 + 112) = *(_DWORD *)(a1 + 120);
        *(_DWORD *)(a2 + 116) = *(_DWORD *)(a1 + 124);
        result = *(unsigned int *)(a1 + 128);
        *(_DWORD *)(a2 + 120) = result;
        v16 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 40) = 0;
        *(_DWORD *)(a1 + 104) = -1;
        if ( v16 )
        {
          *(_QWORD *)(a1 + 64) = 0;
          result = qfree();
        }
        *(_OWORD *)(a1 + 56) = 0;
        *(_OWORD *)(a1 + 72) = 0;
        *(_OWORD *)(a1 + 88) = 0;
        *(_QWORD *)(a1 + 112) = 12;
        *(_QWORD *)(a1 + 120) = -1;
        *(_DWORD *)(a1 + 128) = -1;
      }
    }
  }
  return result;
}

