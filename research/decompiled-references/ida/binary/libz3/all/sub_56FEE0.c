__int64 __fastcall sub_56FEE0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  __int64 v10; // rdx
  __int64 v12; // r13
  __int64 v13; // r12
  unsigned int *v14; // r12
  _QWORD *v15; // rsi
  __int64 result; // rax

  v6 = *(_DWORD *)(a1 + 32);
  if ( v6 )
  {
    v7 = 0;
    v8 = 0;
    v10 = 0;
    do
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 36) != v8 )
        {
          result = v8;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL * v8) == (_DWORD)v10 )
            break;
        }
        v12 = v10;
        v13 = v7;
        ++v10;
        ++v7;
        v14 = (unsigned int *)(*a5 + 32 * v13);
        v15 = (_QWORD *)(a3 + *v14);
        result = *((_QWORD *)v14 + 2) & *v15
               | ((*(_QWORD *)(*a4 + 32 * v12 + 8)
                 & (*(_QWORD *)(a2 + *(unsigned int *)(*a4 + 32 * v12)) >> *(_DWORD *)(*a4 + 32 * v12 + 4))) << v14[1]);
        *v15 = result;
        v6 = *(_DWORD *)(a1 + 32);
        if ( (unsigned int)v10 >= v6 )
          return result;
      }
      ++v10;
      ++v8;
    }
    while ( (unsigned int)v10 < v6 );
  }
  return result;
}

