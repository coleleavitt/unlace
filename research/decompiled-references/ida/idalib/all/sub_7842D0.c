__int64 __fastcall sub_7842D0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  char *v3; // rax
  const char *v4; // rbp
  char v6; // r12
  __int64 *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  v1 = *(unsigned __int16 *)(a1 + 120);
  *(_BYTE *)(a1 + 220) = 0;
  sub_78C670(*(_QWORD *)(a1 + 200), 1, v1);
  if ( *(_BYTE *)(a1 + 212) != 0xAF )
  {
    v6 = -32;
    if ( *(_DWORD *)(a1 + 216) == 1 )
      v6 = 112;
    v7 = *(__int64 **)(a1 + 200);
    *(_BYTE *)(a1 + 212) = v6;
    v8 = v7[1];
    v9 = *v7;
    if ( v7[2] < (unsigned __int64)(v8 + 1) )
    {
      v14 = qvector_reserve(v7, v9, v8 + 1, 1);
      *v7 = v14;
      v9 = v14;
      v8 = v7[1];
    }
    *(_BYTE *)(v9 + v8) = v6;
    ++v7[1];
    v10 = *(__int64 **)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
    *(_BYTE *)(a1 + 212) = -81;
    v11 = v10[1];
    v12 = *v10;
    if ( v10[2] < (unsigned __int64)(v11 + 1) )
    {
      v13 = qvector_reserve(v10, v12, v11 + 1, 1);
      *v10 = v13;
      v12 = v13;
      v11 = v10[1];
    }
    *(_BYTE *)(v12 + v11) = -81;
    ++v10[1];
    ++*(_DWORD *)(a1 + 208);
  }
  sub_78C7F0(*(_QWORD *)(a1 + 192) + 32LL, a1 + 392);
  if ( !*(_QWORD *)(a1 + 184) )
    goto LABEL_7;
  v2 = *(_QWORD *)(a1 + 192);
  if ( !*(_QWORD *)(v2 + 8) )
    goto LABEL_7;
  v3 = strchr(*(const char **)v2, 46);
  if ( !v3 )
    goto LABEL_7;
  v4 = v3 + 1;
  if ( !strcmp(v3 + 1, "__getattr__") )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 184) + 80LL) = sub_78D130(*(_QWORD *)(a1 + 104), v2);
    sub_7840F0(a1);
    return 0;
  }
  else
  {
    if ( strcmp(v4, "__setattr__") )
    {
LABEL_7:
      sub_7840F0(a1);
      return 0;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 184) + 84LL) = sub_78D130(*(_QWORD *)(a1 + 104), v2);
    sub_7840F0(a1);
    return 0;
  }
}
