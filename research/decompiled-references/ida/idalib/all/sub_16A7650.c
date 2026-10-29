void __fastcall sub_16A7650(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r12
  _BYTE v16[168]; // [rsp-A8h] [rbp-A8h] BYREF

  v5 = (__int64 *)*a1;
  v6 = *(_QWORD *)(*a1 + 8);
  if ( v6 != 1 )
  {
    v7 = *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v8 = *((_DWORD *)v5 + 25);
    v9 = *v5;
    v10 = v5[3];
    v11 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v11 + 16) == 42 )
    {
      if ( (unsigned __int8)sub_F6A690(*(_QWORD *)(*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL), 21, v7, a4, a5) )
      {
        v15 = v10 & 0xFFFFFFFFFFFFFFF0LL;
        if ( *(_BYTE *)(*(_QWORD *)v15 + 16LL) == 42
          && !(unsigned __int8)sub_F6A690(
                                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 32LL) & 0xFFFFFFFFFFFFFFF0LL),
                                 21,
                                 v12,
                                 v13,
                                 v14) )
        {
          sub_168B9F0((__int64)v16, (__int64 *)(v9 + 8), v8, 0x1BDFu, 0);
          sub_15F7200(v16);
        }
      }
    }
  }
}
