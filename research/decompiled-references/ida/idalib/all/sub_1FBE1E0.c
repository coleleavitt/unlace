__int64 __fastcall sub_1FBE1E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  _DWORD *v12; // rsi
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rax
  int v24; // esi
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  int v27; // esi
  unsigned __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 (__fastcall *v30)(__int64); // rdx
  __int64 v31; // rsi

  v4 = sub_BBFE00(a2);
  sub_1FBABE0((__int64 *)a1, v4, (char *)a2);
  v5 = *(_QWORD *)(a2 + 112);
  if ( !v5 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 24);
    v9 = 0;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v5 & 4) != 0 )
  {
    v9 = 0;
    if ( v8 )
      v9 = *v8 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_5:
    sub_1F92A90(v6, v9, v7);
    v10 = *(_QWORD *)(a2 + 112);
    if ( v10 && (v10 & 4) != 0 && (v11 = v10 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      v12 = *(_DWORD **)(v11 + 8);
    else
      v12 = *(_DWORD **)(a2 + 128);
    sub_1F999A0((__int64 *)(a1 + 8), v12);
    if ( (unsigned int)sub_B740B0(a2) == 3 )
      goto LABEL_23;
    goto LABEL_11;
  }
  if ( !v8 )
  {
    v9 = 0;
    goto LABEL_5;
  }
  sub_1F92A90(v6, v5 & 0xFFFFFFFFFFFFFFF8LL, v7);
  if ( (unsigned int)sub_B740B0(a2) == 3 )
  {
LABEL_23:
    v14 = *(_QWORD *)(a1 + 24);
    goto LABEL_24;
  }
LABEL_11:
  v13 = sub_B740B0(a2);
  v14 = *(_QWORD *)(a1 + 24);
  if ( v13 != 4 )
  {
    sub_9B9C90(v14, 0);
    goto LABEL_13;
  }
LABEL_24:
  sub_9B9C90(v14, 1);
  v23 = *(_QWORD *)(a2 + 120);
  v24 = 0;
  if ( v23 )
  {
    if ( (v23 & 4) != 0 )
    {
      v25 = v23 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v25 )
        v24 = *(_DWORD *)(v25 + 8);
    }
  }
  sub_1F6F570(*(_QWORD **)(a1 + 16), v24, *(_QWORD *)(a1 + 24));
  v26 = *(_QWORD *)(a2 + 120);
  v27 = 0;
  if ( v26 )
  {
    if ( (v26 & 4) != 0 )
    {
      v28 = v26 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v28 )
        v27 = *(_DWORD *)(v28 + 12);
    }
  }
  sub_1F6F570(*(_QWORD **)(a1 + 16), v27, *(_QWORD *)(a1 + 24));
LABEL_13:
  v15 = *(_QWORD *)(a2 + 120);
  v16 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v15 && (v15 & 4) != 0 )
  {
    if ( !v16 )
    {
      sub_9B9C90(*(_QWORD *)(a1 + 24), 0);
      goto LABEL_19;
    }
    v16 = (_QWORD *)*v16;
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), v16 != nullptr);
  if ( v16 )
    sub_1F99A00(a1 + 8, (__int64)v16);
LABEL_19:
  sub_1F999A0((__int64 *)(a1 + 8), *(_DWORD **)(a2 + 128));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 136), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 140) & 7);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 140) & 8) != 0);
  sub_1FBDCF0(a1, a2, v17, v18, v19, v20);
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), a2 == v21);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  if ( a2 == result )
  {
    v29 = (_QWORD *)sub_BBFE00(a2);
    v30 = *(__int64 (__fastcall **)(__int64))(*v29 + 32LL);
    if ( v30 == sub_6EE900 )
      v31 = v29[9];
    else
      v31 = v30((__int64)v29);
    result = sub_1F92A90(*(_QWORD *)(a1 + 16), v31, *(_QWORD *)(a1 + 24));
  }
  *(_DWORD *)(a1 + 224) = 112;
  return result;
}
