__int64 __fastcall sub_562EC0(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rax
  unsigned __int16 v4; // [rsp+1h] [rbp-3h]
  unsigned __int8 v5; // [rsp+3h] [rbp-1h]

  if ( a2 == 0xFFFF )
  {
    v5 = 0;
    v4 = 257;
  }
  else if ( a2 == 0xFFFE )
  {
    v5 = 0;
    v4 = 0;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 104) + 3LL * a2;
    v4 = *(_WORD *)v2;
    v5 = *(_BYTE *)(v2 + 2);
  }
  return (v5 << 16) | (unsigned int)v4;
}
