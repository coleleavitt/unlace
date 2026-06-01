__int64 __fastcall sub_630070(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 result; // rax

  v2 = a2;
  if ( !a2 )
    v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 56);
  if ( v3 && *(_DWORD *)(v3 + 52) != 0x7FFFFFFF )
  {
    sub_62DD90(v3);
    v4 = *(_QWORD *)(v2 + 64);
    if ( !v4 || *(_DWORD *)(v4 + 52) == 0x7FFFFFFF )
    {
LABEL_8:
      v5 = *(_QWORD *)(v2 + 72);
      if ( !v5 || *(_DWORD *)(v5 + 52) == 0x7FFFFFFF )
        goto LABEL_11;
      goto LABEL_10;
    }
LABEL_7:
    sub_62DD90(v4);
    goto LABEL_8;
  }
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 52) != 0x7FFFFFFF )
      goto LABEL_7;
    v5 = *(_QWORD *)(v2 + 72);
    if ( v5 )
    {
      result = 0;
      if ( *(_DWORD *)(v5 + 52) == 0x7FFFFFFF )
        return result;
LABEL_10:
      sub_62DD90(v5);
LABEL_11:
      *(_DWORD *)(v2 + 32) |= 0x40u;
      return 1;
    }
    return 0;
  }
  v5 = *(_QWORD *)(v2 + 72);
  if ( !v5 )
    return 0;
  result = 0;
  if ( *(_DWORD *)(v5 + 52) != 0x7FFFFFFF )
    goto LABEL_10;
  return result;
}

