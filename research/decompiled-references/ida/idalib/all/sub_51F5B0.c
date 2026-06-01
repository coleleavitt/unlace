unsigned __int64 __fastcall sub_51F5B0(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 j; // r12
  __int64 v14; // [rsp+18h] [rbp-50h] BYREF
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 1784);
  v16 = __readfsqword(0x28u);
  v7 = v5 + 8;
  sub_42DA00(a2, (__int64 *)(v5 + 8), a3, a4);
  if ( *(_QWORD *)(v5 + 8) != -1 )
  {
    for ( i = 0; ; ++i )
    {
      v10 = sub_7BE710(v7, a2, i, 65);
      v14 = v10 - 1;
      if ( !v10 )
        break;
      sub_42D920(a2, &v14, a3, a4);
      v9 = i;
      v15 = v14 + 1;
      sub_7BE7C0(v7, a2, v9, &v15, 8, 65);
    }
    if ( *(_DWORD *)(v5 + 64) != 3 )
    {
      v11 = *(_QWORD *)(v5 + 16);
      for ( j = v11 + 72LL * *(_QWORD *)(v5 + 24); v11 != j; v11 += 72 )
        sub_42DA00(a2, (__int64 *)(v11 + 56), a3, a4);
    }
  }
  return v16 - __readfsqword(0x28u);
}
