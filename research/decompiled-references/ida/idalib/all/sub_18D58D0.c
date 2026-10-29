__int64 __fastcall sub_18D58D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  __int64 v8; // rdi
  __int64 *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v15; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v18[168]; // [rsp+20h] [rbp-A8h] BYREF

  v17 = a2;
  v16 = a3;
  v15 = a4;
  v8 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1
    && !sub_F60F80(v8, *(_QWORD *)(a1 + 248), a3, a4, (__int64)a5, a6) )
  {
    v9 = (__int64 *)(a1 + 8);
    v10 = 4027;
    goto LABEL_4;
  }
  if ( !sub_18C25E0(a1, v15, v16, a4, (__int64)a5, a6) )
  {
    v9 = (__int64 *)(a1 + 8);
    v10 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                       & 0xFFFFFFFFFFFFFFF0LL)
                                           + 16LL)
        - 57 < 2
        ? 4028
        : 4026;
LABEL_4:
    sub_168B9F0((__int64)v18, v9, v17, v10, 0);
    v11 = sub_1605D30((__int64)v18, &v16);
    v12 = sub_1605D30(v11, &v15);
    v13 = *(unsigned __int8 *)(sub_15884C0(v12, &v17) + 120);
    sub_15F7200(v18);
    return v13;
  }
  *a5 = 1;
  return 0;
}
