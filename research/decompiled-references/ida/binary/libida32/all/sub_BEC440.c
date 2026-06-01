char __fastcall sub_BEC440(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 *v3; // rbp
  char result; // al
  __int64 v5; // rax

  v1 = *a1;
  if ( !v1 || (v1 & 3) != 0 )
    return 0;
  v2 = v1 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v1 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    return 0;
  if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 40 > 6 )
    return 0;
  v3 = (__int64 *)(*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
    return 0;
  result = sub_F3E930(*v3, 0);
  if ( !result )
  {
    v5 = sub_B685F0(v2);
    return sub_A73FE0(v5, *v3) == 0;
  }
  return result;
}

