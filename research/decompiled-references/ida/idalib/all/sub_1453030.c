void __fastcall sub_1453030(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  unsigned int v6; // r13d
  __int16 v7; // ax
  __int64 v8; // rax
  __int64 v9; // rax
  void (__fastcall *v10)(__int64, _QWORD, const char *, size_t); // r14
  size_t v11; // rax
  void *v12; // [rsp+0h] [rbp-98h] BYREF
  signed __int64 v13; // [rsp+8h] [rbp-90h]
  _BYTE v14[16]; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int8 *v15[15]; // [rsp+20h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(a2 + 1192);
  v6 = *(_DWORD *)a4;
  sub_14634E0(a2, a4);
  if ( *(_WORD *)(a4 + 16) != 22 )
  {
    sub_FC70B0((__int64)v15, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1399);
    sub_AE9DF0(v15, (__int64)"(", 1u);
    sub_AEA040((__int64)v15);
    return;
  }
  sub_14634E0(a2, a4);
  v7 = *(_WORD *)(a4 + 16);
  if ( (unsigned __int16)(v7 - 7) <= 0xCu )
    goto LABEL_6;
  if ( v7 == 1 )
    goto LABEL_6;
  v8 = *(_QWORD *)(a4 + 8);
  if ( !v8 )
    goto LABEL_6;
  v9 = *(_QWORD *)(v8 + 16);
  if ( (unsigned int)*(_QWORD *)v9 != 4 )
  {
    if ( (unsigned int)*(_QWORD *)v9 == 3 && *(_WORD *)(v9 + 16) == 28528 && *(_BYTE *)(v9 + 18) == 112 )
    {
      sub_14634E0(a2, a4);
      if ( v5 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 224LL))(v5, v6);
LABEL_14:
      if ( *(_WORD *)(a4 + 16) == 23 )
      {
        sub_14634E0(a2, a4);
        if ( *(_WORD *)(a4 + 16) != 2 )
        {
          sub_FC70B0((__int64)v15, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1239);
          sub_AE9DF0(v15, (__int64)"pragma execution_character_set", 1u);
          sub_AEA040((__int64)v15);
        }
      }
      else
      {
        sub_FC70B0((__int64)v15, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1399);
        sub_AE9DF0(v15, (__int64)")", 1u);
        sub_AEA040((__int64)v15);
      }
      return;
    }
LABEL_6:
    sub_FC70B0((__int64)v15, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1401);
    sub_AEA040((__int64)v15);
    return;
  }
  if ( *(_DWORD *)(v9 + 16) != 1752397168 )
    goto LABEL_6;
  sub_14634E0(a2, a4);
  if ( *(_WORD *)(a4 + 16) != 66 )
  {
LABEL_18:
    if ( v5 )
    {
      v10 = *(void (__fastcall **)(__int64, _QWORD, const char *, size_t))(*(_QWORD *)v5 + 216LL);
      v11 = j__strlen("UTF-8");
      v10(v5, v6, "UTF-8", v11);
    }
    goto LABEL_14;
  }
  sub_14634E0(a2, a4);
  v12 = v14;
  v13 = 0;
  v14[0] = 0;
  if ( (unsigned __int8)sub_1464000(a2, a4, &v12, "pragma execution_character_set", 0) )
  {
    if ( !sub_9B4AA0((__int64)&v12, "UTF-8") || !sub_9B4AA0((__int64)&v12, "utf-8") )
    {
      if ( v12 != v14 )
        operator delete(v12);
      goto LABEL_18;
    }
    sub_FC70B0((__int64)v15, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1400);
    sub_AEC220(v15, v12, v13);
    sub_AEA040((__int64)v15);
  }
  if ( v12 != v14 )
    operator delete(v12);
}
