__int64 __fastcall sub_13C8900(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int8 a6)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( a5 )
  {
    sub_13C8450(a1, (char *)(a2 + 32), *(_QWORD *)a2, a3, a6);
    if ( !*(_QWORD *)(a1 + 1520) )
    {
      v9 = a1 + 632;
      v10 = sub_1403C80(a1 + 632, a2, 1, 0);
      if ( !a4 )
      {
LABEL_11:
        if ( (v10 & 2) != 0 )
        {
LABEL_19:
          *a5 = 0;
          return 1;
        }
        *a5 = v10;
        return 1;
      }
      goto LABEL_8;
    }
  }
  else
  {
    result = 1;
    if ( !a4 || (*(_BYTE *)(a4 + 905) & 0x20) == 0 )
      return result;
    sub_13C8450(a1, (char *)(a2 + 32), *(_QWORD *)a2, a3, a6);
    if ( !*(_QWORD *)(a1 + 1520) )
    {
      v9 = a1 + 632;
      v10 = sub_1403C80(a1 + 632, a2, 1, 0);
      goto LABEL_8;
    }
  }
  v9 = a1 + 632;
  sub_13C2430(a1, a2);
  v10 = sub_1403C80(a1 + 632, a2, 1, 0);
  if ( !a4 )
    goto LABEL_10;
LABEL_8:
  if ( (v10 & 0xFFFFFFFFFFFFFFF8LL) == 0
    || (*(_BYTE *)(a4 + 905) & 0x20) == 0
    || (sub_1408340(v9, a4, 0),
        (unsigned __int8)sub_FF5710(a4, (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL), v11, v12, v13, v14)) )
  {
LABEL_10:
    if ( !a5 )
      return 1;
    goto LABEL_11;
  }
  result = sub_13F49C0(v9, a2);
  if ( (_BYTE)result )
  {
    if ( a5 )
      goto LABEL_19;
    return 1;
  }
  return result;
}
