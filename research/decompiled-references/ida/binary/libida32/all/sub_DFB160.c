__int64 __fastcall sub_DFB160(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v9; // [rsp+8h] [rbp-10h] BYREF

  v3 = a1[4];
  if ( v3 && (unsigned int)(*(_DWORD *)(v3 + 8) - 1) > 1 )
  {
    v4 = *(_QWORD *)(v3 + 16);
    if ( (v4 & 4) != 0 )
      BUG();
    if ( (*(_BYTE *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 29) & 2) != 0 )
    {
      v7 = a1[1];
      if ( v7 )
        return sub_DFB160(v7, a1[17]);
      v5 = *(_QWORD *)(a1[2] + 40LL);
      if ( v5 )
        goto LABEL_6;
LABEL_13:
      v6 = sub_D666B0(v3, a2);
      goto LABEL_7;
    }
  }
  v5 = *(_QWORD *)(a1[2] + 40LL);
  if ( !v5 )
    goto LABEL_13;
LABEL_6:
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, v3, a2);
LABEL_7:
  v9 = v6;
  if ( !(unsigned int)sub_E0E350(&v9) )
  {
    v7 = a1[1];
    if ( v7 )
      return sub_DFB160(v7, a1[17]);
  }
  return v9;
}

