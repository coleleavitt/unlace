__int64 __fastcall sub_3E8420(__int64 a1, unsigned int a2, int a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v11; // r9
  __int64 v12; // rbx
  __int16 v14; // dx
  __int64 v15; // rax
  int v16; // edx

  v11 = **(int **)(*(_QWORD *)(a1 + 832) + 528LL);
  if ( v11 == a4 || v11 == a5 || v11 == a6 )
    sub_1D14D0(a1, 3u, a3, 0, 0x3BEA45E214ADDC55LL, v11, 4);
  v12 = sub_1D14D0(a1, a2, a3, a4, a5, a6, a7);
  if ( !v12 )
    return v12;
  if ( sub_119D00((unsigned int *)v12) && *(_BYTE *)(v12 + 64) == 1 )
  {
    v15 = *(_QWORD *)(a1 + 832);
    v16 = *(_DWORD *)(v12 + 72);
    if ( v16 != **(_DWORD **)(v15 + 560) )
    {
      if ( v16 != *(_DWORD *)(v15 + 480) )
        return v12;
      goto LABEL_12;
    }
    goto LABEL_18;
  }
  if ( (unsigned int)(*(_DWORD *)v12 - 56) > 1 )
    return v12;
  v14 = *(_WORD *)(a1 + 48);
  if ( v14 == 45 )
  {
    if ( *(_BYTE *)(a1 + 105) != 1 || *(_WORD *)(a1 + 110) != 31 )
      return v12;
LABEL_18:
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL) + 112LL) |= 2u;
    return v12;
  }
  if ( *(_DWORD *)v12 == 56 && v14 == 79 )
LABEL_12:
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL) + 112LL) |= 8u;
  return v12;
}
