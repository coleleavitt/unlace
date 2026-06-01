__int64 __fastcall sub_7D7740(unsigned __int64 a1, __int64 a2, __int64 (*a3)(void))
{
  unsigned __int64 v4; // rax
  unsigned __int8 v5; // al
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rbp
  unsigned __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rbp
  unsigned __int64 (__fastcall *v20)(__int64); // rax
  __int64 (*v21)(void); // rax
  __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // ebp
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 (*v29)(void); // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax

  while ( 1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 152LL);
    if ( v4 <= 7 || (v4 & 4) != 0 )
      break;
    a3 = sub_7D7740;
    a1 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    v21 = *(__int64 (**)(void))(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL) + 16LL);
    if ( v21 != sub_7D7740 )
      return ((__int64 (__fastcall *)(unsigned __int64))v21)(a1);
  }
  v5 = *(_BYTE *)(a1 + 140) & 7;
  if ( v5 == 2 )
  {
    v22 = sub_77BCC0(a1);
    v24 = v22;
    v9 = HIDWORD(v22);
    v25 = *(_QWORD *)(a1 + 120);
    if ( v25 )
    {
      v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v25 & 4) == 0 )
        goto LABEL_27;
      if ( v26 )
      {
        v26 = *(_QWORD *)v26;
LABEL_27:
        if ( (unsigned __int8)sub_77B630(a1, a2, v23) != 1 && v26 )
          v9 = *(unsigned int *)(v26 + 4);
        v8 = v24;
        goto LABEL_9;
      }
    }
    sub_77B630(a1, a2, v23);
    v8 = v24;
    goto LABEL_9;
  }
  if ( v5 <= 2u )
  {
    v15 = *(_QWORD *)(a1 + 112);
    if ( v15 )
    {
      a3 = (__int64 (*)(void))(v15 & 0xFFFFFFFFFFFFFFF8LL);
      v16 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v15 & 4) != 0 )
      {
        if ( a3 )
        {
          v16 = nullptr;
          v17 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v17 )
          {
            v29 = *(__int64 (**)(void))(*(_QWORD *)v17 + 16LL);
            if ( v29 == sub_7D7740 )
            {
              v30 = sub_7D7740();
              v8 = v30;
              v9 = HIDWORD(v30);
              goto LABEL_9;
            }
            goto LABEL_46;
          }
        }
      }
    }
    else
    {
      v16 = nullptr;
    }
    if ( !(unsigned __int8)sub_77B630(a1, a2, (unsigned int)a3)
      || (v27 = sub_7D75A0((unsigned __int64)v16), (v28 = v27) == 0) )
    {
      v18 = *(__int64 (__fastcall **)(__int64))(*v16 + 32LL);
      if ( v18 == sub_7CF140 )
        v19 = v16[9];
      else
        v19 = v18((__int64)v16);
      v20 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL);
      if ( v20 == sub_7CF0F0 )
      {
        v9 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v19 + 48) + 16LL))(*(_QWORD *)(v19 + 48)) >> 32;
        v8 = *(_DWORD *)(*(_QWORD *)(v19 + 56) + 8LL);
      }
      else
      {
        v32 = v20(v19);
        v8 = v32;
        v9 = HIDWORD(v32);
      }
      goto LABEL_9;
    }
    v29 = *(__int64 (**)(void))(*(_QWORD *)v27 + 16LL);
    if ( (char *)v29 == (char *)sub_7CF0F0 )
    {
      v9 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v28 + 48) + 16LL))(*(_QWORD *)(v28 + 48)) >> 32;
      v8 = *(_DWORD *)(*(_QWORD *)(v28 + 56) + 8LL);
      goto LABEL_9;
    }
    v17 = v28;
LABEL_46:
    v31 = ((__int64 (__fastcall *)(unsigned __int64))v29)(v17);
    v8 = v31;
    v9 = HIDWORD(v31);
    goto LABEL_9;
  }
  v6 = sub_77BCC0(a1);
  v7 = *(_QWORD *)(a1 + 120);
  v8 = v6;
  v9 = HIDWORD(v6);
  if ( v7 )
  {
    v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v11 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v7 & 4) == 0 )
    {
LABEL_7:
      if ( v11 )
        v9 = *(unsigned int *)(v11 + 4);
      goto LABEL_9;
    }
    if ( v10 )
    {
      v8 = *(_DWORD *)(v10 + 8);
      if ( !v8 )
      {
        v8 = *(_DWORD *)(v10 + 12);
        if ( !v8 )
          v8 = v6;
      }
      v11 = *(_QWORD *)v10;
      goto LABEL_7;
    }
  }
LABEL_9:
  v12 = *(_QWORD *)(a1 + 144);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 56);
    if ( (v13 & 4) == 0 || !*(_DWORD *)((v13 & 0xFFFFFFFFFFFFFFF8LL) + 16) )
      v8 = *(_DWORD *)(v12 + 8);
  }
  return (v9 << 32) | v8;
}

