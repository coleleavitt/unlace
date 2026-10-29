__int64 __fastcall sub_7BACE0(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rdi
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax

  v1 = *(_QWORD *)(a1 + 120);
  if ( !v1 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v1 = *(_QWORD *)(a1 + 120);
  }
  if ( v1 <= 7 )
    return 0;
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v2 + 72) & 1) != 0 )
  {
    sub_7B7DB0(a1);
    v10 = *(_QWORD *)(a1 + 120);
    if ( !v10 )
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v10 = *(_QWORD *)(a1 + 120);
    }
    if ( v10 > 7 )
    {
      v2 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v2 + 72) & 1) != 0 )
      {
        sub_7B7DB0(a1);
        v2 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      goto LABEL_5;
    }
    return 0;
  }
LABEL_5:
  v3 = *(_QWORD **)(v2 + 8);
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 34 > 1 )
  {
    v4 = sub_B0D320(v4);
    if ( !v4 )
      return 0;
  }
  do
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v4 + 24) & 0xFFFFFFFFFFFFFFF0LL);
    v5 = *(unsigned __int8 *)(v4 + 16);
    if ( (unsigned int)(v5 - 34) > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
        return 0;
      v11 = sub_B0D320(v4);
      v4 = v11;
      if ( !v11 )
        return 0;
      LOBYTE(v5) = *(_BYTE *)(v11 + 16);
    }
  }
  while ( (_BYTE)v5 != 35 );
  v6 = sub_B07AF0(v4);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = *(_QWORD *)(v6 + 120);
  if ( !v8 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v6 + 96) + 88LL), *(_QWORD *)(v6 + 96));
    v8 = *(_QWORD *)(v7 + 120);
  }
  result = v7;
  if ( v8 > 7 )
  {
    result = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !result )
      return v7;
  }
  return result;
}

