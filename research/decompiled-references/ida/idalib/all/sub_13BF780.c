__int64 __fastcall sub_13BF780(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 i; // rax
  unsigned __int64 v9; // rax
  unsigned __int8 *v10[13]; // [rsp-68h] [rbp-68h] BYREF

  result = 0;
  if ( a2 )
  {
    v5 = a2;
    v6 = a2;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v5 + 8);
      if ( !v7 )
        break;
      v5 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v7 & 4) == 0 || !v5 )
      {
        result = 0;
        if ( a3 == v5 )
          return result;
        goto LABEL_8;
      }
    }
    result = 0;
    if ( !a3 )
      return result;
LABEL_8:
    sub_FC70B0((__int64)v10, a1, a4, 1244);
    for ( i = *(_QWORD *)(a2 + 8); i; i = *(_QWORD *)(v9 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v9 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v9 )
        break;
      v6 = v9;
    }
    sub_AEC220(v10, (_BYTE *)(v6 + 32), *(_QWORD *)v6);
    sub_AEA040((__int64)v10);
    return 1;
  }
  return result;
}
