char __fastcall sub_18D5550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  char result; // al
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v13[168]; // [rsp+10h] [rbp-A8h] BYREF

  v6 = a3;
  v12 = a2;
  v11 = a4;
  result = sub_F610C0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  if ( result )
    return 0;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(unsigned __int8 *)(v8 + 16);
  if ( (_BYTE)v9 == 13 )
  {
    if ( ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) != 0x1B3 )
    {
LABEL_4:
      sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), v6, 0x1540u, 0);
      v10 = sub_1605D30((__int64)v13, &v12);
      sub_15884C0(v10, &v11);
      sub_15F7200(v13);
      return 1;
    }
  }
  else if ( (unsigned int)(v9 - 57) > 1 )
  {
    goto LABEL_4;
  }
  return result;
}
