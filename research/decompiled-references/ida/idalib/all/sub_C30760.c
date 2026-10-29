__int64 __fastcall sub_C30760(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // ebp
  unsigned int v10; // ebp
  __int64 v11; // r15
  _BYTE *v12; // rdi
  __int64 (*v13)(void); // rax
  __int64 v14; // rax
  __int64 (__fastcall *v15)(_QWORD); // rax
  __int64 v16; // rax
  unsigned __int8 **v18; // rax
  unsigned __int8 **v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) == 42
    || (v20 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v20 + 16) == 42)
    && (v7 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v20, a4)) != 0 )
  {
    v6 = *(_QWORD *)(v7 + 32);
  }
  v8 = *(_DWORD *)(a2 + 4);
  v9 = *(_DWORD *)(a3 + 56);
  if ( v8 + (*(_DWORD *)(a3 + 24) >> 4) <= v9 )
  {
    v10 = v9 - v8;
    v11 = sub_F63270(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v10 == *(_DWORD *)(a3 + 24) >> 4 )
    {
      v12 = (_BYTE *)sub_F63270(*(_QWORD *)(*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF0LL));
    }
    else
    {
      v12 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * (v10 - 1)) & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v12 || (v12[28] & 0x7Fu) - 59 > 2 )
        BUG();
    }
    v13 = *(__int64 (**)(void))(*(_QWORD *)v12 + 32LL);
    v14 = (char *)v13 == (char *)sub_A01140 ? sub_B70A60((__int64)v12) : v13();
    v21 = v14;
    v15 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 32LL);
    v16 = v15 == sub_A01140
        ? sub_B70A60(v11)
        : ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD)))v15)(v11, a2, sub_A01140);
    if ( v21 == v16 )
      return sub_C26D60(a1, a2, a3, v11, v10);
  }
  v18 = (unsigned __int8 **)sub_E33C90(a1, a2, 2418, 0);
  v19 = v18;
  if ( v18 )
  {
    sub_AE9DF0(v18, *(_QWORD *)(a3 + 40), 8u);
    sub_AE9DF0(v19, v6, 8u);
  }
  return 0;
}
