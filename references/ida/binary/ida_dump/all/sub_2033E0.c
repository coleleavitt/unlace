__int64 __fastcall sub_2033E0(__int64 a1, int *a2, __int64 a3, unsigned int a4)
{
  char v7; // r12
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // r12d

  if ( (unsigned int)sub_1C2AD0(a2, (int *)a3) )
  {
    sub_228C20(*(_QWORD *)(a1 + 56));
    if ( !a2[23] && *(_DWORD *)a3 == 1 )
    {
      if ( *a2 != 1 )
      {
        if ( !under_debugger )
          sub_383060(52859);
        BUG();
      }
      while ( 1 )
      {
        v9 = *(_QWORD *)(a3 + 8);
        v10 = a4 + v9;
        if ( !(unsigned __int8)sub_1C7920(
                                 a3,
                                 *(_QWORD *)(*(_QWORD *)(a1 + 56) + 1504LL),
                                 nullptr,
                                 a4,
                                 *(_DWORD *)(*(_QWORD *)(a1 + 56) + 72LL)) )
          break;
        v8 = *(_QWORD *)(a3 + 8);
        if ( v9 == v8 )
          goto LABEL_5;
        if ( v9 < v8 || v10 - (int)v8 > 16 )
          break;
        a4 = sub_11CA90(v10 - (int)v8);
      }
      return (unsigned int)-1;
    }
    else
    {
LABEL_5:
      v7 = sub_1C3110((__int64)a2, 0, 0);
      if ( (unsigned __int8)sub_1C3110(a3, 0, 0) != v7 )
        **(_DWORD **)(a1 + 56) &= ~0x200000u;
      copy_argloc();
      a2[6] &= ~0x2000000u;
    }
  }
  return a4;
}
