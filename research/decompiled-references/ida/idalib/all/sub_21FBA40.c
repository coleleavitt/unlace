void __fastcall sub_21FBA40(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r13
  int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edi
  bool v10; // zf
  int v11; // edx
  __int64 v12; // rbp
  __int64 v13; // rax

  if ( *(_DWORD *)(a2 + 8) > 0x40u )
    a2 = *(_QWORD *)a2;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)a2;
  sub_21F9140((_QWORD *)a1, (__int64)&unk_26F7B60);
  v5 = v3 & 0x7FFF;
  v6 = *(_BYTE *)(a1 + 20) & 0xF7 | (8 * ((v3 >> 15) & 1));
  *(_BYTE *)(a1 + 20) = v6;
  if ( !(v5 | v4) )
  {
    sub_21FB9A0((__int64 *)a1, (v6 & 8) != 0);
    return;
  }
  if ( v4 == 0x8000000000000000LL && v5 == 0x7FFF )
  {
    sub_21FB4C0(a1, (v6 & 8) != 0);
    return;
  }
  v7 = *(_QWORD *)a1;
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64;
  v9 = v8 >> 6;
  if ( (v4 == 0x8000000000000000LL || v5 != 0x7FFF) && (v5 == 0 || v5 == 0x7FFF || v4 < 0) )
  {
    *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 2;
    *(_DWORD *)(a1 + 16) = v5 - 0x3FFF;
    if ( v8 <= 0x7F || v9 <= 1 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      v13 = a1 + 8;
    }
    else
    {
      **(_QWORD **)(a1 + 8) = v4;
      v13 = *(_QWORD *)(a1 + 8);
    }
    *(_QWORD *)(v13 + 8) = 0;
    if ( !v5 )
      *(_DWORD *)(a1 + 16) = -16382;
    return;
  }
  v10 = *(_DWORD *)(v7 + 16) == 1;
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 1;
  if ( !v10 )
  {
    v11 = *(_DWORD *)v7;
LABEL_11:
    ++v11;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v7 + 20) == 2 )
  {
    v11 = *(_DWORD *)(v7 + 4) - 1;
  }
  else
  {
    v11 = *(_DWORD *)v7;
    if ( !*(_BYTE *)(v7 + 25) )
      goto LABEL_11;
  }
LABEL_12:
  *(_DWORD *)(a1 + 16) = v11;
  if ( v8 <= 0x7F || v9 <= 1 )
  {
    *(_QWORD *)(a1 + 8) = v4;
    v12 = a1 + 8;
  }
  else
  {
    **(_QWORD **)(a1 + 8) = v4;
    v12 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(v12 + 8) = 0;
}
