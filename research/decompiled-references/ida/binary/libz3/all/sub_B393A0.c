__int64 __fastcall sub_B393A0(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // edx
  int v7; // ebx
  __int64 v8; // rbp

  result = a1 + 64;
  v6 = *(_DWORD *)(a1 + 64);
  v7 = a2 << 8 >> 8;
  if ( v6 >> 8 == -1 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 64) = (v7 << 8) | (unsigned __int8)v6;
    *(_BYTE *)(a1 + 64) = a3;
  }
  else
  {
    do
    {
      v8 = result;
      result = *(_QWORD *)(result + 8);
    }
    while ( result );
    result = sub_180C100(a4, 16);
    *(_QWORD *)(result + 8) = 0;
    *(_DWORD *)result = (v7 << 8) | a3;
    *(_QWORD *)(v8 + 8) = result;
  }
  return result;
}

