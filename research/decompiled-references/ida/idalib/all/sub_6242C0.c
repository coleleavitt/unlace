__int64 __fastcall sub_6242C0(
        __int64 *a1,
        int a2,
        __int64 (__fastcall *a3)(unsigned __int64, const char *, __int64, __int64),
        __int64 a4)
{
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // r15
  unsigned __int64 v17; // rax
  unsigned int v18; // [rsp+4h] [rbp-54h]
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_7BEFD0(a1 + 291, *a1, v20, a2, 65) )
    return (unsigned int)-1;
  v19 = v20[0];
  if ( v20[0] == -1 )
  {
    return (unsigned int)-1;
  }
  else
  {
    v18 = sub_622090(*a1, v20[0], a3, a4);
    if ( v18 == 1 )
    {
      v7 = *a1;
      v8 = *a1;
      v20[0] = v19;
      v9 = sub_7BEB80(v20, v8, 65);
      if ( v9 == -1 )
      {
LABEL_11:
        v13 = *a1;
        v14 = *a1;
        v20[0] = v19;
        v15 = sub_7BEB80(v20, v14, 79);
        if ( v15 == -1 )
          return v18;
        while ( 1 )
        {
          v16 = sub_7BE710(v20, v13, v15, 79);
          v17 = sub_3BDE50(*(_QWORD **)(v13 + 1672), v15);
          v12 = a3(v17, nullptr, v16, a4);
          if ( v12 <= 0 )
            break;
          v15 = sub_7BEBF0(v20, v13, v15, 79);
          if ( v15 == -1 )
            return v18;
        }
      }
      else
      {
        while ( 1 )
        {
          v10 = sub_7BE710(v20, v7, v9, 65);
          v11 = sub_3BDE50(*(_QWORD **)(v7 + 1672), v10);
          v12 = a3(v11, nullptr, v9, a4);
          if ( v12 <= 0 )
            break;
          v9 = sub_7BEBF0(v20, v7, v9, 65);
          if ( v9 == -1 )
            goto LABEL_11;
        }
      }
      return (unsigned int)v12;
    }
  }
  return v18;
}
