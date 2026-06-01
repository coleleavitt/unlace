__int64 __fastcall sub_4A29A0(__int64 a1, __int64 a2, unsigned int a3, signed __int32 a4)
{
  unsigned int v5; // r14d
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned int v9[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v9[0] = a3;
  if ( a4 )
  {
    if ( (unsigned __int8)sub_4A2760(a2, v9, 0, a4, 0) )
    {
      v5 = v9[0];
      if ( v9[0] )
        goto LABEL_8;
    }
    else
    {
      v9[0] = 0;
    }
    if ( a4 != 2 )
      return 0;
    v5 = 0;
  }
  else
  {
    v5 = a3;
    if ( !a3 )
      return 0;
  }
LABEL_8:
  v7 = switch_dbctx(*(int *)(a2 + 4LL * a4 + 16));
  v8 = 424LL * a4 + a1;
  if ( !(unsigned __int8)sub_4991B0(v8, a4, *(_QWORD *)(*(_QWORD *)(v7 + 1672) + 8LL), v5, 1) || *(_DWORD *)(v8 + 180) )
    return 0;
  return *(_DWORD *)(v8 + 408) & 1;
}
