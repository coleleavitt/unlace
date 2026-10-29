/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430F00
// Address: 0x0000000000430F00

//----- (0000000000430F00) ----------------------------------------------------
__int64 __fastcall sub_430F00(__int64 a1)
{
  __int16 v1; // dx
  __int64 v2; // r12
  char *v3; // rax
  const char *v4; // rbp
  char v6; // r12
  void **v7; // rbp
  _BYTE *v8; // rax
  void *v9; // rsi
  void **v10; // rbp
  _BYTE *v11; // rax
  void *v12; // rsi
  void *v13; // rax
  void *v14; // rax

  v1 = *(_WORD *)(a1 + 120);
  *(_BYTE *)(a1 + 220) = 0;
  sub_438B70(*(__int64 **)(a1 + 200), 1, v1);
  if ( *(_BYTE *)(a1 + 212) != 0xAF )
  {
    v6 = -32;
    if ( *(_DWORD *)(a1 + 216) == 1 )
      v6 = 112;
    v7 = *(void ***)(a1 + 200);
    *(_BYTE *)(a1 + 212) = v6;
    v8 = v7[1];
    v9 = *v7;
    if ( v7[2] < v8 + 1 )
    {
      v14 = sub_481540((__int64)v7, v9, (unsigned __int64)(v8 + 1), 1u);
      *v7 = v14;
      v9 = v14;
      v8 = v7[1];
    }
    v8[(_QWORD)v9] = v6;
    v7[1] = (char *)v7[1] + 1;
    v10 = *(void ***)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
    *(_BYTE *)(a1 + 212) = -81;
    v11 = v10[1];
    v12 = *v10;
    if ( v10[2] < v11 + 1 )
    {
      v13 = sub_481540((__int64)v10, v12, (unsigned __int64)(v11 + 1), 1u);
      *v10 = v13;
      v12 = v13;
      v11 = v10[1];
    }
    v11[(_QWORD)v12] = -81;
    v10[1] = (char *)v10[1] + 1;
    ++*(_DWORD *)(a1 + 208);
  }
  sub_438CF0(*(_QWORD *)(a1 + 192) + 32LL, (_QWORD *)(a1 + 392));
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
    *(_DWORD *)(*(_QWORD *)(a1 + 184) + 80LL) = sub_439630(*(_QWORD **)(a1 + 104), v2);
    sub_430D20(a1);
    return 0;
  }
  else
  {
    if ( strcmp(v4, "__setattr__") )
    {
LABEL_7:
      sub_430D20(a1);
      return 0;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 184) + 84LL) = sub_439630(*(_QWORD **)(a1 + 104), v2);
    sub_430D20(a1);
    return 0;
  }
}
