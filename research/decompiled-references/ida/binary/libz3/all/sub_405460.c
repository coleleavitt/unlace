__int64 __fastcall sub_405460(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5, char a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = a2;
  if ( a2 )
    ++*(_DWORD *)a2;
  v6 = *(_QWORD *)(a1 + 76);
  *(_QWORD *)(a1 + 16) = a3;
  v7 = *(_QWORD *)(a3 + 8);
  *(_WORD *)(a1 + 72) = a4;
  *(_QWORD *)(a1 + 24) = 0;
  result = (unsigned int)v6 & 0xFF000000 | 0x130000LL;
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 40) = v7;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = v7;
  *(_WORD *)(a1 + 74) = a5;
  *(_QWORD *)(a1 + 76) = result;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = v7;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  if ( a2 )
  {
    if ( a6 )
    {
      result = *(_QWORD *)(a2 + 96);
      if ( !result || (v9 = *(_DWORD *)(result - 4), v9 == *(_DWORD *)(result - 8)) )
      {
        sub_41E7C0(a2 + 96);
        result = *(_QWORD *)(a2 + 96);
        v10 = *(unsigned int *)(result - 4);
        *(_QWORD *)(result + 8 * v10) = a1;
        a2 = *(_QWORD *)(a1 + 8);
        *(_DWORD *)(result - 4) = v10 + 1;
      }
      else
      {
        *(_QWORD *)(result + 8LL * v9) = a1;
        a2 = *(_QWORD *)(a1 + 8);
        *(_DWORD *)(result - 4) = v9 + 1;
      }
    }
    if ( a2 )
    {
      *(_BYTE *)(a1 + 78) = *(_BYTE *)(a2 + 78) & 8 | *(_BYTE *)(a1 + 78) & 0xF7;
      result = *(unsigned int *)(a2 + 136);
      *(_DWORD *)(a1 + 136) = result;
    }
  }
  return result;
}

