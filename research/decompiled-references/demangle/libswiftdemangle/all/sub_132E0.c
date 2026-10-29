__int64 __fastcall sub_132E0(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdi
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __int16 v6; // cx
  unsigned int v8; // eax

  v1 = *(_DWORD *)(a1 + 96);
  if ( !v1 )
    return sub_BD60(a1);
  v3 = *(_QWORD *)(a1 + 88);
  v4 = (unsigned int)(v1 - 1);
  v5 = *(_QWORD *)(v3 + 8 * v4);
  v6 = *(_WORD *)(v5 + 16);
  if ( v6 != 98 )
  {
LABEL_9:
    if ( v6 != 143 )
      return sub_BD60(a1);
    *(_DWORD *)(a1 + 96) = v4;
    goto LABEL_5;
  }
  *(_DWORD *)(a1 + 96) = v4;
  if ( !v5 )
  {
    if ( v1 == 1 )
      return sub_BD60(a1);
    v8 = v1 - 2;
    v5 = *(_QWORD *)(v3 + 8LL * v8);
    LODWORD(v4) = v8;
    v6 = *(_WORD *)(v5 + 16);
    goto LABEL_9;
  }
  v5 = sub_12E00((_QWORD *)a1, v5, 143);
LABEL_5:
  if ( v5 )
    return v5;
  return sub_BD60(a1);
}
