__int64 __fastcall sub_9B7DA0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // r12d
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rbx
  _QWORD vars0[3]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]
  unsigned int vars20; // [rsp+20h] [rbp+20h]
  int vars30; // [rsp+30h] [rbp+30h]

  sub_A1BF70(vars0, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  v5 = *(_QWORD *)v3;
  *(_DWORD *)(v3 + 8) = 0;
  sub_A1A5E0(v2, 16);
  if ( vars30 )
    goto LABEL_6;
  v6 = *(_QWORD *)(vars18 + 32);
  if ( *(_DWORD *)(v6 + 16) != vars20 && vars20 )
    v6 = *(_QWORD *)(vars18 + vars20 + 32);
  if ( !*(_BYTE *)(v6 + 51) || (v7 = vars18 + vars0[0] + 72, vars20 != vars0[0]) )
LABEL_6:
    v7 = vars18 + vars0[0] + 40;
  if ( *(_DWORD *)(v7 + 8) > 0x40u && *(_QWORD *)v7 )
    operator delete[](*(void **)v7);
  *(_QWORD *)v7 = v5;
  *(_DWORD *)(v7 + 8) = v4;
  sub_A1DB00(vars0);
  return sub_A1C0C0(vars0);
}

