__int64 __fastcall sub_5121B0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int dword; // ebp
  __int64 v6; // rsi
  unsigned int v7; // r13d
  __int64 v8; // r14
  char v9; // bl
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(void **, __int64, _QWORD); // rax
  unsigned int radix; // eax
  void (__fastcall *v13)(__int64, __int64, _QWORD); // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  const char *v16; // rdx
  __int64 v18; // rdx
  unsigned int data_elsize; // ebx
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  void (__fastcall *v23)(__int64, __int64, _QWORD); // r12
  __int64 v24; // rax
  void (__fastcall *v25)(__int64, __int64, _QWORD); // rbx
  __int64 v26; // rax
  void *ptr; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v30; // [rsp+18h] [rbp-E0h]
  _BYTE v31[136]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+B8h] [rbp-40h]

  dword = -1;
  v6 = *(unsigned int *)(a1 + 60);
  v32 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a1 + 16);
  if ( (~(_WORD)v6 & 0x600) != 0 )
  {
    data_elsize = get_data_elsize(v7, v6, 0);
    v20 = getinf(9);
    if ( v20 == 4 )
      dword = get_dword(v7);
    else
      dword = v20 == 8 ? get_qword(v7) : (unsigned int)get_item_end(v7, v6, v21, v22) - v7;
    if ( dword != -1 && data_elsize )
      dword /= data_elsize;
  }
  v8 = *(_QWORD *)(a1 + 432);
  v9 = is_weak_name(v7);
  if ( !v9 )
  {
    if ( a2 )
    {
      sub_359A50(a1, (__int64)&unk_22B26DF, a2, v8);
      v11 = *(__int64 (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)(a1 + 480) + 240LL);
      if ( !v11 )
        goto LABEL_24;
    }
    else
    {
      sub_359A50(a1, (__int64)&unk_22B26E9, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 48LL), a3, v8);
      v23 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 56LL);
      v24 = closing_comment(a1, &unk_22B26E9);
      v23(a1, v24, 0);
      v11 = *(__int64 (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)(a1 + 480) + 240LL);
      if ( !v11 )
      {
LABEL_24:
        v9 = 0;
        if ( dword <= 1 )
          return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
        goto LABEL_7;
      }
    }
    goto LABEL_12;
  }
  if ( a4 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 216LL);
    if ( v18 )
    {
      sub_359A50(a1, (__int64)&unk_22B26DF, v18, v8);
      goto LABEL_23;
    }
  }
  if ( !a2 )
  {
    sub_359A50(a1, (__int64)&unk_22B26CD, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 48LL), a3, v8);
    v25 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 56LL);
    v26 = closing_comment(a1, &unk_22B26CD);
    v25(a1, v26, 0);
LABEL_23:
    v9 = 0;
    v11 = *(__int64 (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)(a1 + 480) + 240LL);
    if ( !v11 )
      goto LABEL_24;
    goto LABEL_12;
  }
  sub_359A50(a1, (__int64)&unk_22B26DF, a2, v8);
  v10 = *(_QWORD *)(a1 + 480);
  v11 = *(__int64 (__fastcall **)(void **, __int64, _QWORD))(v10 + 240);
  if ( !v11 )
  {
    if ( dword <= 1 )
    {
LABEL_9:
      sub_359A50(a1, (__int64)&unk_22B1C0C, *(_QWORD *)(v10 + 48));
      v13 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 56LL);
      v14 = closing_comment(a1, &unk_22B1C0C);
      v13(a1, v14, 0);
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
    }
    goto LABEL_7;
  }
LABEL_12:
  v15 = *(unsigned int *)(a1 + 60);
  ptr = nullptr;
  v30 = 0;
  if ( v11(&ptr, v15, v7) > 0 )
  {
    v16 = haystack;
    if ( (_QWORD)v30 )
      v16 = (const char *)ptr;
    sub_359A50(a1, (__int64)&unk_22B26F6, v16);
  }
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    qfree(ptr);
  }
  if ( dword <= 1 )
  {
    if ( !v9 )
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
    goto LABEL_8;
  }
LABEL_7:
  radix = get_radix(*(unsigned int *)(a1 + 60), 0);
  btoa32(v31, 136, (unsigned int)dword, radix);
  sub_359A50(a1, (__int64)&unk_22B2702, v31);
  if ( v9 )
  {
LABEL_8:
    v10 = *(_QWORD *)(a1 + 480);
    goto LABEL_9;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

