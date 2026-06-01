__int64 __fastcall sub_10CCA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  const char *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // [rsp+Ch] [rbp-1Ch]

  if ( (*(_BYTE *)(a1 + 114) & 8) == 0 )
  {
    result = ((__int64 (*)(void))sub_198B20)();
LABEL_6:
    if ( (_DWORD)result )
      return result;
    goto LABEL_15;
  }
  v5 = *(_QWORD *)(a3 + 16);
  if ( !v5 || *(_BYTE *)(v5 + 64) || (v7 = *(_QWORD *)(v5 + 56)) == 0 )
  {
    result = sub_198B20(a1, a2, a3);
LABEL_5:
    byte_252E9C = 1;
    goto LABEL_6;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v7 + 440LL))(v7, a1, a2, a3) )
  {
    result = sub_198B20(a1, a2, a3);
    v10 = *(_QWORD *)(a3 + 16);
    if ( !v10 )
      goto LABEL_5;
    if ( *(_BYTE *)(v10 + 64) )
      goto LABEL_5;
    v8 = *(_QWORD *)(v10 + 56);
    if ( !v8 )
      goto LABEL_5;
    goto LABEL_13;
  }
  result = *(_QWORD *)(a3 + 16);
  if ( result )
  {
    if ( !*(_BYTE *)(result + 64) )
    {
      v8 = *(_QWORD *)(result + 56);
      LODWORD(result) = 0;
      if ( v8 )
      {
LABEL_13:
        v11 = result;
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 448LL))(
          v8,
          a1,
          a2,
          a3,
          (unsigned int)result);
        result = v11;
        goto LABEL_5;
      }
    }
  }
  byte_252E9C = 1;
LABEL_15:
  if ( (*(_BYTE *)(a1 + 114) & 8) == 0 )
    return 0;
  TScreen::makeBeep(nullptr);
  v9 = s1;
  if ( *(_QWORD *)(a1 + 48) )
    v9 = *(const char **)(a1 + 40);
  sub_8F660((__int64)"Command \"%s\" failed\n", v9);
  return 0;
}

