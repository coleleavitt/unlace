__int64 __fastcall sub_209CE0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // r12
  int v4; // eax
  __int64 v6; // rsi
  char *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rbp
  char *s2; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 65 )
    return 0;
  v3 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 432LL) + 104LL * *(int *)(a2 + 32));
  v4 = v3[6];
  if ( (v4 & 4) != 0 || (v4 & 0x20000) != 0 && (unsigned int)(*v3 - 3) <= 1 )
    return 0;
  v6 = *(_QWORD *)(a1 + 64);
  v12 = 0;
  s2 = nullptr;
  if ( !(unsigned __int8)sub_2097C0((__int64)&s2, v6, a2, (__int64 **)(a1 + 16), 0x400u) )
    goto LABEL_11;
  v7 = s2;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  v9 = *(_QWORD *)(v8 + 432);
  v10 = v9 + 104LL * *(_QWORD *)(v8 + 440);
  if ( v10 == v9 )
  {
LABEL_10:
    sub_20C9D0(v8, v3, v7, 4);
LABEL_11:
    if ( s2 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(s2);
    }
    return 0;
  }
  while ( *(_QWORD *)(v9 + 40) <= 1u || strcasecmp(*(const char **)(v9 + 32), v7) )
  {
    v9 += 104;
    if ( v9 == v10 )
      goto LABEL_10;
  }
  if ( v7 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v7);
  }
  return 0;
}
