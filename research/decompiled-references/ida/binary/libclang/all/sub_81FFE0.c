char __fastcall sub_81FFE0(__int64 *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rbx
  __int64 *v3; // rbp
  char result; // al
  __int64 v5; // rax

  v1 = *a1;
  if ( !*a1 || (v1 & 3) != 0 )
    return 0;
  v2 = v1 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)((v1 & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 38 > 6 )
    return 0;
  v3 = (__int64 *)(*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
    return 0;
  result = sub_B19120(*v3, 0);
  if ( !result )
  {
    v5 = sub_798D40(v2);
    return sub_6F6DE0(v5, *v3) == 0;
  }
  return result;
}

