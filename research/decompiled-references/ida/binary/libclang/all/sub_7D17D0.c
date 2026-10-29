unsigned __int64 __fastcall sub_7D17D0(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  __int64 v9; // rax
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi

  v1 = *(_BYTE *)(a1 + 180) & 7;
  if ( v1 == 2 )
  {
    v13 = sub_777DC0(a1);
    v14 = HIDWORD(v13);
    v15 = *(_QWORD *)(a1 + 160);
    if ( v15 )
    {
      v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v15 & 4) == 0 )
      {
LABEL_14:
        if ( (*(_BYTE *)(a1 + 74) & 1) == 0 && v16 )
          v14 = *(unsigned int *)(v16 + 4);
        return (v14 << 32) | (unsigned int)v13;
      }
      if ( v16 )
      {
        v16 = *(_QWORD *)v16;
        goto LABEL_14;
      }
    }
    return (v14 << 32) | (unsigned int)v13;
  }
  if ( v1 > 2u )
  {
    v2 = sub_777DC0(a1);
    v3 = v2;
    v4 = HIDWORD(v2);
    v5 = *(_QWORD *)(a1 + 160);
    if ( v5 )
    {
      v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v5 & 4) == 0 )
      {
LABEL_5:
        if ( v7 )
          v4 = *(unsigned int *)(v7 + 4);
        return (v4 << 32) | v3;
      }
      if ( v6 )
      {
        v3 = *(_DWORD *)(v6 + 8);
        if ( !v3 )
        {
          v3 = *(_DWORD *)(v6 + 12);
          if ( !v3 )
            v3 = v2;
        }
        v7 = *(_QWORD *)v6;
        goto LABEL_5;
      }
    }
    return (v4 << 32) | v3;
  }
  v9 = *(_QWORD *)(a1 + 152);
  if ( !v9 )
  {
    v11 = 0;
LABEL_10:
    v12 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL);
    if ( v12 == sub_7CF0F0 )
      return ((unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 48) + 16LL))(*(_QWORD *)(v11 + 48)) >> 32 << 32)
           | *(unsigned int *)(*(_QWORD *)(v11 + 56) + 8LL);
    v17 = v11;
    return v12(v17);
  }
  v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  v11 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v9 & 4) == 0 )
    goto LABEL_10;
  if ( !v10 )
    goto LABEL_10;
  v11 = 0;
  v17 = *v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v17 )
    goto LABEL_10;
  v12 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL);
  if ( (char *)v12 == (char *)sub_7D15A0 )
    return sub_7D15A0(v17);
  return v12(v17);
}

