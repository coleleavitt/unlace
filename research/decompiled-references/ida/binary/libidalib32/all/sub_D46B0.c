__int64 __fastcall sub_D46B0(char a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  int v6; // edi
  unsigned int v7; // [rsp+0h] [rbp-3Ch]

  result = 0;
  if ( dword_2515A4 < 0 )
  {
    if ( (_QWORD)xmmword_251418 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        if ( !dbg )
          break;
        v6 = *(_DWORD *)(v4 + qword_251410);
        if ( dword_2515A4 >= 0 )
          break;
        if ( !v6 )
          break;
        if ( !(unsigned __int8)sub_BEA10(v6) )
          break;
        ++v5;
        v4 += 232;
      }
      while ( v5 < (unsigned __int64)xmmword_251418 );
    }
    result = sub_CDB40(a2);
    if ( (_DWORD)result == 1 )
    {
      result = sub_D3B60(a1 == 0 ? 16 : 8);
      if ( (int)result > 0 )
      {
        v7 = result;
        dword_251538 |= 1u;
        nullsub_99();
        dword_244128 = -1;
        dword_244124 = -1;
        sub_C4DC0();
        return v7;
      }
    }
  }
  return result;
}

