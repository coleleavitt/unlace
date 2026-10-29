void __fastcall sub_1A8EBC0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+8h] [rbp-30h]
  __int64 v15; // [rsp+10h] [rbp-28h]

  v7 = *(_QWORD *)(a2 + 48);
  v14 = 0;
  LODWORD(v15) = 0;
  BYTE4(v15) = 0;
  v8 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
  v13 = 0;
  if ( (v8 & 8) != 0
    && (((*(__int64 *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v8 & 7)) >> 6) & 7) == 2 )
  {
    LODWORD(v15) = *(_DWORD *)(a2 + 24);
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(
            a2,
            v8 & 0xFFFFFFFFFFFFFFF0LL,
            a3,
            a2,
            a6,
            a7,
            a2,
            v14,
            v15);
    v10 = sub_1A881F0(*a1 + 248, a3, (const double *)&v13);
    if ( v10 )
      sub_1A8E3C0(*a1, v10, (__int64)&v13, v11, v12, a4);
  }
}
