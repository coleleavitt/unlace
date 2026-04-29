__int64 __fastcall sub_17F560(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v5; // r12d
  char v6; // al
  int v7; // r15d
  _DWORD *v9; // rdi
  _QWORD v10[11]; // [rsp+0h] [rbp-58h] BYREF

  v10[3] = __readfsqword(0x28u);
  if ( !*(_BYTE *)a2 )
    return 1;
  if ( *(_BYTE *)a2 != 4 || (v9 = *(_DWORD **)(a2 + 8), *v9 != 2) )
  {
    v5 = sub_122A50(a2, a1, a3);
    v6 = *(_BYTE *)a2;
    if ( (_BYTE)v5 )
    {
      *(_DWORD *)(a2 + 4) += a3;
      if ( v6 == 4 )
        *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) += a3;
    }
    else
    {
      if ( v6 != 6 )
        return v5;
      v7 = *(_DWORD *)(a2 + 4);
      sub_118490((char *)a2, a1);
      v10[0] = 0xFFFFFFFF00000000LL;
      v10[1] = 0;
      sub_17F400((__int64)v10, a1, -1, nullptr, a2, v7);
      if ( !(unsigned __int8)sub_17F560(a1, v10, a3) )
      {
        sub_1188E0((__int64)v10);
        return v5;
      }
      sub_118550((char *)a2, (char *)v10);
      sub_1188E0((__int64)v10);
    }
    return 1;
  }
  return sub_1286E0((__int64)v9, a1, a3);
}
