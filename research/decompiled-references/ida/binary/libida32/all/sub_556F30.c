void __fastcall sub_556F30(char *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r9
  char *v11; // r10
  unsigned __int64 *v12; // r15
  __int64 v13; // r13
  int v14[2]; // [rsp+8h] [rbp-50h]
  __int64 v15; // [rsp+10h] [rbp-48h]

  if ( a5 )
  {
    v7 = a4;
    v8 = a5;
    if ( a4 )
    {
      if ( a4 + a5 == 2 )
      {
LABEL_9:
        if ( (unsigned __int64)*a2 < *(_QWORD *)a1 )
          sub_492530((__int64)a1, a2);
      }
      else
      {
        while ( 1 )
        {
          if ( v7 <= v8 )
          {
            v13 = v8 / 2;
            v12 = (unsigned __int64 *)&a2[16 * (v8 / 2)];
            v11 = (char *)sub_548D50(a1, (__int64)a2, *v12);
            v9 = (v11 - a1) >> 7;
          }
          else
          {
            v9 = v7 / 2;
            v12 = sub_548DA0(a2, a3, *(_QWORD *)&a1[128 * (v7 / 2)]);
            v13 = ((__int64)v12 - v10) >> 7;
          }
          *(_QWORD *)v14 = v11;
          v15 = sub_54A930((__int64)v11, v10, (__int64)v12);
          v8 -= v13;
          sub_556F30(a1, *(_QWORD *)v14, v15, v9, v13);
          v7 -= v9;
          if ( !v7 || !v8 )
            break;
          a1 = (char *)v15;
          a2 = (__int64 *)v12;
          if ( v7 + v8 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}

