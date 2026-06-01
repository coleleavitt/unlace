__int64 __fastcall sub_32F640(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  int v7; // esi
  __int64 v8[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v9; // [rsp+10h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v5 = *(unsigned __int8 *)(a2 + 8);
  if ( (_BYTE)v5 == 1 )
  {
    v7 = *(_DWORD *)a2;
    v8[0] = 0;
    v8[1] = 0;
    sub_63E80(v8, v7, a4);
    v9 = nullptr;
    v10 = 0;
    sub_64280((__int64 *)a1, v8);
    sub_316CB0((__int64 *)(a1 + 16), &v9);
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
    qfree();
  }
  else
  {
    if ( (_BYTE)v5 != 5 )
      sub_328990(v5, a2, a4);
    sub_122B20((__int64 *)a1, *(_QWORD *)(a3 + 1440) + *(_QWORD *)a2, a4);
  }
  return a1;
}
