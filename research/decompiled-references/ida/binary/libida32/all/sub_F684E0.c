void __fastcall sub_F684E0(__int64 a1)
{
  __int64 v1; // rdx
  char *v2; // rsi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  void *s; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars8[12]; // [rsp+8h] [rbp+8h]
  char vars14; // [rsp+14h] [rbp+14h]
  char vars18; // [rsp+18h] [rbp+18h] BYREF

  sub_F66E00(a1, *(char **)(a1 + 8), 0, 0, *(_BYTE *)(a1 + 24), *(_QWORD *)(a1 + 16));
  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(char **)(a1 + 8);
  *(_QWORD *)vars8 = 4;
  s = &vars18;
  *(_DWORD *)&vars8[8] = 0;
  vars14 = 1;
  sub_F5EAF0(a1, v2, v1, (__int64)&s, v3, v4);
  if ( vars14 )
    goto LABEL_6;
  v8 = 4 * (*(_DWORD *)&vars8[4] - *(_DWORD *)&vars8[8]);
  if ( v8 < 0x20 )
    v8 = 32;
  if ( v8 >= *(_DWORD *)vars8 )
  {
    memset(s, -1, 8LL * *(unsigned int *)vars8);
LABEL_6:
    *(_QWORD *)&vars8[4] = 0;
    goto LABEL_7;
  }
  sub_2212770(&s);
LABEL_7:
  sub_F68330(a1, *(_QWORD *)(a1 + 8), (__int64)&s, v5, v6, v7);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 2320LL) + 12LL) & 0x10) != 0 )
    sub_F59E60(a1 + 160, 0);
  if ( !vars14 )
    free(s);
}

