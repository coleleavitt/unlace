void __fastcall sub_7D8150(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int *v10; // rax
  char *v11; // r10
  unsigned int *v12; // r9
  unsigned int *v13; // r14
  __int64 v14; // r13
  unsigned int *v15; // [rsp+8h] [rbp-50h]
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
        if ( a2[1] + ((unsigned __int64)*a2 << 32) < a1[1] + ((unsigned __int64)*a1 << 32) )
          sub_7D79B0(a1, a2);
      }
      else
      {
        while ( 1 )
        {
          if ( v7 <= v8 )
          {
            v14 = v8 / 2;
            v13 = &a2[276 * (v8 / 2)];
            v12 = sub_7D13C0(a1, (__int64)a2, *v13, v13[1]);
            v9 = 0xF128CFC4A33F128DLL * (((char *)v12 - (char *)a1) >> 4);
          }
          else
          {
            v9 = v7 / 2;
            v10 = sub_7D1440(a2, a3, a1[276 * (v7 / 2)], a1[276 * (v7 / 2) + 1]);
            v12 = &a1[276 * (v7 / 2)];
            v13 = v10;
            v14 = 0xF128CFC4A33F128DLL * (((char *)v10 - v11) >> 4);
          }
          v15 = v12;
          v16 = sub_7D7A20((char *)v12, v11, (char *)v13);
          v8 -= v14;
          sub_7D8150(a1, v15, v16, v9, v14);
          v7 -= v9;
          if ( !v7 || !v8 )
            break;
          a1 = (unsigned int *)v16;
          a2 = v13;
          if ( v7 + v8 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}

