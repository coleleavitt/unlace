__int64 __fastcall sub_9E56B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned int v4; // ebx
  _WORD *v5; // rax
  __int64 v7; // rsi
  _QWORD vars0[3]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]
  unsigned int vars20; // [rsp+20h] [rbp+20h]
  int vars30; // [rsp+30h] [rbp+30h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(vars0, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9E4580(a1, a2, (__int64)vars0, 3);
  if ( (_BYTE)v4 )
  {
    if ( vars30 )
      goto LABEL_3;
    v7 = *(_QWORD *)(vars18 + 32);
    if ( *(_DWORD *)(v7 + 16) != vars20 && vars20 )
      v7 = *(_QWORD *)(vars18 + vars20 + 32);
    if ( !*(_BYTE *)(v7 + 51) || (v5 = (_WORD *)(vars18 + vars0[0] + 72), vars20 != vars0[0]) )
LABEL_3:
      v5 = (_WORD *)(vars18 + vars0[0] + 40);
    ++*v5;
  }
  sub_A1C0C0(vars0);
  return v4;
}

