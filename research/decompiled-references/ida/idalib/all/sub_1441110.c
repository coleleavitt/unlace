_BOOL8 __fastcall sub_1441110(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  _BOOL8 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int *v6; // rsi
  __int64 v7; // rax
  unsigned int *v8; // rsi
  unsigned int *v9; // rsi
  __int64 v10; // rax
  char *v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+8h] [rbp-20h]

  v2 = sub_1440A00(a2, *a1);
  result = 0;
  if ( v2 )
  {
    v4 = sub_22B74E0(*(_QWORD *)(*a1 + 64) + 216LL);
    v12 = v5;
    v11 = (char *)v4;
    if ( v5 )
    {
      v6 = *(unsigned int **)(v2 + 16);
      v7 = *v6;
      v8 = v6 + 4;
      if ( v7 != v5 )
        return 0;
    }
    else
    {
      v9 = *(unsigned int **)(v2 + 16);
      v5 = 7;
      v12 = 7;
      v11 = "unknown";
      v10 = *v9;
      v8 = v9 + 4;
      if ( v10 != 7 )
        return 0;
    }
    return !(unsigned int)sub_22462B0(&v11, v8, v5);
  }
  return result;
}
