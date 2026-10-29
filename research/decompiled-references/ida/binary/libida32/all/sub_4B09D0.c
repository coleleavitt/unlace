__int64 __fastcall sub_4B09D0(
        __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        unsigned int a3,
        char a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 v9; // rdx
  unsigned int v10; // ebx
  int v12; // r13d
  unsigned int v13; // eax
  unsigned int v14; // [rsp+8h] [rbp-E0h]
  unsigned int v15; // [rsp+18h] [rbp-D0h] BYREF
  int v16; // [rsp+1Ch] [rbp-CCh] BYREF
  unsigned int v17[34]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+A8h] [rbp-40h]

  v9 = a6 & 0x600;
  v10 = a5;
  v18 = __readfsqword(0x28u);
  if ( v9 == 512 )
  {
    v14 = sub_3BD5D0((__int64)a1, a5);
    v15 = v10 - v14;
    v10 = v14;
    a6 = sub_3B9AA0((__int64)a1, v14, 4);
    v9 = a6 & 0x600;
  }
  else
  {
    if ( !a7 )
      return 0;
    v15 = 0;
  }
  if ( v9 != 1024 || (a6 & 0xF0000000) != 0x60000000 )
    return 0;
  v12 = sub_3C3B30(a1, v17, &v16, a3, a4);
  v13 = sub_3C3F20(a1, v10);
  if ( v12 <= 0 )
  {
    v17[0] = v13;
    v12 = 1;
  }
  else
  {
    v15 += v16;
    if ( v17[0] != v13 )
    {
      if ( !under_debugger )
        interr(2842);
      BUG();
    }
  }
  sub_3C6030((__int64)a1, a2, v17, v12, &v15, a7);
  return 1;
}

