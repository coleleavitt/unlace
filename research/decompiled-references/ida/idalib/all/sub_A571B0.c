bool __fastcall sub_A571B0(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 i; // rbx
  __int64 j; // r13
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  bool v11; // cc
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ebx

  do
  {
    i = sub_E90060(a1);
    if ( i )
      goto LABEL_2;
    v18 = sub_E90090(a1);
    if ( !v18 )
    {
      v20 = sub_E90000(a1);
      if ( v20 != (unsigned int)sub_E90000(a2) )
        return 0;
      v10 = sub_E90000(a1);
      v11 = v10 <= 3;
      if ( v10 == 3 )
        goto LABEL_31;
LABEL_8:
      if ( !v11 )
      {
        if ( v10 <= 5 )
          return 1;
LABEL_35:
        v12 = *(_QWORD *)(a2 + 8);
        v13 = *(_QWORD *)(a1 + 8);
        goto LABEL_36;
      }
      if ( v10 )
        goto LABEL_35;
      v12 = *(_QWORD *)(a2 + 8);
      v13 = *(_QWORD *)(a1 + 8);
      v14 = (v12 >> 1) & 3;
      if ( (v13 & 6) != 0 )
      {
        v15 = 0;
        if ( v14 )
          goto LABEL_36;
      }
      else
      {
        v15 = *(_QWORD *)(a1 + 16);
        v16 = 0;
        if ( v14 )
          goto LABEL_13;
      }
      v16 = *(_QWORD *)(a2 + 16);
LABEL_13:
      if ( v16 != v15 )
        return 0;
      goto LABEL_36;
    }
    for ( i = *(_QWORD *)(v18 + 88); (*(_BYTE *)(i + 28) & 0x7F) == 0x4D; i = *(_QWORD *)(i + 88) )
    {
      i = *(_QWORD *)(i + 88);
      if ( (*(_BYTE *)(i + 28) & 0x7F) != 0x4D )
        break;
    }
LABEL_2:
    j = sub_E90060(a2);
    if ( !j )
    {
      v19 = sub_E90090(a2);
      if ( !v19 )
        return 0;
      for ( j = *(_QWORD *)(v19 + 88); (*(_BYTE *)(j + 28) & 0x7F) == 0x4D; j = *(_QWORD *)(j + 88) )
      {
        j = *(_QWORD *)(j + 88);
        if ( (*(_BYTE *)(j + 28) & 0x7F) != 0x4D )
          break;
      }
    }
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)i + 32LL);
    if ( v6 == sub_A55CC0 )
    {
      v7 = *(_QWORD *)(i + 88);
      v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)j + 32LL);
      if ( v8 == sub_A55CC0 )
        goto LABEL_5;
    }
    else
    {
      v7 = v6(i);
      v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)j + 32LL);
      if ( v8 == sub_A55CC0 )
      {
LABEL_5:
        v9 = *(_QWORD *)(j + 88);
        goto LABEL_6;
      }
    }
    v9 = v8(j);
LABEL_6:
    if ( v7 != v9 )
      return 0;
    v10 = sub_E90000(a1);
    v11 = v10 <= 3;
    if ( v10 != 3 )
      goto LABEL_8;
LABEL_31:
    v12 = *(_QWORD *)(a2 + 8);
    if ( ((v12 >> 1) & 3) != 2 )
      BUG();
    v13 = *(_QWORD *)(a1 + 8);
    if ( ((v13 >> 1) & 3) != 2 )
      BUG();
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) != *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) )
      return 0;
LABEL_36:
    a2 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    a1 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( (v13 & 0xFFFFFFFFFFFFFFF8LL) != 0 && a2 );
  return ((v12 | v13) & 0xFFFFFFFFFFFFFFF8LL) == 0;
}
