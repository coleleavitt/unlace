char __fastcall sub_F46F80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  bool v8; // al
  char result; // al

  while ( 1 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 16) - 2) <= 4u )
      goto LABEL_2;
    v6 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned __int8)(v6 - 2) > 4u )
      goto LABEL_7;
    v7 = sub_F3F130(a1);
    if ( !v7 )
      break;
    a1 = v7;
LABEL_2:
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  }
  v6 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_7:
  v8 = (_BYTE)v6 == 11;
  LOBYTE(v6) = (_BYTE)v6 == 34;
  result = v6 | v8;
  if ( !result )
    return sub_F46ED0(a1, a2, v6, a4, a5);
  return result;
}

