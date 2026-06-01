__int64 __fastcall sub_9992B0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  void *v5; // r12
  bool v6; // zf
  int v8; // eax
  __int64 v9; // [rsp+8h] [rbp-20h]

  v5 = qword_1C7F2C0;
  v6 = (*(_BYTE *)(*(_QWORD *)(a2 + 592) + 4LL * a3 + 3) & 0x40) == 0;
  *(_DWORD *)a1 = 0;
  if ( v6 )
  {
    *(_BYTE *)(a1 + 4) &= 0xFCu;
    *(_BYTE *)(a1 + 20) &= 0xFCu;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 24) = 0;
    if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
    {
      v9 = a4;
      sub_182C690(v5, a1, a4);
      a4 = v9;
      if ( (*(_BYTE *)(v9 + 20) & 1) == 0 )
        goto LABEL_8;
    }
    else
    {
      *(_DWORD *)a1 = *(_DWORD *)a4;
      if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
      {
LABEL_8:
        v8 = *(_DWORD *)(a4 + 16);
        *(_BYTE *)(a1 + 20) &= ~1u;
        *(_DWORD *)(a1 + 16) = v8;
        return a1;
      }
    }
    sub_182C690(v5, a1 + 16, a4 + 16);
    return a1;
  }
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a5 )
    sub_18495B0(v5, a4, a1);
  else
    sub_1849700(v5, a4, a1);
  sub_182CBA0(v5, a1 + 16);
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = 1;
  return a1;
}

