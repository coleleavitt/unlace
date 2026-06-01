__int64 __fastcall sub_1084A0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int8 v5; // di

  result = -72;
  v4 = a3 == 0 ? 5LL : 1LL;
  if ( v4 <= a2 )
  {
    v5 = *(_BYTE *)(a1 + (a3 == 0 ? 4 : 0));
    return qword_136500[v5 & 3]
         + qword_136520[v5 >> 6]
         + v4
         + ((v5 & 0x20) == 0)
         + ((unsigned __int8)(v5 >> 5) & (v5 >> 6 == 0));
  }
  return result;
}

