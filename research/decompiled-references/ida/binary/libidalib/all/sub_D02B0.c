__int64 __fastcall sub_D02B0(const char *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  result = 0;
  if ( dword_25274C )
  {
    if ( a1 && a2 )
    {
      v4 = 0;
      v3 = sub_C9B90(a1, (__int64)&v4);
      return sub_CFFC0(v3, (unsigned __int16 *)&v4, a2);
    }
    else
    {
      return 0;
    }
  }
  return result;
}

