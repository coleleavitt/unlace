__int64 __fastcall sub_733860(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  const char *v12; // rsi
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-68h] BYREF
  int v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+10h] [rbp-58h]
  void *v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  if ( v3 == 1 || v3 == 2 )
  {
    sub_5FF0F0(a2, "[[gnu::cleanup");
    sub_5FF0F0(a2, "(");
    v4 = sub_5FF0F0(a2, &byte_3B9466E);
    v5 = *(_QWORD *)(a1 + 40);
    v6 = *(_QWORD *)(v5 + 40);
    v7 = *(unsigned int *)(v5 + 24);
    v8 = *(_QWORD *)(v5 + 160);
    v20 = v6;
    v21 = v7;
    v22 = v8;
    ((void (__fastcall *)(void **, __int64 *, __int64, __int64, __int64, __int64))sub_7928F0)(
      &v23,
      &v20,
      v7,
      v6,
      v9,
      v10);
    v11 = sub_26240F0(v4, v23, v24);
    sub_5FF0F0(v11, &byte_3B9466E);
    std::string::_M_dispose();
    sub_5FF0F0(a2, ")");
    v12 = "]]";
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((cleanup");
    sub_5FF0F0(a2, "(");
    v14 = sub_5FF0F0(a2, &byte_3B9466E);
    v15 = *(_QWORD *)(a1 + 40);
    v16 = *(_QWORD *)(v15 + 40);
    v17 = *(_DWORD *)(v15 + 24);
    v18 = *(_QWORD *)(v15 + 160);
    v20 = v16;
    v21 = v17;
    v22 = v18;
    ((void (__fastcall *)(void **, __int64 *))sub_7928F0)(&v23, &v20);
    v19 = sub_26240F0(v14, v23, v24);
    sub_5FF0F0(v19, &byte_3B9466E);
    if ( v23 != &v25 )
      operator delete(v23, v25 + 1);
    sub_5FF0F0(a2, ")");
    v12 = "))";
  }
  return sub_5FF0F0(a2, v12);
}

