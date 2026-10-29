__int64 __fastcall sub_D0380(int a1)
{
  _DWORD *v2; // rdi
  _DWORD *v3; // rdx
  __int64 v4; // rax
  int v5; // ecx
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int64 *v9; // rax
  char v10; // [rsp+28h] [rbp-D0h] BYREF
  unsigned __int64 v11; // [rsp+E8h] [rbp-10h] BYREF

  v11 = __readfsqword(0x28u);
  if ( !a1 )
    return 0xFFFFFFFFLL;
  v2 = (_DWORD *)qword_251410;
  v3 = (_DWORD *)(qword_251410 + 232 * xmmword_251418);
  if ( (_DWORD *)qword_251410 == v3 )
    return 0xFFFFFFFFLL;
  while ( a1 != *v2 )
  {
    v2 += 58;
    if ( v3 == v2 )
      return 0xFFFFFFFFLL;
  }
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v4 = sub_CE480((__int64)v2, -1);
  if ( !v4 )
    return 0xFFFFFFFFLL;
  v5 = dword_24411C;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v6 = qword_2515B0;
      if ( qword_2515B0 )
      {
        *(_DWORD *)qword_2515B0 = *(_QWORD *)(v4 + 32LL * dword_24411C + 8);
        v6[1] = v4;
        *((_DWORD *)v6 + 4) = v5;
        sub_CC780((__int64)v6, 11);
      }
    }
  }
  v7 = sub_9E220();
  result = 0xFFFFFFFFLL;
  if ( v7 == 1 )
  {
    v9 = (unsigned __int64 *)&v10;
    do
    {
      *(_WORD *)v9 = 0;
      v9 += 3;
      *((_WORD *)v9 - 11) = 0;
      *((_WORD *)v9 - 10) = 0;
      *((_DWORD *)v9 - 1) = 0;
      *((_WORD *)v9 - 9) = 0;
      *(v9 - 2) = 0;
      *((_DWORD *)v9 - 2) = 0;
    }
    while ( v9 != &v11 );
    decode_insn();
    return 0xFFFFFFFFLL;
  }
  return result;
}

