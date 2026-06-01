__int64 __fastcall sub_40C0E0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r13
  unsigned int v3; // r12d
  __int64 v5; // r15
  const char *v6; // r15
  const char *v7; // r8
  unsigned int i; // eax
  _QWORD v9[138]; // [rsp+8h] [rbp-450h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v9[130] = __readfsqword(0x28u);
  if ( strncmp(*(const char **)(v1 + 40), "_InterlockedExchangeAdd", 0x17u) )
    return 0;
  v2 = *(_QWORD *)(v1 + 72);
  if ( *(_QWORD *)(v2 + 32) != 2 )
    return 0;
  v5 = 1;
  if ( *(_DWORD *)a1 == 13 )
    v5 = -1;
  v3 = sub_11FD80((char *)(*(_QWORD *)(v2 + 24) + 80LL), v9, 1u);
  if ( (_BYTE)v3 && v5 == v9[0] )
  {
    v6 = *(const char **)(v1 + 40);
    v7 = &v6[strlen(v6)];
    for ( i = *(v7 - 1); i <= 0x7F; --v7 )
    {
      if ( i - 48 > 9 )
        break;
      i = *(v7 - 2);
    }
    qsnprintf();
    *(_DWORD *)a1 = 4;
    sub_11CDA0(a1 + 48);
    sub_11D4A0(v1 + 32);
    sub_82440((__int64 *)(v2 + 24), 1u);
    *(_DWORD *)(v2 + 8) = 1;
  }
  else
  {
    return 0;
  }
  return v3;
}
