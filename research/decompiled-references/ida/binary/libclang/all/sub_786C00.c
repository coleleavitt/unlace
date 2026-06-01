unsigned __int64 __fastcall sub_786C00(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax

  v1 = sub_7868A0(a1);
  if ( !v1 )
    return 0;
  v2 = v1;
LABEL_3:
  v3 = *(_QWORD *)(v2 + 40);
  if ( (v3 & 7) != 0 || v3 <= 7 )
  {
    v4 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v4 + 16LL) == 47 )
    {
      v5 = sub_B14A40(*v4);
      v6 = sub_786C00(v5);
      if ( v6 )
        return v6;
    }
    while ( 1 )
    {
      v7 = *(_QWORD *)(v2 + 8);
      v2 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v7 <= 7 )
        return 0;
      if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 47 <= 2 )
        goto LABEL_3;
    }
  }
  return v2;
}

