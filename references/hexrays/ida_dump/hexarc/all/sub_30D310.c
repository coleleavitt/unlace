__int64 __fastcall sub_30D310(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  _QWORD *v5; // rdi
  int v6; // ecx
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v2 = 0;
  v15 = __readfsqword(0x28u);
  if ( (*(_DWORD *)a1 & 0xF) == 2 && *(_QWORD *)(a1 + 16) == 1 )
  {
    v5 = *(_QWORD **)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 4);
    v7 = -1;
    v8 = *v5 + a2;
    if ( v6 != 8 )
    {
      v7 = (1LL << (8 * (unsigned __int8)v6)) - 1;
      v8 &= v7;
    }
    v9 = v5[1] + *v5 + a2 - 1;
    *(_QWORD *)(a1 + 16) = 0;
    v10 = v7 & v9;
    if ( v10 >= v8 )
    {
      v13 = v8;
      v14 = v10 + 1 - v8;
      sub_30F830(a1 + 8, &v13);
    }
    else
    {
      v14 = v10 + 1;
      v13 = 0;
      sub_30F830(a1 + 8, &v13);
      v11 = *(_DWORD *)(a1 + 4);
      v12 = -1;
      if ( v11 != 8 )
        v12 = (1LL << (8 * (unsigned __int8)v11)) - 1;
      v13 = v8;
      v14 = v12 - v8 + 1;
      sub_30F830(a1 + 8, &v13);
    }
    return 1;
  }
  return v2;
}
