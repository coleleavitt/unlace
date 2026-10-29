void __fastcall sub_1864870(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-120h] BYREF
  void *ptr; // [rsp+8h] [rbp-118h] BYREF
  __int64 v15; // [rsp+10h] [rbp-110h]
  _BYTE v16[64]; // [rsp+18h] [rbp-108h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-B8h]
  unsigned __int8 *v19; // [rsp+78h] [rbp-A8h] BYREF
  char v20; // [rsp+D0h] [rbp-50h]
  unsigned int v21; // [rsp+D8h] [rbp-48h]
  char v22; // [rsp+DCh] [rbp-44h]

  if ( *(char *)(a2 + 28) >= 0
    && (unsigned __int8)sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                          0x1C44u,
                          *(unsigned int *)(a2 + 24),
                          *(_QWORD *)(a1 + 264),
                          a5,
                          a6) != 1 )
  {
    ptr = v16;
    v15 = 0x800000000LL;
    if ( (*(_BYTE *)(a2 + 40) & 7) == 0 )
    {
      sub_183A170(a1, a2, (__int64)&ptr);
      if ( (_DWORD)v15 )
      {
        sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1C44u, 0);
        if ( v20 )
        {
          sub_AE9DF0(&v19, a2, 0xAu);
        }
        else if ( v22 )
        {
          v10 = sub_168B9E0(v17);
          v11 = v18;
          if ( v18 )
            v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
          v13 = v11;
          v12 = sub_1587BC0(v10, &v13, v6, v7, v8, v9);
          sub_AE9DF0((unsigned __int8 **)(*v12 + 32LL * v21 + 8), a2, 0xAu);
        }
        LOBYTE(v13) = (unsigned int)v15 > 1;
        sub_1588420((__int64)v17, (unsigned __int8 *)&v13);
        sub_15F7200(v17);
        sub_18417B0(a1, a2, (__int64)&ptr);
      }
      if ( ptr != v16 )
        free(ptr);
    }
  }
}
