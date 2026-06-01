char __fastcall sub_9B5E20(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  int *v3; // rax
  __int64 v4; // rbp
  void *v5; // rdi
  char result; // al

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * a2);
  if ( !v2 )
    return 1;
  v3 = sub_9AD4F0(a1, a2);
  v4 = (__int64)v3;
  v5 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v2 + 36) & 1) != 0 || *(_DWORD *)(v2 + 32) != 1 || (v3[5] & 1) != 0 || v3[4] != 1 )
  {
    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v2 + 16, v3) )
    {
LABEL_8:
      v5 = qword_1C7F2C0;
      goto LABEL_9;
    }
    return 1;
  }
  if ( (*(_BYTE *)(v2 + 20) & 1) != 0 || (v3[1] & 1) != 0 )
  {
    if ( (int)sub_182C7B0(qword_1C7F2C0, v2 + 16, v3) >= 0 )
      goto LABEL_8;
    return 1;
  }
  if ( *(_DWORD *)(v2 + 16) < *v3 )
    return 1;
LABEL_9:
  result = sub_3ED680((__int64)v5, v2 + 16, v4);
  if ( result )
    return sub_927C80(v2 + 48, v4 + 32);
  return result;
}

