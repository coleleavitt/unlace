__int64 __fastcall sub_E24370(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  _WORD *v4; // rdx
  int v5; // edx

  result = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( v2 )
    {
      result = *(unsigned __int8 *)(v2 + 28);
      if ( (_BYTE)result )
      {
        return 0;
      }
      else
      {
        v3 = **(_QWORD **)(v2 + 32);
        if ( (v3 & 2) != 0 )
        {
          v4 = (_WORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v4 )
          {
            v5 = *v4 & 0x1FF;
            LOBYTE(result) = (_WORD)v5 == 48;
            LOBYTE(v5) = (_WORD)v5 == 9;
            return (v5 | (unsigned int)result) ^ 1;
          }
        }
      }
    }
  }
  return result;
}
