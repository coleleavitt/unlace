unsigned __int64 __fastcall sub_3D7860(_QWORD *a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rbp
  _QWORD *v7; // r14
  char v8; // r15
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  _QWORD *i; // rax
  __int64 v14; // rsi
  unsigned __int64 v17; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-60h]
  unsigned __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v5 = (__int64)(a1 + 1);
  v21 = __readfsqword(0x28u);
  v17 = a3;
  v18 = a3 + a2;
  if ( a3 >= v18 )
  {
    v7 = a1 + 1;
  }
  else
  {
    v7 = a1 + 1;
    v8 = 1;
    do
    {
      while ( 1 )
      {
        v4 = unpack_dq(&v17);
        v9 = unpack_dd(&v17);
        if ( !a4 )
          break;
        v20 = v9;
        v19 = v4;
        v7 = sub_3CF5E0(a1, v7, (__int64)&v19);
        if ( v17 >= v18 )
          goto LABEL_15;
      }
      if ( v8 )
      {
        v7 = a1 + 1;
        v10 = (_QWORD *)a1[2];
        if ( v10 )
        {
          do
          {
            while ( 1 )
            {
              v11 = v10[2];
              v12 = v10[3];
              if ( v10[4] < v4 )
                break;
              v7 = v10;
              v10 = (_QWORD *)v10[2];
              if ( !v11 )
                goto LABEL_10;
            }
            v10 = (_QWORD *)v10[3];
          }
          while ( v12 );
LABEL_10:
          if ( (_QWORD *)v5 != v7 && v4 < v7[4] )
            v7 = a1 + 1;
        }
        v8 = 0;
      }
    }
    while ( v17 < v18 );
  }
LABEL_15:
  if ( !a4 )
  {
    for ( i = (_QWORD *)a1[2]; i; i = (_QWORD *)i[3] )
    {
      while ( 1 )
      {
        v14 = i[2];
        if ( v4 >= i[4] )
          break;
        v5 = (__int64)i;
        i = (_QWORD *)i[2];
        if ( !v14 )
          goto LABEL_20;
      }
    }
LABEL_20:
    sub_3D7370((__int64)a1, (__int64)v7, v5);
  }
  return v21 - __readfsqword(0x28u);
}
