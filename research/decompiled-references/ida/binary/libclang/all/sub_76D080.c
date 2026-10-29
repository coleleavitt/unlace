__int64 __fastcall sub_76D080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r10d
  unsigned __int16 v7; // si
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  _DWORD **v11; // rcx
  _DWORD *v12; // rdx

  LOBYTE(v6) = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL)
                         + 17LL)
              & 0x1Fu) > 0xF;
  LOBYTE(a6) = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1Fu) > 0xF;
  v7 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4;
  LOBYTE(v7) = -((_BYTE)v7 != 0);
  result = (4 * ((v7 >> 2) & 1))
         | (16 * a6)
         | *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL)
         & 2
         | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 17LL)
           & 4) != 0
          ? 0xC
          : 0)
         | (16 * v6)
         | *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL)
         & 1
         | *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2
         | 0xAu;
  v9 = 8LL * *(unsigned int *)(a1 + 4);
  v10 = a1 + v9 + 32;
  v11 = (_DWORD **)(a1 + 32);
  if ( v9 )
  {
    do
    {
      v12 = *v11++;
      result = (*v12 >> 14) & 0x11 | (unsigned int)result;
    }
    while ( v11 != (_DWORD **)v10 );
  }
  return result;
}

