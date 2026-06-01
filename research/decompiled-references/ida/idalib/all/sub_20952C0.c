_BYTE *__fastcall sub_20952C0(__int64 a1, __int64 a2)
{
  const void *v2; // rax
  size_t v3; // rdx
  __int64 v4; // rax
  char v5; // al
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE *result; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *(_QWORD *)(a1 + 24) || *(_QWORD *)(a1 + 32) )
    sub_995540(a2, "Running pass '");
  else
    sub_995540(a2, "Releasing pass '");
  v2 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  v4 = sub_9954E0(a2, v2, v3);
  sub_995540(v4, "'");
  if ( *(_QWORD *)(a1 + 32) )
  {
    v9 = sub_995540(a2, " on module '");
    v10 = sub_227BF10(v9, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 168LL), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 176LL));
    return (_BYTE *)sub_995540(v10, "'.\n");
  }
  else if ( *(_QWORD *)(a1 + 24) )
  {
    sub_995540(a2, " on ");
    v5 = **(_BYTE **)(a1 + 24);
    if ( v5 == 13 )
    {
      sub_995540(a2, "function");
    }
    else if ( v5 == 23 )
    {
      sub_995540(a2, "basic block");
    }
    else
    {
      sub_995540(a2, "value");
    }
    sub_995540(a2, " '");
    sub_2040450(*(_QWORD *)(a1 + 24), a2, 0, *(_QWORD *)(a1 + 32), v6, v7);
    return (_BYTE *)sub_995540(a2, "'\n");
  }
  else
  {
    result = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)result >= *(_QWORD *)(a2 + 24) )
    {
      return (_BYTE *)sub_227BA10(a2, 10);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = result + 1;
      *result = 10;
    }
  }
  return result;
}
