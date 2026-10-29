__int64 __fastcall sub_BD6940(__int64 a1, unsigned int a2, __m128 a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rdx
  __int64 v6; // r12
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 v14; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL * a2) + 32LL);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL * a2);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * a2);
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v7 >= *(_DWORD *)(v5 - 4) )
        break;
      v9 = *(_QWORD *)(v6 + 8);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v5 + 8LL * v7);
        v11 = 0;
        do
        {
          if ( v11 >= *(_DWORD *)(v9 - 4) )
            break;
          v12 = v11++;
          v8 |= sub_BD5FC0(a1, *(__int64 **)(v9 + 8 * v12), v10, a3, a4, a5);
          v9 = *(_QWORD *)(v6 + 8);
        }
        while ( v9 );
        v5 = *(_QWORD *)(v14 + 32);
      }
      ++v7;
    }
    while ( v5 );
  }
  else
  {
    return 0;
  }
  return v8;
}

