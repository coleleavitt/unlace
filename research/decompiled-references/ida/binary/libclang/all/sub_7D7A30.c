unsigned __int64 __fastcall sub_7D7A30(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 v4; // al
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  __int64 v12; // rax
  _QWORD *v13; // rbp
  unsigned __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64); // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // ebp
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // r13

  v4 = *(_BYTE *)(a1 + 140) & 7;
  if ( v4 == 2 )
  {
    v18 = sub_77BCC0(a1);
    v20 = v18;
    v21 = HIDWORD(v18);
    v22 = *(_QWORD *)(a1 + 120);
    if ( v22 )
    {
      v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v22 & 4) == 0 )
      {
LABEL_19:
        if ( (unsigned __int8)sub_77B630(a1, a2, v19) != 1 && v23 )
          v21 = *(unsigned int *)(v23 + 4);
        return (v21 << 32) | v20;
      }
      if ( v23 )
      {
        v23 = *(_QWORD *)v23;
        goto LABEL_19;
      }
    }
    sub_77B630(a1, a2, v19);
    return (v21 << 32) | v20;
  }
  if ( v4 > 2u )
  {
    v5 = sub_77BCC0(a1);
    v6 = v5;
    v7 = HIDWORD(v5);
    v8 = *(_QWORD *)(a1 + 120);
    if ( v8 )
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v8 & 4) == 0 )
      {
LABEL_5:
        if ( v10 )
          v7 = *(unsigned int *)(v10 + 4);
        return (v7 << 32) | v6;
      }
      if ( v9 )
      {
        v6 = *(_DWORD *)(v9 + 8);
        if ( !v6 )
        {
          v6 = *(_DWORD *)(v9 + 12);
          if ( !v6 )
            v6 = v5;
        }
        v10 = *(_QWORD *)v9;
        goto LABEL_5;
      }
    }
    return (v7 << 32) | v6;
  }
  v12 = *(_QWORD *)(a1 + 112);
  if ( !v12 )
  {
    v13 = nullptr;
LABEL_12:
    if ( !(unsigned __int8)sub_77B630(a1, a2, (unsigned int)a3) || (v16 = sub_7D75A0((unsigned __int64)v13)) == 0 )
    {
      v15 = *(__int64 (__fastcall **)(__int64))(*v13 + 32LL);
      if ( v15 == sub_7CF140 )
        v16 = v13[9];
      else
        v16 = v15((__int64)v13);
    }
    v17 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL);
    if ( v17 == sub_7CF0F0 )
      return ((unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v16 + 48) + 16LL))(*(_QWORD *)(v16 + 48)) >> 32 << 32)
           | *(unsigned int *)(*(_QWORD *)(v16 + 56) + 8LL);
    v14 = v16;
    return v17(v14);
  }
  a3 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v12 & 4) == 0 )
    goto LABEL_12;
  if ( !a3 )
    goto LABEL_12;
  v13 = nullptr;
  v14 = *a3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v14 )
    goto LABEL_12;
  v17 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL);
  if ( (char *)v17 == (char *)sub_7D7740 )
    return sub_7D7740(v14, a2, (__int64 (*)(void))sub_7D7740);
  return v17(v14);
}

