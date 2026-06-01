__int64 __fastcall sub_18CF390(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, double a6, double a7)
{
  unsigned int v7; // r12d
  char v9; // r15
  unsigned int v10; // r14d
  unsigned __int64 v11; // rbx
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v19; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v23[200]; // [rsp+30h] [rbp-C8h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 42
    && (v9 = a5,
        v10 = a4,
        v11 = a3,
        LOBYTE(v12) = sub_9EC890(
                        *(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
                        (__int64)a2,
                        a3,
                        a4,
                        a5),
        v7 = v12,
        (_BYTE)v12) )
  {
    v13 = v11;
    v14 = *a2 & 0xFFFFFFFFFFFFFFFELL;
    if ( v9 )
    {
      v11 = *a2 & 0xFFFFFFFFFFFFFFFELL;
      v14 = v13;
    }
    sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), v10, 0x1642u, 0);
    v19 = *(_QWORD *)(v11 + 8);
    v15 = sub_162B6D0((__int64)v23, &v19);
    v20 = *(_QWORD *)(v14 + 8);
    v16 = sub_162B6D0(v15, &v20);
    v21 = sub_EEC8C0(v11, (__int64)&v20, a6);
    v17 = sub_1587DB0(v16, &v21);
    v22 = sub_EEC8C0(v14, (__int64)&v21, a6);
    sub_1587DB0(v17, &v22);
    sub_15F7200(v23);
    *a2 = sub_160A600(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(a3 + 8), 0x15u, 0, 0, a6, a7, 0);
  }
  else
  {
    return 0;
  }
  return v7;
}
