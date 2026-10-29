__int64 __fastcall sub_7EF520(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  __int64 *v7; // rax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(_DWORD *)a2 & 0x7FFFFFFF;
  if ( v6 == 8 )
    return sub_7EBA80(a1, *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL);
  if ( v6 > 8 )
  {
    if ( v6 == 9 )
    {
      v9 = *(_QWORD *)(a2 + 8);
      v10 = v9 + 24LL * *(unsigned int *)(a2 + 4);
      if ( v10 != v9 )
      {
        while ( (unsigned __int8)sub_7EE760(a1, v9) )
        {
          v9 += 24;
          if ( v10 == v9 )
            return 1;
        }
        return 0;
      }
    }
    return 1;
  }
  if ( v6 != 1 )
  {
    if ( ((v6 + 2147483642) & 0x7FFFFFFF) <= 1 )
    {
      v7 = (__int64 *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL);
      if ( !*v7 || (unsigned __int8)sub_7EF1F0((__int64)a1, *v7, v7[1], a4, a5, a6) )
      {
        sub_B03900(v11, *(_QWORD *)(a2 + 8));
        return sub_7EE690(a1, v11[0]);
      }
      return 0;
    }
    return 1;
  }
  if ( (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    return sub_7EEDC0(
             (__int64)a1,
             *(_QWORD *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL),
             (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL) + 8);
  else
    return sub_7EDF40(a1, *(_QWORD *)(a2 + 8));
}

