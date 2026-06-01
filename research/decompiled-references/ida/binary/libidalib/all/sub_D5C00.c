__int64 __fastcall sub_D5C00(char a1, char a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  int v5; // edi
  unsigned int v6; // [rsp+0h] [rbp-2Ch]

  result = 0;
  if ( dword_25274C < 0 )
  {
    if ( (_QWORD)xmmword_252598 )
    {
      v4 = 0;
      do
      {
        if ( !dbg )
          break;
        v5 = *(_DWORD *)(qword_252590 + (v4 << 8));
        if ( dword_25274C >= 0 )
          break;
        if ( !v5 )
          break;
        if ( !(unsigned __int8)sub_BF0F0(v5) )
          break;
        ++v4;
      }
      while ( v4 < (unsigned __int64)xmmword_252598 );
    }
    result = sub_CF0F0(a2);
    if ( (_DWORD)result == 1 )
    {
      result = sub_D50A0(a1 == 0 ? 16 : 8);
      if ( (int)result > 0 )
      {
        v6 = result;
        dword_2526BC |= 1u;
        nullsub_99();
        qword_245188 = -1;
        qword_245180 = -1;
        sub_C6220();
        return v6;
      }
    }
  }
  return result;
}

