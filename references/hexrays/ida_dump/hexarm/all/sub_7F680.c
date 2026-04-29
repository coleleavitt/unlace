unsigned __int64 __fastcall sub_7F680(__int64 *a1, _BYTE *a2)
{
  _BYTE *v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rsi
  char v5; // bp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v2 = a2;
  v3 = a1[1];
  v10 = __readfsqword(0x28u);
  if ( a2 )
  {
    do
    {
      v4 = *a1;
      v5 = *v2 ^ 0x7C;
      if ( a1[2] < (unsigned __int64)(v3 + 1) )
      {
        v6 = qvector_reserve(a1, v4, v3 + 1, 1);
        v3 = a1[1];
        *a1 = v6;
        v4 = v6;
      }
      *(_BYTE *)(v4 + v3) = v5;
      ++v2;
      v3 = a1[1] + 1;
      a1[1] = v3;
    }
    while ( *(v2 - 1) );
  }
  else
  {
    v7 = *a1;
    if ( a1[2] < (unsigned __int64)(v3 + 1) )
    {
      v9 = qvector_reserve(a1, v7, v3 + 1, 1);
      v3 = a1[1];
      *a1 = v9;
      v7 = v9;
    }
    *(_BYTE *)(v7 + v3) = 124;
    ++a1[1];
  }
  return v10 - __readfsqword(0x28u);
}
