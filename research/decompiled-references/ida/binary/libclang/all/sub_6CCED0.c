__int64 __fastcall sub_6CCED0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-C0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-B8h] BYREF
  _BYTE v17[168]; // [rsp+20h] [rbp-A8h] BYREF

  v9 = a2;
  if ( a9 )
  {
    ptr[0] = v17;
    ptr[1] = (void *)0x2000000000LL;
    sub_B03040(ptr, a1, a2, &a7);
    v14 = 0;
    if ( !sub_25AC3A0(a1 + 122, ptr, &v14, &off_47D0620) )
    {
      v11 = a1[274];
      v12 = 8 * (3 * a9 + 3);
      a1[284] += v12;
      v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a1[275] >= v12 + v13 && v11 )
        a1[274] = v12 + v13;
      else
        v13 = sub_6A76A0((__int64)(a1 + 274), v12, 3);
      sub_B02DF0(v13, v9, &a7);
      sub_25AC200(a1 + 122, v13 + 8, v14, &off_47D0620);
    }
    sub_B03940(&v15);
    v9 = v15;
    if ( ptr[0] != v17 )
      free(ptr[0]);
  }
  return v9;
}

