__int64 __fastcall sub_FFC8B0(__int64 a1, int a2, _DWORD *a3)
{
  unsigned __int64 v4; // rax
  int v5; // ebx
  __int64 v7; // rax
  int v8; // r14d
  __int64 v9; // rax
  _BYTE v10[41]; // [rsp+Fh] [rbp-29h] BYREF

  v4 = sub_A5CA10(a1, a2);
  v5 = v4;
  if ( HIDWORD(v4) )
    return 0;
  v10[0] = 0;
  v7 = sub_FFBD10(a1, v4, v10);
  if ( v10[0] )
    return 0;
  v8 = *(_DWORD *)(v7 + 12);
  if ( v8 && !*(_DWORD *)(v7 + 16) && (unsigned int)(v5 + 1) > 1 )
  {
    if ( v5 <= 0 )
    {
      if ( (unsigned __int64)~v5 >= *(_QWORD *)(a1 + 264) )
        goto LABEL_5;
    }
    else if ( v5 == 1 )
    {
      goto LABEL_5;
    }
    v9 = sub_FFBD10(a1, v5 - 1, v10);
    if ( v10[0] || *(char *)(v9 + 3) < 0 && *(_DWORD *)(v9 + 12) == v8 )
      return 0;
  }
LABEL_5:
  if ( a3 )
    *a3 = v8;
  return 1;
}

