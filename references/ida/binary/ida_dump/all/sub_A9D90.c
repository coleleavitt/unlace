__int64 __fastcall sub_A9D90(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // eax
  __int64 v7; // rbx
  char v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  unsigned int v15; // [rsp+14h] [rbp-A4h]
  _QWORD v16[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v17; // [rsp+30h] [rbp-88h] BYREF
  __int64 v18; // [rsp+38h] [rbp-80h]
  __int64 v19[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v20; // [rsp+60h] [rbp-58h] BYREF
  __int64 v21; // [rsp+68h] [rbp-50h]
  unsigned __int64 v22; // [rsp+78h] [rbp-40h]

  v5 = a5;
  v7 = a3;
  v22 = __readfsqword(0x28u);
  if ( (a5 & 0x20) == 0 )
  {
    v5 = a5 ^ 1;
    if ( (((unsigned __int8)a5 ^ 1) & 1) == 0 )
      v5 = a5 ^ 1 | 0x40;
  }
  BYTE1(v5) |= 1u;
  v15 = v5;
  if ( a3 && a3 != a4 )
  {
    while ( !(unsigned __int8)sub_64880(a2) || a2[3] )
    {
      if ( *(char *)(v7 + 4) >= 0 || (a5 & 0x200) != 0 )
      {
        sub_124680(v16, a1, v7, a5);
        v9 = sub_64780(a2, v16);
        if ( !v9 )
          v9 = sub_318470(a2 + 2, &v17);
        sub_127A20(v19, a1, v7, v15);
        sub_64640(a2, v19, v10, v11, v12, v13);
        sub_317C60(a2 + 2, &v20);
        if ( v9 )
        {
          if ( v20 )
          {
            v21 = 0;
            qfree();
          }
          qfree();
          if ( v17 )
          {
            v18 = 0;
            qfree();
          }
          qfree();
          return v7;
        }
        if ( v20 )
        {
          v21 = 0;
          qfree();
        }
        qfree();
        if ( v17 )
        {
          v18 = 0;
          qfree();
        }
        qfree();
      }
      v7 = *(_QWORD *)(v7 + 8);
      if ( !v7 || a4 == v7 )
        return 0;
    }
  }
  return 0;
}
