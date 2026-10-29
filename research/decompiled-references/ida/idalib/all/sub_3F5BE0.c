__int64 __fastcall sub_3F5BE0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        char **a7)
{
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v13; // rsi
  __int64 v14; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v15[5]; // [rsp+10h] [rbp-28h] BYREF

  v9 = (_QWORD *)a1[21];
  v10 = a1[22];
  v15[1] = __readfsqword(0x28u);
  v11 = &v9[v10];
  if ( v9 != v11 )
  {
    while ( *v9 != a2 )
    {
      if ( v11 == ++v9 )
        goto LABEL_9;
    }
    if ( v11 != v9 )
    {
      if ( a3 != 86 && a3 != 72 )
        return 0;
      if ( a6 == 4 )
      {
        v15[0] = a2;
        v13 = a1[3];
        v14 = *a5;
        sub_7BF4E0(v15, v13, a4, &v14, 8, a3);
        return 1;
      }
      sub_35A790(a7);
      return 0;
    }
  }
LABEL_9:
  if ( a1[24] != a2 || a3 != 72 )
    return 0;
  v15[0] = a2;
  sub_7BF4E0(v15, a1[3], a4, a5, a6, 72);
  return 1;
}
