__int64 __fastcall sub_D1780(int a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ecx
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int64 *v9; // rax
  char v10; // [rsp+38h] [rbp-150h] BYREF
  unsigned __int64 v11; // [rsp+178h] [rbp-10h] BYREF

  v11 = __readfsqword(0x28u);
  if ( !a1 )
    return -1;
  v2 = (_DWORD *)qword_252590;
  v3 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  if ( qword_252590 == v3 )
    return -1;
  while ( a1 != *v2 )
  {
    v2 += 64;
    if ( (_DWORD *)v3 == v2 )
      return -1;
  }
  if ( !v2 )
    return -1;
  v4 = sub_CFA40((__int64)v2, -1);
  if ( !v4 )
    return -1;
  v5 = dword_245174;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v6 = qword_252758;
      if ( qword_252758 )
      {
        *(_QWORD *)qword_252758 = *(_QWORD *)(v4 + 32LL * dword_245174 + 8);
        v6[1] = v4;
        *((_DWORD *)v6 + 4) = v5;
        sub_CDCF0((__int64)v6, 11);
      }
    }
  }
  v7 = sub_9E360();
  result = -1;
  if ( v7 == 1 )
  {
    v9 = (unsigned __int64 *)&v10;
    do
    {
      *(_WORD *)v9 = 0;
      v9 += 5;
      *((_WORD *)v9 - 19) = 0;
      *((_WORD *)v9 - 18) = 0;
      *((_DWORD *)v9 - 2) = 0;
      *((_WORD *)v9 - 17) = 0;
      *((_OWORD *)v9 - 2) = 0;
      *(v9 - 2) = 0;
    }
    while ( v9 != &v11 );
    decode_insn();
    return -1;
  }
  return result;
}

