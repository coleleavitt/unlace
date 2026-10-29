__int64 __fastcall sub_578820(_QWORD *a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 result; // rax
  char refinfo; // dl
  _QWORD v14[11]; // [rsp+0h] [rbp-58h] BYREF

  v6 = a2[2];
  v14[5] = __readfsqword(0x28u);
  v8 = sub_3BE900(a1, v6, 0);
  if ( (unsigned __int8)is_off(v8, a3) )
  {
    refinfo = get_refinfo(v14, a2[2], a3);
    result = 0xFFFFFFFFFFFFFFFLL;
    if ( refinfo )
      return v14[1] >> 4;
  }
  else
  {
    v9 = a1[2];
    if ( a4 == *(_DWORD *)(v9 + 80) )
    {
      return *a2;
    }
    else
    {
      if ( a4 == -1 )
        a4 = *(_DWORD *)(v9 + 84);
      v10 = sub_518710(a1, a2[2], a4, nullptr);
      v11 = sub_422460((__int64)a1, v10);
      return sub_510110((__int64)a1, v11);
    }
  }
  return result;
}
