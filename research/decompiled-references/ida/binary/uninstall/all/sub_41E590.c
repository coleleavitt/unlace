_BYTE *__fastcall sub_41E590(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  char *v6; // rbp
  int v7; // r14d
  int v8; // r13d
  _BYTE *result; // rax
  int *v10; // rdx
  int v11; // r12d
  _BYTE *v12; // rsi
  int *i; // [rsp+18h] [rbp-50h] BYREF
  int v16; // [rsp+24h] [rbp-44h] BYREF
  _BYTE *v17; // [rsp+28h] [rbp-40h] BYREF
  char *v18; // [rsp+30h] [rbp-38h] BYREF

  v16 = a2;
  v6 = (char *)sub_47B3B0(a1);
  v7 = (int)v6;
  v8 = strlen(v6);
  v17 = nullptr;
  v18 = nullptr;
  result = (_BYTE *)sub_47AE70(a1);
  v10 = nullptr;
  if ( result )
    v10 = (int *)(result + 4);
  v11 = 0;
  for ( i = v10; v11 < a3; ++v11 )
  {
    sub_49D1E0(0, (_DWORD)v6, v8, (unsigned int)&v17, (unsigned int)&v18, 0, 0);
    sub_409C10(&v16, v6, (unsigned __int64)v17);
    sub_409C30(&v16, &i, (_DWORD)v17 - v7);
    if ( a5 && i )
      sub_47AD50(*(_QWORD *)(a5 + 8LL * v11), (unsigned int)((_DWORD)v17 - v7));
    v12 = v17;
    *(_DWORD *)(a4 + 4LL * v11) = v16;
    v8 -= (_DWORD)v18 - (_DWORD)v6;
    sub_409C10(&v16, v12, (unsigned __int64)v18);
    result = v17;
    v6 = v18;
    if ( !*v17 )
      break;
  }
  return result;
}

