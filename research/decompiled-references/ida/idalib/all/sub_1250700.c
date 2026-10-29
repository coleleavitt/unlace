char *__fastcall sub_1250700(__int64 a1)
{
  unsigned __int8 *v1; // rax
  __int64 v2; // rbp
  unsigned int v3; // r8d
  __int64 v4; // r13
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // al
  __int64 (__fastcall *v8)(__int64, unsigned int); // rcx
  _BYTE *v9; // rax
  int v10; // r12d
  char *result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  char v14; // [rsp+Ch] [rbp-2Ch]

  v1 = *(unsigned __int8 **)(a1 + 176);
  v2 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 176) = v1 + 1;
  v3 = (char)*v1;
  v4 = *v1;
  v5 = *v1;
  v6 = *(_BYTE *)(v2 + v4 + 313);
  if ( !v6 )
  {
    v7 = *v1;
    v8 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v2 + 64LL);
    if ( v8 != sub_124D710 )
    {
      v14 = v3;
      v7 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v8)(v2, v3, 0);
      LOBYTE(v3) = v14;
    }
    if ( !v7 )
    {
      v9 = *(_BYTE **)(a1 + 152);
      if ( *v9 )
      {
        v6 = 0;
LABEL_10:
        while ( 1 )
        {
          v9 += 2;
          if ( !*v9 )
            break;
          if ( *v9 == v6 )
            goto LABEL_19;
        }
      }
      goto LABEL_11;
    }
    *(_BYTE *)(v2 + v4 + 313) = v7;
    v6 = v7;
  }
  v9 = *(_BYTE **)(a1 + 152);
  if ( !*v9 )
  {
LABEL_11:
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 48LL) + 2LL * v5 + 1) & 8) == 0
      || (unsigned __int8)(v5 - 56) <= 1u )
    {
      abort();
    }
    v10 = 2;
    sub_998CE0((_QWORD *)(a1 + 200), 0, *(_QWORD *)(a1 + 208), 1u, v3);
    while ( 1 )
    {
      result = *(char **)(a1 + 176);
      if ( result == *(char **)(a1 + 184) )
        break;
      v12 = (unsigned __int8)*result;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 48LL) + 2 * v12 + 1) & 8) == 0 )
        break;
      if ( (unsigned __int8)(v12 - 56) <= 1u )
        break;
      *(_QWORD *)(a1 + 176) = result + 1;
      result = (char *)sub_A6F610((_QWORD *)(a1 + 200), *result);
      if ( v10 == 1 )
        break;
      v10 = 1;
    }
    *(_DWORD *)(a1 + 144) = 2;
    return result;
  }
  if ( v6 != *v9 )
    goto LABEL_10;
LABEL_19:
  v13 = *(_QWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 144) = 1;
  return (char *)sub_998CE0((_QWORD *)(a1 + 200), 0, v13, 1u, v9[1]);
}
