char __fastcall sub_15A1710(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  char result; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // [rsp-10h] [rbp-38h]

  v7 = *(_QWORD *)(a1 + 264);
  v8 = *(_QWORD *)(v7 + 32);
  if ( (unsigned __int8)sub_FD3830(v8, 0x1A8Bu, 0, v7, a5, a6) != 1
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 42
    || (result = sub_FD3830(v8, 0x1A88u, 0, v7, v9, v10), result != 1)
    && ((unsigned __int8)sub_1598920(*(_QWORD *)(*a2 + 8), 6792, v12, v13, v14, v15)
     || (result = sub_159CF80(a2[1], 6792, v16, v17, v18, v19)) != 0) )
  {
    sub_15A1250(a1, 0, 0, 7, a2, 0, a3);
    return v20;
  }
  return result;
}
