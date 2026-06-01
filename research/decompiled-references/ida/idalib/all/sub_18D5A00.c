__int64 __fastcall sub_18D5A00(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        _DWORD *a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v10; // rsi
  int v11; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v18[2]; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v20[168]; // [rsp+30h] [rbp-A8h] BYREF

  v18[0] = a2;
  v10 = *(_QWORD *)(a4 + 8);
  v17 = a3;
  v19 = v10;
  v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  if ( (unsigned int)(v11 - 57) > 1 )
  {
    if ( (_BYTE)v11 == 42 )
    {
      sub_168B9F0((__int64)v20, a1 + 1, v18[0], 0xFBBu, 0);
      v15 = sub_1605D30((__int64)v20, &v17);
      v16 = sub_1605D30(v15, &v19);
      sub_15884C0(v16, v18);
      sub_15F7200(v20);
      return 1;
    }
    else
    {
      *a5 = 26;
      return sub_18D1860(a1, v17, a4, a4, a7, a8);
    }
  }
  else if ( sub_18C25E0((__int64)a1, v10, v17, a4, (__int64)a5, a6)
         && ((*(_BYTE *)(a1[29] + 47LL) & 0x20) == 0
          || *(_QWORD *)(*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    *a5 = 1;
    return a4;
  }
  else
  {
    sub_168B9F0((__int64)v20, a1 + 1, v18[0], 0xFB7u, 0);
    v13 = sub_1605D30((__int64)v20, &v17);
    v14 = sub_1605D30(v13, &v19);
    sub_15884C0(v14, v18);
    sub_15F7200(v20);
    return 1;
  }
}
