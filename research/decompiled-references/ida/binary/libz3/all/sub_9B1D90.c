char __fastcall sub_9B1D90(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  int v4; // eax

  v3 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 20) & 1) != 0
    || *(_DWORD *)(a1 + 16) != 1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, a1, a2) )
    {
LABEL_7:
      v3 = qword_1C7F2C0;
      goto LABEL_8;
    }
LABEL_4:
    LOBYTE(v4) = 1;
    return v4;
  }
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 || (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    if ( (int)sub_182C7B0(qword_1C7F2C0, a1, a2) >= 0 )
      goto LABEL_7;
    goto LABEL_4;
  }
  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    goto LABEL_4;
LABEL_8:
  LOBYTE(v4) = sub_3ED680((__int64)v3, a1, a2);
  if ( (_BYTE)v4 )
    return *(_DWORD *)(a1 + 32) >> 31;
  return v4;
}

