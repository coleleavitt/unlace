char __fastcall sub_9B5D50(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  int *v3; // rax
  __int64 v4; // rbx
  void *v5; // rdi
  char result; // al

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * a2);
  if ( !v2 )
    return 1;
  v3 = sub_9AD4F0(a1, a2);
  v4 = (__int64)v3;
  v5 = qword_1C7F2C0;
  if ( (v3[5] & 1) != 0 || v3[4] != 1 || (*(_BYTE *)(v2 + 36) & 1) != 0 || *(_DWORD *)(v2 + 32) != 1 )
  {
    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v3, v2 + 16) )
    {
LABEL_8:
      v5 = qword_1C7F2C0;
      goto LABEL_9;
    }
    return 1;
  }
  if ( (v3[1] & 1) != 0 || (*(_BYTE *)(v2 + 20) & 1) != 0 )
  {
    if ( (int)sub_182C7B0(qword_1C7F2C0, v3, v2 + 16) >= 0 )
      goto LABEL_8;
    return 1;
  }
  if ( *v3 < *(_DWORD *)(v2 + 16) )
    return 1;
LABEL_9:
  result = sub_3ED680((__int64)v5, v4, v2 + 16);
  if ( result )
    return sub_927C80(v4 + 32, v2 + 48);
  return result;
}

