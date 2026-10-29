__int64 __fastcall sub_1844960(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  unsigned __int64 v9; // rcx
  char v10; // dl
  __int64 result; // rax
  char v12; // al
  unsigned __int8 v13; // [rsp+4h] [rbp-34h]
  __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v9 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v14[0] = a3;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 2) <= 4u )
  {
    v10 = a3 & 7;
    if ( (v10 & 1) == 0 && !(*(_DWORD *)(v9 + 8) & 1 | *(_QWORD *)(v9 + 8) & 4 | v10 & 4) )
    {
      v13 = a6;
      v12 = sub_F62A70(v14, *(_QWORD *)(a1 + 248));
      a6 = v13;
      if ( v12 )
        return sub_1844530(a1, a2, v14[0], (__int64)a4, a5);
    }
  }
  result = sub_18439D0(a1, a2, v14[0], a4, a5, a6, a7, 0);
  if ( result != 1 && (result & 0xFFFFFFFFFFFFFFFELL) == 0 )
    return sub_1844530(a1, a2, v14[0], (__int64)a4, a5);
  return result;
}
