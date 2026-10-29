__int64 __fastcall sub_CC8240(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // edx

  result = a8;
  *(_BYTE *)(a2 + 24) = 0;
  v9 = *(_DWORD *)(a8 + 20);
  if ( v9 != -1 )
  {
    v10 = *(_DWORD *)(a8 + 16);
    result = v9 / v10;
    if ( v10 <= v9 )
    {
      if ( (unsigned int)result <= 1 )
      {
        v12 = 0;
LABEL_7:
        result = v12;
        *(_QWORD *)(a2 + 8LL * v12 + 32) = 0;
        return result;
      }
      v11 = a2;
      do
      {
        *(_OWORD *)(v11 + 32) = 0;
        v11 += 16;
      }
      while ( a2 + 16LL * ((unsigned int)result >> 1) != v11 );
      v12 = result & 0xFFFFFFFE;
      if ( (_DWORD)result != (result & 0xFFFFFFFE) )
        goto LABEL_7;
    }
  }
  return result;
}

