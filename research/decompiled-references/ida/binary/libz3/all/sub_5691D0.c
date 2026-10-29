__int64 __fastcall sub_5691D0(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // rcx
  int v5; // edx
  unsigned int v6; // edi
  int v7; // esi
  unsigned int v8; // r9d
  int v9; // r8d
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // ecx
  unsigned int v13; // esi
  unsigned int v14; // edx
  unsigned int v15; // r13d
  int v16; // r12d

  result = a2;
  v3 = *a1;
  v4 = *a1 + 32LL * a2;
  v5 = *(_DWORD *)(v4 + 24);
  v6 = *(_DWORD *)(v4 + 28);
  if ( (((_BYTE)v6 + (_BYTE)v5) & 7) != 0 )
  {
    v7 = ((_BYTE)v6 + (_BYTE)v5) & 7;
    if ( v6 + v5 != v6 + v5 + 8 - v7 )
    {
      v8 = result;
      v9 = 8 - v7;
      while ( 1 )
      {
        v12 = v9;
        result = v3 + 32 * result;
        if ( v6 <= 0x3F )
        {
          v13 = 64 - v6;
          if ( (int)(64 - v6) > v9 )
            v13 = v9;
          v12 = v9 - v13;
          v6 += v13;
          v9 -= v13;
        }
        v14 = v12 + v5;
        v15 = v14 >> 3;
        v16 = v14 & 7;
        if ( v6 == 64 )
        {
          *(_DWORD *)result = v15;
          --v8;
          *(_DWORD *)(result + 4) = v16;
          *(_QWORD *)(result + 8) = -1;
          *(_DWORD *)(result + 24) = v14;
          *(_QWORD *)(result + 16) = ~(-1LL << v16);
          *(_DWORD *)(result + 28) = 64;
          if ( !v9 )
            return result;
        }
        else
        {
          *(_DWORD *)result = v15;
          --v8;
          *(_DWORD *)(result + 4) = v16;
          v10 = (1LL << v6) - 1;
          *(_DWORD *)(result + 24) = v14;
          *(_QWORD *)(result + 8) = v10;
          *(_DWORD *)(result + 28) = v6;
          *(_QWORD *)(result + 16) = ~(v10 << v16);
          if ( !v9 )
            return result;
        }
        result = v8;
        v11 = v3 + 32LL * v8;
        v5 = *(_DWORD *)(v11 + 24);
        v6 = *(_DWORD *)(v11 + 28);
      }
    }
  }
  return result;
}

