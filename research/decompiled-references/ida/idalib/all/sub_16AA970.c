void __fastcall sub_16AA970(char a1, unsigned int *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  char v13; // dl
  unsigned __int64 v14; // rbx
  bool v15; // al
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v20[168]; // [rsp+20h] [rbp-A8h] BYREF

  v6 = *(_QWORD *)(a3 + 8);
  v18 = a4;
  v19 = v6;
  if ( a1 && sub_F60F80(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL), *(_QWORD *)(a5 + 248), a3, a4, a5, a6) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v13 = *(_BYTE *)(v12 + 16);
    if ( v13 == 13 )
    {
      if ( ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) == 0x1B4 )
        return;
    }
    else if ( v13 == 47 )
    {
      return;
    }
    if ( !(unsigned __int8)sub_C3EA40(a3, *(_QWORD *)(a5 + 248), nullptr, v9, v10, v11) )
    {
      v14 = sub_A97D20(*(_QWORD *)(a5 + 248), *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL));
      if ( v14 > sub_A97D20(*(_QWORD *)(a5 + 248), *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        v15 = sub_F67340(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL));
        sub_168B9F0((__int64)v20, (__int64 *)(a5 + 8), *a2, v15 + 7056, 0);
        v16 = sub_1605D30((__int64)v20, &v19);
        v17 = sub_1605D30(v16, &v18);
        sub_15884C0(v17, (__int64 *)a2);
        sub_15F7200(v20);
      }
    }
  }
}
