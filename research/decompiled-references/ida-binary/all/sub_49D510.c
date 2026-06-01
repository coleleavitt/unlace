void __fastcall sub_49D510(char *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r12
  char *v10; // r9
  char *v11; // r10
  unsigned __int64 *v12; // r15
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  char *v15; // [rsp+8h] [rbp-50h]
  char *v16; // [rsp+10h] [rbp-48h]

  if ( a5 )
  {
    v7 = a4;
    v8 = a5;
    if ( a4 )
    {
      if ( a4 + a5 == 2 )
      {
LABEL_9:
        v14 = *(_QWORD *)a1;
        if ( *a2 < *(_QWORD *)a1 )
        {
          *(_QWORD *)a1 = *a2;
          *a2 = v14;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v7 <= v8 )
          {
            v13 = v8 / 2;
            v12 = &a2[v8 / 2];
            v11 = (char *)sub_49BCB0(a1, (__int64)a2, *v12);
            v9 = (v11 - a1) >> 3;
          }
          else
          {
            v9 = v7 / 2;
            v12 = sub_49BCF0(a2, a3, *(_QWORD *)&a1[8 * (v7 / 2)]);
            v13 = ((char *)v12 - v10) >> 3;
          }
          v15 = v11;
          v16 = sub_49D300(v11, v10, (char *)v12);
          v8 -= v13;
          sub_49D510(a1, v15, v16, v9, v13);
          v7 -= v9;
          if ( !v7 || !v8 )
            break;
          a1 = v16;
          a2 = v12;
          if ( v7 + v8 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}
