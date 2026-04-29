__int64 __fastcall sub_40C0E0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r13
  unsigned int v3; // r12d
  __int64 v5; // r15
  __int64 v6; // r14
  const char *v7; // r15
  const char *v8; // r8
  unsigned int i; // eax
  const char *v10; // rcx
  __int64 v11; // [rsp+8h] [rbp-450h] BYREF
  _BYTE v12[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v13; // [rsp+418h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 40);
  v13 = __readfsqword(0x28u);
  if ( strncmp(*(const char **)(v1 + 40), "_InterlockedExchangeAdd", 0x17u) )
    return 0;
  v2 = *(_QWORD *)(v1 + 72);
  if ( *(_QWORD *)(v2 + 32) != 2 )
    return 0;
  v5 = 1;
  v6 = 1;
  if ( *(_DWORD *)a1 == 13 )
  {
    v5 = -1;
    v6 = -1;
  }
  v3 = sub_11FD80((char *)(*(_QWORD *)(v2 + 24) + 80LL), &v11, 1u);
  if ( (_BYTE)v3 && v5 == v11 )
  {
    v7 = *(const char **)(v1 + 40);
    v8 = &v7[strlen(v7)];
    for ( i = *(v8 - 1); i <= 0x7F; --v8 )
    {
      if ( i - 48 > 9 )
        break;
      i = *(v8 - 2);
    }
    v10 = "De";
    if ( v6 == 1 )
      v10 = "In";
    qsnprintf(v12, 1024, "_Interlocked%screment%s", v10, v8);
    *(_DWORD *)a1 = 4;
    sub_11CDA0(a1 + 48);
    sub_11D4A0(v1 + 32, (__int64)v12);
    sub_82440((_QWORD *)(v2 + 24), 1u);
    *(_DWORD *)(v2 + 8) = 1;
  }
  else
  {
    return 0;
  }
  return v3;
}
