__int64 __fastcall sub_139560(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // edx
  int v5; // edx

  v1 = 8;
  result = 1;
  if ( *(int *)(a1 + 64) > 1 )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v1);
      if ( *(_DWORD *)(v3 + 76) != 1 )
      {
        v4 = *(_DWORD *)(v3 + 24);
        BYTE1(v4) &= ~2u;
        LOBYTE(v4) = v4 | 0x80;
        *(_DWORD *)(v3 + 24) = v4;
      }
      v5 = *(_DWORD *)(a1 + 64);
      result = (unsigned int)(result + 1);
      if ( v5 <= (int)result )
        break;
      v1 += 8;
      if ( (unsigned int)result >= v5 )
      {
        if ( !under_debugger )
          sub_3835A0(52719);
        BUG();
      }
    }
  }
  return result;
}
