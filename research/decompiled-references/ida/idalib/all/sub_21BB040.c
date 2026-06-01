__int64 __fastcall sub_21BB040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 result; // rax
  int v8; // r8d
  int v9; // ecx
  int v10; // edx
  int v11; // esi
  int v12; // edx

  *(_QWORD *)(a1 + 40) = a6;
  *(_QWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &off_2BE9950;
  *(_QWORD *)(a1 + 16) = a3;
  *(_BYTE *)(a1 + 48) = a7;
  *(_WORD *)(a1 + 49) = 0;
  *(_QWORD *)(a1 + 80) = a1 + 96;
  *(_QWORD *)(a1 + 88) = 0x300000000LL;
  *(_QWORD *)(a1 + 144) = a1 + 168;
  result = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 56) = 0;
  v8 = result;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 8;
  if ( (_DWORD)result )
  {
    v9 = 0;
    result = *(_QWORD *)(a1 + 32) + 40LL;
    do
    {
      while ( 1 )
      {
        v10 = *(unsigned __int8 *)(result + 4);
        v11 = v9 + 1;
        if ( v10 != 1 )
          break;
        v12 = *(_DWORD *)result;
        ++v9;
        result += 80;
        *(_DWORD *)(a1 + 64) = v12;
        if ( v11 == v8 )
          return result;
      }
      if ( v10 == 2 )
      {
        *(_DWORD *)(a1 + 68) = *(_DWORD *)result;
      }
      else if ( *(_BYTE *)(result + 4) )
      {
        *(_DWORD *)(a1 + 72) = v9;
        return result;
      }
      result += 80;
      ++v9;
    }
    while ( v11 != v8 );
  }
  return result;
}
