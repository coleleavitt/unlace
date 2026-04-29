unsigned __int64 __fastcall sub_30BBE0(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  unsigned __int64 v3; // r12
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  __int64 v9; // r13
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v1 = *(_DWORD *)a1;
  v15 = __readfsqword(0x28u);
  v2 = v1 & 0xF;
  if ( v2 <= 4 )
  {
    if ( v2 > 2 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      if ( ((v9 + 1) & 0xFFFFFFFFFFFFFFFDLL) == 0 )
      {
        v3 = *(_QWORD *)(a1 + 8);
        v7 = *(_QWORD *)(a1 + 16);
        if ( v7 < v3 )
        {
          v12 = *(_QWORD *)(a1 + 8);
          v9 = -v9;
          v3 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 24) = v9;
          v7 = v12;
        }
        sub_30B800(a1);
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        if ( v9 != -1 )
          goto LABEL_7;
        v13 = 0;
        v14 = v3 + 1;
        sub_30F830(a1 + 8, &v13);
        v10 = *(_DWORD *)(a1 + 4);
        v11 = -1;
        if ( v10 != 8 )
          v11 = (1LL << (8 * (unsigned __int8)v10)) - 1;
        v13 = v7;
        v14 = v11 - v7 + 1;
        sub_30F830(a1 + 8, &v13);
      }
    }
  }
  else if ( v2 == 5 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_DWORD *)(a1 + 4);
    v5 = v3 | *(_QWORD *)(a1 + 8);
    if ( v4 != 8 )
      v5 |= -1LL << (8 * (unsigned __int8)v4);
    v6 = ~v5;
    if ( (~v5 & -v5) == 0 )
    {
      v7 = v3 + v6;
      sub_30B800(a1);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
LABEL_7:
      v13 = v3;
      v14 = v7 + 1 - v3;
      sub_30F830(a1 + 8, &v13);
      return v15 - __readfsqword(0x28u);
    }
    if ( (~v5 & (-v5 - 2)) == 0 )
    {
      sub_30B800(a1);
      v13 = v3;
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v14 = 1;
      sub_30F830(a1 + 8, &v13);
      v13 = v3 + v6;
      v14 = 1;
      sub_30F830(a1 + 8, &v13);
    }
  }
  return v15 - __readfsqword(0x28u);
}
