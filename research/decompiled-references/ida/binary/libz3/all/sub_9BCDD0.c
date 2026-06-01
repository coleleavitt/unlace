char __fastcall sub_9BCDD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  void *v5; // rdi
  char result; // al

  v3 = a3 + 88;
  v5 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a2 + 108) & 1) != 0
    || *(_DWORD *)(a2 + 104) != 1
    || (*(_BYTE *)(a3 + 108) & 1) != 0
    || *(_DWORD *)(a3 + 104) != 1 )
  {
    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, a2 + 88, a3 + 88) )
    {
LABEL_7:
      v5 = qword_1C7F2C0;
      goto LABEL_8;
    }
    return 1;
  }
  if ( (*(_BYTE *)(a2 + 92) & 1) != 0 || (*(_BYTE *)(a3 + 92) & 1) != 0 )
  {
    if ( (int)sub_182C7B0(qword_1C7F2C0, a2 + 88, a3 + 88) >= 0 )
      goto LABEL_7;
    return 1;
  }
  if ( *(_DWORD *)(a2 + 88) < *(_DWORD *)(a3 + 88) )
    return 1;
LABEL_8:
  result = sub_3ED680((__int64)v5, a2 + 88, v3);
  if ( result )
    return sub_3ED700((__int64)qword_1C7F2C0, a2 + 120, a3 + 120);
  return result;
}

