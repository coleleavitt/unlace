__int64 sub_690AE0()
{
  unsigned __int64 v0; // rbx
  _QWORD *v1; // rbp
  char v2; // dl
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax

  v0 = sub_7868A0();
  if ( !v0 )
    return 0;
LABEL_2:
  v1 = (_QWORD *)(*(_QWORD *)(v0 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v2 = sub_B19120(*v1, 0);
  v3 = *v1;
  if ( v2 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 5 )
    return -2;
  if ( (*(_BYTE *)(v3 + 17) & 4) != 0 )
    return -3;
  v5 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v0 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v5 + 16LL) != 47 || (v6 = sub_B14A40(*v5)) == 0 || (result = sub_690AE0(v6)) == 0 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v0 + 8);
      v0 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v7 <= 7 )
        return 0;
      if ( (*(_BYTE *)(v0 + 28) & 0x7Fu) - 47 <= 2 )
        goto LABEL_2;
    }
  }
  return result;
}

