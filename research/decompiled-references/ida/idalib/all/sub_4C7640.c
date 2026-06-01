__int64 __fastcall sub_4C7640(
        unsigned __int8 **a1,
        __int64 (__fastcall ***a2)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        unsigned __int64 a3,
        char a4,
        unsigned __int64 a5,
        int a6,
        char a7)
{
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  int v12; // r13d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-160h]
  unsigned __int64 v15; // [rsp+10h] [rbp-158h] BYREF
  __int64 v16; // [rsp+18h] [rbp-150h] BYREF
  __int64 v17[41]; // [rsp+20h] [rbp-148h] BYREF

  v9 = a6 & 0x600;
  v10 = a5;
  v17[33] = __readfsqword(0x28u);
  if ( v9 == 512 )
  {
    v14 = sub_3C2650(a1, a5);
    v15 = v10 - v14;
    v10 = v14;
    a6 = sub_3BE900(a1, v14, 4);
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
  v12 = sub_3C8E00(a1, v17, &v16, a3, a4);
  v13 = sub_3C9200((__int64 *)a1, v10);
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
  sub_3CB360((__int64)a1, a2, v17, v12, &v15, a7);
  return 1;
}
