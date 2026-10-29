__int64 __fastcall sub_1F1F50(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, int a5, int a6)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned int v9; // ebx
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+10h] [rbp-58h]
  __int128 v13; // [rsp+18h] [rbp-50h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( a1[8] )
  {
    sub_127FE0(*a1, (__int64)&v11, a3, 0, a5, a6, 0, 0, 0, 0, 0);
    v7 = a1[7];
    v8 = v7 + 96 * a1[8];
    if ( v7 == v8 )
    {
LABEL_11:
      v9 = -1;
    }
    else
    {
      while ( !(unsigned __int8)sub_1F1B00(v7, a1, a2, &v11, a4) )
      {
        v7 += 96;
        if ( v8 == v7 )
          goto LABEL_11;
      }
      v9 = *(_DWORD *)(v7 + 80);
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12);
    }
    qfree(v11);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v9;
}
