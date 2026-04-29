__int64 __fastcall sub_178580(__int64 *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // ebp
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v12[4]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v13[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v14; // [rsp+50h] [rbp-88h] BYREF
  __int64 v15; // [rsp+58h] [rbp-80h]
  _QWORD v16[13]; // [rsp+70h] [rbp-68h] BYREF

  v16[5] = __readfsqword(0x28u);
  if ( a1[1] )
    return 0;
  v3 = sub_32ED40(*a2, *((_BYTE *)a2 + 64) == 0);
  if ( (_BYTE)v3 )
    return 0;
  if ( (a2[1] & 0x40) != 0 )
    return 0;
  v8 = sub_32ED70(*a3);
  if ( !(_BYTE)v8 || (*((_BYTE *)a3 + 6) & 2) != 0 )
  {
    return 0;
  }
  else
  {
    sub_127A20((__int64)v11, *a1, (__int64)a3, 1, v6, v7);
    sub_124680((__int64)v13, *a1, (__int64)a3, 1u);
    sub_64280(v13, v11);
    sub_316CB0(&v14, v12);
    if ( !sub_A9AA0(*a1, v13, *((_QWORD *)a3 + 1), *((_QWORD *)a2 + 1), 1u)
      && !sub_A9D90(*a1, v11, *((_QWORD *)a3 + 1), *((_QWORD *)a2 + 1), 1u) )
    {
      v3 = v8;
      if ( v15 )
      {
        v9 = *((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a3 + 1);
        if ( v9 == v10 )
        {
LABEL_21:
          v8 = 0;
        }
        else
        {
          while ( 1 )
          {
            memset(&v16[1], 0, 32);
            v16[0] = &off_4DDF00;
            if ( (unsigned int)sub_11F760((_BYTE *)v10, v16) )
              break;
            v10 = *(_QWORD *)(v10 + 8);
            if ( v9 == v10 )
              goto LABEL_21;
          }
        }
        v3 = v8 ^ 1;
      }
    }
    if ( v14 )
    {
      v15 = 0;
      qfree(v14);
    }
    qfree(v13[0]);
    if ( v12[0] )
    {
      v12[1] = 0;
      qfree(v12[0]);
    }
    qfree(v11[0]);
  }
  return v3;
}
