void __fastcall sub_1C4E040(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(__int64 *, __int64 *))
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 *v9; // r14
  unsigned __int64 v10; // rdx
  signed __int64 i; // r15
  __int64 v12; // rbp
  __int64 *v13; // rbp
  __int64 v14; // rcx
  signed __int64 v15; // rbp
  __int64 *v16; // r12
  __int64 *v17; // rbx
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 *v22; // [rsp+8h] [rbp-70h]
  __int64 *v23; // [rsp+10h] [rbp-68h]
  __int64 v24; // [rsp+18h] [rbp-60h]
  __int64 v25; // [rsp+18h] [rbp-60h]
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+30h] [rbp-48h]

  v22 = a1;
  v23 = a2;
  if ( a4 )
  {
    v6 = a5;
    if ( a5 )
    {
      v7 = a4;
      if ( a5 + a4 == 2 )
      {
        v13 = a1;
        v8 = a2;
LABEL_16:
        if ( a6(v8, v13) )
        {
          sub_1C4DC60(v13, v8);
          v20 = v13[2];
          v13[2] = v8[2];
          v8[2] = v20;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v6 >= v7 )
          {
            v26 = v6 / 2;
            v9 = v22;
            v14 = 3 * (v6 / 2);
            v27 = v14 * 8;
            v8 = &v23[v14];
            v15 = 0xAAAAAAAAAAAAAAABLL * (v23 - v22);
            if ( (char *)v23 - (char *)v22 > 0 )
            {
              v25 = v7;
              v16 = &v23[v14];
              v17 = v22;
              while ( 1 )
              {
                v18 = v15 >> 1;
                if ( a6(v16, &v17[3 * (v15 >> 1)]) )
                {
                  if ( !v18 )
                  {
LABEL_24:
                    v9 = v17;
                    v8 = v16;
                    v19 = v25;
                    v24 = 0xAAAAAAAAAAAAAAABLL * (v9 - v22);
                    v7 = v19 - v24;
                    goto LABEL_25;
                  }
                }
                else
                {
                  v17 += 3 * (v15 >> 1) + 3;
                  v18 = v15 - v18 - 1;
                  if ( v18 <= 0 )
                    goto LABEL_24;
                }
                v15 = v18;
              }
            }
            v24 = 0;
LABEL_25:
            v6 -= v6 / 2;
            v13 = (__int64 *)((char *)v9 + v27);
          }
          else
          {
            v8 = v23;
            v24 = v7 / 2;
            v9 = &v22[3 * (v7 / 2)];
            v10 = 0xAAAAAAAAAAAAAAABLL * ((a3 - (__int64)v23) >> 3);
            if ( a3 - (__int64)v23 > 0 )
            {
              for ( i = 0xAAAAAAAAAAAAAAABLL * ((a3 - (__int64)v23) >> 3); ; i = v12 )
              {
                v12 = i >> 1;
                if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *, unsigned __int64))a6)(
                       &v8[3 * (i >> 1)],
                       v9,
                       v10) )
                {
                  v8 += 3 * (i >> 1) + 3;
                  v12 = i - v12 - 1;
                  if ( v12 <= 0 )
                    goto LABEL_11;
                }
                else if ( !v12 )
                {
LABEL_11:
                  v13 = (__int64 *)((char *)v9 + (char *)v8 - (char *)v23);
                  v26 = 0xAAAAAAAAAAAAAAABLL * (v8 - v23);
                  v6 -= v26;
                  goto LABEL_12;
                }
              }
            }
            v26 = 0;
            v13 = &v22[3 * (v7 / 2)];
LABEL_12:
            v7 -= v7 / 2;
          }
          sub_1C35370(v9, v23, v8);
          sub_1C4E040(v22, v9, v13, v24, v26, a6);
          if ( !v7 || !v6 )
            break;
          v23 = v8;
          v22 = v13;
          if ( v6 + v7 == 2 )
            goto LABEL_16;
        }
      }
    }
  }
}
