__int64 __fastcall sub_9B7920(__int64 a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD vars0[3]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]
  unsigned int vars20; // [rsp+20h] [rbp+20h]
  int vars30; // [rsp+30h] [rbp+30h]
  _BYTE vars40[56]; // [rsp+40h] [rbp+40h] BYREF
  __int64 vars78; // [rsp+78h] [rbp+78h]
  int vars80; // [rsp+80h] [rbp+80h]

  sub_A1BF70(vars0, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 72);
  sub_A1C070(vars40, v3);
  vars78 = *(_QWORD *)(v3 + 56);
  vars80 = *(_DWORD *)(v3 + 64);
  sub_A1A5E0(v2, 72);
  if ( vars30 )
    goto LABEL_6;
  v4 = *(_QWORD *)(vars18 + 32);
  if ( *(_DWORD *)(v4 + 16) != vars20 && vars20 )
    v4 = *(_QWORD *)(vars18 + vars20 + 32);
  if ( !*(_BYTE *)(v4 + 51) || (v5 = vars18 + vars0[0] + 72, vars20 != vars0[0]) )
LABEL_6:
    v5 = vars18 + vars0[0] + 40;
  sub_A1C200(v5, vars40, vars0[0]);
  *(_QWORD *)(v5 + 56) = vars78;
  *(_DWORD *)(v5 + 64) = vars80;
  sub_A1C0C0(vars40);
  sub_A1DB00(vars0);
  return sub_A1C0C0(vars0);
}

