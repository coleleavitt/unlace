__int64 __fastcall sub_7D15A0(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int8 v3; // al
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // rax
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdi
  __int64 (*v17)(void); // rax
  __int64 (*v18)(void); // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax

  while ( 1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 192LL);
    if ( v2 <= 7 || (v2 & 4) != 0 )
      break;
    a1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    v18 = *(__int64 (**)(void))(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL) + 16LL);
    if ( v18 != sub_7D15A0 )
      return ((__int64 (__fastcall *)(unsigned __int64))v18)(a1);
  }
  v3 = *(_BYTE *)(a1 + 180) & 7;
  if ( v3 == 2 )
  {
    v19 = sub_777DC0(a1);
    v5 = v19;
    v6 = HIDWORD(v19);
    v20 = *(_QWORD *)(a1 + 160);
    if ( !v20 )
      goto LABEL_9;
    v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v20 & 4) != 0 )
    {
      if ( !v21 )
        goto LABEL_9;
      v21 = *(_QWORD *)v21;
    }
    if ( (*(_BYTE *)(a1 + 74) & 1) == 0 && v21 )
      v6 = *(unsigned int *)(v21 + 4);
    goto LABEL_9;
  }
  if ( v3 <= 2u )
  {
    v13 = *(_QWORD *)(a1 + 152);
    if ( v13 )
    {
      v14 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
      v15 = v13 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v13 & 4) != 0 )
      {
        if ( v14 )
        {
          v15 = 0;
          v16 = *v14 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v16 )
          {
            v17 = *(__int64 (**)(void))(*(_QWORD *)v16 + 16LL);
            if ( v17 == sub_7D15A0 )
            {
              v22 = sub_7D15A0();
              v5 = v22;
              v6 = HIDWORD(v22);
              goto LABEL_9;
            }
            goto LABEL_36;
          }
        }
      }
    }
    else
    {
      v15 = 0;
    }
    v17 = *(__int64 (**)(void))(*(_QWORD *)v15 + 16LL);
    if ( (char *)v17 == (char *)sub_7CF0F0 )
    {
      v6 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 48) + 16LL))(*(_QWORD *)(v15 + 48)) >> 32;
      v5 = *(_DWORD *)(*(_QWORD *)(v15 + 56) + 8LL);
      goto LABEL_9;
    }
    v16 = v15;
LABEL_36:
    v23 = ((__int64 (__fastcall *)(unsigned __int64))v17)(v16);
    v5 = v23;
    v6 = HIDWORD(v23);
    goto LABEL_9;
  }
  v4 = sub_777DC0(a1);
  v5 = v4;
  v6 = HIDWORD(v4);
  v7 = *(_QWORD *)(a1 + 160);
  if ( v7 )
  {
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v7 & 4) == 0 )
    {
LABEL_7:
      if ( v9 )
        v6 = *(unsigned int *)(v9 + 4);
      goto LABEL_9;
    }
    if ( v8 )
    {
      v5 = *(_DWORD *)(v8 + 8);
      if ( !v5 )
      {
        v5 = *(_DWORD *)(v8 + 12);
        if ( !v5 )
          v5 = v4;
      }
      v9 = *(_QWORD *)v8;
      goto LABEL_7;
    }
  }
LABEL_9:
  v10 = *(_QWORD *)(a1 + 184);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 120);
    if ( (v11 & 4) == 0 || !*(_DWORD *)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 16) )
      v5 = *(_DWORD *)(v10 + 8);
  }
  return (v6 << 32) | v5;
}

