__int64 __fastcall sub_983C00(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r13d
  __int64 v4; // rsi
  unsigned int v5; // ebp
  __int64 v6; // r12
  unsigned __int64 v7; // rdx
  unsigned int v8; // esi
  unsigned int v9; // esi
  __int64 v10; // rcx

  result = 0x600000000LL;
  v3 = *(_DWORD *)(a2 + 24);
  v4 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x600000000LL;
  *(_QWORD *)a1 = a1 + 16;
  v5 = (unsigned int)(v3 + 63) >> 6;
  if ( v5 > 6 )
  {
    sub_22134E0(a1, v4, v5, 8);
    result = (__int64)memset(*(void **)a1, 0, 8LL * v5);
    *(_DWORD *)(a1 + 8) = v5;
  }
  else
  {
    if ( v5 )
    {
      v6 = 8LL * v5;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(v4 + v6 - 8) = 0;
      v7 = (a1 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      v8 = (v6 + v4 - v7) & 0xFFFFFFF8;
      if ( v8 >= 8 )
      {
        v9 = v8 & 0xFFFFFFF8;
        LODWORD(result) = 0;
        do
        {
          v10 = (unsigned int)result;
          result = (unsigned int)(result + 8);
          *(_QWORD *)(v7 + v10) = 0;
        }
        while ( (unsigned int)result < v9 );
      }
    }
    *(_DWORD *)(a1 + 8) = v5;
  }
  *(_DWORD *)(a1 + 64) = v3;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  return result;
}

