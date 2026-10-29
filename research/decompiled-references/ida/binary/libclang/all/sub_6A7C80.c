bool __fastcall sub_6A7C80(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v16; // ebx

  while ( 1 )
  {
    v4 = sub_A7AE80(a1);
    if ( v4 )
    {
      v5 = sub_A7AE80(a2);
      if ( v5 )
        goto LABEL_3;
      goto LABEL_20;
    }
    v4 = sub_A7AEB0(a1);
    if ( v4 )
    {
      do
        v4 = *(_QWORD *)(v4 + 88);
      while ( (*(_BYTE *)(v4 + 28) & 0x7F) == 0x4B );
      v5 = sub_A7AE80(a2);
      if ( v5 )
      {
LABEL_3:
        v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL);
        if ( v6 == sub_6A65F0 )
          goto LABEL_4;
        goto LABEL_23;
      }
LABEL_20:
      v5 = sub_A7AEB0(a2);
      if ( !v5 )
        return 0;
      do
        v5 = *(_QWORD *)(v5 + 88);
      while ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x4B );
      v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL);
      if ( v6 == sub_6A65F0 )
      {
LABEL_4:
        v7 = *(_QWORD *)(v4 + 88);
        v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL);
        if ( v8 == sub_6A65F0 )
        {
LABEL_5:
          v9 = *(_QWORD *)(v5 + 88);
          goto LABEL_6;
        }
LABEL_24:
        v9 = v8(v5);
LABEL_6:
        if ( v7 != v9 )
          return 0;
        goto LABEL_7;
      }
LABEL_23:
      v7 = v6(v4);
      v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL);
      if ( v8 == sub_6A65F0 )
        goto LABEL_5;
      goto LABEL_24;
    }
    v16 = sub_A7AE10(a1);
    if ( v16 != (unsigned int)sub_A7AE10(a2) )
      return 0;
LABEL_7:
    v10 = sub_A7AE10(a1);
    if ( v10 > 4 )
    {
      if ( v10 - 5 <= 1 )
        return 1;
LABEL_27:
      v12 = *(_QWORD *)(a1 + 8);
      v11 = *(_QWORD *)(a2 + 8);
      goto LABEL_28;
    }
    if ( v10 > 2 )
      break;
    if ( v10 )
      goto LABEL_27;
    v11 = *(_QWORD *)(a2 + 8);
    v12 = *(_QWORD *)(a1 + 8);
    if ( (v12 & 6) == 0 )
    {
      v13 = *(_QWORD *)(a1 + 16);
      v14 = 0;
      if ( (v11 & 6) == 0 )
LABEL_12:
        v14 = *(_QWORD *)(a2 + 16);
      if ( v14 != v13 )
        return 0;
      goto LABEL_28;
    }
    v13 = 0;
    if ( (v11 & 6) == 0 )
      goto LABEL_12;
LABEL_28:
    a1 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    a2 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (unsigned __int64)v12 <= 7 || (unsigned __int64)v11 <= 7 )
      return (v11 | (unsigned __int64)v12) <= 7;
  }
  v11 = *(_QWORD *)(a2 + 8);
  if ( ((v11 >> 1) & 3uLL) - 2 > 1 )
    BUG();
  v12 = *(_QWORD *)(a1 + 8);
  if ( ((v12 >> 1) & 3uLL) - 2 > 1 )
    BUG();
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) )
    goto LABEL_28;
  return 0;
}

