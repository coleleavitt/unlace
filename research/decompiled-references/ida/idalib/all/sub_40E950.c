bool __fastcall sub_40E950(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // r15d
  unsigned __int64 v7; // rbx
  __int64 v8; // r14

  if ( *(_QWORD *)(a2 + 16) != -1 )
    return *(_WORD *)(a2 + 26) != 0;
  v5 = sub_573440(a1, a2, a3, 2);
  v6 = v5;
  if ( !v5 )
    return 0;
  if ( v5 > 1 )
  {
    v7 = a3 + 1;
    v8 = a3 + (unsigned int)(v5 - 2) + 2;
    while ( (sub_3BE900(a1, v7, 4) & 0x400) == 0 )
    {
      if ( ++v7 == v8 )
        goto LABEL_10;
    }
    goto LABEL_8;
  }
LABEL_10:
  if ( (unsigned __int8)sub_41D3C0(a1, a3, v6) || sub_3792E0(0x20u, a2, 1) < 0 )
  {
LABEL_8:
    *(_WORD *)(a2 + 26) = 0;
    return 0;
  }
  return 1;
}
