bool __fastcall sub_921BD0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rbp
  void *v6; // r12

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 336LL);
  v4 = v3 + 32LL * a3;
  v5 = 32LL * a2 + v3;
  v6 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v5 + 4) & 1) != 0 || (*(_BYTE *)(v4 + 4) & 1) != 0 )
  {
    if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v5, v4) )
      goto LABEL_4;
    return 0;
  }
  if ( *(_DWORD *)v5 != *(_DWORD *)v4 )
    return 0;
LABEL_4:
  if ( (*(_BYTE *)(v5 + 20) & 1) != 0 || (*(_BYTE *)(v4 + 20) & 1) != 0 )
    return (unsigned int)sub_182C7B0(v6, v5 + 16, v4 + 16) == 0;
  else
    return *(_DWORD *)(v5 + 16) == *(_DWORD *)(v4 + 16);
}

