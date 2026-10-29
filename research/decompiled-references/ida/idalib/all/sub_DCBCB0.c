__int64 __fastcall sub_DCBCB0(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  __int16 v6; // ax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int8 **v9; // r13
  __int64 v10; // rax
  void *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdi
  unsigned int v17; // eax
  unsigned int v19; // eax
  _WORD *v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+18h] [rbp-50h] BYREF
  void *v22[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+30h] [rbp-38h] BYREF

  if ( !a3 )
    goto LABEL_7;
  v6 = *a3 & 0x1FF;
  if ( v6 == 106 )
    return 1;
  if ( ((v6 + 423) & 0x1FFu) <= 4 )
  {
    v20 = a3;
    if ( (unsigned int)sub_BFBE70((__int64)a3) != 227 )
    {
      a3 = v20;
      if ( (*v20 & 0x1FF) != 0x5C )
        goto LABEL_7;
      goto LABEL_5;
    }
    return 1;
  }
  if ( v6 != 92 )
    goto LABEL_7;
LABEL_5:
  v7 = *(_QWORD *)(sub_C946E0((__int64)a3) + 40);
  if ( (v7 & 7) != 0 )
    BUG();
  v8 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  if ( *(_DWORD *)v8 == 8 && *(_QWORD *)(v8 + 16) == 0x657461636F6C6C61LL )
    return 1;
LABEL_7:
  v21 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v9 = (unsigned __int8 **)sub_E33BA0(a1, &v21, 2400, 0);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v11 = (void *)a4;
  sub_E29020(v22, a4, v10);
  if ( v9 )
  {
    v11 = v22[0];
    sub_AEC220(v9, (_BYTE *)v22[0], (signed __int64)v22[1]);
  }
  if ( v22[0] != &v23 )
    operator delete(v22[0]);
  v15 = *(_DWORD *)(a4 + 24);
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      v16 = *(_QWORD *)(a4 + 32);
    }
    else
    {
      v16 = 0;
      if ( (unsigned int)(v15 - 2) > 1 )
        v16 = *(_QWORD *)(*(_QWORD *)(a4 + 32) + 32LL);
    }
    goto LABEL_13;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(a4 + 32) + 32LL);
  if ( !*(_BYTE *)(v16 + 58) )
  {
LABEL_13:
    v17 = sub_CEF910((__int64 *)v16, (__int64)v11, v12, v13, v14);
    sub_E33DB0(a1, v17, 103);
    return 0;
  }
  v19 = sub_CEF910((__int64 *)v16, (__int64)v11, v12, v13, v14);
  sub_E33DB0(a1, v19, 2487);
  return 0;
}
